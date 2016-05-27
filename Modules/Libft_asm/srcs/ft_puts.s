extern _ft_strlen
default rel ; avoid having to put rel before adress

section .data
	carriage_return db 0x0a ; char = ''
nullmsg:
	.string db "(null)", 10

section .text
	global _ft_puts

write:
	mov rax, 0x2000004
	mov rdi, 1
	syscall
	jnc abort

_ft_puts:
	cmp rdi, 0
	je null
	push rdi
	call _ft_strlen
	pop rsi
	push rax
	mov rdx, rax
	call write

carriage:
	lea rsi, [carriage_return]
	mov rdx, 1
	call write
	pop rax
	inc rax
	ret

null:
	lea rsi, [nullmsg.string]
	mov rdx, 6
	call write
	mov rax, 6
	push rax
	jmp carriage

abort:
	mov rax, -1
	ret
end:
	ret

	

