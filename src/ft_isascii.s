SECTION .text
	global _ft_isascii

_ft_isascii:
	xor rax, rax
	cmp rdi, 0
	jl ko
	cmp rdi, 127
	jg ko
	mov rax, 1
ko:
	ret
