@ FUN_080b84a8  entry 0x080b84a8  size 90
.thumb
.org 0xb84a8
FUN_080b84a8:
	push {r4, r5, r6, lr}	@ 000b84a8 70b5
.org 0xb84aa
	adds r6, r0, #0	@ 000b84aa 061c
.org 0xb84ac
	lsls r1, r1, #24	@ 000b84ac 0906
.org 0xb84ae
	lsrs r5, r1, #24	@ 000b84ae 0d0e
.org 0xb84b0
	lsls r2, r2, #24	@ 000b84b0 1206
.org 0xb84b2
	lsrs r4, r2, #24	@ 000b84b2 140e
.org 0xb84b4
	ldr r0, [pc, #76]	@ 000b84b4 1348
.org 0xb84b6
	ldr r0, [r0, #0]	@ 000b84b6 0068
.org 0xb84b8
	bl 0x5500	@ 000b84b8 4df722f8
.org 0xb84bc
	adds r3, r0, #0	@ 000b84bc 031c
.org 0xb84be
	cmp r3, #0	@ 000b84be 002b
.org 0xb84c0
	beq.n 0xb84fa	@ 000b84c0 1bd0
.org 0xb84c2
	adds r1, r3, #0	@ 000b84c2 191c
.org 0xb84c4
	adds r1, #37	@ 000b84c4 2531
.org 0xb84c6
	movs r2, #0	@ 000b84c6 0022
.org 0xb84c8
	movs r0, #24	@ 000b84c8 1820
.org 0xb84ca
	strb r0, [r1, #0]	@ 000b84ca 0870
.org 0xb84cc
	ldr r0, [pc, #56]	@ 000b84cc 0e48
.org 0xb84ce
	movs r1, #104	@ 000b84ce 6821
.org 0xb84d0
	strb r1, [r3, #9]	@ 000b84d0 5972
.org 0xb84d2
	movs r1, #208	@ 000b84d2 d021
.org 0xb84d4
	lsls r1, r1, #1	@ 000b84d4 4900
.org 0xb84d6
	adds r0, r0, r1	@ 000b84d6 4018
.org 0xb84d8
	ldr r0, [r0, #0]	@ 000b84d8 0068
.org 0xb84da
	ldr r0, [r0, #0]	@ 000b84da 0068
.org 0xb84dc
	str r0, [r3, #20]	@ 000b84dc 5861
.org 0xb84de
	movs r0, #0	@ 000b84de 0020
.org 0xb84e0
	strh r2, [r3, #32]	@ 000b84e0 1a84
.org 0xb84e2
	adds r1, r3, #0	@ 000b84e2 191c
.org 0xb84e4
	adds r1, #34	@ 000b84e4 2231
.org 0xb84e6
	strb r0, [r1, #0]	@ 000b84e6 0870
.org 0xb84e8
	ldrb r1, [r3, #11]	@ 000b84e8 d97a
.org 0xb84ea
	movs r0, #16	@ 000b84ea 1020
.org 0xb84ec
	orrs r0, r1	@ 000b84ec 0843
.org 0xb84ee
	strb r0, [r3, #11]	@ 000b84ee d872
.org 0xb84f0
	ldrb r0, [r3, #28]	@ 000b84f0 187f
.org 0xb84f2
	strb r0, [r3, #29]	@ 000b84f2 5877
.org 0xb84f4
	str r6, [r3, #40]	@ 000b84f4 9e62
.org 0xb84f6
	strb r5, [r3, #16]	@ 000b84f6 1d74
.org 0xb84f8
	strb r4, [r3, #17]	@ 000b84f8 5c74
.org 0xb84fa
	adds r0, r3, #0	@ 000b84fa 181c
.org 0xb84fc
	pop {r4, r5, r6}	@ 000b84fc 70bc
.org 0xb84fe
	pop {r1}	@ 000b84fe 02bc
.org 0xb8500
	bx r1	@ 000b8500 0847
