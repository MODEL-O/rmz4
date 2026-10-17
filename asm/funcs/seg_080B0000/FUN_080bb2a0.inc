@ FUN_080bb2a0  entry 0x080bb2a0  size 76
.thumb
.org 0xbb2a0
FUN_080bb2a0:
	push {r4, lr}	@ 000bb2a0 10b5
.org 0xbb2a2
	adds r4, r0, #0	@ 000bb2a2 041c
.org 0xbb2a4
	ldrb r0, [r4, #15]	@ 000bb2a4 e07b
.org 0xbb2a6
	cmp r0, #0	@ 000bb2a6 0028
.org 0xbb2a8
	bne.n 0xbb2c6	@ 000bb2a8 0dd1
.org 0xbb2aa
	adds r0, r4, #0	@ 000bb2aa 201c
.org 0xbb2ac
	adds r0, #116	@ 000bb2ac 7430
.org 0xbb2ae
	ldr r1, [pc, #60]	@ 000bb2ae 0f49
.org 0xbb2b0
	bl 0x5784	@ 000bb2b0 4af768fa
.org 0xbb2b4
	ldr r1, [pc, #56]	@ 000bb2b4 0e49
.org 0xbb2b6
	adds r0, r4, #0	@ 000bb2b6 201c
.org 0xbb2b8
	bl 0x1cf00	@ 000bb2b8 61f722fe
.org 0xbb2bc
	movs r0, #16	@ 000bb2bc 1020
.org 0xbb2be
	strb r0, [r4, #18]	@ 000bb2be a074
.org 0xbb2c0
	ldrb r0, [r4, #15]	@ 000bb2c0 e07b
.org 0xbb2c2
	adds r0, #1	@ 000bb2c2 0130
.org 0xbb2c4
	strb r0, [r4, #15]	@ 000bb2c4 e073
.org 0xbb2c6
	adds r0, r4, #0	@ 000bb2c6 201c
.org 0xbb2c8
	bl 0x1cff0	@ 000bb2c8 61f792fe
.org 0xbb2cc
	ldrb r0, [r4, #18]	@ 000bb2cc a07c
.org 0xbb2ce
	cmp r0, #0	@ 000bb2ce 0028
.org 0xbb2d0
	beq.n 0xbb2dc	@ 000bb2d0 04d0
.org 0xbb2d2
	subs r0, #1	@ 000bb2d2 0138
.org 0xbb2d4
	strb r0, [r4, #18]	@ 000bb2d4 a074
.org 0xbb2d6
	lsls r0, r0, #24	@ 000bb2d6 0006
.org 0xbb2d8
	cmp r0, #0	@ 000bb2d8 0028
.org 0xbb2da
	bne.n 0xbb2e6	@ 000bb2da 04d1
.org 0xbb2dc
	movs r1, #0	@ 000bb2dc 0021
.org 0xbb2de
	movs r0, #2	@ 000bb2de 0220
.org 0xbb2e0
	strb r0, [r4, #13]	@ 000bb2e0 6073
.org 0xbb2e2
	strb r1, [r4, #14]	@ 000bb2e2 a173
.org 0xbb2e4
	strb r1, [r4, #15]	@ 000bb2e4 e173
.org 0xbb2e6
	pop {r4}	@ 000bb2e6 10bc
.org 0xbb2e8
	pop {r0}	@ 000bb2e8 01bc
.org 0xbb2ea
	bx r0	@ 000bb2ea 0047
