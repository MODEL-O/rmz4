@ FUN_080c2c64  entry 0x080c2c64  size 230
.thumb
.org 0xc2c64
FUN_080c2c64:
	push {r4, r5, r6, lr}	@ 000c2c64 70b5
.org 0xc2c66
	sub sp, #8	@ 000c2c66 82b0
.org 0xc2c68
	adds r4, r0, #0	@ 000c2c68 041c
.org 0xc2c6a
	ldr r6, [r4, #40]	@ 000c2c6a a66a
.org 0xc2c6c
	ldrb r0, [r4, #10]	@ 000c2c6c a07a
.org 0xc2c6e
	lsrs r5, r0, #4	@ 000c2c6e 0509
.org 0xc2c70
	movs r0, #1	@ 000c2c70 0120
.org 0xc2c72
	ands r5, r0	@ 000c2c72 0540
.org 0xc2c74
	ldrb r0, [r4, #15]	@ 000c2c74 e07b
.org 0xc2c76
	cmp r0, #0	@ 000c2c76 0028
.org 0xc2c78
	bne.n 0xc2ce4	@ 000c2c78 34d1
.org 0xc2c7a
	ldr r0, [pc, #140]	@ 000c2c7a 2348
.org 0xc2c7c
	ldr r0, [r0, #0]	@ 000c2c7c 0068
.org 0xc2c7e
	ldr r0, [r0, #84]	@ 000c2c7e 406d
.org 0xc2c80
	str r0, [sp, #0]	@ 000c2c80 0090
.org 0xc2c82
	adds r0, r6, #0	@ 000c2c82 301c
.org 0xc2c84
	adds r0, #180	@ 000c2c84 b430
.org 0xc2c86
	ldr r0, [r0, #0]	@ 000c2c86 0068
.org 0xc2c88
	str r0, [sp, #4]	@ 000c2c88 0190
.org 0xc2c8a
	adds r0, r4, #0	@ 000c2c8a 201c
.org 0xc2c8c
	adds r0, #84	@ 000c2c8c 5430
.org 0xc2c8e
	mov r1, sp	@ 000c2c8e 6946
.org 0xc2c90
	bl 0x10d3ac	@ 000c2c90 4af08cfb
.org 0xc2c94
	lsls r0, r0, #24	@ 000c2c94 0006
.org 0xc2c96
	lsrs r2, r0, #24	@ 000c2c96 020e
.org 0xc2c98
	movs r3, #160	@ 000c2c98 a023
.org 0xc2c9a
	lsls r3, r3, #1	@ 000c2c9a 5b00
.org 0xc2c9c
	subs r0, r3, r2	@ 000c2c9c 981a
.org 0xc2c9e
	lsls r1, r5, #1	@ 000c2c9e 6900
.org 0xc2ca0
	muls r0, r1	@ 000c2ca0 4843
.org 0xc2ca2
	adds r0, r2, r0	@ 000c2ca2 1018
.org 0xc2ca4
	lsls r0, r0, #24	@ 000c2ca4 0006
.org 0xc2ca6
	lsrs r2, r0, #24	@ 000c2ca6 020e
.org 0xc2ca8
	movs r5, #176	@ 000c2ca8 b025
.org 0xc2caa
	lsls r5, r5, #24	@ 000c2caa 2d06
.org 0xc2cac
	adds r0, r0, r5	@ 000c2cac 4019
.org 0xc2cae
	lsrs r0, r0, #24	@ 000c2cae 000e
.org 0xc2cb0
	cmp r0, #128	@ 000c2cb0 8028
.org 0xc2cb2
	bls.n 0xc2cb6	@ 000c2cb2 00d9
.org 0xc2cb4
	movs r2, #80	@ 000c2cb4 5022
.org 0xc2cb6
	subs r0, r3, r2	@ 000c2cb6 981a
.org 0xc2cb8
	muls r1, r0	@ 000c2cb8 4143
.org 0xc2cba
	adds r1, r2, r1	@ 000c2cba 5118
.org 0xc2cbc
	lsls r1, r1, #24	@ 000c2cbc 0906
.org 0xc2cbe
	ldr r2, [pc, #76]	@ 000c2cbe 134a
.org 0xc2cc0
	movs r3, #128	@ 000c2cc0 8023
.org 0xc2cc2
	lsls r3, r3, #23	@ 000c2cc2 db05
.org 0xc2cc4
	adds r0, r1, r3	@ 000c2cc4 c818
.org 0xc2cc6
	lsrs r0, r0, #23	@ 000c2cc6 c00d
.org 0xc2cc8
	adds r0, r0, r2	@ 000c2cc8 8018
.org 0xc2cca
	movs r5, #0	@ 000c2cca 0025
.org 0xc2ccc
	ldrsh r0, [r0, r5]	@ 000c2ccc 405f
.org 0xc2cce
	lsls r0, r0, #2	@ 000c2cce 8000
.org 0xc2cd0
	str r0, [r4, #92]	@ 000c2cd0 e065
.org 0xc2cd2
	lsrs r1, r1, #23	@ 000c2cd2 c90d
.org 0xc2cd4
	adds r1, r1, r2	@ 000c2cd4 8918
.org 0xc2cd6
	movs r2, #0	@ 000c2cd6 0022
.org 0xc2cd8
	ldrsh r0, [r1, r2]	@ 000c2cd8 885e
.org 0xc2cda
	lsls r0, r0, #2	@ 000c2cda 8000
.org 0xc2cdc
	str r0, [r4, #96]	@ 000c2cdc 2066
.org 0xc2cde
	ldrb r0, [r4, #15]	@ 000c2cde e07b
.org 0xc2ce0
	adds r0, #1	@ 000c2ce0 0130
.org 0xc2ce2
	strb r0, [r4, #15]	@ 000c2ce2 e073
.org 0xc2ce4
	adds r0, r4, #0	@ 000c2ce4 201c
.org 0xc2ce6
	adds r0, #182	@ 000c2ce6 b630
.org 0xc2ce8
	ldrb r5, [r0, #0]	@ 000c2ce8 0578
.org 0xc2cea
	cmp r5, #0	@ 000c2cea 002d
.org 0xc2cec
	beq.n 0xc2d14	@ 000c2cec 12d0
.org 0xc2cee
	ldr r1, [pc, #32]	@ 000c2cee 0849
.org 0xc2cf0
	ldrb r0, [r4, #9]	@ 000c2cf0 607a
.org 0xc2cf2
	lsls r0, r0, #2	@ 000c2cf2 8000
.org 0xc2cf4
	adds r0, r0, r1	@ 000c2cf4 4018
.org 0xc2cf6
	movs r1, #2	@ 000c2cf6 0221
.org 0xc2cf8
	str r1, [r4, #12]	@ 000c2cf8 e160
.org 0xc2cfa
	ldr r0, [r0, #0]	@ 000c2cfa 0068
.org 0xc2cfc
	ldr r0, [r0, #8]	@ 000c2cfc 8068
.org 0xc2cfe
	str r0, [r4, #20]	@ 000c2cfe 6061
.org 0xc2d00
	adds r0, r4, #0	@ 000c2d00 201c
.org 0xc2d02
	bl 0xc2f2c	@ 000c2d02 00f013f9
.org 0xc2d06
	b.n 0xc2d4e	@ 000c2d06 22e0
.org 0xc2d08
	.byte 0xf0,0xdb,0x02,0x02	@ 000c2d08 data
.org 0xc2d0c
	.byte 0x0c,0x93,0x12,0x08	@ 000c2d0c data
.org 0xc2d10
	.byte 0xf4,0x49,0x86,0x08	@ 000c2d10 data
.org 0xc2d14
	adds r0, r4, #0	@ 000c2d14 201c
.org 0xc2d16
	bl 0x1cff0	@ 000c2d16 5af76bf9
.org 0xc2d1a
	ldr r0, [r4, #84]	@ 000c2d1a 606d
.org 0xc2d1c
	ldr r1, [r4, #92]	@ 000c2d1c e16d
.org 0xc2d1e
	adds r0, r0, r1	@ 000c2d1e 4018
.org 0xc2d20
	str r0, [r4, #84]	@ 000c2d20 6065
.org 0xc2d22
	ldr r1, [r4, #88]	@ 000c2d22 a16d
.org 0xc2d24
	ldr r0, [r4, #96]	@ 000c2d24 206e
.org 0xc2d26
	adds r2, r1, r0	@ 000c2d26 0a18
.org 0xc2d28
	str r2, [r4, #88]	@ 000c2d28 a265
.org 0xc2d2a
	adds r0, r4, #0	@ 000c2d2a 201c
.org 0xc2d2c
	adds r0, #140	@ 000c2d2c 8c30
.org 0xc2d2e
	ldr r0, [r0, #0]	@ 000c2d2e 0068
.org 0xc2d30
	movs r1, #4	@ 000c2d30 0421
.org 0xc2d32
	ands r0, r1	@ 000c2d32 0840
.org 0xc2d34
	cmp r0, #0	@ 000c2d34 0028
.org 0xc2d36
	bne.n 0xc2d46	@ 000c2d36 06d1
.org 0xc2d38
	adds r0, r6, #0	@ 000c2d38 301c
.org 0xc2d3a
	adds r0, #180	@ 000c2d3a b430
.org 0xc2d3c
	ldr r0, [r0, #0]	@ 000c2d3c 0068
.org 0xc2d3e
	ldr r3, [pc, #24]	@ 000c2d3e 064b
.org 0xc2d40
	adds r0, r0, r3	@ 000c2d40 c018
.org 0xc2d42
	cmp r2, r0	@ 000c2d42 8242
.org 0xc2d44
	blt.n 0xc2d4e	@ 000c2d44 03db
.org 0xc2d46
	movs r0, #2	@ 000c2d46 0220
.org 0xc2d48
	strb r0, [r4, #13]	@ 000c2d48 6073
