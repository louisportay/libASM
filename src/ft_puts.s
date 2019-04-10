%define SYSCALL(sc) 0x2000000 | sc

SECTION .text
	extern _ft_strlen
	global _ft_puts

_ft_puts:
	cmp rdi, 0
	je null
	push rdi
	call _ft_strlen
	mov rdx, rax
	mov rax, SYSCALL(4)
	pop rdi
	mov rsi, rdi
	mov rdi, 1
	syscall
	cmp rax, -1
	je end
	mov rax, SYSCALL(4)
	lea rsi, [rel newline]
	mov rdx, 1
	syscall
end:
	ret
null:
	mov rdi, 1
	lea rsi, [rel null_s.string]
	mov rdx, null_s.len
	mov rax, SYSCALL(4)
	syscall
	jmp end

SECTION .data
newline: db 10
null_s:
	.string db "(null)", 10
	.len equ $ - null_s.string
