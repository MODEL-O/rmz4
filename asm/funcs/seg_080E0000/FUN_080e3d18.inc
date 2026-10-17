@ FUN_080e3d18  entry 0x080e3d18  size 108
.thumb
.org 0xe3d18
FUN_080e3d18:
	push {r4, lr}	@ 000e3d18 10b5
.org 0xe3d1a
	adds r4, r0, #0	@ 000e3d1a 041c
.org 0xe3d1c
	ldr r0, [r4, #84]	@ 000e3d1c 606d
.org 0xe3d1e
	ldr r1, [r4, #92]	@ 000e3d1e e16d
.org 0xe3d20
	adds r0, r0, r1	@ 000e3d20 4018
.org 0xe3d22
	str r0, [r4, #84]	@ 000e3d22 6065
.org 0xe3d24
	ldr r0, [r4, #88]	@ 000e3d24 a06d
.org 0xe3d26
	ldr r1, [r4, #96]	@ 000e3d26 216e
.org 0xe3d28
	adds r0, r0, r1	@ 000e3d28 4018
.org 0xe3d2a
	str r0, [r4, #88]	@ 000e3d2a a065
.org 0xe3d2c
	adds r1, #64	@ 000e3d2c 4031
.org 0xe3d2e
	str r1, [r4, #96]	@ 000e3d2e 2166
.org 0xe3d30
	adds r3, r4, #0	@ 000e3d30 231c
.org 0xe3d32
	adds r3, #116	@ 000e3d32 7433
.org 0xe3d34
	ldrb r0, [r3, #0]	@ 000e3d34 1878
.org 0xe3d36
	cmp r0, #0	@ 000e3d36 0028
.org 0xe3d38
	bne.n 0xe3d48	@ 000e3d38 06d1
.org 0xe3d3a
	ldrb r0, [r4, #10]	@ 000e3d3a a07a
.org 0xe3d3c
	movs r1, #254	@ 000e3d3c fe21
.org 0xe3d3e
	ands r1, r0	@ 000e3d3e 0140
.org 0xe3d40
	strb r1, [r4, #10]	@ 000e3d40 a172
.org 0xe3d42
	movs r0, #1	@ 000e3d42 0120
.org 0xe3d44
	strb r0, [r3, #0]	@ 000e3d44 1870
.org 0xe3d46
	b.n 0xe3d54	@ 000e3d46 05e0
.org 0xe3d48
	ldrb r0, [r4, #10]	@ 000e3d48 a07a
.org 0xe3d4a
	movs r1, #1	@ 000e3d4a 0121
.org 0xe3d4c
	movs r2, #0	@ 000e3d4c 0022
.org 0xe3d4e
	orrs r1, r0	@ 000e3d4e 0143
.org 0xe3d50
	strb r1, [r4, #10]	@ 000e3d50 a172
.org 0xe3d52
	strb r2, [r3, #0]	@ 000e3d52 1a70
.org 0xe3d54
	ldr r0, [r4, #84]	@ 000e3d54 606d
.org 0xe3d56
	ldr r1, [r4, #88]	@ 000e3d56 a16d
.org 0xe3d58
	bl 0x7c7c	@ 000e3d58 23f790ff
.org 0xe3d5c
	lsls r0, r0, #16	@ 000e3d5c 0004
.org 0xe3d5e
	cmp r0, #0	@ 000e3d5e 0028
.org 0xe3d60
	beq.n 0xe3d7e	@ 000e3d60 0dd0
.org 0xe3d62
	adds r1, r4, #0	@ 000e3d62 211c
.org 0xe3d64
	adds r1, #84	@ 000e3d64 5431
.org 0xe3d66
	movs r0, #3	@ 000e3d66 0320
.org 0xe3d68
	bl 0xd0c88	@ 000e3d68 ecf78eff
.org 0xe3d6c
	ldr r1, [pc, #20]	@ 000e3d6c 0549
.org 0xe3d6e
	ldrb r0, [r4, #9]	@ 000e3d6e 607a
.org 0xe3d70
	lsls r0, r0, #2	@ 000e3d70 8000
.org 0xe3d72
	adds r0, r0, r1	@ 000e3d72 4018
.org 0xe3d74
	movs r1, #2	@ 000e3d74 0221
.org 0xe3d76
	str r1, [r4, #12]	@ 000e3d76 e160
.org 0xe3d78
	ldr r0, [r0, #0]	@ 000e3d78 0068
.org 0xe3d7a
	ldr r0, [r0, #8]	@ 000e3d7a 8068
.org 0xe3d7c
	str r0, [r4, #20]	@ 000e3d7c 6061
.org 0xe3d7e
	pop {r4}	@ 000e3d7e 10bc
.org 0xe3d80
	pop {r0}	@ 000e3d80 01bc
.org 0xe3d82
	bx r0	@ 000e3d82 0047
