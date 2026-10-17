@ FUN_080e8b6c  entry 0x080e8b6c  size 120
.thumb
.org 0xe8b6c
FUN_080e8b6c:
	push {r4, r5, r6, lr}	@ 000e8b6c 70b5
.org 0xe8b6e
	adds r5, r0, #0	@ 000e8b6e 051c
.org 0xe8b70
	ldrb r4, [r5, #17]	@ 000e8b70 6c7c
.org 0xe8b72
	ldr r1, [pc, #48]	@ 000e8b72 0c49
.org 0xe8b74
	ldrb r0, [r5, #9]	@ 000e8b74 687a
.org 0xe8b76
	lsls r0, r0, #2	@ 000e8b76 8000
.org 0xe8b78
	adds r0, r0, r1	@ 000e8b78 4018
.org 0xe8b7a
	movs r1, #1	@ 000e8b7a 0121
.org 0xe8b7c
	str r1, [r5, #12]	@ 000e8b7c e960
.org 0xe8b7e
	ldr r0, [r0, #0]	@ 000e8b7e 0068
.org 0xe8b80
	ldr r0, [r0, #4]	@ 000e8b80 4068
.org 0xe8b82
	str r0, [r5, #20]	@ 000e8b82 6861
.org 0xe8b84
	ldrb r1, [r5, #10]	@ 000e8b84 a97a
.org 0xe8b86
	movs r0, #1	@ 000e8b86 0120
.org 0xe8b88
	movs r6, #0	@ 000e8b88 0026
.org 0xe8b8a
	orrs r0, r1	@ 000e8b8a 0843
.org 0xe8b8c
	movs r1, #2	@ 000e8b8c 0221
.org 0xe8b8e
	orrs r0, r1	@ 000e8b8e 0843
.org 0xe8b90
	strb r0, [r5, #10]	@ 000e8b90 a872
.org 0xe8b92
	adds r0, r5, #0	@ 000e8b92 281c
.org 0xe8b94
	bl 0x1cc9c	@ 000e8b94 34f782f8
.org 0xe8b98
	cmp r4, #0	@ 000e8b98 002c
.org 0xe8b9a
	beq.n 0xe8ba8	@ 000e8b9a 05d0
.org 0xe8b9c
	ldrb r0, [r5, #10]	@ 000e8b9c a87a
.org 0xe8b9e
	movs r1, #16	@ 000e8b9e 1021
.org 0xe8ba0
	orrs r0, r1	@ 000e8ba0 0843
.org 0xe8ba2
	b.n 0xe8bae	@ 000e8ba2 04e0
.org 0xe8ba4
	.byte 0x64,0x6f,0x86,0x08	@ 000e8ba4 data
.org 0xe8ba8
	ldrb r1, [r5, #10]	@ 000e8ba8 a97a
.org 0xe8baa
	movs r0, #239	@ 000e8baa ef20
.org 0xe8bac
	ands r0, r1	@ 000e8bac 0840
.org 0xe8bae
	strb r0, [r5, #10]	@ 000e8bae a872
.org 0xe8bb0
	movs r1, #1	@ 000e8bb0 0121
.org 0xe8bb2
	ands r1, r4	@ 000e8bb2 2140
.org 0xe8bb4
	adds r0, r5, #0	@ 000e8bb4 281c
.org 0xe8bb6
	adds r0, #76	@ 000e8bb6 4c30
.org 0xe8bb8
	strb r1, [r0, #0]	@ 000e8bb8 0170
.org 0xe8bba
	adds r3, r5, #0	@ 000e8bba 2b1c
.org 0xe8bbc
	adds r3, #74	@ 000e8bbc 4a33
.org 0xe8bbe
	lsls r1, r1, #4	@ 000e8bbe 0901
.org 0xe8bc0
	ldrb r2, [r3, #0]	@ 000e8bc0 1a78
.org 0xe8bc2
	movs r0, #17	@ 000e8bc2 1120
.org 0xe8bc4
	negs r0, r0	@ 000e8bc4 4042
.org 0xe8bc6
	ands r0, r2	@ 000e8bc6 1040
.org 0xe8bc8
	orrs r0, r1	@ 000e8bc8 0843
.org 0xe8bca
	strb r0, [r3, #0]	@ 000e8bca 1870
.org 0xe8bcc
	adds r0, r5, #0	@ 000e8bcc 281c
.org 0xe8bce
	movs r1, #6	@ 000e8bce 0621
.org 0xe8bd0
	bl 0x1d3d0	@ 000e8bd0 34f7fefb
.org 0xe8bd4
	ldr r1, [pc, #16]	@ 000e8bd4 0449
.org 0xe8bd6
	adds r0, r5, #0	@ 000e8bd6 281c
.org 0xe8bd8
	bl 0x1cf00	@ 000e8bd8 34f792f9
.org 0xe8bdc
	adds r0, r5, #0	@ 000e8bdc 281c
.org 0xe8bde
	bl 0xe8bec	@ 000e8bde 00f005f8
.org 0xe8be2
	pop {r4, r5, r6}	@ 000e8be2 70bc
