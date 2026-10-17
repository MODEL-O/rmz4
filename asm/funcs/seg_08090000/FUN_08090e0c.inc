@ FUN_08090e0c  entry 0x08090e0c  size 78
.thumb
.org 0x90e0c
FUN_08090e0c:
	push {r4, r5, lr}	@ 00090e0c 30b5
.org 0x90e0e
	adds r5, r0, #0	@ 00090e0e 051c
.org 0x90e10
	ldr r0, [pc, #72]	@ 00090e10 1248
.org 0x90e12
	ldr r0, [r0, #0]	@ 00090e12 0068
.org 0x90e14
	bl 0x5500	@ 00090e14 74f774fb
.org 0x90e18
	adds r4, r0, #0	@ 00090e18 041c
.org 0x90e1a
	cmp r4, #0	@ 00090e1a 002c
.org 0x90e1c
	beq.n 0x90e52	@ 00090e1c 19d0
.org 0x90e1e
	adds r1, r4, #0	@ 00090e1e 211c
.org 0x90e20
	adds r1, #37	@ 00090e20 2531
.org 0x90e22
	movs r3, #0	@ 00090e22 0023
.org 0x90e24
	movs r0, #24	@ 00090e24 1820
.org 0x90e26
	strb r0, [r1, #0]	@ 00090e26 0870
.org 0x90e28
	ldr r1, [pc, #52]	@ 00090e28 0d49
.org 0x90e2a
	movs r0, #22	@ 00090e2a 1620
.org 0x90e2c
	strb r0, [r4, #9]	@ 00090e2c 6072
.org 0x90e2e
	ldr r0, [r1, #88]	@ 00090e2e 886d
.org 0x90e30
	ldr r0, [r0, #0]	@ 00090e30 0068
.org 0x90e32
	str r0, [r4, #20]	@ 00090e32 6061
.org 0x90e34
	movs r2, #0	@ 00090e34 0022
.org 0x90e36
	strh r3, [r4, #32]	@ 00090e36 2384
.org 0x90e38
	adds r0, r4, #0	@ 00090e38 201c
.org 0x90e3a
	adds r0, #34	@ 00090e3a 2230
.org 0x90e3c
	strb r2, [r0, #0]	@ 00090e3c 0270
.org 0x90e3e
	ldrb r1, [r4, #11]	@ 00090e3e e17a
.org 0x90e40
	movs r0, #16	@ 00090e40 1020
.org 0x90e42
	orrs r0, r1	@ 00090e42 0843
.org 0x90e44
	strb r0, [r4, #11]	@ 00090e44 e072
.org 0x90e46
	ldrb r0, [r4, #28]	@ 00090e46 207f
.org 0x90e48
	strb r0, [r4, #29]	@ 00090e48 6077
.org 0x90e4a
	str r5, [r4, #40]	@ 00090e4a a562
.org 0x90e4c
	movs r0, #1	@ 00090e4c 0120
.org 0x90e4e
	strb r0, [r4, #16]	@ 00090e4e 2074
.org 0x90e50
	strb r2, [r4, #17]	@ 00090e50 6274
.org 0x90e52
	adds r0, r4, #0	@ 00090e52 201c
.org 0x90e54
	pop {r4, r5}	@ 00090e54 30bc
.org 0x90e56
	pop {r1}	@ 00090e56 02bc
.org 0x90e58
	bx r1	@ 00090e58 0847
