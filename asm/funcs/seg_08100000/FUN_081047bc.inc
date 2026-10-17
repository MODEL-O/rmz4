@ FUN_081047bc  entry 0x081047bc  size 94
.thumb
.org 0x1047bc
FUN_081047bc:
	push {r4, r5, r6, lr}	@ 001047bc 70b5
.org 0x1047be
	adds r5, r0, #0	@ 001047be 051c
.org 0x1047c0
	adds r6, r2, #0	@ 001047c0 161c
.org 0x1047c2
	lsls r1, r1, #24	@ 001047c2 0906
.org 0x1047c4
	lsrs r4, r1, #24	@ 001047c4 0c0e
.org 0x1047c6
	ldr r0, [pc, #84]	@ 001047c6 1548
.org 0x1047c8
	ldr r0, [r0, #0]	@ 001047c8 0068
.org 0x1047ca
	bl 0x5500	@ 001047ca 00f799fe
.org 0x1047ce
	adds r3, r0, #0	@ 001047ce 031c
.org 0x1047d0
	cmp r3, #0	@ 001047d0 002b
.org 0x1047d2
	beq.n 0x104814	@ 001047d2 1fd0
.org 0x1047d4
	adds r1, r3, #0	@ 001047d4 191c
.org 0x1047d6
	adds r1, #37	@ 001047d6 2531
.org 0x1047d8
	movs r2, #0	@ 001047d8 0022
.org 0x1047da
	movs r0, #30	@ 001047da 1e20
.org 0x1047dc
	strb r0, [r1, #0]	@ 001047dc 0870
.org 0x1047de
	ldr r0, [pc, #64]	@ 001047de 1048
.org 0x1047e0
	movs r1, #75	@ 001047e0 4b21
.org 0x1047e2
	strb r1, [r3, #9]	@ 001047e2 5972
.org 0x1047e4
	adds r1, #225	@ 001047e4 e131
.org 0x1047e6
	adds r0, r0, r1	@ 001047e6 4018
.org 0x1047e8
	ldr r0, [r0, #0]	@ 001047e8 0068
.org 0x1047ea
	ldr r0, [r0, #0]	@ 001047ea 0068
.org 0x1047ec
	str r0, [r3, #20]	@ 001047ec 5861
.org 0x1047ee
	movs r0, #0	@ 001047ee 0020
.org 0x1047f0
	strh r2, [r3, #32]	@ 001047f0 1a84
.org 0x1047f2
	adds r1, r3, #0	@ 001047f2 191c
.org 0x1047f4
	adds r1, #34	@ 001047f4 2231
.org 0x1047f6
	strb r0, [r1, #0]	@ 001047f6 0870
.org 0x1047f8
	ldrb r1, [r3, #11]	@ 001047f8 d97a
.org 0x1047fa
	movs r0, #16	@ 001047fa 1020
.org 0x1047fc
	orrs r0, r1	@ 001047fc 0843
.org 0x1047fe
	strb r0, [r3, #11]	@ 001047fe d872
.org 0x104800
	ldrb r0, [r3, #28]	@ 00104800 187f
.org 0x104802
	strb r0, [r3, #29]	@ 00104802 5877
.org 0x104804
	ldr r0, [r5, #0]	@ 00104804 2868
.org 0x104806
	ldr r1, [r5, #4]	@ 00104806 6968
.org 0x104808
	str r0, [r3, #84]	@ 00104808 5865
.org 0x10480a
	str r1, [r3, #88]	@ 0010480a 9965
.org 0x10480c
	strb r4, [r3, #16]	@ 0010480c 1c74
.org 0x10480e
	adds r0, r3, #0	@ 0010480e 181c
.org 0x104810
	adds r0, #192	@ 00104810 c030
.org 0x104812
	str r6, [r0, #0]	@ 00104812 0660
.org 0x104814
	pop {r4, r5, r6}	@ 00104814 70bc
.org 0x104816
	pop {r0}	@ 00104816 01bc
.org 0x104818
	bx r0	@ 00104818 0047
