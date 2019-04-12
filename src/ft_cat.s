%define SYSCALL(sc) 0x2000000 | sc

SECTION .bss
	buffer: resb 0x1000

SECTION .text
	global _ft_cat
	extern _ft_strlen

_ft_cat:
	mov r13, rdi			; fd value
	lea r14, [rel buffer]	; get buffer address

read:
	mov rdi, r13
	mov rsi, r14
	mov rdx, 0x1000
	mov rax, SYSCALL(3)
	syscall
	jc end					; if return is equal to -1
	cmp rax, 0x0
	je end

write:
	mov rdi, 1
	mov rsi, r14
	mov rdx, rax			; write the number of bytes actually returned by read
	mov rax, SYSCALL(4)
	syscall

	jmp read

end:
	ret
