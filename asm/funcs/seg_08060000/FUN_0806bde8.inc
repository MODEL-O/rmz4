@ FUN_0806bde8  entry 0x0806bde8  size 308
.thumb
.org 0x6bde8
FUN_0806bde8:
	push {r4, r5, lr}	@ 0006bde8 30b5
.org 0x6bdea
	sub sp, #8	@ 0006bdea 82b0
.org 0x6bdec
	adds r4, r0, #0	@ 0006bdec 041c
.org 0x6bdee
	ldrb r5, [r4, #14]	@ 0006bdee a57b
.org 0x6bdf0
	cmp r5, #0	@ 0006bdf0 002d
.org 0x6bdf2
	bne.n 0x6be18	@ 0006bdf2 11d1
.org 0x6bdf4
	ldr r1, [pc, #112]	@ 0006bdf4 1c49
.org 0x6bdf6
	bl 0x1cf00	@ 0006bdf6 b1f783f8
.org 0x6bdfa
	adds r1, r4, #0	@ 0006bdfa 211c
.org 0x6bdfc
	adds r1, #180	@ 0006bdfc b431
.org 0x6bdfe
	ldr r0, [r1, #4]	@ 0006bdfe 4868
.org 0x6be00
	str r0, [r1, #28]	@ 0006be00 c861
.org 0x6be02
	adds r0, r4, #0	@ 0006be02 201c
.org 0x6be04
	adds r0, #217	@ 0006be04 d930
.org 0x6be06
	strb r5, [r0, #0]	@ 0006be06 0570
.org 0x6be08
	adds r0, #1	@ 0006be08 0130
.org 0x6be0a
	strb r5, [r0, #0]	@ 0006be0a 0570
.org 0x6be0c
	movs r0, #6	@ 0006be0c 0620
.org 0x6be0e
	strb r0, [r4, #18]	@ 0006be0e a074
.org 0x6be10
	strb r5, [r4, #15]	@ 0006be10 e573
.org 0x6be12
	ldrb r0, [r4, #14]	@ 0006be12 a07b
.org 0x6be14
	adds r0, #1	@ 0006be14 0130
.org 0x6be16
	strb r0, [r4, #14]	@ 0006be16 a073
.org 0x6be18
	adds r0, r4, #0	@ 0006be18 201c
.org 0x6be1a
	bl 0x1cff0	@ 0006be1a b1f7e9f8
.org 0x6be1e
	ldrb r5, [r4, #15]	@ 0006be1e e57b
.org 0x6be20
	cmp r5, #0	@ 0006be20 002d
.org 0x6be22
	bne.n 0x6be78	@ 0006be22 29d1
.org 0x6be24
	adds r0, r4, #0	@ 0006be24 201c
.org 0x6be26
	adds r0, #115	@ 0006be26 7330
.org 0x6be28
	ldrb r0, [r0, #0]	@ 0006be28 0078
.org 0x6be2a
	cmp r0, #3	@ 0006be2a 0328
.org 0x6be2c
	beq.n 0x6be30	@ 0006be2c 00d0
.org 0x6be2e
	b.n 0x6bf38	@ 0006be2e 83e0
.org 0x6be30
	ldrb r0, [r4, #18]	@ 0006be30 a07c
.org 0x6be32
	subs r0, #1	@ 0006be32 0138
.org 0x6be34
	strb r0, [r4, #18]	@ 0006be34 a074
.org 0x6be36
	lsls r0, r0, #24	@ 0006be36 0006
.org 0x6be38
	lsrs r0, r0, #24	@ 0006be38 000e
.org 0x6be3a
	cmp r0, #255	@ 0006be3a ff28
.org 0x6be3c
	beq.n 0x6be40	@ 0006be3c 00d0
.org 0x6be3e
	b.n 0x6bf38	@ 0006be3e 7be0
.org 0x6be40
	ldr r1, [pc, #40]	@ 0006be40 0a49
.org 0x6be42
	adds r0, r4, #0	@ 0006be42 201c
.org 0x6be44
	bl 0x1cf00	@ 0006be44 b1f75cf8
.org 0x6be48
	adds r0, r4, #0	@ 0006be48 201c
.org 0x6be4a
	bl 0x1cff0	@ 0006be4a b1f7d1f8
.org 0x6be4e
	movs r0, #202	@ 0006be4e ca20
.org 0x6be50
	bl 0x2b10	@ 0006be50 96f75efe
.org 0x6be54
	adds r0, r4, #0	@ 0006be54 201c
.org 0x6be56
	adds r0, #116	@ 0006be56 7430
.org 0x6be58
	ldr r1, [pc, #20]	@ 0006be58 0549
.org 0x6be5a
	bl 0x5784	@ 0006be5a 99f793fc
.org 0x6be5e
	ldr r0, [pc, #20]	@ 0006be5e 0548
.org 0x6be60
	str r0, [r4, #96]	@ 0006be60 2066
.org 0x6be62
	strb r5, [r4, #18]	@ 0006be62 a574
.org 0x6be64
	b.n 0x6bf10	@ 0006be64 54e0
.org 0x6be66
	.byte 0x00	@ 0006be66 data
.org 0x6be67
	.byte 0x00	@ 0006be67 data
.org 0x6be68
	.byte 0x0d,0xaa,0x00,0x00	@ 0006be68 data
.org 0x6be6c
	.byte 0x1d,0xaa,0x00,0x00	@ 0006be6c data
.org 0x6be70
	.byte 0xdc,0xc1,0x85,0x08	@ 0006be70 data
.org 0x6be74
	.byte 0x80,0xfa,0xff,0xff	@ 0006be74 data
.org 0x6be78
	ldrb r1, [r4, #18]	@ 0006be78 a17c
.org 0x6be7a
	adds r0, r1, #1	@ 0006be7a 481c
.org 0x6be7c
	strb r0, [r4, #18]	@ 0006be7c a074
.org 0x6be7e
	movs r0, #1	@ 0006be7e 0120
.org 0x6be80
	ands r0, r1	@ 0006be80 0840
.org 0x6be82
	cmp r0, #0	@ 0006be82 0028
.org 0x6be84
	bne.n 0x6bebe	@ 0006be84 1bd1
.org 0x6be86
	ldrb r1, [r4, #10]	@ 0006be86 a17a
.org 0x6be88
	movs r0, #16	@ 0006be88 1020
.org 0x6be8a
	ands r0, r1	@ 0006be8a 0840
.org 0x6be8c
	cmp r0, #0	@ 0006be8c 0028
.org 0x6be8e
	beq.n 0x6be9c	@ 0006be8e 05d0
.org 0x6be90
	ldr r0, [r4, #84]	@ 0006be90 606d
.org 0x6be92
	ldr r2, [pc, #4]	@ 0006be92 014a
.org 0x6be94
	b.n 0x6bea2	@ 0006be94 05e0
.org 0x6be96
	.byte 0x00	@ 0006be96 data
.org 0x6be97
	.byte 0x00	@ 0006be97 data
.org 0x6be98
	.byte 0x00,0xe9,0xff,0xff	@ 0006be98 data
.org 0x6be9c
	ldr r0, [r4, #84]	@ 0006be9c 606d
.org 0x6be9e
	movs r2, #184	@ 0006be9e b822
.org 0x6bea0
	lsls r2, r2, #5	@ 0006bea0 5201
.org 0x6bea2
	adds r0, r0, r2	@ 0006bea2 8018
.org 0x6bea4
	str r0, [sp, #0]	@ 0006bea4 0090
.org 0x6bea6
	ldr r0, [r4, #88]	@ 0006bea6 a06d
.org 0x6bea8
	ldr r2, [pc, #60]	@ 0006bea8 0f4a
.org 0x6beaa
	adds r0, r0, r2	@ 0006beaa 8018
.org 0x6beac
	str r0, [sp, #4]	@ 0006beac 0190
.org 0x6beae
	lsls r2, r1, #24	@ 0006beae 0a06
.org 0x6beb0
	lsrs r2, r2, #28	@ 0006beb0 120f
.org 0x6beb2
	movs r0, #1	@ 0006beb2 0120
.org 0x6beb4
	ands r2, r0	@ 0006beb4 0240
.org 0x6beb6
	mov r0, sp	@ 0006beb6 6846
.org 0x6beb8
	movs r1, #0	@ 0006beb8 0021
.org 0x6beba
	bl 0xdfe98	@ 0006beba 73f0edff
.org 0x6bebe
	ldr r0, [r4, #88]	@ 0006bebe a06d
.org 0x6bec0
	ldr r1, [r4, #96]	@ 0006bec0 216e
.org 0x6bec2
	adds r3, r0, r1	@ 0006bec2 4318
.org 0x6bec4
	str r3, [r4, #88]	@ 0006bec4 a365
.org 0x6bec6
	adds r1, #32	@ 0006bec6 2031
.org 0x6bec8
	str r1, [r4, #96]	@ 0006bec8 2166
.org 0x6beca
	ldrb r0, [r4, #15]	@ 0006beca e07b
.org 0x6becc
	cmp r0, #1	@ 0006becc 0128
.org 0x6bece
	bne.n 0x6bef0	@ 0006bece 0fd1
.org 0x6bed0
	adds r0, r4, #0	@ 0006bed0 201c
.org 0x6bed2
	adds r0, #180	@ 0006bed2 b430
.org 0x6bed4
	ldr r0, [r0, #4]	@ 0006bed4 4068
.org 0x6bed6
	ldr r1, [pc, #20]	@ 0006bed6 0549
.org 0x6bed8
	adds r0, r0, r1	@ 0006bed8 4018
.org 0x6beda
	cmp r3, r0	@ 0006beda 8342
.org 0x6bedc
	bge.n 0x6bf38	@ 0006bedc 2cda
.org 0x6bede
	adds r0, r4, #0	@ 0006bede 201c
.org 0x6bee0
	movs r1, #0	@ 0006bee0 0021
.org 0x6bee2
	movs r2, #0	@ 0006bee2 0022
.org 0x6bee4
	movs r3, #0	@ 0006bee4 0023
.org 0x6bee6
	b.n 0x6bf0a	@ 0006bee6 10e0
.org 0x6bee8
	.byte 0x00,0xfe,0xff,0xff	@ 0006bee8 data
.org 0x6beec
	.byte 0x00,0xf0,0xff,0xff	@ 0006beec data
.org 0x6bef0
	cmp r0, #2	@ 0006bef0 0228
.org 0x6bef2
	bne.n 0x6bf1c	@ 0006bef2 13d1
.org 0x6bef4
	adds r0, r4, #0	@ 0006bef4 201c
.org 0x6bef6
	adds r0, #180	@ 0006bef6 b430
.org 0x6bef8
	ldr r0, [r0, #4]	@ 0006bef8 4068
.org 0x6befa
	ldr r2, [pc, #28]	@ 0006befa 074a
.org 0x6befc
	adds r0, r0, r2	@ 0006befc 8018
.org 0x6befe
	cmp r3, r0	@ 0006befe 8342
.org 0x6bf00
	bge.n 0x6bf38	@ 0006bf00 1ada
.org 0x6bf02
	ldr r1, [r4, #44]	@ 0006bf02 e16a
.org 0x6bf04
	adds r0, r4, #0	@ 0006bf04 201c
.org 0x6bf06
	movs r2, #0	@ 0006bf06 0022
.org 0x6bf08
	movs r3, #1	@ 0006bf08 0123
.org 0x6bf0a
	bl 0x9f3a8	@ 0006bf0a 33f04dfa
.org 0x6bf0e
	str r0, [r4, #44]	@ 0006bf0e e062
.org 0x6bf10
	ldrb r0, [r4, #15]	@ 0006bf10 e07b
.org 0x6bf12
	adds r0, #1	@ 0006bf12 0130
.org 0x6bf14
	strb r0, [r4, #15]	@ 0006bf14 e073
.org 0x6bf16
	b.n 0x6bf38	@ 0006bf16 0fe0
.org 0x6bf18
	.byte 0x00,0xd0,0xff,0xff	@ 0006bf18 data
