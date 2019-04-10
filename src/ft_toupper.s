SECTION .text
	global _ft_toupper

_ft_toupper:
	mov rax, rdi
	cmp rax, 'a'
	jb end
	cmp rax, 'z'
	ja end
	sub rax, 32
end:
	ret
