@ FUN_080cb0bc  entry 0x080cb0bc  size 84
.thumb
.org 0xcb0bc
FUN_080cb0bc:
	push {r4, r5, r6, r7, lr}	@ 000cb0bc f0b5
.org 0xcb0be
	adds r7, r0, #0	@ 000cb0be 071c
.org 0xcb0c0
	lsls r1, r1, #24	@ 000cb0c0 0906
.org 0xcb0c2
	lsrs r6, r1, #24	@ 000cb0c2 0e0e
.org 0xcb0c4
	lsls r2, r2, #24	@ 000cb0c4 1206
.org 0xcb0c6
	lsrs r5, r2, #24	@ 000cb0c6 150e
.org 0xcb0c8
	lsls r3, r3, #24	@ 000cb0c8 1b06
.org 0xcb0ca
	lsrs r4, r3, #24	@ 000cb0ca 1c0e
.org 0xcb0cc
	ldr r0, [pc, #64]	@ 000cb0cc 1048
.org 0xcb0ce
	ldr r0, [r0, #0]	@ 000cb0ce 0068
.org 0xcb0d0
	bl 0x5500	@ 000cb0d0 3af716fa
.org 0xcb0d4
	adds r3, r0, #0	@ 000cb0d4 031c
.org 0xcb0d6
	cmp r3, #0	@ 000cb0d6 002b
.org 0xcb0d8
	beq.n 0xcb10a	@ 000cb0d8 17d0
.org 0xcb0da
	adds r1, r3, #0	@ 000cb0da 191c
.org 0xcb0dc
	adds r1, #37	@ 000cb0dc 2531
.org 0xcb0de
	movs r2, #0	@ 000cb0de 0022
.org 0xcb0e0
	movs r0, #8	@ 000cb0e0 0820
.org 0xcb0e2
	strb r0, [r1, #0]	@ 000cb0e2 0870
.org 0xcb0e4
	ldr r0, [pc, #44]	@ 000cb0e4 0b48
.org 0xcb0e6
	movs r1, #39	@ 000cb0e6 2721
.org 0xcb0e8
	strb r1, [r3, #9]	@ 000cb0e8 5972
.org 0xcb0ea
	adds r0, #156	@ 000cb0ea 9c30
.org 0xcb0ec
	ldr r0, [r0, #0]	@ 000cb0ec 0068
.org 0xcb0ee
	ldr r0, [r0, #0]	@ 000cb0ee 0068
.org 0xcb0f0
	str r0, [r3, #20]	@ 000cb0f0 5861
.org 0xcb0f2
	movs r0, #0	@ 000cb0f2 0020
.org 0xcb0f4
	strh r2, [r3, #32]	@ 000cb0f4 1a84
.org 0xcb0f6
	adds r1, r3, #0	@ 000cb0f6 191c
.org 0xcb0f8
	adds r1, #34	@ 000cb0f8 2231
.org 0xcb0fa
	strb r0, [r1, #0]	@ 000cb0fa 0870
.org 0xcb0fc
	ldr r0, [r7, #0]	@ 000cb0fc 3868
.org 0xcb0fe
	ldr r1, [r7, #4]	@ 000cb0fe 7968
.org 0xcb100
	str r0, [r3, #84]	@ 000cb100 5865
.org 0xcb102
	str r1, [r3, #88]	@ 000cb102 9965
.org 0xcb104
	strb r6, [r3, #16]	@ 000cb104 1e74
.org 0xcb106
	strb r5, [r3, #17]	@ 000cb106 5d74
.org 0xcb108
	strb r4, [r3, #19]	@ 000cb108 dc74
.org 0xcb10a
	pop {r4, r5, r6, r7}	@ 000cb10a f0bc
.org 0xcb10c
	pop {r0}	@ 000cb10c 01bc
.org 0xcb10e
	bx r0	@ 000cb10e 0047
