.globl    Un
.type    Un,@function
Un:
pushq %rbp
movq %rsp, %rbp
.prologue1:
movq $1, -8(%rbp)
movq -8(%rbp), %rcx
jmp .epilogue2
.epilogue2:
leave
ret
.globl    main
.type    main,@function
main:
pushq %rbp
movq %rsp, %rbp
sub $16, %rsp
.prologue3:
call Un
movq %rcx, -16(%rbp)
movq -16(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
movq $48, -40(%rbp)
movq -40(%rbp), %rax
addq -8(%rbp), %rax
movq %rax, -32(%rbp)
movl -32(%rbp), %edi
call putchar
movq $1, -48(%rbp)
movq -48(%rbp), %rcx
jmp .epilogue4
.epilogue4:
leave
ret
