SECTION .text
	global _ft_strcat

_ft_strcat:
	push rbx
	mov rax, rdi
	mov rbx, rsi
	xor rcx, rcx

iter:
	cmp byte[rdi], 0
	je copy
	inc rdi
	jmp iter

copy:
	cmp byte [rbx], 0
	je end
	inc rbx
	inc rcx
	jmp copy

end:
	inc rcx
	rep movsb
	pop rbx
	ret
