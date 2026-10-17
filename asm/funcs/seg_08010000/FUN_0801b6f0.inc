@ FUN_0801b6f0  entry 0x0801b6f0  size 102
.thumb
.org 0x1b6f0
FUN_0801b6f0:
	push {r4, r5, r6, r7, lr}	@ 0001b6f0 f0b5
.org 0x1b6f2
	adds r4, r0, #0	@ 0001b6f2 041c
.org 0x1b6f4
	movs r5, #0	@ 0001b6f4 0025
.org 0x1b6f6
	bl 0x7638	@ 0001b6f6 ebf79fff
.org 0x1b6fa
	movs r0, #160	@ 0001b6fa a020
.org 0x1b6fc
	lsls r0, r0, #2	@ 0001b6fc 8000
.org 0x1b6fe
	bl 0xa70	@ 0001b6fe e5f7b7f9
.org 0x1b702
	adds r3, r0, #0	@ 0001b702 031c
.org 0x1b704
	cmp r3, #0	@ 0001b704 002b
.org 0x1b706
	beq.n 0x1b750	@ 0001b706 23d0
.org 0x1b708
	ldr r2, [pc, #76]	@ 0001b708 134a
.org 0x1b70a
	movs r1, #186	@ 0001b70a ba21
.org 0x1b70c
	lsls r1, r1, #1	@ 0001b70c 4900
.org 0x1b70e
	adds r0, r2, r1	@ 0001b70e 5018
.org 0x1b710
	str r3, [r0, #0]	@ 0001b710 0360
.org 0x1b712
	movs r7, #188	@ 0001b712 bc27
.org 0x1b714
	lsls r7, r7, #1	@ 0001b714 7f00
.org 0x1b716
	adds r1, r2, r7	@ 0001b716 d119
.org 0x1b718
	ldr r0, [pc, #64]	@ 0001b718 1048
.org 0x1b71a
	str r0, [r1, #0]	@ 0001b71a 0860
.org 0x1b71c
	movs r0, #190	@ 0001b71c be20
.org 0x1b71e
	lsls r0, r0, #1	@ 0001b71e 4000
.org 0x1b720
	adds r1, r2, r0	@ 0001b720 1118
.org 0x1b722
	ldr r0, [pc, #60]	@ 0001b722 0f48
.org 0x1b724
	str r0, [r1, #0]	@ 0001b724 0860
.org 0x1b726
	ldrh r0, [r4, #56]	@ 0001b726 208f
.org 0x1b728
	ldr r6, [pc, #56]	@ 0001b728 0e4e
.org 0x1b72a
	lsls r2, r0, #16	@ 0001b72a 0204
.org 0x1b72c
	ldr r0, [r4, #52]	@ 0001b72c 606b
.org 0x1b72e
	lsls r1, r5, #5	@ 0001b72e 6901
.org 0x1b730
	ldrb r7, [r4, #18]	@ 0001b730 a77c
.org 0x1b732
	adds r1, r1, r7	@ 0001b732 c919
.org 0x1b734
	lsls r1, r1, #24	@ 0001b734 0906
.org 0x1b736
	lsrs r1, r1, #23	@ 0001b736 c90d
.org 0x1b738
	adds r1, r1, r6	@ 0001b738 8919
.org 0x1b73a
	ldrh r1, [r1, #0]	@ 0001b73a 0988
.org 0x1b73c
	lsls r1, r1, #16	@ 0001b73c 0904
.org 0x1b73e
	asrs r1, r1, #24	@ 0001b73e 0916
.org 0x1b740
	adds r0, r0, r1	@ 0001b740 4018
.org 0x1b742
	lsls r0, r0, #16	@ 0001b742 0004
.org 0x1b744
	lsrs r0, r0, #16	@ 0001b744 000c
.org 0x1b746
	orrs r0, r2	@ 0001b746 1043
.org 0x1b748
	stmia r3!, {r0}	@ 0001b748 01c3
.org 0x1b74a
	adds r5, #1	@ 0001b74a 0135
.org 0x1b74c
	cmp r5, #159	@ 0001b74c 9f2d
.org 0x1b74e
	ble.n 0x1b72c	@ 0001b74e eddd
.org 0x1b750
	pop {r4, r5, r6, r7}	@ 0001b750 f0bc
.org 0x1b752
	pop {r0}	@ 0001b752 01bc
.org 0x1b754
	bx r0	@ 0001b754 0047
