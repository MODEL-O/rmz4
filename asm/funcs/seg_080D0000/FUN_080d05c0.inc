@ FUN_080d05c0  entry 0x080d05c0  size 96
.thumb
.org 0xd05c0
FUN_080d05c0:
	push {r4, r5, r6, lr}	@ 000d05c0 70b5
.org 0xd05c2
	adds r5, r0, #0	@ 000d05c2 051c
.org 0xd05c4
	adds r6, r2, #0	@ 000d05c4 161c
.org 0xd05c6
	lsls r1, r1, #24	@ 000d05c6 0906
.org 0xd05c8
	lsrs r4, r1, #24	@ 000d05c8 0c0e
.org 0xd05ca
	ldr r0, [pc, #84]	@ 000d05ca 1548
.org 0xd05cc
	ldr r0, [r0, #0]	@ 000d05cc 0068
.org 0xd05ce
	bl 0x5500	@ 000d05ce 34f797ff
.org 0xd05d2
	adds r3, r0, #0	@ 000d05d2 031c
.org 0xd05d4
	cmp r3, #0	@ 000d05d4 002b
.org 0xd05d6
	beq.n 0xd061a	@ 000d05d6 20d0
.org 0xd05d8
	adds r1, r3, #0	@ 000d05d8 191c
.org 0xd05da
	adds r1, #37	@ 000d05da 2531
.org 0xd05dc
	movs r2, #0	@ 000d05dc 0022
.org 0xd05de
	movs r0, #8	@ 000d05de 0820
.org 0xd05e0
	strb r0, [r1, #0]	@ 000d05e0 0870
.org 0xd05e2
	ldr r0, [pc, #64]	@ 000d05e2 1048
.org 0xd05e4
	movs r1, #65	@ 000d05e4 4121
.org 0xd05e6
	strb r1, [r3, #9]	@ 000d05e6 5972
.org 0xd05e8
	adds r1, #195	@ 000d05e8 c331
.org 0xd05ea
	adds r0, r0, r1	@ 000d05ea 4018
.org 0xd05ec
	ldr r0, [r0, #0]	@ 000d05ec 0068
.org 0xd05ee
	ldr r0, [r0, #0]	@ 000d05ee 0068
.org 0xd05f0
	str r0, [r3, #20]	@ 000d05f0 5861
.org 0xd05f2
	movs r0, #0	@ 000d05f2 0020
.org 0xd05f4
	strh r2, [r3, #32]	@ 000d05f4 1a84
.org 0xd05f6
	adds r1, r3, #0	@ 000d05f6 191c
.org 0xd05f8
	adds r1, #34	@ 000d05f8 2231
.org 0xd05fa
	strb r0, [r1, #0]	@ 000d05fa 0870
.org 0xd05fc
	ldr r0, [r5, #0]	@ 000d05fc 2868
.org 0xd05fe
	ldr r1, [r5, #4]	@ 000d05fe 6968
.org 0xd0600
	str r0, [r3, #84]	@ 000d0600 5865
.org 0xd0602
	str r1, [r3, #88]	@ 000d0602 9965
.org 0xd0604
	strb r4, [r3, #16]	@ 000d0604 1c74
.org 0xd0606
	str r6, [r3, #40]	@ 000d0606 9e62
.org 0xd0608
	cmp r4, #7	@ 000d0608 072c
.org 0xd060a
	bhi.n 0xd061a	@ 000d060a 06d8
.org 0xd060c
	adds r1, r4, #1	@ 000d060c 611c
.org 0xd060e
	lsls r1, r1, #24	@ 000d060e 0906
.org 0xd0610
	lsrs r1, r1, #24	@ 000d0610 090e
.org 0xd0612
	adds r0, r5, #0	@ 000d0612 281c
.org 0xd0614
	adds r2, r6, #0	@ 000d0614 321c
.org 0xd0616
	bl 0xd05c0	@ 000d0616 fff7d3ff
.org 0xd061a
	pop {r4, r5, r6}	@ 000d061a 70bc
.org 0xd061c
	pop {r0}	@ 000d061c 01bc
.org 0xd061e
	bx r0	@ 000d061e 0047
