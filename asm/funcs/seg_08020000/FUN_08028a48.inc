@ FUN_08028a48  entry 0x08028a48  size 64
.thumb
.org 0x28a48
FUN_08028a48:
	push {lr}	@ 00028a48 00b5
.org 0x28a4a
	adds r1, r0, #0	@ 00028a4a 011c
.org 0x28a4c
	ldr r2, [r1, #12]	@ 00028a4c ca68
.org 0x28a4e
	ldrb r0, [r2, #1]	@ 00028a4e 5078
.org 0x28a50
	cmp r0, #0	@ 00028a50 0028
.org 0x28a52
	bne.n 0x28a6a	@ 00028a52 0ad1
.org 0x28a54
	movs r3, #162	@ 00028a54 a223
.org 0x28a56
	lsls r3, r3, #1	@ 00028a56 5b00
.org 0x28a58
	adds r0, r1, r3	@ 00028a58 c818
.org 0x28a5a
	ldr r0, [r0, #0]	@ 00028a5a 0068
.org 0x28a5c
	cmp r0, #0	@ 00028a5c 0028
.org 0x28a5e
	beq.n 0x28a82	@ 00028a5e 10d0
.org 0x28a60
	adds r0, r2, #0	@ 00028a60 101c
.org 0x28a62
	subs r0, #8	@ 00028a62 0838
.org 0x28a64
	str r0, [r1, #12]	@ 00028a64 c860
.org 0x28a66
	movs r0, #1	@ 00028a66 0120
.org 0x28a68
	b.n 0x28a84	@ 00028a68 0ce0
.org 0x28a6a
	movs r3, #162	@ 00028a6a a223
.org 0x28a6c
	lsls r3, r3, #1	@ 00028a6c 5b00
.org 0x28a6e
	adds r0, r1, r3	@ 00028a6e c818
.org 0x28a70
	ldrb r1, [r2, #1]	@ 00028a70 5178
.org 0x28a72
	str r1, [r0, #0]	@ 00028a72 0160
.org 0x28a74
	movs r0, #8	@ 00028a74 0820
.org 0x28a76
	ands r1, r0	@ 00028a76 0140
.org 0x28a78
	cmp r1, #0	@ 00028a78 0029
.org 0x28a7a
	beq.n 0x28a82	@ 00028a7a 02d0
.org 0x28a7c
	ldr r1, [pc, #8]	@ 00028a7c 0249
.org 0x28a7e
	movs r0, #0	@ 00028a7e 0020
.org 0x28a80
	strh r0, [r1, #0]	@ 00028a80 0880
.org 0x28a82
	movs r0, #0	@ 00028a82 0020
.org 0x28a84
	pop {r1}	@ 00028a84 02bc
.org 0x28a86
	bx r1	@ 00028a86 0847
