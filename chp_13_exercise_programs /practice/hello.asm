section .data
    msg db "Hello, Assembly on Ubuntu!", 0Ah
    len equ $ - msg

section .text
    global _start

_start:
    mov rax, 1          ; syscall: write
    mov rdi, 1          ; stdout
    mov rsi, msg        ; message address
    mov rdx, len        ; message length
    syscall             ; system call

    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; status = 0
    syscall
