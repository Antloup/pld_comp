.globl    main
.type    main,@function
main:
pushq %rbp
movq %rsp, %rbp
sub $16, %rsp
.prologue1:
movq $91, -16(%rbp)
movq -16(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
movq -8(%rbp), %rax
subq $1, %rax
movq %rax, -8(%rbp)
movl -8(%rbp), %edi
call putchar
movq $10, -40(%rbp)
movl -40(%rbp), %edi
call putchar
movq $0, -48(%rbp)
movq -48(%rbp), %rcx
jmp .epilogue2
.epilogue2:
leave
ret
