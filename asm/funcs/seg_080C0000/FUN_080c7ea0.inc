@ FUN_080c7ea0  entry 0x080c7ea0  size 158
.thumb
.org 0xc7ea0
FUN_080c7ea0:
	push {r4, r5, r6, lr}	@ 000c7ea0 70b5
.org 0xc7ea2
	adds r6, r0, #0	@ 000c7ea2 061c
.org 0xc7ea4
	ldrb r4, [r6, #17]	@ 000c7ea4 747c
.org 0xc7ea6
	ldr r0, [pc, #64]	@ 000c7ea6 1048
.org 0xc7ea8
	bl 0x2b10	@ 000c7ea8 3af732fe
.org 0xc7eac
	ldr r1, [pc, #60]	@ 000c7eac 0f49
.org 0xc7eae
	ldrb r0, [r6, #9]	@ 000c7eae 707a
.org 0xc7eb0
	lsls r0, r0, #2	@ 000c7eb0 8000
.org 0xc7eb2
	adds r0, r0, r1	@ 000c7eb2 4018
.org 0xc7eb4
	movs r1, #1	@ 000c7eb4 0121
.org 0xc7eb6
	str r1, [r6, #12]	@ 000c7eb6 f160
.org 0xc7eb8
	ldr r0, [r0, #0]	@ 000c7eb8 0068
.org 0xc7eba
	ldr r0, [r0, #4]	@ 000c7eba 4068
.org 0xc7ebc
	str r0, [r6, #20]	@ 000c7ebc 7061
.org 0xc7ebe
	ldrb r1, [r6, #10]	@ 000c7ebe b17a
.org 0xc7ec0
	movs r0, #1	@ 000c7ec0 0120
.org 0xc7ec2
	movs r5, #0	@ 000c7ec2 0025
.org 0xc7ec4
	movs r2, #0	@ 000c7ec4 0022
.org 0xc7ec6
	orrs r0, r1	@ 000c7ec6 0843
.org 0xc7ec8
	movs r1, #2	@ 000c7ec8 0221
.org 0xc7eca
	orrs r0, r1	@ 000c7eca 0843
.org 0xc7ecc
	strb r0, [r6, #10]	@ 000c7ecc b072
.org 0xc7ece
	adds r0, r6, #0	@ 000c7ece 301c
.org 0xc7ed0
	adds r0, #180	@ 000c7ed0 b430
.org 0xc7ed2
	strb r2, [r0, #0]	@ 000c7ed2 0270
.org 0xc7ed4
	adds r0, r6, #0	@ 000c7ed4 301c
.org 0xc7ed6
	bl 0x1cc9c	@ 000c7ed6 54f7e1fe
.org 0xc7eda
	cmp r4, #0	@ 000c7eda 002c
.org 0xc7edc
	beq.n 0xc7ef0	@ 000c7edc 08d0
.org 0xc7ede
	ldrb r0, [r6, #10]	@ 000c7ede b07a
.org 0xc7ee0
	movs r1, #16	@ 000c7ee0 1021
.org 0xc7ee2
	orrs r0, r1	@ 000c7ee2 0843
.org 0xc7ee4
	b.n 0xc7ef6	@ 000c7ee4 07e0
.org 0xc7ee6
	.byte 0x00	@ 000c7ee6 data
.org 0xc7ee7
	.byte 0x00	@ 000c7ee7 data
.org 0xc7ee8
	.byte 0x93,0x01,0x00,0x00	@ 000c7ee8 data
.org 0xc7eec
	.byte 0xf4,0x49,0x86,0x08	@ 000c7eec data
.org 0xc7ef0
	ldrb r1, [r6, #10]	@ 000c7ef0 b17a
.org 0xc7ef2
	movs r0, #239	@ 000c7ef2 ef20
.org 0xc7ef4
	ands r0, r1	@ 000c7ef4 0840
.org 0xc7ef6
	strb r0, [r6, #10]	@ 000c7ef6 b072
.org 0xc7ef8
	movs r1, #1	@ 000c7ef8 0121
.org 0xc7efa
	ands r1, r4	@ 000c7efa 2140
.org 0xc7efc
	adds r0, r6, #0	@ 000c7efc 301c
.org 0xc7efe
	adds r0, #76	@ 000c7efe 4c30
.org 0xc7f00
	movs r5, #0	@ 000c7f00 0025
.org 0xc7f02
	strb r1, [r0, #0]	@ 000c7f02 0170
.org 0xc7f04
	adds r3, r6, #0	@ 000c7f04 331c
.org 0xc7f06
	adds r3, #74	@ 000c7f06 4a33
.org 0xc7f08
	lsls r1, r1, #4	@ 000c7f08 0901
.org 0xc7f0a
	ldrb r2, [r3, #0]	@ 000c7f0a 1a78
.org 0xc7f0c
	movs r0, #17	@ 000c7f0c 1120
.org 0xc7f0e
	negs r0, r0	@ 000c7f0e 4042
.org 0xc7f10
	ands r0, r2	@ 000c7f10 1040
.org 0xc7f12
	orrs r0, r1	@ 000c7f12 0843
.org 0xc7f14
	strb r0, [r3, #0]	@ 000c7f14 1870
.org 0xc7f16
	ldr r1, [pc, #48]	@ 000c7f16 0c49
.org 0xc7f18
	adds r0, r6, #0	@ 000c7f18 301c
.org 0xc7f1a
	bl 0x1cf00	@ 000c7f1a 54f7f1ff
.org 0xc7f1e
	ldrb r1, [r6, #10]	@ 000c7f1e b17a
.org 0xc7f20
	movs r0, #4	@ 000c7f20 0420
.org 0xc7f22
	orrs r0, r1	@ 000c7f22 0843
.org 0xc7f24
	strb r0, [r6, #10]	@ 000c7f24 b072
.org 0xc7f26
	adds r4, r6, #0	@ 000c7f26 341c
.org 0xc7f28
	adds r4, #116	@ 000c7f28 7434
.org 0xc7f2a
	ldr r1, [pc, #32]	@ 000c7f2a 0849
.org 0xc7f2c
	adds r2, r6, #0	@ 000c7f2c 321c
.org 0xc7f2e
	adds r2, #84	@ 000c7f2e 5432
.org 0xc7f30
	adds r0, r4, #0	@ 000c7f30 201c
.org 0xc7f32
	movs r3, #64	@ 000c7f32 4023
.org 0xc7f34
	bl 0x5760	@ 000c7f34 3df714fc
.org 0xc7f38
	str r6, [r4, #44]	@ 000c7f38 e662
.org 0xc7f3a
	str r5, [r4, #36]	@ 000c7f3a 6562
.org 0xc7f3c
	adds r0, r6, #0	@ 000c7f3c 301c
