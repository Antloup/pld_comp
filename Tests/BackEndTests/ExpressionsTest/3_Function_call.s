.globl    print
.type    print,@function
print:
pushq %rbp
movq %rsp, %rbp
.prologue1:
movq $80, -16(%rbp)
movl -16(%rbp), %edi
call putchar
movq $114, -32(%rbp)
movl -32(%rbp), %edi
call putchar
movq $10, -48(%rbp)
movl -48(%rbp), %edi
call putchar
movq $0, -56(%rbp)
movq -56(%rbp), %rcx
jmp .epilogue2
.epilogue2:
leave
ret
.globl    hello
.type    hello,@function
hello:
pushq %rbp
movq %rsp, %rbp
.prologue3:
movq $72, -16(%rbp)
movl -16(%rbp), %edi
call putchar
movq $105, -32(%rbp)
movl -32(%rbp), %edi
call putchar
movq $10, -48(%rbp)
movl -48(%rbp), %edi
call putchar
movq $0, %rcx
jmp .epilogue4
.epilogue4:
leave
ret
.globl    main
.type    main,@function
main:
pushq %rbp
movq %rsp, %rbp
sub $16, %rsp
.prologue5:
call print
movq %rcx, -16(%rbp)
movq -16(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
call hello
movq %rcx, -24(%rbp)
movq $48, -48(%rbp)
movq -48(%rbp), %rax
addq -8(%rbp), %rax
movq %rax, -40(%rbp)
movl -40(%rbp), %edi
call putchar
movq $0, -56(%rbp)
movq -56(%rbp), %rcx
jmp .epilogue6
.epilogue6:
leave
ret
