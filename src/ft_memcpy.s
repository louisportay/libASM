SECTION .text
	global _ft_memcpy

_ft_memcpy:
		push rdi
		mov rcx, rdx
		cld
		repnz movsb
		pop rax
		ret
