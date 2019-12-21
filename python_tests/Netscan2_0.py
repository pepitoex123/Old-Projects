#!/usr/bin/python

import scapy.all as scapy
import argparse



def get_ip():
	parser = argparse.ArgumentParser()
	parser.add_argument("-ip","--internetprotocol", dest="ip", help="Define your Ip range")	
	options = parser.parse_args()
	return options
		
	

def scan(ip):
	arp_request = scapy.ARP(pdst=ip)
	broadcast = scapy.Ether(dst="ff:ff:ff:ff:ff:ff")
	arp_request_broadcast = broadcast/arp_request
	answered_list = scapy.srp(arp_request_broadcast, timeout=1, verbose=False)[0]
	clients_list = []
	for element in answered_list:
		client_dict = {"ip": element[1].psrc , "mac": element[1].hwsrc}
		clients_list.append(client_dict)
	return clients_list
def print_result(results_list):
	print("IP\t\t\tMac Address\n--------------------------")
	for client in results_list:
		print(client["ip"] + "\t\t" + client["mac"])
		
	
ip_argument = get_ip()
scan_result = scan(ip_argument)
print_result(scan_result)

print("[+]Thank you for using Netscan! Made by Pep for LulzSec Community")

