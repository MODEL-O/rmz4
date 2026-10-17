@ FUN_080e35c0  entry 0x080e35c0  size 108
.thumb
.org 0xe35c0
FUN_080e35c0:
	push {r4, lr}	@ 000e35c0 10b5
.org 0xe35c2
	adds r4, r0, #0	@ 000e35c2 041c
.org 0xe35c4
	ldr r0, [r4, #84]	@ 000e35c4 606d
.org 0xe35c6
	ldr r1, [r4, #92]	@ 000e35c6 e16d
.org 0xe35c8
	adds r0, r0, r1	@ 000e35c8 4018
.org 0xe35ca
	str r0, [r4, #84]	@ 000e35ca 6065
.org 0xe35cc
	ldr r0, [r4, #88]	@ 000e35cc a06d
.org 0xe35ce
	ldr r1, [r4, #96]	@ 000e35ce 216e
.org 0xe35d0
	adds r0, r0, r1	@ 000e35d0 4018
.org 0xe35d2
	str r0, [r4, #88]	@ 000e35d2 a065
.org 0xe35d4
	adds r1, #64	@ 000e35d4 4031
.org 0xe35d6
	str r1, [r4, #96]	@ 000e35d6 2166
.org 0xe35d8
	adds r3, r4, #0	@ 000e35d8 231c
.org 0xe35da
	adds r3, #116	@ 000e35da 7433
.org 0xe35dc
	ldrb r0, [r3, #0]	@ 000e35dc 1878
.org 0xe35de
	cmp r0, #0	@ 000e35de 0028
.org 0xe35e0
	bne.n 0xe35f0	@ 000e35e0 06d1
.org 0xe35e2
	ldrb r0, [r4, #10]	@ 000e35e2 a07a
.org 0xe35e4
	movs r1, #254	@ 000e35e4 fe21
.org 0xe35e6
	ands r1, r0	@ 000e35e6 0140
.org 0xe35e8
	strb r1, [r4, #10]	@ 000e35e8 a172
.org 0xe35ea
	movs r0, #1	@ 000e35ea 0120
.org 0xe35ec
	strb r0, [r3, #0]	@ 000e35ec 1870
.org 0xe35ee
	b.n 0xe35fc	@ 000e35ee 05e0
.org 0xe35f0
	ldrb r0, [r4, #10]	@ 000e35f0 a07a
.org 0xe35f2
	movs r1, #1	@ 000e35f2 0121
.org 0xe35f4
	movs r2, #0	@ 000e35f4 0022
.org 0xe35f6
	orrs r1, r0	@ 000e35f6 0143
.org 0xe35f8
	strb r1, [r4, #10]	@ 000e35f8 a172
.org 0xe35fa
	strb r2, [r3, #0]	@ 000e35fa 1a70
.org 0xe35fc
	ldr r0, [r4, #84]	@ 000e35fc 606d
.org 0xe35fe
	ldr r1, [r4, #88]	@ 000e35fe a16d
.org 0xe3600
	bl 0x7c7c	@ 000e3600 24f73cfb
.org 0xe3604
	lsls r0, r0, #16	@ 000e3604 0004
.org 0xe3606
	cmp r0, #0	@ 000e3606 0028
.org 0xe3608
	beq.n 0xe3626	@ 000e3608 0dd0
.org 0xe360a
	adds r1, r4, #0	@ 000e360a 211c
.org 0xe360c
	adds r1, #84	@ 000e360c 5431
.org 0xe360e
	movs r0, #3	@ 000e360e 0320
.org 0xe3610
	bl 0xd0c88	@ 000e3610 edf73afb
.org 0xe3614
	ldr r1, [pc, #20]	@ 000e3614 0549
.org 0xe3616
	ldrb r0, [r4, #9]	@ 000e3616 607a
.org 0xe3618
	lsls r0, r0, #2	@ 000e3618 8000
.org 0xe361a
	adds r0, r0, r1	@ 000e361a 4018
.org 0xe361c
	movs r1, #2	@ 000e361c 0221
.org 0xe361e
	str r1, [r4, #12]	@ 000e361e e160
.org 0xe3620
	ldr r0, [r0, #0]	@ 000e3620 0068
.org 0xe3622
	ldr r0, [r0, #8]	@ 000e3622 8068
.org 0xe3624
	str r0, [r4, #20]	@ 000e3624 6061
.org 0xe3626
	pop {r4}	@ 000e3626 10bc
.org 0xe3628
	pop {r0}	@ 000e3628 01bc
.org 0xe362a
	bx r0	@ 000e362a 0047
