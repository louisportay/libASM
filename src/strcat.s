SECTION .text
	global _ft_strcat

_ft_strcat:
	push rdi
	push rsi
dest:
	cmp byte [rdi], 0
	je end_dest_reached
	inc rdi
	jmp dest
end_dest_reached:
	cmp byte [rsi], 0
	je end
	mov rdi, [rsi]
	inc rdi
	inc rsi
	jmp end_dest_reached
end:
	pop rdi
	pop rsi
	mov rax, rdi
	ret


	;; DOES NOT WORK
