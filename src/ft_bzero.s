SECTION .text
	global _ft_bzero

_ft_bzero:
	push rcx
	xor rcx, rcx
start:
	cmp rsi, rcx
	je end
	mov byte [rdi + rcx], 0
	inc rcx
	jmp start
end:
	pop rcx
	ret
