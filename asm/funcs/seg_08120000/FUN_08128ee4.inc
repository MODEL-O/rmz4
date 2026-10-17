@ FUN_08128ee4  entry 0x08128ee4  size 76
.thumb
.org 0x128ee4
FUN_08128ee4:
	push {r4, r5, lr}	@ 00128ee4 30b5
.org 0x128ee6
	sub sp, #8	@ 00128ee6 82b0
.org 0x128ee8
	adds r4, r1, #0	@ 00128ee8 0c1c
.org 0x128eea
	lsls r0, r0, #16	@ 00128eea 0004
.org 0x128eec
	lsrs r1, r0, #16	@ 00128eec 010c
.org 0x128eee
	movs r5, #0	@ 00128eee 0025
.org 0x128ef0
	ldr r0, [pc, #12]	@ 00128ef0 0348
.org 0x128ef2
	ldr r0, [r0, #0]	@ 00128ef2 0068
.org 0x128ef4
	ldrh r0, [r0, #4]	@ 00128ef4 8088
.org 0x128ef6
	cmp r1, r0	@ 00128ef6 8142
.org 0x128ef8
	bcc.n 0x128f08	@ 00128ef8 06d3
.org 0x128efa
	ldr r0, [pc, #8]	@ 00128efa 0248
.org 0x128efc
	b.n 0x128f32	@ 00128efc 19e0
.org 0x128efe
	.byte 0x00	@ 00128efe data
.org 0x128eff
	.byte 0x00	@ 00128eff data
.org 0x128f00
	.byte 0xb0,0xd7,0x03,0x02	@ 00128f00 data
.org 0x128f04
	.byte 0xff,0x80,0x00,0x00	@ 00128f04 data
.org 0x128f08
	adds r0, r1, #0	@ 00128f08 081c
.org 0x128f0a
	mov r1, sp	@ 00128f0a 6946
.org 0x128f0c
	bl 0x128cc0	@ 00128f0c fff7d8fe
.org 0x128f10
	mov r2, sp	@ 00128f10 6a46
.org 0x128f12
	movs r3, #0	@ 00128f12 0023
.org 0x128f14
	b.n 0x128f20	@ 00128f14 04e0
.org 0x128f16
	adds r0, r3, #1	@ 00128f16 581c
.org 0x128f18
	lsls r0, r0, #24	@ 00128f18 0006
.org 0x128f1a
	lsrs r3, r0, #24	@ 00128f1a 030e
.org 0x128f1c
	cmp r3, #3	@ 00128f1c 032b
.org 0x128f1e
	bhi.n 0x128f30	@ 00128f1e 07d8
.org 0x128f20
	ldrh r1, [r4, #0]	@ 00128f20 2188
.org 0x128f22
	ldrh r0, [r2, #0]	@ 00128f22 1088
.org 0x128f24
	adds r2, #2	@ 00128f24 0232
.org 0x128f26
	adds r4, #2	@ 00128f26 0234
.org 0x128f28
	cmp r1, r0	@ 00128f28 8142
.org 0x128f2a
	beq.n 0x128f16	@ 00128f2a f4d0
.org 0x128f2c
	movs r5, #128	@ 00128f2c 8025
.org 0x128f2e
	lsls r5, r5, #8	@ 00128f2e 2d02
