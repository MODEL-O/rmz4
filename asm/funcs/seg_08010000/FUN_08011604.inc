@ FUN_08011604  entry 0x08011604  size 38
.thumb
.org 0x11604
FUN_08011604:
	push {lr}	@ 00011604 00b5
.org 0x11606
	adds r1, r0, #0	@ 00011606 011c
.org 0x11608
	ldrh r0, [r1, #16]	@ 00011608 088a
.org 0x1160a
	cmp r0, #31	@ 0001160a 1f28
.org 0x1160c
	bhi.n 0x11626	@ 0001160c 0bd8
.org 0x1160e
	adds r0, #1	@ 0001160e 0130
.org 0x11610
	strh r0, [r1, #16]	@ 00011610 0882
.org 0x11612
	ldr r2, [pc, #24]	@ 00011612 064a
.org 0x11614
	lsls r0, r0, #16	@ 00011614 0004
.org 0x11616
	lsrs r0, r0, #20	@ 00011616 000d
.org 0x11618
	movs r1, #31	@ 00011618 1f21
.org 0x1161a
	ands r0, r1	@ 0001161a 0840
.org 0x1161c
	movs r3, #128	@ 0001161c 8023
.org 0x1161e
	lsls r3, r3, #5	@ 0001161e 5b01
.org 0x11620
	adds r1, r3, #0	@ 00011620 191c
.org 0x11622
	orrs r0, r1	@ 00011622 0843
.org 0x11624
	strh r0, [r2, #2]	@ 00011624 5080
.org 0x11626
	pop {r0}	@ 00011626 01bc
.org 0x11628
	bx r0	@ 00011628 0047
