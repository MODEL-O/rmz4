@ FUN_08054b58  entry 0x08054b58  size 206
.thumb
.org 0x54b58
FUN_08054b58:
	push {r4, r5, r6, lr}	@ 00054b58 70b5
.org 0x54b5a
	sub sp, #16	@ 00054b5a 84b0
.org 0x54b5c
	adds r5, r0, #0	@ 00054b5c 051c
.org 0x54b5e
	ldr r1, [pc, #200]	@ 00054b5e 3249
.org 0x54b60
	mov r0, sp	@ 00054b60 6846
.org 0x54b62
	movs r2, #5	@ 00054b62 0522
.org 0x54b64
	bl 0x129258	@ 00054b64 d4f078fb
.org 0x54b68
	ldrb r0, [r5, #15]	@ 00054b68 e87b
.org 0x54b6a
	cmp r0, #0	@ 00054b6a 0028
.org 0x54b6c
	bne.n 0x54b9a	@ 00054b6c 15d1
.org 0x54b6e
	movs r0, #87	@ 00054b6e 5720
.org 0x54b70
	bl 0x2b10	@ 00054b70 adf7ceff
.org 0x54b74
	movs r2, #0	@ 00054b74 0022
.org 0x54b76
	adds r0, r5, #0	@ 00054b76 281c
.org 0x54b78
	adds r0, #192	@ 00054b78 c030
.org 0x54b7a
	ldr r1, [r5, #84]	@ 00054b7a 696d
.org 0x54b7c
	ldr r0, [r0, #0]	@ 00054b7c 0068
.org 0x54b7e
	cmp r1, r0	@ 00054b7e 8142
.org 0x54b80
	bge.n 0x54b84	@ 00054b80 00da
.org 0x54b82
	movs r2, #1	@ 00054b82 0122
.org 0x54b84
	adds r0, r5, #0	@ 00054b84 281c
.org 0x54b86
	movs r1, #4	@ 00054b86 0421
.org 0x54b88
	bl 0x5504c	@ 00054b88 00f060fa
.org 0x54b8c
	movs r0, #108	@ 00054b8c 6c20
.org 0x54b8e
	strb r0, [r5, #18]	@ 00054b8e a874
.org 0x54b90
	movs r0, #1	@ 00054b90 0120
.org 0x54b92
	strb r0, [r5, #19]	@ 00054b92 e874
.org 0x54b94
	ldrb r0, [r5, #15]	@ 00054b94 e87b
.org 0x54b96
	adds r0, #1	@ 00054b96 0130
.org 0x54b98
	strb r0, [r5, #15]	@ 00054b98 e873
.org 0x54b9a
	adds r0, r5, #0	@ 00054b9a 281c
.org 0x54b9c
	bl 0x1cff0	@ 00054b9c c8f728fa
.org 0x54ba0
	adds r0, r5, #0	@ 00054ba0 281c
.org 0x54ba2
	bl 0x54fb0	@ 00054ba2 00f005fa
.org 0x54ba6
	ldrb r0, [r5, #19]	@ 00054ba6 e87c
.org 0x54ba8
	cmp r0, #0	@ 00054ba8 0028
.org 0x54baa
	beq.n 0x54bba	@ 00054baa 06d0
.org 0x54bac
	adds r0, r5, #0	@ 00054bac 281c
.org 0x54bae
	adds r0, #192	@ 00054bae c030
.org 0x54bb0
	ldr r1, [r0, #0]	@ 00054bb0 0168
.org 0x54bb2
	adds r0, r5, #0	@ 00054bb2 281c
.org 0x54bb4
	bl 0x55068	@ 00054bb4 00f058fa
.org 0x54bb8
	strb r0, [r5, #19]	@ 00054bb8 e874
.org 0x54bba
	ldrb r0, [r5, #18]	@ 00054bba a87c
.org 0x54bbc
	cmp r0, #0	@ 00054bbc 0028
.org 0x54bbe
	beq.n 0x54c12	@ 00054bbe 28d0
.org 0x54bc0
	movs r1, #36	@ 00054bc0 2421
.org 0x54bc2
	bl 0x129198	@ 00054bc2 d4f0e9fa
.org 0x54bc6
	lsls r0, r0, #24	@ 00054bc6 0006
.org 0x54bc8
	cmp r0, #0	@ 00054bc8 0028
.org 0x54bca
	bne.n 0x54bfa	@ 00054bca 16d1
.org 0x54bcc
	movs r0, #86	@ 00054bcc 5620
.org 0x54bce
	bl 0x2b10	@ 00054bce adf79fff
.org 0x54bd2
	ldr r0, [r5, #84]	@ 00054bd2 686d
.org 0x54bd4
	str r0, [sp, #8]	@ 00054bd4 0290
.org 0x54bd6
	ldr r0, [r5, #88]	@ 00054bd6 a86d
.org 0x54bd8
	ldr r1, [pc, #80]	@ 00054bd8 1449
.org 0x54bda
	adds r0, r0, r1	@ 00054bda 4018
.org 0x54bdc
	add r1, sp, #8	@ 00054bdc 02a9
.org 0x54bde
	str r0, [r1, #4]	@ 00054bde 4860
.org 0x54be0
	movs r4, #0	@ 00054be0 0024
.org 0x54be2
	adds r6, r1, #0	@ 00054be2 0e1c
.org 0x54be4
	mov r1, sp	@ 00054be4 6946
.org 0x54be6
	adds r0, r1, r4	@ 00054be6 0819
.org 0x54be8
	ldrb r3, [r0, #0]	@ 00054be8 0378
.org 0x54bea
	adds r0, r5, #0	@ 00054bea 281c
.org 0x54bec
	adds r1, r6, #0	@ 00054bec 311c
.org 0x54bee
	movs r2, #0	@ 00054bee 0022
.org 0x54bf0
	bl 0xbffd0	@ 00054bf0 6bf0eef9
.org 0x54bf4
	adds r4, #1	@ 00054bf4 0134
.org 0x54bf6
	cmp r4, #4	@ 00054bf6 042c
.org 0x54bf8
	ble.n 0x54be4	@ 00054bf8 f4dd
.org 0x54bfa
	ldrb r0, [r5, #18]	@ 00054bfa a87c
.org 0x54bfc
	subs r0, #1	@ 00054bfc 0138
.org 0x54bfe
	strb r0, [r5, #18]	@ 00054bfe a874
.org 0x54c00
	lsls r0, r0, #24	@ 00054c00 0006
.org 0x54c02
	cmp r0, #0	@ 00054c02 0028
.org 0x54c04
	bne.n 0x54c12	@ 00054c04 05d1
.org 0x54c06
	adds r2, r5, #0	@ 00054c06 2a1c
.org 0x54c08
	adds r2, #182	@ 00054c08 b632
.org 0x54c0a
	ldrb r0, [r2, #0]	@ 00054c0a 1078
.org 0x54c0c
	movs r1, #4	@ 00054c0c 0421
.org 0x54c0e
	orrs r0, r1	@ 00054c0e 0843
.org 0x54c10
	strb r0, [r2, #0]	@ 00054c10 1070
.org 0x54c12
	ldrh r1, [r5, #18]	@ 00054c12 698a
.org 0x54c14
	cmp r1, #0	@ 00054c14 0029
.org 0x54c16
	bne.n 0x54c1e	@ 00054c16 02d1
.org 0x54c18
	movs r0, #6	@ 00054c18 0620
.org 0x54c1a
	strb r0, [r5, #14]	@ 00054c1a a873
.org 0x54c1c
	strb r1, [r5, #15]	@ 00054c1c e973
.org 0x54c1e
	add sp, #16	@ 00054c1e 04b0
.org 0x54c20
	pop {r4, r5, r6}	@ 00054c20 70bc
.org 0x54c22
	pop {r0}	@ 00054c22 01bc
.org 0x54c24
	bx r0	@ 00054c24 0047
