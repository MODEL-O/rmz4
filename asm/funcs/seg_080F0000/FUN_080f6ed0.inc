@ FUN_080f6ed0  entry 0x080f6ed0  size 124
.thumb
.org 0xf6ed0
FUN_080f6ed0:
	push {r4, r5, r6, lr}	@ 000f6ed0 70b5
.org 0xf6ed2
	adds r5, r0, #0	@ 000f6ed2 051c
.org 0xf6ed4
	ldrb r4, [r5, #17]	@ 000f6ed4 6c7c
.org 0xf6ed6
	ldr r1, [pc, #68]	@ 000f6ed6 1149
.org 0xf6ed8
	ldrb r0, [r5, #9]	@ 000f6ed8 687a
.org 0xf6eda
	lsls r0, r0, #2	@ 000f6eda 8000
.org 0xf6edc
	adds r0, r0, r1	@ 000f6edc 4018
.org 0xf6ede
	movs r1, #1	@ 000f6ede 0121
.org 0xf6ee0
	str r1, [r5, #12]	@ 000f6ee0 e960
.org 0xf6ee2
	ldr r0, [r0, #0]	@ 000f6ee2 0068
.org 0xf6ee4
	ldr r0, [r0, #4]	@ 000f6ee4 4068
.org 0xf6ee6
	str r0, [r5, #20]	@ 000f6ee6 6861
.org 0xf6ee8
	ldrb r1, [r5, #10]	@ 000f6ee8 a97a
.org 0xf6eea
	movs r0, #1	@ 000f6eea 0120
.org 0xf6eec
	movs r6, #0	@ 000f6eec 0026
.org 0xf6eee
	movs r2, #0	@ 000f6eee 0022
.org 0xf6ef0
	orrs r0, r1	@ 000f6ef0 0843
.org 0xf6ef2
	movs r1, #2	@ 000f6ef2 0221
.org 0xf6ef4
	orrs r0, r1	@ 000f6ef4 0843
.org 0xf6ef6
	strb r0, [r5, #10]	@ 000f6ef6 a872
.org 0xf6ef8
	adds r0, r5, #0	@ 000f6ef8 281c
.org 0xf6efa
	adds r0, #180	@ 000f6efa b430
.org 0xf6efc
	strb r2, [r0, #0]	@ 000f6efc 0270
.org 0xf6efe
	adds r0, #4	@ 000f6efe 0430
.org 0xf6f00
	str r2, [r0, #0]	@ 000f6f00 0260
.org 0xf6f02
	adds r0, r5, #0	@ 000f6f02 281c
.org 0xf6f04
	bl 0x1cc9c	@ 000f6f04 25f7cafe
.org 0xf6f08
	adds r1, r5, #0	@ 000f6f08 291c
.org 0xf6f0a
	adds r1, #37	@ 000f6f0a 2531
.org 0xf6f0c
	movs r0, #7	@ 000f6f0c 0720
.org 0xf6f0e
	strb r0, [r1, #0]	@ 000f6f0e 0870
.org 0xf6f10
	cmp r4, #0	@ 000f6f10 002c
.org 0xf6f12
	beq.n 0xf6f20	@ 000f6f12 05d0
.org 0xf6f14
	ldrb r0, [r5, #10]	@ 000f6f14 a87a
.org 0xf6f16
	movs r1, #16	@ 000f6f16 1021
.org 0xf6f18
	orrs r0, r1	@ 000f6f18 0843
.org 0xf6f1a
	b.n 0xf6f26	@ 000f6f1a 04e0
.org 0xf6f1c
	.byte 0xfc,0x92,0x86,0x08	@ 000f6f1c data
.org 0xf6f20
	ldrb r1, [r5, #10]	@ 000f6f20 a97a
.org 0xf6f22
	movs r0, #239	@ 000f6f22 ef20
.org 0xf6f24
	ands r0, r1	@ 000f6f24 0840
.org 0xf6f26
	strb r0, [r5, #10]	@ 000f6f26 a872
.org 0xf6f28
	movs r1, #1	@ 000f6f28 0121
.org 0xf6f2a
	ands r1, r4	@ 000f6f2a 2140
.org 0xf6f2c
	adds r0, r5, #0	@ 000f6f2c 281c
.org 0xf6f2e
	adds r0, #76	@ 000f6f2e 4c30
.org 0xf6f30
	strb r1, [r0, #0]	@ 000f6f30 0170
.org 0xf6f32
	adds r3, r5, #0	@ 000f6f32 2b1c
.org 0xf6f34
	adds r3, #74	@ 000f6f34 4a33
.org 0xf6f36
	lsls r1, r1, #4	@ 000f6f36 0901
.org 0xf6f38
	ldrb r2, [r3, #0]	@ 000f6f38 1a78
.org 0xf6f3a
	movs r0, #17	@ 000f6f3a 1120
.org 0xf6f3c
	negs r0, r0	@ 000f6f3c 4042
.org 0xf6f3e
	ands r0, r2	@ 000f6f3e 1040
.org 0xf6f40
	orrs r0, r1	@ 000f6f40 0843
.org 0xf6f42
	strb r0, [r3, #0]	@ 000f6f42 1870
.org 0xf6f44
	adds r0, r5, #0	@ 000f6f44 281c
.org 0xf6f46
	bl 0xf6f50	@ 000f6f46 00f003f8
.org 0xf6f4a
	pop {r4, r5, r6}	@ 000f6f4a 70bc
