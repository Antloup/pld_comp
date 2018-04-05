.globl    main
.type    main,@function
main:
pushq %rbp
movq %rsp, %rbp
sub $16, %rsp
.prologue1:
movq $90, -16(%rbp)
movq $0, %rax
subq -16(%rbp), %rax
movq %rax, -16(%rbp)
movq -16(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
movq $0, %rax
subq -8(%rbp), %rax
movq %rax, -8(%rbp)
movq -8(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
movl -8(%rbp), %edi
call putchar
movq $10, -40(%rbp)
movl -40(%rbp), %edi
call putchar
movq $0, -48(%rbp)
jmp .epilogue2
.epilogue2:
leave
ret
