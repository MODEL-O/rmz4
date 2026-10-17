@ FUN_0807d1a4  entry 0x0807d1a4  size 104
.thumb
.org 0x7d1a4
FUN_0807d1a4:
	push {r4, r5, r6, r7, lr}	@ 0007d1a4 f0b5
.org 0x7d1a6
	mov r7, sl	@ 0007d1a6 5746
.org 0x7d1a8
	mov r6, r9	@ 0007d1a8 4e46
.org 0x7d1aa
	mov r5, r8	@ 0007d1aa 4546
.org 0x7d1ac
	push {r5, r6, r7}	@ 0007d1ac e0b4
.org 0x7d1ae
	sub sp, #56	@ 0007d1ae 8eb0
.org 0x7d1b0
	adds r5, r0, #0	@ 0007d1b0 051c
.org 0x7d1b2
	mov r1, sp	@ 0007d1b2 6946
.org 0x7d1b4
	ldr r0, [pc, #68]	@ 0007d1b4 1148
.org 0x7d1b6
	ldmia r0!, {r2, r3, r4}	@ 0007d1b6 1cc8
.org 0x7d1b8
	stmia r1!, {r2, r3, r4}	@ 0007d1b8 1cc1
.org 0x7d1ba
	ldmia r0!, {r2, r3, r4}	@ 0007d1ba 1cc8
.org 0x7d1bc
	stmia r1!, {r2, r3, r4}	@ 0007d1bc 1cc1
.org 0x7d1be
	add r4, sp, #24	@ 0007d1be 06ac
.org 0x7d1c0
	ldr r1, [pc, #60]	@ 0007d1c0 0f49
.org 0x7d1c2
	adds r0, r4, #0	@ 0007d1c2 201c
.org 0x7d1c4
	movs r2, #2	@ 0007d1c4 0222
.org 0x7d1c6
	bl 0x129258	@ 0007d1c6 acf047f8
.org 0x7d1ca
	ldrb r0, [r5, #10]	@ 0007d1ca a87a
.org 0x7d1cc
	lsrs r2, r0, #4	@ 0007d1cc 0209
.org 0x7d1ce
	movs r0, #1	@ 0007d1ce 0120
.org 0x7d1d0
	ands r2, r0	@ 0007d1d0 0240
.org 0x7d1d2
	ldrb r0, [r5, #15]	@ 0007d1d2 e87b
.org 0x7d1d4
	cmp r0, #5	@ 0007d1d4 0528
.org 0x7d1d6
	bls.n 0x7d1da	@ 0007d1d6 00d9
.org 0x7d1d8
	b.n 0x7d44c	@ 0007d1d8 38e1
.org 0x7d1da
	lsls r0, r0, #2	@ 0007d1da 8000
.org 0x7d1dc
	ldr r1, [pc, #36]	@ 0007d1dc 0949
.org 0x7d1de
	adds r0, r0, r1	@ 0007d1de 4018
.org 0x7d1e0
	ldr r0, [r0, #0]	@ 0007d1e0 0068
.org 0x7d1e2
	movs r1, #188	@ 0007d1e2 bc21
.org 0x7d1e4
	adds r1, r1, r5	@ 0007d1e4 4919
.org 0x7d1e6
	mov sl, r1	@ 0007d1e6 8a46
.org 0x7d1e8
	adds r3, r5, #0	@ 0007d1e8 2b1c
.org 0x7d1ea
	adds r3, #116	@ 0007d1ea 7433
.org 0x7d1ec
	str r3, [sp, #44]	@ 0007d1ec 0b93
.org 0x7d1ee
	adds r4, r5, #0	@ 0007d1ee 2c1c
.org 0x7d1f0
	adds r4, #113	@ 0007d1f0 7134
.org 0x7d1f2
	str r4, [sp, #40]	@ 0007d1f2 0a94
.org 0x7d1f4
	adds r1, r5, #0	@ 0007d1f4 291c
.org 0x7d1f6
	adds r1, #100	@ 0007d1f6 6431
.org 0x7d1f8
	str r1, [sp, #36]	@ 0007d1f8 0991
.org 0x7d1fa
	mov pc, r0	@ 0007d1fa 8746
.org 0x7d1fc
	.byte 0x2c,0x9a,0x12,0x08	@ 0007d1fc data
.org 0x7d200
	.byte 0x44,0x9a,0x12,0x08	@ 0007d200 data
.org 0x7d204
	.byte 0x08,0xd2,0x07,0x08	@ 0007d204 data
.org 0x7d208
	.byte 0x20,0xd2,0x07,0x08	@ 0007d208 data
