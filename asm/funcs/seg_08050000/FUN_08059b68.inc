@ FUN_08059b68  entry 0x08059b68  size 116
.thumb
.org 0x59b68
FUN_08059b68:
	push {r4, r5, lr}	@ 00059b68 30b5
.org 0x59b6a
	sub sp, #16	@ 00059b6a 84b0
.org 0x59b6c
	adds r3, r0, #0	@ 00059b6c 031c
.org 0x59b6e
	lsls r1, r1, #24	@ 00059b6e 0906
.org 0x59b70
	lsrs r2, r1, #24	@ 00059b70 0a0e
.org 0x59b72
	movs r5, #0	@ 00059b72 0025
.org 0x59b74
	movs r4, #0	@ 00059b74 0024
.org 0x59b76
	cmp r4, r2	@ 00059b76 9442
.org 0x59b78
	bge.n 0x59b90	@ 00059b78 0ada
.org 0x59b7a
	mov r0, sp	@ 00059b7a 6846
.org 0x59b7c
	adds r1, r0, r4	@ 00059b7c 0119
.org 0x59b7e
	adds r0, r3, r4	@ 00059b7e 1819
.org 0x59b80
	ldrb r0, [r0, #0]	@ 00059b80 0078
.org 0x59b82
	strb r0, [r1, #0]	@ 00059b82 0870
.org 0x59b84
	adds r0, r0, r5	@ 00059b84 4019
.org 0x59b86
	lsls r0, r0, #24	@ 00059b86 0006
.org 0x59b88
	lsrs r5, r0, #24	@ 00059b88 050e
.org 0x59b8a
	adds r4, #1	@ 00059b8a 0134
.org 0x59b8c
	cmp r4, r2	@ 00059b8c 9442
.org 0x59b8e
	blt.n 0x59b7a	@ 00059b8e f4db
.org 0x59b90
	lsls r0, r5, #24	@ 00059b90 2806
.org 0x59b92
	asrs r3, r0, #24	@ 00059b92 0316
.org 0x59b94
	cmp r3, #0	@ 00059b94 002b
.org 0x59b96
	bne.n 0x59b9e	@ 00059b96 02d1
.org 0x59b98
	movs r0, #1	@ 00059b98 0120
.org 0x59b9a
	negs r0, r0	@ 00059b9a 4042
.org 0x59b9c
	b.n 0x59bd4	@ 00059b9c 1ae0
.org 0x59b9e
	ldr r2, [pc, #60]	@ 00059b9e 0f4a
.org 0x59ba0
	ldr r1, [r2, #0]	@ 00059ba0 1168
.org 0x59ba2
	ldr r0, [pc, #60]	@ 00059ba2 0f48
.org 0x59ba4
	muls r0, r1	@ 00059ba4 4843
.org 0x59ba6
	ldr r1, [pc, #60]	@ 00059ba6 0f49
.org 0x59ba8
	adds r0, r0, r1	@ 00059ba8 4018
.org 0x59baa
	lsls r0, r0, #1	@ 00059baa 4000
.org 0x59bac
	lsrs r1, r0, #1	@ 00059bac 4108
.org 0x59bae
	str r1, [r2, #0]	@ 00059bae 1160
.org 0x59bb0
	lsrs r0, r0, #17	@ 00059bb0 400c
.org 0x59bb2
	adds r1, r3, #0	@ 00059bb2 191c
.org 0x59bb4
	bl 0x129198	@ 00059bb4 cff0f0fa
.org 0x59bb8
	adds r1, r0, #0	@ 00059bb8 011c
.org 0x59bba
	subs r4, #1	@ 00059bba 013c
.org 0x59bbc
	cmp r4, #0	@ 00059bbc 002c
.org 0x59bbe
	blt.n 0x59bd2	@ 00059bbe 08db
.org 0x59bc0
	mov r2, sp	@ 00059bc0 6a46
.org 0x59bc2
	adds r0, r2, r4	@ 00059bc2 1019
.org 0x59bc4
	ldrb r0, [r0, #0]	@ 00059bc4 0078
.org 0x59bc6
	subs r0, r5, r0	@ 00059bc6 281a
.org 0x59bc8
	lsls r0, r0, #24	@ 00059bc8 0006
.org 0x59bca
	lsrs r5, r0, #24	@ 00059bca 050e
.org 0x59bcc
	asrs r0, r0, #24	@ 00059bcc 0016
.org 0x59bce
	cmp r1, r0	@ 00059bce 8142
.org 0x59bd0
	blt.n 0x59bba	@ 00059bd0 f3db
.org 0x59bd2
	adds r0, r4, #0	@ 00059bd2 201c
.org 0x59bd4
	add sp, #16	@ 00059bd4 04b0
.org 0x59bd6
	pop {r4, r5}	@ 00059bd6 30bc
.org 0x59bd8
	pop {r1}	@ 00059bd8 02bc
.org 0x59bda
	bx r1	@ 00059bda 0847
