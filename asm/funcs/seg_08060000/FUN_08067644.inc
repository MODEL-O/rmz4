@ FUN_08067644  entry 0x08067644  size 88
.thumb
.org 0x67644
FUN_08067644:
	push {r4, lr}	@ 00067644 10b5
.org 0x67646
	adds r4, r0, #0	@ 00067646 041c
.org 0x67648
	ldrb r0, [r4, #14]	@ 00067648 a07b
.org 0x6764a
	cmp r0, #0	@ 0006764a 0028
.org 0x6764c
	bne.n 0x67666	@ 0006764c 0bd1
.org 0x6764e
	ldr r1, [pc, #76]	@ 0006764e 1349
.org 0x67650
	adds r0, r4, #0	@ 00067650 201c
.org 0x67652
	bl 0x1cf00	@ 00067652 b5f755fc
.org 0x67656
	movs r0, #99	@ 00067656 6320
.org 0x67658
	bl 0x2b10	@ 00067658 9bf75afa
.org 0x6765c
	movs r0, #16	@ 0006765c 1020
.org 0x6765e
	strb r0, [r4, #18]	@ 0006765e a074
.org 0x67660
	ldrb r0, [r4, #14]	@ 00067660 a07b
.org 0x67662
	adds r0, #1	@ 00067662 0130
.org 0x67664
	strb r0, [r4, #14]	@ 00067664 a073
.org 0x67666
	adds r0, r4, #0	@ 00067666 201c
.org 0x67668
	bl 0x1cff0	@ 00067668 b5f7c2fc
.org 0x6766c
	adds r0, r4, #0	@ 0006766c 201c
.org 0x6766e
	adds r0, #115	@ 0006766e 7330
.org 0x67670
	ldrb r0, [r0, #0]	@ 00067670 0078
.org 0x67672
	cmp r0, #3	@ 00067672 0328
.org 0x67674
	bne.n 0x67696	@ 00067674 0fd1
.org 0x67676
	adds r0, r4, #0	@ 00067676 201c
.org 0x67678
	adds r0, #116	@ 00067678 7430
.org 0x6767a
	ldr r1, [pc, #36]	@ 0006767a 0949
.org 0x6767c
	bl 0x5784	@ 0006767c 9ef782f8
.org 0x67680
	ldrb r0, [r4, #18]	@ 00067680 a07c
.org 0x67682
	subs r0, #1	@ 00067682 0138
.org 0x67684
	strb r0, [r4, #18]	@ 00067684 a074
.org 0x67686
	lsls r0, r0, #24	@ 00067686 0006
.org 0x67688
	lsrs r0, r0, #24	@ 00067688 000e
.org 0x6768a
	cmp r0, #255	@ 0006768a ff28
.org 0x6768c
	bne.n 0x67696	@ 0006768c 03d1
.org 0x6768e
	movs r0, #14	@ 0006768e 0e20
.org 0x67690
	strb r0, [r4, #13]	@ 00067690 6073
.org 0x67692
	movs r0, #0	@ 00067692 0020
.org 0x67694
	strb r0, [r4, #14]	@ 00067694 a073
.org 0x67696
	pop {r4}	@ 00067696 10bc
.org 0x67698
	pop {r0}	@ 00067698 01bc
.org 0x6769a
	bx r0	@ 0006769a 0047
