@ FUN_08085ec8  entry 0x08085ec8  size 144
.thumb
.org 0x85ec8
FUN_08085ec8:
	push {r4, r5, lr}	@ 00085ec8 30b5
.org 0x85eca
	sub sp, #8	@ 00085eca 82b0
.org 0x85ecc
	adds r5, r0, #0	@ 00085ecc 051c
.org 0x85ece
	ldrb r2, [r5, #14]	@ 00085ece aa7b
.org 0x85ed0
	cmp r2, #0	@ 00085ed0 002a
.org 0x85ed2
	beq.n 0x85eda	@ 00085ed2 02d0
.org 0x85ed4
	cmp r2, #1	@ 00085ed4 012a
.org 0x85ed6
	beq.n 0x85f4c	@ 00085ed6 39d0
.org 0x85ed8
	b.n 0x85f5e	@ 00085ed8 41e0
.org 0x85eda
	ldrb r1, [r5, #10]	@ 00085eda a97a
.org 0x85edc
	movs r0, #254	@ 00085edc fe20
.org 0x85ede
	ands r0, r1	@ 00085ede 0840
.org 0x85ee0
	strb r0, [r5, #10]	@ 00085ee0 a872
.org 0x85ee2
	adds r0, r5, #0	@ 00085ee2 281c
.org 0x85ee4
	adds r0, #140	@ 00085ee4 8c30
.org 0x85ee6
	str r2, [r0, #0]	@ 00085ee6 0260
.org 0x85ee8
	adds r0, #4	@ 00085ee8 0430
.org 0x85eea
	str r2, [r0, #0]	@ 00085eea 0260
.org 0x85eec
	adds r0, #4	@ 00085eec 0430
.org 0x85eee
	strb r2, [r0, #0]	@ 00085eee 0270
.org 0x85ef0
	ldrb r1, [r5, #10]	@ 00085ef0 a97a
.org 0x85ef2
	movs r0, #251	@ 00085ef2 fb20
.org 0x85ef4
	ands r0, r1	@ 00085ef4 0840
.org 0x85ef6
	strb r0, [r5, #10]	@ 00085ef6 a872
.org 0x85ef8
	ldr r0, [r5, #84]	@ 00085ef8 686d
.org 0x85efa
	str r0, [sp, #0]	@ 00085efa 0090
.org 0x85efc
	ldr r0, [r5, #88]	@ 00085efc a86d
.org 0x85efe
	ldr r1, [pc, #64]	@ 00085efe 1049
.org 0x85f00
	adds r0, r0, r1	@ 00085f00 4018
.org 0x85f02
	str r0, [sp, #4]	@ 00085f02 0190
.org 0x85f04
	movs r0, #1	@ 00085f04 0120
.org 0x85f06
	mov r1, sp	@ 00085f06 6946
.org 0x85f08
	bl 0xd0c88	@ 00085f08 4af0befe
.org 0x85f0c
	movs r0, #42	@ 00085f0c 2a20
.org 0x85f0e
	bl 0x2b10	@ 00085f0e 7cf7fffd
.org 0x85f12
	ldr r2, [pc, #48]	@ 00085f12 0c4a
.org 0x85f14
	ldrh r1, [r2, #12]	@ 00085f14 9189
.org 0x85f16
	ldr r0, [pc, #48]	@ 00085f16 0c48
.org 0x85f18
	cmp r1, r0	@ 00085f18 8142
.org 0x85f1a
	bhi.n 0x85f20	@ 00085f1a 01d8
.org 0x85f1c
	adds r0, r1, #1	@ 00085f1c 481c
.org 0x85f1e
	strh r0, [r2, #12]	@ 00085f1e 9081
.org 0x85f20
	adds r4, r5, #0	@ 00085f20 2c1c
.org 0x85f22
	adds r4, #84	@ 00085f22 5434
.org 0x85f24
	adds r0, r5, #0	@ 00085f24 281c
.org 0x85f26
	adds r1, r4, #0	@ 00085f26 211c
.org 0x85f28
	bl 0x2abe0	@ 00085f28 a4f75afe
.org 0x85f2c
	movs r0, #4	@ 00085f2c 0420
.org 0x85f2e
	movs r1, #43	@ 00085f2e 2b21
.org 0x85f30
	adds r2, r4, #0	@ 00085f30 221c
.org 0x85f32
	bl 0x2ab88	@ 00085f32 a4f729fe
.org 0x85f36
	ldrb r0, [r5, #14]	@ 00085f36 a87b
.org 0x85f38
	adds r0, #1	@ 00085f38 0130
.org 0x85f3a
	strb r0, [r5, #14]	@ 00085f3a a873
.org 0x85f3c
	b.n 0x85f5e	@ 00085f3c 0fe0
.org 0x85f3e
	.byte 0x00	@ 00085f3e data
.org 0x85f3f
	.byte 0x00	@ 00085f3f data
.org 0x85f40
	.byte 0x00,0xf8,0xff,0xff	@ 00085f40 data
.org 0x85f44
	.byte 0xe0,0xe8,0x02,0x02	@ 00085f44 data
.org 0x85f48
	.byte 0x0e,0x27,0x00,0x00	@ 00085f48 data
.org 0x85f4c
	ldr r1, [pc, #24]	@ 00085f4c 0649
.org 0x85f4e
	ldrb r0, [r5, #9]	@ 00085f4e 687a
.org 0x85f50
	lsls r0, r0, #2	@ 00085f50 8000
.org 0x85f52
	adds r0, r0, r1	@ 00085f52 4018
.org 0x85f54
	movs r1, #4	@ 00085f54 0421
.org 0x85f56
	str r1, [r5, #12]	@ 00085f56 e960
