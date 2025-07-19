extern printf
extern scanf 
 
section .data 
	msg1 db "Input your num: ", 0
	msg2 db "Factorial is: %d", 10, 0
	frmt db "%d", 0

section .bss 
	num resd 1

section .text
 global main

main:
	push rbp
	mov rbp, rsp

	
	mov rdi, msg1
	xor rax, rax
	call printf 

	mov rdi, frmt 
	lea rsi, [num]
	xor rax, rax
	call scanf 

	movsx r8, dword[num]
	
	mov rax, r8
	cmp rax, 1 
	jbe end
	
	
	mov rcx, rax
	dec rcx

	mov rax, [num]

fact:

	mul rcx
	loop fact  

end: 
	 mov rdi, msg2
	 mov rsi, rax
	 xor rax, rax 
	 call printf 

	mov rsp,rbp
	pop rbp
	ret

  







































	mov rsp, rbp
	pop rbp
