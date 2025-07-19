extern printf 
extern scanf 
section .data
     msg1 db "Pls input first num: ", 0 
     msg2 db "Pls input second num: ", 0 
     msg3 db "Max: %d", 10, 0
     frmt db "%d", 0 

section .bss
    num1 resd 1
    num2 resd 1

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


    movsx r8, dword[num1]
    movsx r9, dword[num2]
    cmp r8, r9
    jl low  
    jg high    
    

low:

    mov rdi, msg3
    mov rsi, r9 
    jmp final



high:

    mov rdi, msg3
    mov rsi, r8
    jmp final
    


final: 
   
     xor rax, rax
     call printf


    mov rsp, rbp
    pop rbp
    ret

