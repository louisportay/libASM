SECTION .text
	global _ft_isprint

_ft_isprint:
	xor rax, rax
	cmp rdi, ' '
	jb ko
	cmp rdi, '~'
	ja ko
	mov rax, 1
ko:
	ret
