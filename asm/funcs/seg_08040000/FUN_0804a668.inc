@ FUN_0804a668  entry 0x0804a668  size 86
.thumb
.org 0x4a668
FUN_0804a668:
	push {r4, lr}	@ 0004a668 10b5
.org 0x4a66a
	adds r2, r0, #0	@ 0004a66a 021c
.org 0x4a66c
	ldr r0, [r2, #20]	@ 0004a66c 5069
.org 0x4a66e
	movs r1, #1	@ 0004a66e 0121
.org 0x4a670
	ands r0, r1	@ 0004a670 0840
.org 0x4a672
	cmp r0, #0	@ 0004a672 0028
.org 0x4a674
	beq.n 0x4a6b8	@ 0004a674 20d0
.org 0x4a676
	ldr r0, [r2, #12]	@ 0004a676 d068
.org 0x4a678
	ldr r0, [r0, #44]	@ 0004a678 c06a
.org 0x4a67a
	ldr r4, [r2, #44]	@ 0004a67a d46a
.org 0x4a67c
	movs r2, #0	@ 0004a67c 0022
.org 0x4a67e
	ldr r1, [r0, #84]	@ 0004a67e 416d
.org 0x4a680
	ldr r0, [r4, #84]	@ 0004a680 606d
.org 0x4a682
	cmp r1, r0	@ 0004a682 8142
.org 0x4a684
	ble.n 0x4a688	@ 0004a684 00dd
.org 0x4a686
	movs r2, #1	@ 0004a686 0122
.org 0x4a688
	adds r0, r4, #0	@ 0004a688 201c
.org 0x4a68a
	adds r0, #188	@ 0004a68a bc30
.org 0x4a68c
	strb r2, [r0, #0]	@ 0004a68c 0270
.org 0x4a68e
	ldr r0, [r4, #40]	@ 0004a68e a06a
.org 0x4a690
	movs r1, #5	@ 0004a690 0521
.org 0x4a692
	movs r2, #8	@ 0004a692 0822
.org 0x4a694
	bl 0x3a578	@ 0004a694 eff770ff
.org 0x4a698
	lsls r0, r0, #24	@ 0004a698 0006
.org 0x4a69a
	cmp r0, #0	@ 0004a69a 0028
.org 0x4a69c
	beq.n 0x4a6b8	@ 0004a69c 0cd0
.org 0x4a69e
	adds r1, r4, #0	@ 0004a69e 211c
.org 0x4a6a0
	adds r1, #190	@ 0004a6a0 be31
.org 0x4a6a2
	movs r0, #0	@ 0004a6a2 0020
.org 0x4a6a4
	strb r0, [r1, #0]	@ 0004a6a4 0870
.org 0x4a6a6
	ldr r1, [pc, #24]	@ 0004a6a6 0649
.org 0x4a6a8
	ldrb r0, [r4, #9]	@ 0004a6a8 607a
.org 0x4a6aa
	lsls r0, r0, #2	@ 0004a6aa 8000
.org 0x4a6ac
	adds r0, r0, r1	@ 0004a6ac 4018
.org 0x4a6ae
	movs r1, #2	@ 0004a6ae 0221
.org 0x4a6b0
	str r1, [r4, #12]	@ 0004a6b0 e160
.org 0x4a6b2
	ldr r0, [r0, #0]	@ 0004a6b2 0068
.org 0x4a6b4
	ldr r0, [r0, #8]	@ 0004a6b4 8068
.org 0x4a6b6
	str r0, [r4, #20]	@ 0004a6b6 6061
.org 0x4a6b8
	pop {r4}	@ 0004a6b8 10bc
.org 0x4a6ba
	pop {r0}	@ 0004a6ba 01bc
.org 0x4a6bc
	bx r0	@ 0004a6bc 0047
