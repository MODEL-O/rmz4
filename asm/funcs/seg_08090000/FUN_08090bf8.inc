@ FUN_08090bf8  entry 0x08090bf8  size 116
.thumb
.org 0x90bf8
FUN_08090bf8:
	push {r4, r5, r6, lr}	@ 00090bf8 70b5
.org 0x90bfa
	adds r5, r0, #0	@ 00090bfa 051c
.org 0x90bfc
	ldr r0, [r5, #40]	@ 00090bfc a86a
.org 0x90bfe
	ldrb r4, [r0, #10]	@ 00090bfe 847a
.org 0x90c00
	lsrs r4, r4, #4	@ 00090c00 2409
.org 0x90c02
	movs r2, #1	@ 00090c02 0122
.org 0x90c04
	ands r4, r2	@ 00090c04 1440
.org 0x90c06
	ldr r1, [pc, #48]	@ 00090c06 0c49
.org 0x90c08
	ldrb r0, [r5, #9]	@ 00090c08 687a
.org 0x90c0a
	lsls r0, r0, #2	@ 00090c0a 8000
.org 0x90c0c
	adds r0, r0, r1	@ 00090c0c 4018
.org 0x90c0e
	str r2, [r5, #12]	@ 00090c0e ea60
.org 0x90c10
	ldr r0, [r0, #0]	@ 00090c10 0068
.org 0x90c12
	ldr r0, [r0, #4]	@ 00090c12 4068
.org 0x90c14
	str r0, [r5, #20]	@ 00090c14 6861
.org 0x90c16
	ldrb r1, [r5, #10]	@ 00090c16 a97a
.org 0x90c18
	movs r0, #1	@ 00090c18 0120
.org 0x90c1a
	movs r6, #0	@ 00090c1a 0026
.org 0x90c1c
	orrs r0, r1	@ 00090c1c 0843
.org 0x90c1e
	movs r1, #2	@ 00090c1e 0221
.org 0x90c20
	orrs r0, r1	@ 00090c20 0843
.org 0x90c22
	strb r0, [r5, #10]	@ 00090c22 a872
.org 0x90c24
	adds r0, r5, #0	@ 00090c24 281c
.org 0x90c26
	bl 0x1cc9c	@ 00090c26 8cf739f8
.org 0x90c2a
	cmp r4, #0	@ 00090c2a 002c
.org 0x90c2c
	beq.n 0x90c3c	@ 00090c2c 06d0
.org 0x90c2e
	ldrb r0, [r5, #10]	@ 00090c2e a87a
.org 0x90c30
	movs r1, #16	@ 00090c30 1021
.org 0x90c32
	orrs r0, r1	@ 00090c32 0843
.org 0x90c34
	b.n 0x90c42	@ 00090c34 05e0
.org 0x90c36
	.byte 0x00	@ 00090c36 data
.org 0x90c37
	.byte 0x00	@ 00090c37 data
.org 0x90c38
	.byte 0x40,0xdb,0x85,0x08	@ 00090c38 data
.org 0x90c3c
	ldrb r1, [r5, #10]	@ 00090c3c a97a
.org 0x90c3e
	movs r0, #239	@ 00090c3e ef20
.org 0x90c40
	ands r0, r1	@ 00090c40 0840
.org 0x90c42
	strb r0, [r5, #10]	@ 00090c42 a872
.org 0x90c44
	adds r1, r4, #0	@ 00090c44 211c
.org 0x90c46
	adds r0, r5, #0	@ 00090c46 281c
.org 0x90c48
	adds r0, #76	@ 00090c48 4c30
.org 0x90c4a
	strb r1, [r0, #0]	@ 00090c4a 0170
.org 0x90c4c
	adds r3, r5, #0	@ 00090c4c 2b1c
.org 0x90c4e
	adds r3, #74	@ 00090c4e 4a33
.org 0x90c50
	lsls r1, r1, #4	@ 00090c50 0901
.org 0x90c52
	ldrb r2, [r3, #0]	@ 00090c52 1a78
.org 0x90c54
	movs r0, #17	@ 00090c54 1120
.org 0x90c56
	negs r0, r0	@ 00090c56 4042
.org 0x90c58
	ands r0, r2	@ 00090c58 1040
.org 0x90c5a
	orrs r0, r1	@ 00090c5a 0843
.org 0x90c5c
	strb r0, [r3, #0]	@ 00090c5c 1870
.org 0x90c5e
	ldr r1, [pc, #20]	@ 00090c5e 0549
.org 0x90c60
	adds r0, r5, #0	@ 00090c60 281c
.org 0x90c62
	bl 0x1cf00	@ 00090c62 8cf74df9
.org 0x90c66
	adds r0, r5, #0	@ 00090c66 281c
.org 0x90c68
	bl 0x90c78	@ 00090c68 00f006f8
