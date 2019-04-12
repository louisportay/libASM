SECTION .text
	global _ft_memset

_ft_memset:
	mov rax, rdi

	push rax
	push rcx

	mov rax, rsi
	mov rcx, rdx

	cld
	rep stosb

	pop rcx
	pop rax
	ret
