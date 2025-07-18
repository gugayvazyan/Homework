extern printf

section .data
    format db "%d", 10, 0

section .bss

section .text

global main

main:
    push rbp
    mov rbp, rsp

    mov rdi, format
    mov esi, 42
    xor eax, eax

    call printf

    mov rsp, rbp
    pop rbp
    ret
