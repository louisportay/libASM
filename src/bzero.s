SECTION .data

SECTION .text
	global _ft_bzero

_ft_bzero:
	cmp rdi, 0
	je end
	
end:
	ret

