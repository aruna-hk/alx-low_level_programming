	.file	"101-hello_holberton.c"
	.intel_syntax noprefix
	.text
	.globl	_putchar
	.type	_putchar, @function
_putchar:
.LFB6:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	eax, edi
	mov	BYTE PTR -4[rbp], al
	lea	rax, -4[rbp]
	mov	edx, 1
	mov	rsi, rax
	mov	edi, 1
	call	write@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	_putchar, .-_putchar
	.globl	_puts_recursion
	.type	_puts_recursion, @function
_puts_recursion:
.LFB7:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	movzx	eax, BYTE PTR [rax]
	test	al, al
	jne	.L4
	mov	edi, 10
	call	_putchar
	jmp	.L3
.L4:
	mov	rax, QWORD PTR -8[rbp]
	movzx	eax, BYTE PTR [rax]
	movsx	eax, al
	mov	edi, eax
	call	_putchar
	add	QWORD PTR -8[rbp], 1
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_puts_recursion
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	_puts_recursion, .-_puts_recursion
	.section	.rodata
.LC0:
	.string	"Hello, Holberton"
	.text
	.globl	main
	.type	main, @function
main:
.LFB8:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	lea	rax, .LC0[rip]
	mov	QWORD PTR -8[rbp], rax
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_puts_recursion
	mov	eax, 0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
