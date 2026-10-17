@ FUN_0811c61c  entry 0x0811c61c  size 102
.thumb
.org 0x11c61c
FUN_0811c61c:
	push {r4, lr}	@ 0011c61c 10b5
.org 0x11c61e
	adds r4, r0, #0	@ 0011c61e 041c
.org 0x11c620
	ldr r1, [pc, #64]	@ 0011c620 1049
.org 0x11c622
	ldrb r0, [r4, #2]	@ 0011c622 a078
.org 0x11c624
	lsls r0, r0, #2	@ 0011c624 8000
.org 0x11c626
	adds r0, r0, r1	@ 0011c626 4018
.org 0x11c628
	ldr r1, [r0, #0]	@ 0011c628 0168
.org 0x11c62a
	adds r0, r4, #0	@ 0011c62a 201c
.org 0x11c62c
	bl 0x128f80	@ 0011c62c 0cf0a8fc
.org 0x11c630
	ldrh r0, [r4, #4]	@ 0011c630 a088
.org 0x11c632
	subs r0, #1	@ 0011c632 0138
.org 0x11c634
	movs r2, #0	@ 0011c634 0022
.org 0x11c636
	adds r1, r0, #0	@ 0011c636 011c
.org 0x11c638
	strh r0, [r4, #4]	@ 0011c638 a080
.org 0x11c63a
	lsls r0, r0, #16	@ 0011c63a 0004
.org 0x11c63c
	cmp r0, #0	@ 0011c63c 0028
.org 0x11c63e
	bne.n 0x11c670	@ 0011c63e 17d1
.org 0x11c640
	ldr r0, [pc, #36]	@ 0011c640 0948
.org 0x11c642
	ldr r3, [pc, #40]	@ 0011c642 0a4b
.org 0x11c644
	adds r1, r0, r3	@ 0011c644 c118
.org 0x11c646
	strb r2, [r1, #0]	@ 0011c646 0a70
.org 0x11c648
	subs r3, #1	@ 0011c648 013b
.org 0x11c64a
	adds r1, r0, r3	@ 0011c64a c118
.org 0x11c64c
	strb r2, [r1, #0]	@ 0011c64c 0a70
.org 0x11c64e
	movs r1, #128	@ 0011c64e 8021
.org 0x11c650
	lsls r1, r1, #3	@ 0011c650 c900
.org 0x11c652
	adds r0, r0, r1	@ 0011c652 4018
.org 0x11c654
	strb r2, [r0, #0]	@ 0011c654 0270
.org 0x11c656
	movs r0, #4	@ 0011c656 0420
.org 0x11c658
	strb r0, [r4, #1]	@ 0011c658 6070
.org 0x11c65a
	adds r0, r4, #0	@ 0011c65a 201c
.org 0x11c65c
	bl 0x11c698	@ 0011c65c 00f01cf8
.org 0x11c660
	b.n 0x11c68a	@ 0011c660 13e0
.org 0x11c662
	.byte 0x00	@ 0011c662 data
.org 0x11c663
	.byte 0x00	@ 0011c663 data
.org 0x11c664
	.byte 0xe8,0x1d,0x88,0x08	@ 0011c664 data
.org 0x11c668
	.byte 0xc0,0x2a,0x00,0x03	@ 0011c668 data
.org 0x11c66c
	.byte 0x02,0x04,0x00,0x00	@ 0011c66c data
.org 0x11c670
	ldr r2, [pc, #28]	@ 0011c670 074a
.org 0x11c672
	ldr r3, [pc, #32]	@ 0011c672 084b
.org 0x11c674
	adds r0, r2, r3	@ 0011c674 d018
.org 0x11c676
	strb r1, [r0, #0]	@ 0011c676 0170
.org 0x11c678
	movs r0, #255	@ 0011c678 ff20
.org 0x11c67a
	ands r0, r1	@ 0011c67a 0840
.org 0x11c67c
	subs r3, #1	@ 0011c67c 013b
.org 0x11c67e
	adds r1, r2, r3	@ 0011c67e d118
.org 0x11c680
	strb r0, [r1, #0]	@ 0011c680 0870
