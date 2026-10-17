@ FUN_08037ea0  entry 0x08037ea0  size 100
.thumb
.org 0x37ea0
FUN_08037ea0:
	push {r4, lr}	@ 00037ea0 10b5
.org 0x37ea2
	adds r4, r0, #0	@ 00037ea2 041c
.org 0x37ea4
	adds r0, #180	@ 00037ea4 b430
.org 0x37ea6
	ldrb r0, [r0, #12]	@ 00037ea6 007b
.org 0x37ea8
	cmp r0, #1	@ 00037ea8 0128
.org 0x37eaa
	bne.n 0x37eb2	@ 00037eaa 02d1
.org 0x37eac
	adds r0, r4, #0	@ 00037eac 201c
.org 0x37eae
	movs r1, #0	@ 00037eae 0021
.org 0x37eb0
	b.n 0x37eb6	@ 00037eb0 01e0
.org 0x37eb2
	adds r0, r4, #0	@ 00037eb2 201c
.org 0x37eb4
	movs r1, #1	@ 00037eb4 0121
.org 0x37eb6
	bl 0x3a428	@ 00037eb6 02f0b7fa
.org 0x37eba
	lsls r0, r0, #24	@ 00037eba 0006
.org 0x37ebc
	lsrs r1, r0, #24	@ 00037ebc 010e
.org 0x37ebe
	ldr r2, [pc, #40]	@ 00037ebe 0a4a
.org 0x37ec0
	adds r0, r4, r2	@ 00037ec0 a018
.org 0x37ec2
	ldrb r0, [r0, #0]	@ 00037ec2 0078
.org 0x37ec4
	cmp r0, #3	@ 00037ec4 0328
.org 0x37ec6
	bne.n 0x37eca	@ 00037ec6 00d1
.org 0x37ec8
	movs r1, #2	@ 00037ec8 0221
.org 0x37eca
	cmp r1, #2	@ 00037eca 0229
.org 0x37ecc
	bne.n 0x37ef0	@ 00037ecc 10d1
.org 0x37ece
	ldr r0, [pc, #28]	@ 00037ece 0748
.org 0x37ed0
	adds r2, r4, r0	@ 00037ed0 2218
.org 0x37ed2
	movs r0, #0	@ 00037ed2 0020
.org 0x37ed4
	strb r1, [r2, #0]	@ 00037ed4 1170
.org 0x37ed6
	movs r2, #129	@ 00037ed6 8122
.org 0x37ed8
	lsls r2, r2, #1	@ 00037ed8 5200
.org 0x37eda
	adds r1, r4, r2	@ 00037eda a118
.org 0x37edc
	strb r0, [r1, #0]	@ 00037edc 0870
.org 0x37ede
	adds r0, r4, #0	@ 00037ede 201c
.org 0x37ee0
	bl 0x37f8c	@ 00037ee0 00f054f8
.org 0x37ee4
	b.n 0x37f08	@ 00037ee4 10e0
.org 0x37ee6
	.byte 0x00	@ 00037ee6 data
.org 0x37ee7
	.byte 0x00	@ 00037ee7 data
.org 0x37ee8
	.byte 0x6f,0x02,0x00,0x00	@ 00037ee8 data
.org 0x37eec
	.byte 0x01,0x01,0x00,0x00	@ 00037eec data
.org 0x37ef0
	ldr r0, [pc, #28]	@ 00037ef0 0748
.org 0x37ef2
	adds r2, r4, r0	@ 00037ef2 2218
.org 0x37ef4
	movs r1, #0	@ 00037ef4 0021
.org 0x37ef6
	movs r0, #1	@ 00037ef6 0120
.org 0x37ef8
	strb r0, [r2, #0]	@ 00037ef8 1070
.org 0x37efa
	movs r2, #129	@ 00037efa 8122
.org 0x37efc
	lsls r2, r2, #1	@ 00037efc 5200
.org 0x37efe
	adds r0, r4, r2	@ 00037efe a018
.org 0x37f00
	strb r1, [r0, #0]	@ 00037f00 0170
.org 0x37f02
	adds r0, r4, #0	@ 00037f02 201c
