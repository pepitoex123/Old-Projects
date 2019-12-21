#!/usr/bin/python
#Simple Fuzzer
#Author: Pepitoex123

import subprocess

param = "bufferOverflow "

for i in range(0xa1,0xff):
	param += chr(i)
subprocess.call(param)

