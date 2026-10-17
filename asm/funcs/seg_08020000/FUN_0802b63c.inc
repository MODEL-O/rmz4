@ FUN_0802b63c  entry 0x0802b63c  size 48
.thumb
.org 0x2b63c
FUN_0802b63c:
	push {r4, r5, lr}	@ 0002b63c 30b5
.org 0x2b63e
	lsls r1, r1, #16	@ 0002b63e 0904
.org 0x2b640
	lsrs r1, r1, #16	@ 0002b640 090c
.org 0x2b642
	adds r4, r0, #0	@ 0002b642 041c
.org 0x2b644
	adds r4, #180	@ 0002b644 b434
.org 0x2b646
	ldrh r0, [r4, #6]	@ 0002b646 e088
.org 0x2b648
	ldr r5, [pc, #24]	@ 0002b648 064d
.org 0x2b64a
	cmp r0, r5	@ 0002b64a a842
.org 0x2b64c
	bhi.n 0x2b66a	@ 0002b64c 0dd8
.org 0x2b64e
	adds r0, r1, r0	@ 0002b64e 0818
.org 0x2b650
	strh r0, [r4, #6]	@ 0002b650 e080
.org 0x2b652
	movs r0, #34	@ 0002b652 2220
.org 0x2b654
	bl 0x2b10	@ 0002b654 d7f75cfa
.org 0x2b658
	ldrh r0, [r4, #6]	@ 0002b658 e088
.org 0x2b65a
	cmp r0, r5	@ 0002b65a a842
.org 0x2b65c
	bhi.n 0x2b668	@ 0002b65c 04d8
.org 0x2b65e
	movs r0, #1	@ 0002b65e 0120
.org 0x2b660
	b.n 0x2b66c	@ 0002b660 04e0
.org 0x2b662
	.byte 0x00	@ 0002b662 data
.org 0x2b663
	.byte 0x00	@ 0002b663 data
.org 0x2b664
	.byte 0x0f,0x27,0x00,0x00	@ 0002b664 data
.org 0x2b668
	strh r5, [r4, #6]	@ 0002b668 e580
.org 0x2b66a
	movs r0, #0	@ 0002b66a 0020
