@ FUN_080e7dfc  entry 0x080e7dfc  size 164
.thumb
.org 0xe7dfc
FUN_080e7dfc:
	push {r4, lr}	@ 000e7dfc 10b5
.org 0xe7dfe
	adds r4, r0, #0	@ 000e7dfe 041c
.org 0xe7e00
	bl 0x1cd28	@ 000e7e00 34f792ff
.org 0xe7e04
	ldrb r1, [r4, #10]	@ 000e7e04 a17a
.org 0xe7e06
	movs r0, #1	@ 000e7e06 0120
.org 0xe7e08
	adds r2, r0, #0	@ 000e7e08 021c
.org 0xe7e0a
	orrs r2, r1	@ 000e7e0a 0a43
.org 0xe7e0c
	movs r0, #2	@ 000e7e0c 0220
.org 0xe7e0e
	orrs r2, r0	@ 000e7e0e 0243
.org 0xe7e10
	strb r2, [r4, #10]	@ 000e7e10 a272
.org 0xe7e12
	ldr r1, [pc, #140]	@ 000e7e12 2349
.org 0xe7e14
	ldrb r0, [r4, #9]	@ 000e7e14 607a
.org 0xe7e16
	lsls r0, r0, #2	@ 000e7e16 8000
.org 0xe7e18
	adds r0, r0, r1	@ 000e7e18 4018
.org 0xe7e1a
	movs r3, #1	@ 000e7e1a 0123
.org 0xe7e1c
	str r3, [r4, #12]	@ 000e7e1c e360
.org 0xe7e1e
	ldr r0, [r0, #0]	@ 000e7e1e 0068
.org 0xe7e20
	ldr r0, [r0, #4]	@ 000e7e20 4068
.org 0xe7e22
	str r0, [r4, #20]	@ 000e7e22 6061
.org 0xe7e24
	ldrb r0, [r4, #17]	@ 000e7e24 607c
.org 0xe7e26
	cmp r0, #0	@ 000e7e26 0028
.org 0xe7e28
	bne.n 0xe7e72	@ 000e7e28 23d1
.org 0xe7e2a
	ldrb r1, [r4, #16]	@ 000e7e2a 217c
.org 0xe7e2c
	subs r0, r1, #1	@ 000e7e2c 481e
.org 0xe7e2e
	lsls r0, r0, #24	@ 000e7e2e 0006
.org 0xe7e30
	lsrs r0, r0, #24	@ 000e7e30 000e
.org 0xe7e32
	cmp r0, #1	@ 000e7e32 0128
.org 0xe7e34
	bhi.n 0xe7e4c	@ 000e7e34 0ad8
.org 0xe7e36
	movs r0, #16	@ 000e7e36 1020
.org 0xe7e38
	ands r2, r0	@ 000e7e38 0240
.org 0xe7e3a
	cmp r2, #0	@ 000e7e3a 002a
.org 0xe7e3c
	bne.n 0xe7e4c	@ 000e7e3c 06d1
.org 0xe7e3e
	adds r0, r1, #1	@ 000e7e3e 481c
.org 0xe7e40
	strb r0, [r4, #16]	@ 000e7e40 2074
.org 0xe7e42
	lsls r0, r0, #24	@ 000e7e42 0006
.org 0xe7e44
	lsrs r0, r0, #24	@ 000e7e44 000e
.org 0xe7e46
	cmp r0, #2	@ 000e7e46 0228
.org 0xe7e48
	bls.n 0xe7e4c	@ 000e7e48 00d9
.org 0xe7e4a
	strb r3, [r4, #16]	@ 000e7e4a 2374
.org 0xe7e4c
	ldrb r0, [r4, #17]	@ 000e7e4c 607c
.org 0xe7e4e
	cmp r0, #0	@ 000e7e4e 0028
.org 0xe7e50
	bne.n 0xe7e72	@ 000e7e50 0fd1
.org 0xe7e52
	adds r0, r4, #0	@ 000e7e52 201c
.org 0xe7e54
	adds r0, #84	@ 000e7e54 5430
.org 0xe7e56
	ldrb r1, [r4, #16]	@ 000e7e56 217c
.org 0xe7e58
	lsls r1, r1, #8	@ 000e7e58 0902
.org 0xe7e5a
	movs r2, #1	@ 000e7e5a 0122
.org 0xe7e5c
	orrs r1, r2	@ 000e7e5c 1143
.org 0xe7e5e
	ldrb r2, [r4, #10]	@ 000e7e5e a27a
.org 0xe7e60
	lsrs r2, r2, #4	@ 000e7e60 1209
.org 0xe7e62
	movs r3, #1	@ 000e7e62 0123
.org 0xe7e64
	ands r2, r3	@ 000e7e64 1a40
.org 0xe7e66
	bl 0xe7d70	@ 000e7e66 fff783ff
.org 0xe7e6a
	adds r1, r4, #0	@ 000e7e6a 211c
.org 0xe7e6c
	adds r1, #37	@ 000e7e6c 2531
.org 0xe7e6e
	movs r0, #24	@ 000e7e6e 1820
.org 0xe7e70
	strb r0, [r1, #0]	@ 000e7e70 0870
.org 0xe7e72
	ldr r1, [pc, #48]	@ 000e7e72 0c49
.org 0xe7e74
	ldrb r0, [r4, #16]	@ 000e7e74 207c
.org 0xe7e76
	lsls r0, r0, #2	@ 000e7e76 8000
.org 0xe7e78
	adds r0, r0, r1	@ 000e7e78 4018
.org 0xe7e7a
	ldr r1, [r0, #0]	@ 000e7e7a 0168
.org 0xe7e7c
	adds r0, r4, #0	@ 000e7e7c 201c
.org 0xe7e7e
	bl 0x128f80	@ 000e7e7e 41f07ff8
.org 0xe7e82
	movs r0, #0	@ 000e7e82 0020
.org 0xe7e84
	strb r0, [r4, #14]	@ 000e7e84 a073
.org 0xe7e86
	strb r0, [r4, #18]	@ 000e7e86 a074
.org 0xe7e88
	adds r1, r4, #0	@ 000e7e88 211c
.org 0xe7e8a
	adds r1, #124	@ 000e7e8a 7c31
.org 0xe7e8c
	strb r0, [r1, #0]	@ 000e7e8c 0870
.org 0xe7e8e
	adds r1, #1	@ 000e7e8e 0131
.org 0xe7e90
	movs r0, #1	@ 000e7e90 0120
.org 0xe7e92
	strb r0, [r1, #0]	@ 000e7e92 0870
.org 0xe7e94
	adds r0, r4, #0	@ 000e7e94 201c
.org 0xe7e96
	bl 0xe7ea8	@ 000e7e96 00f007f8
.org 0xe7e9a
	pop {r4}	@ 000e7e9a 10bc
.org 0xe7e9c
	pop {r0}	@ 000e7e9c 01bc
.org 0xe7e9e
	bx r0	@ 000e7e9e 0047
