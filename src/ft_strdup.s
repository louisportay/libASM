SECTION .text
	global _ft_strdup
	extern _ft_strlen
	extern _ft_memcpy
	extern _malloc

_ft_strdup:

	push rbp
	mov r13, rdi		; save the pointer to string

	sub rsp, 16
	call _ft_strlen
	add rsp, 16

	mov r14, rax		; r14 = len
	mov rdi, rax
	inc rdi				; add space for final 0

	sub rsp, 16
	call _malloc
	add rsp, 16

	cmp rax, 0
	je end

	mov byte[rax+r14], 0 ; trailing '\0'
	mov rdi, rax
	mov rsi, r13
	mov rdx, r14
	call _ft_memcpy

end:
	pop rbp
	ret
