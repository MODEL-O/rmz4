@ FUN_0808064c  entry 0x0808064c  size 94
.thumb
.org 0x8064c
FUN_0808064c:
	push {r4, r5, lr}	@ 0008064c 30b5
.org 0x8064e
	adds r4, r0, #0	@ 0008064e 041c
.org 0x80650
	ldr r0, [r4, #20]	@ 00080650 6069
.org 0x80652
	movs r1, #1	@ 00080652 0121
.org 0x80654
	ands r0, r1	@ 00080654 0840
.org 0x80656
	cmp r0, #0	@ 00080656 0028
.org 0x80658
	beq.n 0x806a4	@ 00080658 24d0
.org 0x8065a
	movs r0, #16	@ 0008065a 1020
.org 0x8065c
	bl 0x6984	@ 0008065c 86f792f9
.org 0x80660
	ldr r0, [r4, #12]	@ 00080660 e068
.org 0x80662
	ldr r0, [r0, #44]	@ 00080662 c06a
.org 0x80664
	ldr r5, [r4, #44]	@ 00080664 e56a
.org 0x80666
	movs r2, #0	@ 00080666 0022
.org 0x80668
	ldr r1, [r0, #84]	@ 00080668 416d
.org 0x8066a
	ldr r0, [r5, #84]	@ 0008066a 686d
.org 0x8066c
	cmp r1, r0	@ 0008066c 8142
.org 0x8066e
	ble.n 0x80672	@ 0008066e 00dd
.org 0x80670
	movs r2, #1	@ 00080670 0122
.org 0x80672
	adds r0, r5, #0	@ 00080672 281c
.org 0x80674
	adds r0, #192	@ 00080674 c030
.org 0x80676
	strb r2, [r0, #0]	@ 00080676 0270
.org 0x80678
	ldr r1, [r4, #20]	@ 00080678 6169
.org 0x8067a
	movs r0, #128	@ 0008067a 8020
.org 0x8067c
	lsls r0, r0, #2	@ 0008067c 8000
.org 0x8067e
	ands r0, r1	@ 0008067e 0840
.org 0x80680
	cmp r0, #0	@ 00080680 0028
.org 0x80682
	beq.n 0x806a4	@ 00080682 0fd0
.org 0x80684
	movs r0, #128	@ 00080684 8020
.org 0x80686
	lsls r0, r0, #10	@ 00080686 8002
.org 0x80688
	ands r1, r0	@ 00080688 0140
.org 0x8068a
	cmp r1, #0	@ 0008068a 0029
.org 0x8068c
	beq.n 0x806a4	@ 0008068c 0ad0
.org 0x8068e
	ldr r0, [pc, #28]	@ 0008068e 0748
.org 0x80690
	ldr r0, [r0, #0]	@ 00080690 0068
.org 0x80692
	cmp r0, #0	@ 00080692 0028
.org 0x80694
	beq.n 0x806a4	@ 00080694 06d0
.org 0x80696
	movs r1, #5	@ 00080696 0521
.org 0x80698
	movs r2, #0	@ 00080698 0022
.org 0x8069a
	bl 0x3a578	@ 0008069a b9f76dff
.org 0x8069e
	adds r1, r5, #0	@ 0008069e 291c
.org 0x806a0
	adds r1, #195	@ 000806a0 c331
.org 0x806a2
	strb r0, [r1, #0]	@ 000806a2 0870
.org 0x806a4
	pop {r4, r5}	@ 000806a4 30bc
.org 0x806a6
	pop {r0}	@ 000806a6 01bc
.org 0x806a8
	bx r0	@ 000806a8 0047
