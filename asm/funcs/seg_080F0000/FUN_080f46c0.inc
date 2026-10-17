@ FUN_080f46c0  entry 0x080f46c0  size 112
.thumb
.org 0xf46c0
FUN_080f46c0:
	push {r4, r5, lr}	@ 000f46c0 30b5
.org 0xf46c2
	adds r5, r0, #0	@ 000f46c2 051c
.org 0xf46c4
	bl 0x1cd28	@ 000f46c4 28f730fb
.org 0xf46c8
	ldrb r1, [r5, #10]	@ 000f46c8 a97a
.org 0xf46ca
	movs r0, #4	@ 000f46ca 0420
.org 0xf46cc
	orrs r0, r1	@ 000f46cc 0843
.org 0xf46ce
	strb r0, [r5, #10]	@ 000f46ce a872
.org 0xf46d0
	adds r4, r5, #0	@ 000f46d0 2c1c
.org 0xf46d2
	adds r4, #116	@ 000f46d2 7434
.org 0xf46d4
	ldr r1, [pc, #88]	@ 000f46d4 1649
.org 0xf46d6
	adds r2, r5, #0	@ 000f46d6 2a1c
.org 0xf46d8
	adds r2, #84	@ 000f46d8 5432
.org 0xf46da
	adds r0, r4, #0	@ 000f46da 201c
.org 0xf46dc
	movs r3, #28	@ 000f46dc 1c23
.org 0xf46de
	bl 0x5760	@ 000f46de 11f73ff8
.org 0xf46e2
	str r5, [r4, #44]	@ 000f46e2 e562
.org 0xf46e4
	ldr r0, [pc, #76]	@ 000f46e4 1348
.org 0xf46e6
	str r0, [r4, #36]	@ 000f46e6 6062
.org 0xf46e8
	ldr r1, [pc, #76]	@ 000f46e8 1349
.org 0xf46ea
	adds r0, r5, #0	@ 000f46ea 281c
.org 0xf46ec
	bl 0x1cf00	@ 000f46ec 28f708fc
.org 0xf46f0
	movs r2, #1	@ 000f46f0 0122
.org 0xf46f2
	ldrb r0, [r5, #10]	@ 000f46f2 a87a
.org 0xf46f4
	movs r1, #16	@ 000f46f4 1021
.org 0xf46f6
	orrs r0, r1	@ 000f46f6 0843
.org 0xf46f8
	strb r0, [r5, #10]	@ 000f46f8 a872
.org 0xf46fa
	movs r3, #1	@ 000f46fa 0123
.org 0xf46fc
	adds r0, r5, #0	@ 000f46fc 281c
.org 0xf46fe
	adds r0, #76	@ 000f46fe 4c30
.org 0xf4700
	strb r2, [r0, #0]	@ 000f4700 0270
.org 0xf4702
	subs r4, #42	@ 000f4702 2a3c
.org 0xf4704
	movs r2, #16	@ 000f4704 1022
.org 0xf4706
	ldrb r1, [r4, #0]	@ 000f4706 2178
.org 0xf4708
	movs r0, #17	@ 000f4708 1120
.org 0xf470a
	negs r0, r0	@ 000f470a 4042
.org 0xf470c
	ands r0, r1	@ 000f470c 0840
.org 0xf470e
	orrs r0, r2	@ 000f470e 1043
.org 0xf4710
	strb r0, [r4, #0]	@ 000f4710 2070
.org 0xf4712
	adds r1, r5, #0	@ 000f4712 291c
.org 0xf4714
	adds r1, #37	@ 000f4714 2531
.org 0xf4716
	movs r0, #15	@ 000f4716 0f20
.org 0xf4718
	strb r0, [r1, #0]	@ 000f4718 0870
.org 0xf471a
	adds r1, #144	@ 000f471a 9031
.org 0xf471c
	movs r0, #192	@ 000f471c c020
.org 0xf471e
	strb r0, [r1, #0]	@ 000f471e 0870
.org 0xf4720
	ldrb r0, [r5, #10]	@ 000f4720 a87a
.org 0xf4722
	orrs r0, r3	@ 000f4722 1843
.org 0xf4724
	movs r1, #2	@ 000f4724 0221
.org 0xf4726
	orrs r0, r1	@ 000f4726 0843
.org 0xf4728
	strb r0, [r5, #10]	@ 000f4728 a872
.org 0xf472a
	pop {r4, r5}	@ 000f472a 30bc
.org 0xf472c
	pop {r0}	@ 000f472c 01bc
.org 0xf472e
	bx r0	@ 000f472e 0047
