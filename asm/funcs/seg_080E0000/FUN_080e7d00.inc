@ FUN_080e7d00  entry 0x080e7d00  size 108
.thumb
.org 0xe7d00
FUN_080e7d00:
	push {r4, lr}	@ 000e7d00 10b5
.org 0xe7d02
	adds r4, r0, #0	@ 000e7d02 041c
.org 0xe7d04
	ldr r0, [r4, #84]	@ 000e7d04 606d
.org 0xe7d06
	ldr r1, [r4, #92]	@ 000e7d06 e16d
.org 0xe7d08
	adds r0, r0, r1	@ 000e7d08 4018
.org 0xe7d0a
	str r0, [r4, #84]	@ 000e7d0a 6065
.org 0xe7d0c
	ldr r0, [r4, #88]	@ 000e7d0c a06d
.org 0xe7d0e
	ldr r1, [r4, #96]	@ 000e7d0e 216e
.org 0xe7d10
	adds r0, r0, r1	@ 000e7d10 4018
.org 0xe7d12
	str r0, [r4, #88]	@ 000e7d12 a065
.org 0xe7d14
	adds r1, #64	@ 000e7d14 4031
.org 0xe7d16
	str r1, [r4, #96]	@ 000e7d16 2166
.org 0xe7d18
	adds r3, r4, #0	@ 000e7d18 231c
.org 0xe7d1a
	adds r3, #116	@ 000e7d1a 7433
.org 0xe7d1c
	ldrb r0, [r3, #0]	@ 000e7d1c 1878
.org 0xe7d1e
	cmp r0, #0	@ 000e7d1e 0028
.org 0xe7d20
	bne.n 0xe7d30	@ 000e7d20 06d1
.org 0xe7d22
	ldrb r0, [r4, #10]	@ 000e7d22 a07a
.org 0xe7d24
	movs r1, #254	@ 000e7d24 fe21
.org 0xe7d26
	ands r1, r0	@ 000e7d26 0140
.org 0xe7d28
	strb r1, [r4, #10]	@ 000e7d28 a172
.org 0xe7d2a
	movs r0, #1	@ 000e7d2a 0120
.org 0xe7d2c
	strb r0, [r3, #0]	@ 000e7d2c 1870
.org 0xe7d2e
	b.n 0xe7d3c	@ 000e7d2e 05e0
.org 0xe7d30
	ldrb r0, [r4, #10]	@ 000e7d30 a07a
.org 0xe7d32
	movs r1, #1	@ 000e7d32 0121
.org 0xe7d34
	movs r2, #0	@ 000e7d34 0022
.org 0xe7d36
	orrs r1, r0	@ 000e7d36 0143
.org 0xe7d38
	strb r1, [r4, #10]	@ 000e7d38 a172
.org 0xe7d3a
	strb r2, [r3, #0]	@ 000e7d3a 1a70
.org 0xe7d3c
	ldr r0, [r4, #84]	@ 000e7d3c 606d
.org 0xe7d3e
	ldr r1, [r4, #88]	@ 000e7d3e a16d
.org 0xe7d40
	bl 0x7c7c	@ 000e7d40 1ff79cff
.org 0xe7d44
	lsls r0, r0, #16	@ 000e7d44 0004
.org 0xe7d46
	cmp r0, #0	@ 000e7d46 0028
.org 0xe7d48
	beq.n 0xe7d66	@ 000e7d48 0dd0
.org 0xe7d4a
	adds r1, r4, #0	@ 000e7d4a 211c
.org 0xe7d4c
	adds r1, #84	@ 000e7d4c 5431
.org 0xe7d4e
	movs r0, #3	@ 000e7d4e 0320
.org 0xe7d50
	bl 0xd0c88	@ 000e7d50 e8f79aff
.org 0xe7d54
	ldr r1, [pc, #20]	@ 000e7d54 0549
.org 0xe7d56
	ldrb r0, [r4, #9]	@ 000e7d56 607a
.org 0xe7d58
	lsls r0, r0, #2	@ 000e7d58 8000
.org 0xe7d5a
	adds r0, r0, r1	@ 000e7d5a 4018
.org 0xe7d5c
	movs r1, #2	@ 000e7d5c 0221
.org 0xe7d5e
	str r1, [r4, #12]	@ 000e7d5e e160
.org 0xe7d60
	ldr r0, [r0, #0]	@ 000e7d60 0068
.org 0xe7d62
	ldr r0, [r0, #8]	@ 000e7d62 8068
.org 0xe7d64
	str r0, [r4, #20]	@ 000e7d64 6061
.org 0xe7d66
	pop {r4}	@ 000e7d66 10bc
.org 0xe7d68
	pop {r0}	@ 000e7d68 01bc
.org 0xe7d6a
	bx r0	@ 000e7d6a 0047
