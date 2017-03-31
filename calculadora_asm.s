	.file	"Calculadora.c"
	.section	.rodata
.LC0:
	.string	"%f"
.LC1:
	.string	" %c"
.LC2:
	.string	"%.2f\n\n"
.LC4:
	.string	"Nao existe divisao por 0\n"
.LC5:
	.string	"%d\n\n"
.LC6:
	.string	" Operador invalido\n\n "
.LC7:
	.string	" Fechando calculadora!\n "
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
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
.L18:
	leaq	-16(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	leaq	-17(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movzbl	-17(%rbp), %eax
	movsbl	%al, %eax
	subl	$37, %eax
	cmpl	$10, %eax
	ja	.L2
	movl	%eax, %eax
	movq	.L4(,%rax,8), %rax
	jmp	*%rax
	.section	.rodata
	.align 8
	.align 4
.L4:
	.quad	.L3
	.quad	.L2
	.quad	.L2
	.quad	.L2
	.quad	.L2
	.quad	.L5
	.quad	.L6
	.quad	.L2
	.quad	.L7
	.quad	.L2
	.quad	.L8
	.text
.L6:
	movss	-16(%rbp), %xmm1
	movss	-12(%rbp), %xmm0
	addss	%xmm1, %xmm0
	cvtss2sd	%xmm0, %xmm0
	movl	$.LC2, %edi
	movl	$1, %eax
	call	printf
	jmp	.L9
.L7:
	movss	-16(%rbp), %xmm0
	movss	-12(%rbp), %xmm1
	subss	%xmm1, %xmm0
	cvtss2sd	%xmm0, %xmm0
	movl	$.LC2, %edi
	movl	$1, %eax
	call	printf
	jmp	.L9
.L5:
	movss	-16(%rbp), %xmm1
	movss	-12(%rbp), %xmm0
	mulss	%xmm1, %xmm0
	cvtss2sd	%xmm0, %xmm0
	movl	$.LC2, %edi
	movl	$1, %eax
	call	printf
	jmp	.L9
.L8:
	movss	-12(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L21
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	je	.L25
.L21:
	movss	-16(%rbp), %xmm0
	movss	-12(%rbp), %xmm1
	divss	%xmm1, %xmm0
	cvtss2sd	%xmm0, %xmm0
	movl	$.LC2, %edi
	movl	$1, %eax
	call	printf
	jmp	.L9
.L25:
	movl	$.LC4, %edi
	call	puts
	jmp	.L9
.L3:
	movss	-16(%rbp), %xmm0
	cvttss2si	%xmm0, %eax
	movss	-12(%rbp), %xmm0
	cvttss2si	%xmm0, %ecx
	cltd
	idivl	%ecx
	movl	%edx, %eax
	movl	%eax, %esi
	movl	$.LC5, %edi
	movl	$0, %eax
	call	printf
	jmp	.L9
.L2:
	movss	-16(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L22
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	je	.L13
.L22:
	movzbl	-17(%rbp), %eax
	cmpb	$48, %al
	je	.L13
	movss	-12(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L23
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	je	.L13
.L23:
	movl	$.LC6, %edi
	movl	$0, %eax
	call	printf
	jmp	.L9
.L13:
	movl	$.LC7, %edi
	movl	$0, %eax
	call	printf
.L9:
	movss	-16(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L24
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	je	.L16
.L24:
	movzbl	-17(%rbp), %eax
	cmpb	$48, %al
	je	.L16
	movss	-12(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jp	.L18
	pxor	%xmm1, %xmm1
	ucomiss	%xmm1, %xmm0
	jne	.L18
.L16:
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L20
	call	__stack_chk_fail
.L20:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.1) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
