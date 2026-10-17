@ FUN_080e5660  entry 0x080e5660  size 108
.thumb
.org 0xe5660
FUN_080e5660:
	push {r4, lr}	@ 000e5660 10b5
.org 0xe5662
	adds r4, r0, #0	@ 000e5662 041c
.org 0xe5664
	ldr r0, [r4, #84]	@ 000e5664 606d
.org 0xe5666
	ldr r1, [r4, #92]	@ 000e5666 e16d
.org 0xe5668
	adds r0, r0, r1	@ 000e5668 4018
.org 0xe566a
	str r0, [r4, #84]	@ 000e566a 6065
.org 0xe566c
	ldr r0, [r4, #88]	@ 000e566c a06d
.org 0xe566e
	ldr r1, [r4, #96]	@ 000e566e 216e
.org 0xe5670
	adds r0, r0, r1	@ 000e5670 4018
.org 0xe5672
	str r0, [r4, #88]	@ 000e5672 a065
.org 0xe5674
	adds r1, #64	@ 000e5674 4031
.org 0xe5676
	str r1, [r4, #96]	@ 000e5676 2166
.org 0xe5678
	adds r3, r4, #0	@ 000e5678 231c
.org 0xe567a
	adds r3, #116	@ 000e567a 7433
.org 0xe567c
	ldrb r0, [r3, #0]	@ 000e567c 1878
.org 0xe567e
	cmp r0, #0	@ 000e567e 0028
.org 0xe5680
	bne.n 0xe5690	@ 000e5680 06d1
.org 0xe5682
	ldrb r0, [r4, #10]	@ 000e5682 a07a
.org 0xe5684
	movs r1, #254	@ 000e5684 fe21
.org 0xe5686
	ands r1, r0	@ 000e5686 0140
.org 0xe5688
	strb r1, [r4, #10]	@ 000e5688 a172
.org 0xe568a
	movs r0, #1	@ 000e568a 0120
.org 0xe568c
	strb r0, [r3, #0]	@ 000e568c 1870
.org 0xe568e
	b.n 0xe569c	@ 000e568e 05e0
.org 0xe5690
	ldrb r0, [r4, #10]	@ 000e5690 a07a
.org 0xe5692
	movs r1, #1	@ 000e5692 0121
.org 0xe5694
	movs r2, #0	@ 000e5694 0022
.org 0xe5696
	orrs r1, r0	@ 000e5696 0143
.org 0xe5698
	strb r1, [r4, #10]	@ 000e5698 a172
.org 0xe569a
	strb r2, [r3, #0]	@ 000e569a 1a70
.org 0xe569c
	ldr r0, [r4, #84]	@ 000e569c 606d
.org 0xe569e
	ldr r1, [r4, #88]	@ 000e569e a16d
.org 0xe56a0
	bl 0x7c7c	@ 000e56a0 22f7ecfa
.org 0xe56a4
	lsls r0, r0, #16	@ 000e56a4 0004
.org 0xe56a6
	cmp r0, #0	@ 000e56a6 0028
.org 0xe56a8
	beq.n 0xe56c6	@ 000e56a8 0dd0
.org 0xe56aa
	adds r1, r4, #0	@ 000e56aa 211c
.org 0xe56ac
	adds r1, #84	@ 000e56ac 5431
.org 0xe56ae
	movs r0, #3	@ 000e56ae 0320
.org 0xe56b0
	bl 0xd0c88	@ 000e56b0 ebf7eafa
.org 0xe56b4
	ldr r1, [pc, #20]	@ 000e56b4 0549
.org 0xe56b6
	ldrb r0, [r4, #9]	@ 000e56b6 607a
.org 0xe56b8
	lsls r0, r0, #2	@ 000e56b8 8000
.org 0xe56ba
	adds r0, r0, r1	@ 000e56ba 4018
.org 0xe56bc
	movs r1, #2	@ 000e56bc 0221
.org 0xe56be
	str r1, [r4, #12]	@ 000e56be e160
.org 0xe56c0
	ldr r0, [r0, #0]	@ 000e56c0 0068
.org 0xe56c2
	ldr r0, [r0, #8]	@ 000e56c2 8068
.org 0xe56c4
	str r0, [r4, #20]	@ 000e56c4 6061
.org 0xe56c6
	pop {r4}	@ 000e56c6 10bc
.org 0xe56c8
	pop {r0}	@ 000e56c8 01bc
.org 0xe56ca
	bx r0	@ 000e56ca 0047
