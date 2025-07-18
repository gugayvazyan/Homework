extern printf
extern scanf

section .data
    msg     db "Enter a number: ", 0
    in_fmt  db "%d", 0
    out_fmt db "Your number is : %d", 10, 0

section .bss
    num resd 1

section .text
    global main

main:
    mov     rdi, msg
    xor     eax, eax
    call    printf

    mov     rdi, in_fmt
    lea     rsi, [rel num]
    xor     eax, eax
    call    scanf

    mov     eax, [rel num]
    mov     esi, eax
    mov     rdi, out_fmt
    xor     eax, eax
    call    printf

    mov     eax, 0
    ret
