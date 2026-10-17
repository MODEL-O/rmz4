@ FUN_0811c4e8  entry 0x0811c4e8  size 92
.thumb
.org 0x11c4e8
FUN_0811c4e8:
	push {r4, lr}	@ 0011c4e8 10b5
.org 0x11c4ea
	adds r3, r0, #0	@ 0011c4ea 031c
.org 0x11c4ec
	ldrh r0, [r3, #4]	@ 0011c4ec 9888
.org 0x11c4ee
	adds r0, #1	@ 0011c4ee 0130
.org 0x11c4f0
	adds r1, r0, #0	@ 0011c4f0 011c
.org 0x11c4f2
	strh r0, [r3, #4]	@ 0011c4f2 9880
.org 0x11c4f4
	lsls r0, r0, #16	@ 0011c4f4 0004
.org 0x11c4f6
	asrs r0, r0, #16	@ 0011c4f6 0014
.org 0x11c4f8
	cmp r0, #15	@ 0011c4f8 0f28
.org 0x11c4fa
	ble.n 0x11c530	@ 0011c4fa 19dd
.org 0x11c4fc
	ldr r1, [pc, #36]	@ 0011c4fc 0949
.org 0x11c4fe
	ldr r2, [pc, #40]	@ 0011c4fe 0a4a
.org 0x11c500
	adds r0, r1, r2	@ 0011c500 8818
.org 0x11c502
	movs r2, #32	@ 0011c502 2022
.org 0x11c504
	strb r2, [r0, #0]	@ 0011c504 0270
.org 0x11c506
	ldr r4, [pc, #36]	@ 0011c506 094c
.org 0x11c508
	adds r0, r1, r4	@ 0011c508 0819
.org 0x11c50a
	strb r2, [r0, #0]	@ 0011c50a 0270
.org 0x11c50c
	movs r0, #128	@ 0011c50c 8020
.org 0x11c50e
	lsls r0, r0, #3	@ 0011c50e c000
.org 0x11c510
	adds r1, r1, r0	@ 0011c510 0918
.org 0x11c512
	strb r2, [r1, #0]	@ 0011c512 0a70
.org 0x11c514
	movs r0, #2	@ 0011c514 0220
.org 0x11c516
	strb r0, [r3, #1]	@ 0011c516 5870
.org 0x11c518
	movs r0, #1	@ 0011c518 0120
.org 0x11c51a
	strb r0, [r3, #2]	@ 0011c51a 9870
.org 0x11c51c
	adds r0, r3, #0	@ 0011c51c 181c
.org 0x11c51e
	bl 0x11c55c	@ 0011c51e 00f01df8
.org 0x11c522
	b.n 0x11c54a	@ 0011c522 12e0
.org 0x11c524
	.byte 0xc0,0x2a,0x00,0x03	@ 0011c524 data
.org 0x11c528
	.byte 0x02,0x04,0x00,0x00	@ 0011c528 data
.org 0x11c52c
	.byte 0x01,0x04,0x00,0x00	@ 0011c52c data
.org 0x11c530
	ldr r2, [pc, #28]	@ 0011c530 074a
.org 0x11c532
	ldr r3, [pc, #32]	@ 0011c532 084b
.org 0x11c534
	adds r0, r2, r3	@ 0011c534 d018
.org 0x11c536
	strb r1, [r0, #0]	@ 0011c536 0170
.org 0x11c538
	movs r0, #255	@ 0011c538 ff20
.org 0x11c53a
	ands r0, r1	@ 0011c53a 0840
.org 0x11c53c
	ldr r4, [pc, #24]	@ 0011c53c 064c
.org 0x11c53e
	adds r1, r2, r4	@ 0011c53e 1119
.org 0x11c540
	strb r0, [r1, #0]	@ 0011c540 0870
.org 0x11c542
	movs r1, #128	@ 0011c542 8021
