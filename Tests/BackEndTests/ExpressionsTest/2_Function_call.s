.globl    Un
.type    Un,@function
Un:
pushq %rbp
movq %rsp, %rbp
.prologue1:
movq $90, -8(%rbp)
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
movq -16(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
movl -8(%rbp), %edi
call putchar
movq $1, -32(%rbp)
jmp .epilogue4
.epilogue4:
leave
ret
