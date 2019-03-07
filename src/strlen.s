SECTION .text
	global _ft_strlen

_ft_strlen:
	push rdi
	xor rcx, rcx
	xor al, al
	not rcx
	cld
	repne scasb
	not rcx
	pop rdi
	lea rax, [rcx-1]
	ret
