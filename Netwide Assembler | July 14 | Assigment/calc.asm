extern printf 
extern scanf 


section .data
 
		msg1 db "Please input frst num: ", 0 
		msg2 db "Please input secnd num: ", 0
		msg3 db "Please input action (1 = +, 2 = -, 3 = *, 4 = /): ", 0
		msg4 db "Your result is: %d ", 10, 0
		frmt db "%d", 0
		frmt2 db "_%c", 0

section .bss 
 
	num1 resd 1
	num2 resd 1
	act resb 1

section .text
		global main

main: 

	push rbp
	mov rbp, rsp


	mov rdi, msg1
	xor rax, rax
	call printf 

    mov rdi, frmt
	lea rsi, [num1]
	xor rax, rax
	call scanf  


	mov rdi, msg2
	xor rax, rax
	call printf 

	mov rdi, frmt 
	lea rsi, [num2]
	xor rax, rax
	call scanf

	mov rdi, msg3
	xor rax, rax
	call printf 

	mov rdi, frmt
	lea rsi, [act]
	xor rax, rax
	call scanf 

   movsx r8, dword[num1]
   movsx r9, dword[num2]
   movsx r10, dword[act]

	cmp r10, 1
	je add 

	cmp r10, 2
	je sub

	cmp r10, 3
	je mul 

	cmp r10, 4
	je div

add:

	add r8, r9 
	jmp end 

sub: 
 
	sub r8, r9
	jmp end 

mul: 
		imul r8, r9
		jmp end
div:
		
		xor rdx, rdx
		mov rax, r8
		mov rcx, r9
		div rcx
		mov r8, rax
		
		jmp end		

		
end:
	
	mov rdi, msg4
	mov rsi, r8
	xor rax, rax 
	call printf

	mov rsp, rbp
	pop rbp
	ret
