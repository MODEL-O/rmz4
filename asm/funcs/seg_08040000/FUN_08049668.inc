@ FUN_08049668  entry 0x08049668  size 42
.thumb
.org 0x49668
FUN_08049668:
	push {lr}	@ 00049668 00b5
.org 0x4966a
	adds r2, r0, #0	@ 0004966a 021c
.org 0x4966c
	ldr r0, [r2, #20]	@ 0004966c 5069
.org 0x4966e
	movs r1, #1	@ 0004966e 0121
.org 0x49670
	ands r0, r1	@ 00049670 0840
.org 0x49672
	cmp r0, #0	@ 00049672 0028
.org 0x49674
	beq.n 0x4968e	@ 00049674 0bd0
.org 0x49676
	ldr r0, [r2, #12]	@ 00049676 d068
.org 0x49678
	ldr r0, [r0, #44]	@ 00049678 c06a
.org 0x4967a
	ldr r2, [r2, #44]	@ 0004967a d26a
.org 0x4967c
	movs r3, #0	@ 0004967c 0023
.org 0x4967e
	ldr r1, [r0, #84]	@ 0004967e 416d
.org 0x49680
	ldr r0, [r2, #84]	@ 00049680 506d
.org 0x49682
	cmp r1, r0	@ 00049682 8142
.org 0x49684
	ble.n 0x49688	@ 00049684 00dd
.org 0x49686
	movs r3, #1	@ 00049686 0123
.org 0x49688
	adds r0, r2, #0	@ 00049688 101c
.org 0x4968a
	adds r0, #188	@ 0004968a bc30
.org 0x4968c
	strb r3, [r0, #0]	@ 0004968c 0370
.org 0x4968e
	pop {r0}	@ 0004968e 01bc
.org 0x49690
	bx r0	@ 00049690 0047
