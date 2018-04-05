.globl    main
.type    main,@function
main:
pushq %rbp
movq %rsp, %rbp
sub $16, %rsp
.prologue1:
movq $0, -16(%rbp)
movq -16(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
je .falseCode3
jmp .trueCode2
.trueCode2:
movq $89, -16(%rbp)
movq -16(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
jmp .afterIf4
.falseCode3:
movq $90, -16(%rbp)
movq -16(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
jmp .afterIf4
.afterIf4:
movl -8(%rbp), %edi
call putchar
movq $10, -40(%rbp)
movl -40(%rbp), %edi
call putchar
movq $1, -48(%rbp)
movq -48(%rbp), %rcx
jmp .epilogue5
.epilogue5:
leave
ret
