section .data
    hello db 'Hello, Holberton', 0xA ; message to be printed

section .text
    global _start

_start:
    ; write the message to stdout
    mov eax, 4      ; system call for write
    mov ebx, 1      ; file descriptor for stdout
    mov ecx, hello  ; address of message to be printed
    mov edx, 16     ; length of message
    int 0x80        ; call kernel

    ; exit the program
    mov eax, 1      ; system call for exit
    xor ebx, ebx    ; exit status code (0)
    int 0x80        ; call kernel

