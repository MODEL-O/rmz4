@ FUN_080b97d0  entry 0x080b97d0  size 86
.thumb
.org 0xb97d0
FUN_080b97d0:
	push {r4, r5, lr}	@ 000b97d0 30b5
.org 0xb97d2
	adds r4, r0, #0	@ 000b97d2 041c
.org 0xb97d4
	adds r5, r1, #0	@ 000b97d4 0d1c
.org 0xb97d6
	ldr r0, [pc, #80]	@ 000b97d6 1448
.org 0xb97d8
	ldr r0, [r0, #0]	@ 000b97d8 0068
.org 0xb97da
	bl 0x5500	@ 000b97da 4bf791fe
.org 0xb97de
	adds r3, r0, #0	@ 000b97de 031c
.org 0xb97e0
	cmp r3, #0	@ 000b97e0 002b
.org 0xb97e2
	beq.n 0xb9820	@ 000b97e2 1dd0
.org 0xb97e4
	adds r1, r3, #0	@ 000b97e4 191c
.org 0xb97e6
	adds r1, #37	@ 000b97e6 2531
.org 0xb97e8
	movs r2, #0	@ 000b97e8 0022
.org 0xb97ea
	movs r0, #24	@ 000b97ea 1820
.org 0xb97ec
	strb r0, [r1, #0]	@ 000b97ec 0870
.org 0xb97ee
	ldr r0, [pc, #60]	@ 000b97ee 0f48
.org 0xb97f0
	movs r1, #108	@ 000b97f0 6c21
.org 0xb97f2
	strb r1, [r3, #9]	@ 000b97f2 5972
.org 0xb97f4
	movs r1, #216	@ 000b97f4 d821
.org 0xb97f6
	lsls r1, r1, #1	@ 000b97f6 4900
.org 0xb97f8
	adds r0, r0, r1	@ 000b97f8 4018
.org 0xb97fa
	ldr r0, [r0, #0]	@ 000b97fa 0068
.org 0xb97fc
	ldr r0, [r0, #0]	@ 000b97fc 0068
.org 0xb97fe
	str r0, [r3, #20]	@ 000b97fe 5861
.org 0xb9800
	movs r0, #0	@ 000b9800 0020
.org 0xb9802
	strh r2, [r3, #32]	@ 000b9802 1a84
.org 0xb9804
	adds r1, r3, #0	@ 000b9804 191c
.org 0xb9806
	adds r1, #34	@ 000b9806 2231
.org 0xb9808
	strb r0, [r1, #0]	@ 000b9808 0870
.org 0xb980a
	ldrb r1, [r3, #11]	@ 000b980a d97a
.org 0xb980c
	movs r0, #16	@ 000b980c 1020
.org 0xb980e
	orrs r0, r1	@ 000b980e 0843
.org 0xb9810
	strb r0, [r3, #11]	@ 000b9810 d872
.org 0xb9812
	ldrb r0, [r3, #28]	@ 000b9812 187f
.org 0xb9814
	strb r0, [r3, #29]	@ 000b9814 5877
.org 0xb9816
	ldr r0, [r4, #0]	@ 000b9816 2068
.org 0xb9818
	ldr r1, [r4, #4]	@ 000b9818 6168
.org 0xb981a
	str r0, [r3, #84]	@ 000b981a 5865
.org 0xb981c
	str r1, [r3, #88]	@ 000b981c 9965
.org 0xb981e
	str r5, [r3, #44]	@ 000b981e dd62
.org 0xb9820
	pop {r4, r5}	@ 000b9820 30bc
.org 0xb9822
	pop {r0}	@ 000b9822 01bc
.org 0xb9824
	bx r0	@ 000b9824 0047
