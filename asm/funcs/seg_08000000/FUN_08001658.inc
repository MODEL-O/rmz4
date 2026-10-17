@ FUN_08001658  entry 0x08001658  size 82
.thumb
.org 0x1658
FUN_08001658:
	push {r4, r5, lr}	@ 00001658 30b5
.org 0x165a
	sub sp, #4	@ 0000165a 81b0
.org 0x165c
	lsls r0, r0, #24	@ 0000165c 0006
.org 0x165e
	lsrs r5, r0, #24	@ 0000165e 050e
.org 0x1660
	movs r0, #0	@ 00001660 0020
.org 0x1662
	str r0, [sp, #0]	@ 00001662 0090
.org 0x1664
	cmp r5, #5	@ 00001664 052d
.org 0x1666
	bhi.n 0x169e	@ 00001666 1ad8
.org 0x1668
	lsls r1, r5, #2	@ 00001668 a900
.org 0x166a
	adds r1, r1, r5	@ 0000166a 4919
.org 0x166c
	lsls r0, r1, #4	@ 0000166c 0801
.org 0x166e
	adds r1, r1, r0	@ 0000166e 0918
.org 0x1670
	mov r0, sp	@ 00001670 6846
.org 0x1672
	movs r2, #4	@ 00001672 0422
.org 0x1674
	bl 0x1bb0	@ 00001674 00f09cfa
.org 0x1678
	adds r4, r0, #0	@ 00001678 041c
.org 0x167a
	lsls r4, r4, #16	@ 0000167a 2404
.org 0x167c
	lsrs r4, r4, #16	@ 0000167c 240c
.org 0x167e
	adds r0, r5, #6	@ 0000167e a81d
.org 0x1680
	lsls r1, r0, #2	@ 00001680 8100
.org 0x1682
	adds r1, r1, r0	@ 00001682 0918
.org 0x1684
	lsls r0, r1, #4	@ 00001684 0801
.org 0x1686
	adds r1, r1, r0	@ 00001686 0918
.org 0x1688
	lsls r1, r1, #16	@ 00001688 0904
.org 0x168a
	lsrs r1, r1, #16	@ 0000168a 090c
.org 0x168c
	mov r0, sp	@ 0000168c 6846
.org 0x168e
	movs r2, #4	@ 0000168e 0422
.org 0x1690
	bl 0x1bb0	@ 00001690 00f08efa
.org 0x1694
	orrs r4, r0	@ 00001694 0443
.org 0x1696
	lsls r4, r4, #16	@ 00001696 2404
.org 0x1698
	asrs r4, r4, #16	@ 00001698 2414
.org 0x169a
	adds r0, r4, #0	@ 0000169a 201c
.org 0x169c
	b.n 0x16a2	@ 0000169c 01e0
.org 0x169e
	movs r0, #1	@ 0000169e 0120
.org 0x16a0
	negs r0, r0	@ 000016a0 4042
.org 0x16a2
	add sp, #4	@ 000016a2 01b0
.org 0x16a4
	pop {r4, r5}	@ 000016a4 30bc
.org 0x16a6
	pop {r1}	@ 000016a6 02bc
.org 0x16a8
	bx r1	@ 000016a8 0847
