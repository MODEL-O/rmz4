@ FUN_080d6cf4  entry 0x080d6cf4  size 100
.thumb
.org 0xd6cf4
FUN_080d6cf4:
	push {r4, lr}	@ 000d6cf4 10b5
.org 0xd6cf6
	adds r4, r0, #0	@ 000d6cf6 041c
.org 0xd6cf8
	bl 0x1cff0	@ 000d6cf8 46f77af9
.org 0xd6cfc
	ldrb r0, [r4, #18]	@ 000d6cfc a07c
.org 0xd6cfe
	adds r0, #1	@ 000d6cfe 0130
.org 0xd6d00
	strb r0, [r4, #18]	@ 000d6d00 a074
.org 0xd6d02
	movs r1, #1	@ 000d6d02 0121
.org 0xd6d04
	ands r0, r1	@ 000d6d04 0840
.org 0xd6d06
	cmp r0, #0	@ 000d6d06 0028
.org 0xd6d08
	beq.n 0xd6d10	@ 000d6d08 02d0
.org 0xd6d0a
	ldrb r0, [r4, #10]	@ 000d6d0a a07a
.org 0xd6d0c
	orrs r0, r1	@ 000d6d0c 0843
.org 0xd6d0e
	b.n 0xd6d16	@ 000d6d0e 02e0
.org 0xd6d10
	ldrb r1, [r4, #10]	@ 000d6d10 a17a
.org 0xd6d12
	movs r0, #254	@ 000d6d12 fe20
.org 0xd6d14
	ands r0, r1	@ 000d6d14 0840
.org 0xd6d16
	strb r0, [r4, #10]	@ 000d6d16 a072
.org 0xd6d18
	ldr r0, [r4, #84]	@ 000d6d18 606d
.org 0xd6d1a
	ldr r1, [r4, #92]	@ 000d6d1a e16d
.org 0xd6d1c
	adds r0, r0, r1	@ 000d6d1c 4018
.org 0xd6d1e
	str r0, [r4, #84]	@ 000d6d1e 6065
.org 0xd6d20
	ldr r1, [r4, #88]	@ 000d6d20 a16d
.org 0xd6d22
	ldr r2, [r4, #96]	@ 000d6d22 226e
.org 0xd6d24
	adds r1, r1, r2	@ 000d6d24 8918
.org 0xd6d26
	str r1, [r4, #88]	@ 000d6d26 a165
.org 0xd6d28
	adds r2, #64	@ 000d6d28 4032
.org 0xd6d2a
	str r2, [r4, #96]	@ 000d6d2a 2266
.org 0xd6d2c
	bl 0x7c7c	@ 000d6d2c 30f7a6ff
.org 0xd6d30
	lsls r0, r0, #16	@ 000d6d30 0004
.org 0xd6d32
	cmp r0, #0	@ 000d6d32 0028
.org 0xd6d34
	beq.n 0xd6d52	@ 000d6d34 0dd0
.org 0xd6d36
	adds r1, r4, #0	@ 000d6d36 211c
.org 0xd6d38
	adds r1, #84	@ 000d6d38 5431
.org 0xd6d3a
	movs r0, #3	@ 000d6d3a 0320
.org 0xd6d3c
	bl 0xd0c88	@ 000d6d3c f9f7a4ff
.org 0xd6d40
	ldr r1, [pc, #20]	@ 000d6d40 0549
.org 0xd6d42
	ldrb r0, [r4, #9]	@ 000d6d42 607a
.org 0xd6d44
	lsls r0, r0, #2	@ 000d6d44 8000
.org 0xd6d46
	adds r0, r0, r1	@ 000d6d46 4018
.org 0xd6d48
	movs r1, #2	@ 000d6d48 0221
.org 0xd6d4a
	str r1, [r4, #12]	@ 000d6d4a e160
.org 0xd6d4c
	ldr r0, [r0, #0]	@ 000d6d4c 0068
.org 0xd6d4e
	ldr r0, [r0, #8]	@ 000d6d4e 8068
.org 0xd6d50
	str r0, [r4, #20]	@ 000d6d50 6061
.org 0xd6d52
	pop {r4}	@ 000d6d52 10bc
.org 0xd6d54
	pop {r0}	@ 000d6d54 01bc
.org 0xd6d56
	bx r0	@ 000d6d56 0047
