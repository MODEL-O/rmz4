@ FUN_080e77b4  entry 0x080e77b4  size 108
.thumb
.org 0xe77b4
FUN_080e77b4:
	push {r4, lr}	@ 000e77b4 10b5
.org 0xe77b6
	adds r4, r0, #0	@ 000e77b6 041c
.org 0xe77b8
	ldr r0, [r4, #84]	@ 000e77b8 606d
.org 0xe77ba
	ldr r1, [r4, #92]	@ 000e77ba e16d
.org 0xe77bc
	adds r0, r0, r1	@ 000e77bc 4018
.org 0xe77be
	str r0, [r4, #84]	@ 000e77be 6065
.org 0xe77c0
	ldr r0, [r4, #88]	@ 000e77c0 a06d
.org 0xe77c2
	ldr r1, [r4, #96]	@ 000e77c2 216e
.org 0xe77c4
	adds r0, r0, r1	@ 000e77c4 4018
.org 0xe77c6
	str r0, [r4, #88]	@ 000e77c6 a065
.org 0xe77c8
	adds r1, #64	@ 000e77c8 4031
.org 0xe77ca
	str r1, [r4, #96]	@ 000e77ca 2166
.org 0xe77cc
	adds r3, r4, #0	@ 000e77cc 231c
.org 0xe77ce
	adds r3, #116	@ 000e77ce 7433
.org 0xe77d0
	ldrb r0, [r3, #0]	@ 000e77d0 1878
.org 0xe77d2
	cmp r0, #0	@ 000e77d2 0028
.org 0xe77d4
	bne.n 0xe77e4	@ 000e77d4 06d1
.org 0xe77d6
	ldrb r0, [r4, #10]	@ 000e77d6 a07a
.org 0xe77d8
	movs r1, #254	@ 000e77d8 fe21
.org 0xe77da
	ands r1, r0	@ 000e77da 0140
.org 0xe77dc
	strb r1, [r4, #10]	@ 000e77dc a172
.org 0xe77de
	movs r0, #1	@ 000e77de 0120
.org 0xe77e0
	strb r0, [r3, #0]	@ 000e77e0 1870
.org 0xe77e2
	b.n 0xe77f0	@ 000e77e2 05e0
.org 0xe77e4
	ldrb r0, [r4, #10]	@ 000e77e4 a07a
.org 0xe77e6
	movs r1, #1	@ 000e77e6 0121
.org 0xe77e8
	movs r2, #0	@ 000e77e8 0022
.org 0xe77ea
	orrs r1, r0	@ 000e77ea 0143
.org 0xe77ec
	strb r1, [r4, #10]	@ 000e77ec a172
.org 0xe77ee
	strb r2, [r3, #0]	@ 000e77ee 1a70
.org 0xe77f0
	ldr r0, [r4, #84]	@ 000e77f0 606d
.org 0xe77f2
	ldr r1, [r4, #88]	@ 000e77f2 a16d
.org 0xe77f4
	bl 0x7c7c	@ 000e77f4 20f742fa
.org 0xe77f8
	lsls r0, r0, #16	@ 000e77f8 0004
.org 0xe77fa
	cmp r0, #0	@ 000e77fa 0028
.org 0xe77fc
	beq.n 0xe781a	@ 000e77fc 0dd0
.org 0xe77fe
	adds r1, r4, #0	@ 000e77fe 211c
.org 0xe7800
	adds r1, #84	@ 000e7800 5431
.org 0xe7802
	movs r0, #3	@ 000e7802 0320
.org 0xe7804
	bl 0xd0c88	@ 000e7804 e9f740fa
.org 0xe7808
	ldr r1, [pc, #20]	@ 000e7808 0549
.org 0xe780a
	ldrb r0, [r4, #9]	@ 000e780a 607a
.org 0xe780c
	lsls r0, r0, #2	@ 000e780c 8000
.org 0xe780e
	adds r0, r0, r1	@ 000e780e 4018
.org 0xe7810
	movs r1, #2	@ 000e7810 0221
.org 0xe7812
	str r1, [r4, #12]	@ 000e7812 e160
.org 0xe7814
	ldr r0, [r0, #0]	@ 000e7814 0068
.org 0xe7816
	ldr r0, [r0, #8]	@ 000e7816 8068
.org 0xe7818
	str r0, [r4, #20]	@ 000e7818 6061
.org 0xe781a
	pop {r4}	@ 000e781a 10bc
.org 0xe781c
	pop {r0}	@ 000e781c 01bc
.org 0xe781e
	bx r0	@ 000e781e 0047
