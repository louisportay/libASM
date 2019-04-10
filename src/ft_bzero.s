SECTION .text
	global _ft_bzero

_ft_bzero:
start:
	cmp rsi, 0
	je end
	mov byte [rdi], 0
	inc rdi
	dec rsi
	jmp start
end:
	ret
