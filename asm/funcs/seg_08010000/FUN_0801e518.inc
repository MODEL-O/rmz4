@ FUN_0801e518  entry 0x0801e518  size 32
.thumb
.org 0x1e518
FUN_0801e518:
	push {lr}	@ 0001e518 00b5
.org 0x1e51a
	adds r2, r0, #0	@ 0001e51a 021c
.org 0x1e51c
	ldr r1, [r2, #4]	@ 0001e51c 5168
.org 0x1e51e
	movs r0, #160	@ 0001e51e a020
.org 0x1e520
	lsls r0, r0, #10	@ 0001e520 8002
.org 0x1e522
	cmp r1, r0	@ 0001e522 8142
.org 0x1e524
	bgt.n 0x1e52e	@ 0001e524 03dc
.org 0x1e526
	ldr r1, [r2, #0]	@ 0001e526 1168
.org 0x1e528
	ldr r0, [pc, #8]	@ 0001e528 0248
.org 0x1e52a
	cmp r1, r0	@ 0001e52a 8142
.org 0x1e52c
	ble.n 0x1e538	@ 0001e52c 04dd
.org 0x1e52e
	movs r0, #1	@ 0001e52e 0120
.org 0x1e530
	b.n 0x1e53a	@ 0001e530 03e0
.org 0x1e532
	.byte 0x00	@ 0001e532 data
.org 0x1e533
	.byte 0x00	@ 0001e533 data
.org 0x1e534
	.byte 0x00,0xd0,0x11,0x00	@ 0001e534 data
