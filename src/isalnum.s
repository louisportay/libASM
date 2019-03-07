SECTION .text
	global _ft_isalnum

_ft_isalnum:
	xor rax, rax
	cmp rdi, '0'
	jb ko
	cmp rdi, '9'
	jbe ok
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
