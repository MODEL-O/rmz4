@ FUN_08027450  entry 0x08027450  size 86
.thumb
.org 0x27450
FUN_08027450:
	push {r4, r5, lr}	@ 00027450 30b5
.org 0x27452
	movs r1, #190	@ 00027452 be21
.org 0x27454
	lsls r1, r1, #1	@ 00027454 4900
.org 0x27456
	adds r5, r0, r1	@ 00027456 4518
.org 0x27458
	ldrb r0, [r5, #0]	@ 00027458 2878
.org 0x2745a
	cmp r0, #0	@ 0002745a 0028
.org 0x2745c
	bne.n 0x27494	@ 0002745c 1ad1
.org 0x2745e
	ldr r2, [pc, #44]	@ 0002745e 0b4a
.org 0x27460
	ldrb r0, [r2, #2]	@ 00027460 9078
.org 0x27462
	cmp r0, #0	@ 00027462 0028
.org 0x27464
	bne.n 0x2749e	@ 00027464 1bd1
.org 0x27466
	ldrh r0, [r2, #8]	@ 00027466 1089
.org 0x27468
	movs r4, #1	@ 00027468 0124
.org 0x2746a
	orrs r0, r4	@ 0002746a 2043
.org 0x2746c
	strh r0, [r2, #8]	@ 0002746c 1081
.org 0x2746e
	adds r0, r2, #0	@ 0002746e 101c
.org 0x27470
	adds r0, #16	@ 00027470 1030
.org 0x27472
	ldr r1, [pc, #28]	@ 00027472 0749
.org 0x27474
	ldr r1, [r1, #72]	@ 00027474 896c
.org 0x27476
	ldr r1, [r1, #0]	@ 00027476 0968
.org 0x27478
	bl 0x275f0	@ 00027478 00f0baf8
.org 0x2747c
	movs r0, #87	@ 0002747c 5720
.org 0x2747e
	bl 0x6984	@ 0002747e dff781fa
.org 0x27482
	movs r0, #1	@ 00027482 0120
.org 0x27484
	bl 0x1f63c	@ 00027484 f8f7daf8
.org 0x27488
	strb r4, [r5, #0]	@ 00027488 2c70
.org 0x2748a
	b.n 0x274a6	@ 0002748a 0ce0
.org 0x2748c
	.byte 0x10,0xe9,0x02,0x02	@ 0002748c data
.org 0x27490
	.byte 0xf8,0x2c,0x84,0x08	@ 00027490 data
.org 0x27494
	cmp r0, #1	@ 00027494 0128
.org 0x27496
	bne.n 0x274a6	@ 00027496 06d1
.org 0x27498
	movs r0, #2	@ 00027498 0220
.org 0x2749a
	strb r0, [r5, #0]	@ 0002749a 2870
.org 0x2749c
	ldr r2, [pc, #16]	@ 0002749c 044a
.org 0x2749e
	ldrh r1, [r2, #8]	@ 0002749e 1189
.org 0x274a0
	ldr r0, [pc, #16]	@ 000274a0 0448
.org 0x274a2
	ands r0, r1	@ 000274a2 0840
.org 0x274a4
	strh r0, [r2, #8]	@ 000274a4 1081
