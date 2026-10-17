@ FUN_080b08a4  entry 0x080b08a4  size 80
.thumb
.org 0xb08a4
FUN_080b08a4:
	push {r4, lr}	@ 000b08a4 10b5
.org 0xb08a6
	sub sp, #8	@ 000b08a6 82b0
.org 0xb08a8
	adds r4, r0, #0	@ 000b08a8 041c
.org 0xb08aa
	ldrb r0, [r4, #14]	@ 000b08aa a07b
.org 0xb08ac
	cmp r0, #0	@ 000b08ac 0028
.org 0xb08ae
	bne.n 0xb08d8	@ 000b08ae 13d1
.org 0xb08b0
	ldr r0, [r4, #84]	@ 000b08b0 606d
.org 0xb08b2
	str r0, [sp, #0]	@ 000b08b2 0090
.org 0xb08b4
	ldr r0, [r4, #88]	@ 000b08b4 a06d
.org 0xb08b6
	ldr r1, [pc, #60]	@ 000b08b6 0f49
.org 0xb08b8
	adds r0, r0, r1	@ 000b08b8 4018
.org 0xb08ba
	str r0, [sp, #4]	@ 000b08ba 0190
.org 0xb08bc
	mov r0, sp	@ 000b08bc 6846
.org 0xb08be
	movs r1, #1	@ 000b08be 0121
.org 0xb08c0
	adds r2, r4, #0	@ 000b08c0 221c
.org 0xb08c2
	bl 0xb0358	@ 000b08c2 fff749fd
.org 0xb08c6
	ldr r1, [pc, #48]	@ 000b08c6 0c49
.org 0xb08c8
	adds r0, r4, #0	@ 000b08c8 201c
.org 0xb08ca
	bl 0x1cf00	@ 000b08ca 6cf719fb
.org 0xb08ce
	movs r0, #30	@ 000b08ce 1e20
.org 0xb08d0
	strb r0, [r4, #18]	@ 000b08d0 a074
.org 0xb08d2
	ldrb r0, [r4, #14]	@ 000b08d2 a07b
.org 0xb08d4
	adds r0, #1	@ 000b08d4 0130
.org 0xb08d6
	strb r0, [r4, #14]	@ 000b08d6 a073
.org 0xb08d8
	ldrb r0, [r4, #18]	@ 000b08d8 a07c
.org 0xb08da
	subs r0, #1	@ 000b08da 0138
.org 0xb08dc
	strb r0, [r4, #18]	@ 000b08dc a074
.org 0xb08de
	lsls r0, r0, #24	@ 000b08de 0006
.org 0xb08e0
	lsrs r1, r0, #24	@ 000b08e0 010e
.org 0xb08e2
	cmp r1, #0	@ 000b08e2 0029
.org 0xb08e4
	bne.n 0xb08ec	@ 000b08e4 02d1
.org 0xb08e6
	movs r0, #2	@ 000b08e6 0220
.org 0xb08e8
	strb r0, [r4, #13]	@ 000b08e8 6073
.org 0xb08ea
	strb r1, [r4, #14]	@ 000b08ea a173
.org 0xb08ec
	add sp, #8	@ 000b08ec 02b0
.org 0xb08ee
	pop {r4}	@ 000b08ee 10bc
.org 0xb08f0
	pop {r0}	@ 000b08f0 01bc
.org 0xb08f2
	bx r0	@ 000b08f2 0047
