SECTION .text
	global _ft_tolower

_ft_tolower:
	mov rax, rdi
	cmp rax, 'A'
	jb end
	cmp rax, 'Z'
	ja end
	add rax, 32
end:
	ret
