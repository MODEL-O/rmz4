@ FUN_080f156c  entry 0x080f156c  size 34
.thumb
.org 0xf156c
FUN_080f156c:
	push {r4, lr}	@ 000f156c 10b5
.org 0xf156e
	adds r4, r0, #0	@ 000f156e 041c
.org 0xf1570
	ldrb r0, [r4, #17]	@ 000f1570 607c
.org 0xf1572
	cmp r0, #6	@ 000f1572 0628
.org 0xf1574
	bls.n 0xf1578	@ 000f1574 00d9
.org 0xf1576
	b.n 0xf1682	@ 000f1576 84e0
.org 0xf1578
	lsls r0, r0, #2	@ 000f1578 8000
.org 0xf157a
	ldr r1, [pc, #8]	@ 000f157a 0249
.org 0xf157c
	adds r0, r0, r1	@ 000f157c 4018
.org 0xf157e
	ldr r0, [r0, #0]	@ 000f157e 0068
.org 0xf1580
	mov pc, r0	@ 000f1580 8746
.org 0xf1582
	.byte 0x00	@ 000f1582 data
.org 0xf1583
	.byte 0x00	@ 000f1583 data
.org 0xf1584
	.byte 0x88,0x15,0x0f,0x08	@ 000f1584 data
.org 0xf1588
	.byte 0xa4,0x15,0x0f,0x08	@ 000f1588 data
.org 0xf158c
	.byte 0xdc,0x15,0x0f,0x08	@ 000f158c data
