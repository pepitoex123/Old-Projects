; Author: Pepitoex123
; Purpose: Create an exit shellcode , to be later compiled with NASM and linked with ld or gdb

global main

section .text

main:
	xor eax, eax
    mov al, 1
    xor ebx, ebx
    mov bl, 10
    int 0x80

