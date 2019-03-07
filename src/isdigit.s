SECTION .text
	global _ft_isdigit

_ft_isdigit:
	xor rax, rax
	cmp rdi, '0'
	jb ko
	cmp rdi, '9'
	ja ko
	mov rax, 1
ko:
	ret
