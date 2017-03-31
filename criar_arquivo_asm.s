	.file	"criar_arquivo.c"
	.section	.rodata
.LC0:
	.string	"w"
	.align 8
.LC1:
	.string	"Erro, nao foi possivel abrir o arquivo"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movabsq	$8392585648441223267, %rax
	movq	%rax, -32(%rbp)
	movb	$0, -24(%rbp)
	call	getchar
	movb	%al, -41(%rbp)
	leaq	-32(%rbp), %rax
	movl	$.LC0, %esi
	movq	%rax, %rdi
	call	fopen
	movq	%rax, -40(%rbp)
	cmpq	$0, -40(%rbp)
	jne	.L2
	movl	$.LC1, %edi
	call	puts
	jmp	.L3
.L2:
	movsbl	-41(%rbp), %eax
	movq	-40(%rbp), %rdx
	movq	%rdx, %rsi
	movl	%eax, %edi
	call	fputc
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	fclose
.L3:
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L5
	call	__stack_chk_fail
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.1) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
