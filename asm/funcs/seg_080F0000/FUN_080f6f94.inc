@ FUN_080f6f94  entry 0x080f6f94  size 62
.thumb
.org 0xf6f94
FUN_080f6f94:
	push {lr}	@ 000f6f94 00b5
.org 0xf6f96
	adds r2, r0, #0	@ 000f6f96 021c
.org 0xf6f98
	ldr r1, [r2, #40]	@ 000f6f98 916a
.org 0xf6f9a
	cmp r1, #0	@ 000f6f9a 0029
.org 0xf6f9c
	beq.n 0xf6fa8	@ 000f6f9c 04d0
.org 0xf6f9e
	ldrb r0, [r1, #12]	@ 000f6f9e 087b
.org 0xf6fa0
	cmp r0, #1	@ 000f6fa0 0128
.org 0xf6fa2
	bls.n 0xf6fa8	@ 000f6fa2 01d9
.org 0xf6fa4
	movs r1, #0	@ 000f6fa4 0021
.org 0xf6fa6
	str r1, [r2, #40]	@ 000f6fa6 9162
.org 0xf6fa8
	adds r0, r2, #0	@ 000f6fa8 101c
.org 0xf6faa
	adds r0, #181	@ 000f6faa b530
.org 0xf6fac
	ldrb r0, [r0, #0]	@ 000f6fac 0078
.org 0xf6fae
	cmp r0, #0	@ 000f6fae 0028
.org 0xf6fb0
	bne.n 0xf6fbe	@ 000f6fb0 05d1
.org 0xf6fb2
	cmp r1, #0	@ 000f6fb2 0029
.org 0xf6fb4
	bne.n 0xf6fbe	@ 000f6fb4 03d1
.org 0xf6fb6
	movs r0, #2	@ 000f6fb6 0220
.org 0xf6fb8
	strb r0, [r2, #13]	@ 000f6fb8 5073
.org 0xf6fba
	strb r1, [r2, #14]	@ 000f6fba 9173
.org 0xf6fbc
	strb r1, [r2, #15]	@ 000f6fbc d173
.org 0xf6fbe
	ldr r0, [pc, #20]	@ 000f6fbe 0548
.org 0xf6fc0
	ldrb r1, [r2, #13]	@ 000f6fc0 517b
.org 0xf6fc2
	lsls r1, r1, #2	@ 000f6fc2 8900
.org 0xf6fc4
	adds r1, r1, r0	@ 000f6fc4 0918
.org 0xf6fc6
	ldr r1, [r1, #0]	@ 000f6fc6 0968
.org 0xf6fc8
	adds r0, r2, #0	@ 000f6fc8 101c
.org 0xf6fca
	bl 0x128f80	@ 000f6fca 31f0d9ff
.org 0xf6fce
	pop {r0}	@ 000f6fce 01bc
.org 0xf6fd0
	bx r0	@ 000f6fd0 0047
