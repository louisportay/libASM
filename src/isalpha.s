SECTION .text
	global _ft_isalpha

_ft_isalpha:
	xor rax, rax
	cmp rdi, 'A'
	jb ko
	cmp rdi, 'Z'
	jbe ok
	cmp rdi, 'a'
	jb ko
	cmp rdi, 'z'
	ja ko
ok:
	mov rax, 1
ko:
	ret
