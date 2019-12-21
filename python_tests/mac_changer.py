#!/usr/bin/python

import subprocess
import optparse
import re

def get_arguments():
	parser = optparse.OptionParser()
	parser.add_option("-i" , "--interface" , dest="interface" , help="Interface to change its MAC address")
	parser.add_option("-m" , "--mac" , dest="new_mac" , help="New MAC address")
	(options,arguments) = parser.parse_args()
	if not options.interface:
		parser.error("[-] Please specify an interface, use --help for more information.")
	elif not options.new_mac:
		parser.error("[-] Please specify a mac address, use --help for more information.")
	return options

def change_mac(interface, new_mac):
	print ("[+] Changing MAC address for " + interface + " to " + new_mac)
	subprocess.call(["ifconfig", interface, "down"])
	subprocess.call(["ifconfig", interface, "hw" , "ether" , new_mac])
	subprocess.call(["ifconfig", interface, "up"])

def get_current_mac_address(interface):
	ifconfig_result = subprocess.check_output(["ifconfig", interface])
	mac_address_result = re.search(r"\w\w:\w\w:\w\w:\w\w:\w\w:\w\w", ifconfig_result)
	if mac_address_result == True:
		return mac_address_result.group(0)
	else:
		print("[-]A mac Address was not found")
	

options = get_arguments()
current_mac = get_current_mac_address(options.interface)
print("Current MAC = " + str(current_mac))
change_mac(options.interface , options.new_mac)
new_mac_after_change = get_current_mac_address(options.interface)
if new_mac_after_change == options.new_mac:
	print("Your mac was succesfully changed")
else:
	print("There was an error during the script")
	
print("Thank you for using this script!")
print("--------------------------------")
print("Made by Pep")	








