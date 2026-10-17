@ FUN_0803a2b8  entry 0x0803a2b8  size 68
.thumb
.org 0x3a2b8
FUN_0803a2b8:
	push {r4, lr}	@ 0003a2b8 10b5
.org 0x3a2ba
	adds r4, r0, #0	@ 0003a2ba 041c
.org 0x3a2bc
	adds r1, r4, #0	@ 0003a2bc 211c
.org 0x3a2be
	adds r1, #180	@ 0003a2be b431
.org 0x3a2c0
	ldrb r0, [r1, #12]	@ 0003a2c0 087b
.org 0x3a2c2
	cmp r0, #6	@ 0003a2c2 0628
.org 0x3a2c4
	beq.n 0x3a2cc	@ 0003a2c4 02d0
.org 0x3a2c6
	ldrb r0, [r1, #13]	@ 0003a2c6 487b
.org 0x3a2c8
	cmp r0, #6	@ 0003a2c8 0628
.org 0x3a2ca
	bne.n 0x3a2e8	@ 0003a2ca 0dd1
.org 0x3a2cc
	ldr r0, [pc, #20]	@ 0003a2cc 0548
.org 0x3a2ce
	ldrb r1, [r1, #15]	@ 0003a2ce c97b
.org 0x3a2d0
	lsls r1, r1, #2	@ 0003a2d0 8900
.org 0x3a2d2
	adds r1, r1, r0	@ 0003a2d2 0918
.org 0x3a2d4
	ldr r2, [r1, #0]	@ 0003a2d4 0a68
.org 0x3a2d6
	adds r0, r4, #0	@ 0003a2d6 201c
.org 0x3a2d8
	movs r1, #0	@ 0003a2d8 0021
.org 0x3a2da
	bl 0x128f84	@ 0003a2da eef053fe
.org 0x3a2de
	adds r2, r0, #0	@ 0003a2de 021c
.org 0x3a2e0
	b.n 0x3a2ea	@ 0003a2e0 03e0
.org 0x3a2e2
	.byte 0x00	@ 0003a2e2 data
.org 0x3a2e3
	.byte 0x00	@ 0003a2e3 data
.org 0x3a2e4
	.byte 0x54,0x36,0x85,0x08	@ 0003a2e4 data
.org 0x3a2e8
	movs r2, #0	@ 0003a2e8 0022
.org 0x3a2ea
	cmp r2, #0	@ 0003a2ea 002a
.org 0x3a2ec
	bne.n 0x3a2fa	@ 0003a2ec 05d1
.org 0x3a2ee
	ldr r0, [pc, #20]	@ 0003a2ee 0548
.org 0x3a2f0
	adds r3, r4, r0	@ 0003a2f0 2318
.org 0x3a2f2
	ldrb r0, [r3, #0]	@ 0003a2f2 1878
.org 0x3a2f4
	movs r1, #64	@ 0003a2f4 4021
.org 0x3a2f6
	orrs r0, r1	@ 0003a2f6 0843
.org 0x3a2f8
	strb r0, [r3, #0]	@ 0003a2f8 1870
.org 0x3a2fa
	adds r0, r2, #0	@ 0003a2fa 101c
