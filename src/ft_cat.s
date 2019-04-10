%define SYSCALL(sc) 0x2000000 | sc

SECTION .data

SECTION .text
	global start

start:
	ret
