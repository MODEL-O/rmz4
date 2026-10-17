@ FUN_080db7ec  entry 0x080db7ec  size 92
.thumb
.org 0xdb7ec
FUN_080db7ec:
	push {r4, r5, r6, r7, lr}	@ 000db7ec f0b5
.org 0xdb7ee
	adds r4, r0, #0	@ 000db7ee 041c
.org 0xdb7f0
	adds r5, r1, #0	@ 000db7f0 0d1c
.org 0xdb7f2
	lsls r2, r2, #24	@ 000db7f2 1206
.org 0xdb7f4
	lsrs r6, r2, #24	@ 000db7f4 160e
.org 0xdb7f6
	lsls r3, r3, #24	@ 000db7f6 1b06
.org 0xdb7f8
	lsrs r7, r3, #24	@ 000db7f8 1f0e
.org 0xdb7fa
	ldr r0, [pc, #76]	@ 000db7fa 1348
.org 0xdb7fc
	ldr r0, [r0, #0]	@ 000db7fc 0068
.org 0xdb7fe
	bl 0x5500	@ 000db7fe 29f77ffe
.org 0xdb802
	adds r3, r0, #0	@ 000db802 031c
.org 0xdb804
	cmp r3, #0	@ 000db804 002b
.org 0xdb806
	beq.n 0xdb840	@ 000db806 1bd0
.org 0xdb808
	adds r1, r3, #0	@ 000db808 191c
.org 0xdb80a
	adds r1, #37	@ 000db80a 2531
.org 0xdb80c
	movs r2, #0	@ 000db80c 0022
.org 0xdb80e
	movs r0, #1	@ 000db80e 0120
.org 0xdb810
	strb r0, [r1, #0]	@ 000db810 0870
.org 0xdb812
	ldr r0, [pc, #56]	@ 000db812 0e48
.org 0xdb814
	movs r1, #41	@ 000db814 2921
.org 0xdb816
	strb r1, [r3, #9]	@ 000db816 5972
.org 0xdb818
	adds r0, #164	@ 000db818 a430
.org 0xdb81a
	ldr r0, [r0, #0]	@ 000db81a 0068
.org 0xdb81c
	ldr r0, [r0, #0]	@ 000db81c 0068
.org 0xdb81e
	str r0, [r3, #20]	@ 000db81e 5861
.org 0xdb820
	movs r0, #0	@ 000db820 0020
.org 0xdb822
	strh r2, [r3, #32]	@ 000db822 1a84
.org 0xdb824
	adds r1, r3, #0	@ 000db824 191c
.org 0xdb826
	adds r1, #34	@ 000db826 2231
.org 0xdb828
	strb r0, [r1, #0]	@ 000db828 0870
.org 0xdb82a
	str r4, [r3, #40]	@ 000db82a 9c62
.org 0xdb82c
	ldr r0, [r5, #0]	@ 000db82c 2868
.org 0xdb82e
	ldr r1, [r5, #4]	@ 000db82e 6968
.org 0xdb830
	str r0, [r3, #84]	@ 000db830 5865
.org 0xdb832
	str r1, [r3, #88]	@ 000db832 9965
.org 0xdb834
	movs r0, #2	@ 000db834 0220
.org 0xdb836
	strb r0, [r3, #16]	@ 000db836 1874
.org 0xdb838
	strb r6, [r3, #17]	@ 000db838 5e74
.org 0xdb83a
	adds r0, r3, #0	@ 000db83a 181c
.org 0xdb83c
	adds r0, #116	@ 000db83c 7430
.org 0xdb83e
	strb r7, [r0, #0]	@ 000db83e 0770
.org 0xdb840
	adds r0, r3, #0	@ 000db840 181c
.org 0xdb842
	pop {r4, r5, r6, r7}	@ 000db842 f0bc
.org 0xdb844
	pop {r1}	@ 000db844 02bc
.org 0xdb846
	bx r1	@ 000db846 0847
