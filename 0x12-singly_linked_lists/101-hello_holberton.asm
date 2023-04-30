; my first assembly line code :)
section .data
    ;greetings db "Hello, Holberton",0xa
    fmt db "Hello, Holberton",0xa

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp

    mov rdi, fmt
    ;mov rsi, greetings
    xor eax, eax
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
