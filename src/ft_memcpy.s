SECTION .text
	global _ft_memcpy

_ft_memcpy:
	push rbx
	mov rax, rdi
	mov rbx, rsi
	xor rcx, rcx

copy:
	cmp byte [rbx], 0
	je end
	inc rbx
	jmp copy

end:
	mov rcx, rdx
	rep movsb
	pop rbx
	ret
