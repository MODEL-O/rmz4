@ FUN_0800c66c  entry 0x0800c66c  size 92
.thumb
.org 0xc66c
FUN_0800c66c:
	push {r4, r5, r6, lr}	@ 0000c66c 70b5
.org 0xc66e
	adds r2, r0, #0	@ 0000c66e 021c
.org 0xc670
	adds r4, r1, #0	@ 0000c670 0c1c
.org 0xc672
	ldr r0, [pc, #76]	@ 0000c672 1348
.org 0xc674
	cmp r2, r0	@ 0000c674 8242
.org 0xc676
	bgt.n 0xc6d0	@ 0000c676 2bdc
.org 0xc678
	ldr r0, [pc, #72]	@ 0000c678 1248
.org 0xc67a
	adds r1, r4, r0	@ 0000c67a 2118
.org 0xc67c
	ldr r0, [pc, #72]	@ 0000c67c 1248
.org 0xc67e
	cmp r1, r0	@ 0000c67e 8142
.org 0xc680
	bhi.n 0xc6d0	@ 0000c680 26d8
.org 0xc682
	ldr r1, [pc, #72]	@ 0000c682 1249
.org 0xc684
	movs r6, #252	@ 0000c684 fc26
.org 0xc686
	lsls r6, r6, #3	@ 0000c686 f600
.org 0xc688
	adds r1, r1, r6	@ 0000c688 8919
.org 0xc68a
	ldrh r3, [r1, #0]	@ 0000c68a 0b88
.org 0xc68c
	asrs r0, r4, #12	@ 0000c68c 2013
.org 0xc68e
	muls r0, r3	@ 0000c68e 5843
.org 0xc690
	asrs r2, r2, #12	@ 0000c690 1213
.org 0xc692
	adds r0, r0, r2	@ 0000c692 8018
.org 0xc694
	adds r0, #2	@ 0000c694 0230
.org 0xc696
	lsls r0, r0, #1	@ 0000c696 4000
.org 0xc698
	adds r0, r0, r1	@ 0000c698 4018
.org 0xc69a
	ldrh r5, [r0, #0]	@ 0000c69a 0588
.org 0xc69c
	movs r6, #180	@ 0000c69c b426
.org 0xc69e
	lsls r6, r6, #11	@ 0000c69e f602
.org 0xc6a0
	adds r0, r4, r6	@ 0000c6a0 a019
.org 0xc6a2
	asrs r0, r0, #12	@ 0000c6a2 0013
.org 0xc6a4
	muls r0, r3	@ 0000c6a4 5843
.org 0xc6a6
	adds r0, r0, r2	@ 0000c6a6 8018
.org 0xc6a8
	adds r0, #2	@ 0000c6a8 0230
.org 0xc6aa
	lsls r0, r0, #1	@ 0000c6aa 4000
.org 0xc6ac
	adds r0, r0, r1	@ 0000c6ac 4018
.org 0xc6ae
	ldrh r0, [r0, #0]	@ 0000c6ae 0088
.org 0xc6b0
	cmp r0, #1	@ 0000c6b0 0128
.org 0xc6b2
	beq.n 0xc6d0	@ 0000c6b2 0dd0
.org 0xc6b4
	adds r1, r0, #0	@ 0000c6b4 011c
.org 0xc6b6
	eors r1, r5	@ 0000c6b6 6940
.org 0xc6b8
	negs r0, r1	@ 0000c6b8 4842
.org 0xc6ba
	orrs r0, r1	@ 0000c6ba 0843
.org 0xc6bc
	lsrs r0, r0, #31	@ 0000c6bc c00f
.org 0xc6be
	b.n 0xc6d2	@ 0000c6be 08e0
.org 0xc6c0
	.byte 0xff,0xff,0x0e,0x00	@ 0000c6c0 data
.org 0xc6c4
	.byte 0x00,0xc0,0xfe,0xff	@ 0000c6c4 data
