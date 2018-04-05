.globl    main
.type    main,@function
main:
pushq %rbp
movq %rsp, %rbp
sub $16, %rsp
.prologue1:
movq $4, -24(%rbp)
movq -24(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
movq -8(%rbp), %rax
addq $1, %rax
movq %rax, -8(%rbp)
movq -8(%rbp), %rax
movq %rax, -16(%rbp)
movq $0, %rbx
cmpq -16(%rbp), %rbx
movq $5, -48(%rbp)
movq -16(%rbp), %rax
addq -48(%rbp), %rax
movq %rax, -40(%rbp)
movq -40(%rbp), %rax
cmpq %rax, -8(%rbp)
movq $0, %rax
movq $1, %rbx
cmovne %rbx, %rax
movq %rax, -32(%rbp)
movq $0, %rbx
cmpq %rax, %rbx
je .falseCode3
jmp .trueCode2
.trueCode2:
movq $90, -24(%rbp)
movq -24(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
movq $5, -40(%rbp)
movq -40(%rbp), %rax
cmpq %rax, -16(%rbp)
movq $0, %rax
movq $1, %rbx
cmove %rbx, %rax
movq %rax, -32(%rbp)
movq $0, %rbx
cmpq %rax, %rbx
je .falseCode6
jmp .trueCode5
.trueCode5:
movq $79, -32(%rbp)
movl -32(%rbp), %edi
call putchar
movq $75, -48(%rbp)
movl -48(%rbp), %edi
call putchar
movq $10, -64(%rbp)
movl -64(%rbp), %edi
call putchar
jmp .afterIf7
.falseCode6:
movq $75, -32(%rbp)
movl -32(%rbp), %edi
call putchar
movq $79, -48(%rbp)
movl -48(%rbp), %edi
call putchar
movq $10, -64(%rbp)
movl -64(%rbp), %edi
call putchar
jmp .afterIf7
.afterIf7:
jmp .afterIf4
.falseCode3:
movq $89, -24(%rbp)
movq -24(%rbp), %rax
movq %rax, -8(%rbp)
movq $0, %rbx
cmpq -8(%rbp), %rbx
jmp .afterIf4
.afterIf4:
movl -8(%rbp), %edi
call putchar
movq $10, -48(%rbp)
movl -48(%rbp), %edi
call putchar
movq $1, -56(%rbp)
movq -56(%rbp), %rcx
jmp .epilogue8
.epilogue8:
leave
ret
