@ FUN_08071b54  entry 0x08071b54  size 140
.thumb
.org 0x71b54
FUN_08071b54:
	push {r4, r5, r6, lr}	@ 00071b54 70b5
.org 0x71b56
	mov r6, r9	@ 00071b56 4e46
.org 0x71b58
	mov r5, r8	@ 00071b58 4546
.org 0x71b5a
	push {r5, r6}	@ 00071b5a 60b4
.org 0x71b5c
	sub sp, #40	@ 00071b5c 8ab0
.org 0x71b5e
	adds r6, r0, #0	@ 00071b5e 061c
.org 0x71b60
	ldr r1, [pc, #124]	@ 00071b60 1f49
.org 0x71b62
	mov r0, sp	@ 00071b62 6846
.org 0x71b64
	movs r2, #3	@ 00071b64 0322
.org 0x71b66
	bl 0x129258	@ 00071b66 b7f077fb
.org 0x71b6a
	add r0, sp, #4	@ 00071b6a 01a8
.org 0x71b6c
	mov r9, r0	@ 00071b6c 8146
.org 0x71b6e
	ldr r1, [pc, #116]	@ 00071b6e 1d49
.org 0x71b70
	movs r2, #3	@ 00071b70 0322
.org 0x71b72
	bl 0x129258	@ 00071b72 b7f071fb
.org 0x71b76
	add r0, sp, #8	@ 00071b76 02a8
.org 0x71b78
	mov r8, r0	@ 00071b78 8046
.org 0x71b7a
	ldr r4, [pc, #108]	@ 00071b7a 1b4c
.org 0x71b7c
	adds r1, r4, #0	@ 00071b7c 211c
.org 0x71b7e
	movs r2, #3	@ 00071b7e 0322
.org 0x71b80
	bl 0x129258	@ 00071b80 b7f06afb
.org 0x71b84
	add r5, sp, #12	@ 00071b84 03ad
.org 0x71b86
	adds r0, r5, #0	@ 00071b86 281c
.org 0x71b88
	adds r1, r4, #0	@ 00071b88 211c
.org 0x71b8a
	movs r2, #3	@ 00071b8a 0322
.org 0x71b8c
	bl 0x129258	@ 00071b8c b7f064fb
.org 0x71b90
	add r4, sp, #16	@ 00071b90 04ac
.org 0x71b92
	mov r0, r9	@ 00071b92 4846
.org 0x71b94
	str r0, [sp, #28]	@ 00071b94 0790
.org 0x71b96
	mov r0, r8	@ 00071b96 4046
.org 0x71b98
	str r0, [sp, #32]	@ 00071b98 0890
.org 0x71b9a
	str r5, [sp, #36]	@ 00071b9a 0995
.org 0x71b9c
	add r1, sp, #28	@ 00071b9c 07a9
.org 0x71b9e
	adds r0, r4, #0	@ 00071b9e 201c
.org 0x71ba0
	movs r2, #12	@ 00071ba0 0c22
.org 0x71ba2
	bl 0x129258	@ 00071ba2 b7f059fb
.org 0x71ba6
	adds r0, r6, #0	@ 00071ba6 301c
.org 0x71ba8
	adds r0, #195	@ 00071ba8 c330
.org 0x71baa
	ldrb r0, [r0, #0]	@ 00071baa 0078
.org 0x71bac
	lsls r0, r0, #2	@ 00071bac 8000
.org 0x71bae
	adds r4, r4, r0	@ 00071bae 2418
.org 0x71bb0
	ldr r0, [r4, #0]	@ 00071bb0 2068
.org 0x71bb2
	movs r1, #3	@ 00071bb2 0321
.org 0x71bb4
	bl 0x73e30	@ 00071bb4 02f03cf9
.org 0x71bb8
	add r0, sp	@ 00071bb8 6844
.org 0x71bba
	ldrb r0, [r0, #0]	@ 00071bba 0078
.org 0x71bbc
	movs r1, #0	@ 00071bbc 0021
.org 0x71bbe
	strb r0, [r6, #14]	@ 00071bbe b073
.org 0x71bc0
	strb r1, [r6, #15]	@ 00071bc0 f173
.org 0x71bc2
	ldr r1, [pc, #40]	@ 00071bc2 0a49
.org 0x71bc4
	ldrb r0, [r6, #13]	@ 00071bc4 707b
.org 0x71bc6
	lsls r0, r0, #2	@ 00071bc6 8000
.org 0x71bc8
	adds r0, r0, r1	@ 00071bc8 4018
.org 0x71bca
	ldr r1, [r0, #0]	@ 00071bca 0168
.org 0x71bcc
	adds r0, r6, #0	@ 00071bcc 301c
.org 0x71bce
	bl 0x128f80	@ 00071bce b7f0d7f9
.org 0x71bd2
	add sp, #40	@ 00071bd2 0ab0
.org 0x71bd4
	pop {r3, r4}	@ 00071bd4 18bc
.org 0x71bd6
	mov r8, r3	@ 00071bd6 9846
.org 0x71bd8
	mov r9, r4	@ 00071bd8 a146
.org 0x71bda
	pop {r4, r5, r6}	@ 00071bda 70bc
.org 0x71bdc
	pop {r0}	@ 00071bdc 01bc
.org 0x71bde
	bx r0	@ 00071bde 0047
