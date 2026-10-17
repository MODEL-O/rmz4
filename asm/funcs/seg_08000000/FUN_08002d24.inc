@ FUN_08002d24  entry 0x08002d24  size 104
.thumb
.org 0x2d24
FUN_08002d24:
	push {r4, r5, r6, lr}	@ 00002d24 70b5
.org 0x2d26
	mov r6, r9	@ 00002d26 4e46
.org 0x2d28
	mov r5, r8	@ 00002d28 4546
.org 0x2d2a
	push {r5, r6}	@ 00002d2a 60b4
.org 0x2d2c
	sub sp, #8	@ 00002d2c 82b0
.org 0x2d2e
	adds r4, r0, #0	@ 00002d2e 041c
.org 0x2d30
	mov r8, r1	@ 00002d30 8846
.org 0x2d32
	mov r9, r2	@ 00002d32 9146
.org 0x2d34
	movs r5, #0	@ 00002d34 0025
.org 0x2d36
	adds r6, r4, #0	@ 00002d36 261c
.org 0x2d38
	adds r6, #8	@ 00002d38 0836
.org 0x2d3a
	str r5, [sp, #0]	@ 00002d3a 0095
.org 0x2d3c
	movs r2, #128	@ 00002d3c 8022
.org 0x2d3e
	lsls r2, r2, #17	@ 00002d3e 5204
.org 0x2d40
	mov r0, sp	@ 00002d40 6846
.org 0x2d42
	adds r1, r6, #0	@ 00002d42 311c
.org 0x2d44
	bl 0x128be0	@ 00002d44 25f14cff
.org 0x2d48
	str r5, [sp, #4]	@ 00002d48 0195
.org 0x2d4a
	add r0, sp, #4	@ 00002d4a 01a8
.org 0x2d4c
	ldr r2, [pc, #60]	@ 00002d4c 0f4a
.org 0x2d4e
	adds r1, r6, #0	@ 00002d4e 311c
.org 0x2d50
	bl 0x128be4	@ 00002d50 25f148ff
.org 0x2d54
	ldr r1, [pc, #56]	@ 00002d54 0e49
.org 0x2d56
	adds r0, r4, #0	@ 00002d56 201c
.org 0x2d58
	bl 0x2c94	@ 00002d58 fff79cff
.org 0x2d5c
	ldrb r2, [r4, #17]	@ 00002d5c 627c
.org 0x2d5e
	movs r0, #16	@ 00002d5e 1020
.org 0x2d60
	orrs r2, r0	@ 00002d60 0243
.org 0x2d62
	ldrb r1, [r4, #21]	@ 00002d62 617d
.org 0x2d64
	movs r0, #13	@ 00002d64 0d20
.org 0x2d66
	negs r0, r0	@ 00002d66 4042
.org 0x2d68
	ands r0, r1	@ 00002d68 0840
.org 0x2d6a
	movs r1, #8	@ 00002d6a 0821
.org 0x2d6c
	orrs r0, r1	@ 00002d6c 0843
.org 0x2d6e
	strb r0, [r4, #21]	@ 00002d6e 6075
.org 0x2d70
	mov r0, r8	@ 00002d70 4046
.org 0x2d72
	str r0, [r4, #8]	@ 00002d72 a060
.org 0x2d74
	mov r0, r9	@ 00002d74 4846
.org 0x2d76
	str r0, [r4, #12]	@ 00002d76 e060
.org 0x2d78
	movs r0, #3	@ 00002d78 0320
.org 0x2d7a
	orrs r2, r0	@ 00002d7a 0243
.org 0x2d7c
	strb r2, [r4, #17]	@ 00002d7c 6274
.org 0x2d7e
	add sp, #8	@ 00002d7e 02b0
.org 0x2d80
	pop {r3, r4}	@ 00002d80 18bc
.org 0x2d82
	mov r8, r3	@ 00002d82 9846
.org 0x2d84
	mov r9, r4	@ 00002d84 a146
.org 0x2d86
	pop {r4, r5, r6}	@ 00002d86 70bc
.org 0x2d88
	pop {r0}	@ 00002d88 01bc
.org 0x2d8a
	bx r0	@ 00002d8a 0047
