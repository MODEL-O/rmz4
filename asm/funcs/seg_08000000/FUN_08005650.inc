@ FUN_08005650  entry 0x08005650  size 244
.thumb
.org 0x5650
FUN_08005650:
	push {r4, r5, r6, r7, lr}	@ 00005650 f0b5
.org 0x5652
	mov r7, sl	@ 00005652 5746
.org 0x5654
	mov r6, r9	@ 00005654 4e46
.org 0x5656
	mov r5, r8	@ 00005656 4546
.org 0x5658
	push {r5, r6, r7}	@ 00005658 e0b4
.org 0x565a
	bl 0x627c	@ 0000565a 00f00ffe
.org 0x565e
	ldr r7, [pc, #16]	@ 0000565e 044f
.org 0x5660
	ldrb r0, [r7, #2]	@ 00005660 b878
.org 0x5662
	adds r1, r0, #0	@ 00005662 011c
.org 0x5664
	cmp r1, #0	@ 00005664 0029
.org 0x5666
	beq.n 0x5674	@ 00005666 05d0
.org 0x5668
	subs r0, #1	@ 00005668 0138
.org 0x566a
	strb r0, [r7, #2]	@ 0000566a b870
.org 0x566c
	b.n 0x573c	@ 0000566c 66e0
.org 0x566e
	.byte 0x00	@ 0000566e data
.org 0x566f
	.byte 0x00	@ 0000566f data
.org 0x5670
	.byte 0xe0,0x32,0x00,0x03	@ 00005670 data
.org 0x5674
	movs r2, #197	@ 00005674 c522
.org 0x5676
	lsls r2, r2, #3	@ 00005676 d200
.org 0x5678
	adds r0, r7, r2	@ 00005678 b818
.org 0x567a
	str r1, [r0, #0]	@ 0000567a 0160
.org 0x567c
	adds r2, #4	@ 0000567c 0432
.org 0x567e
	adds r0, r7, r2	@ 0000567e b818
.org 0x5680
	str r1, [r0, #0]	@ 00005680 0160
.org 0x5682
	adds r2, #4	@ 00005682 0432
.org 0x5684
	adds r0, r7, r2	@ 00005684 b818
.org 0x5686
	str r1, [r0, #0]	@ 00005686 0160
.org 0x5688
	ldr r0, [pc, #192]	@ 00005688 3048
.org 0x568a
	adds r0, r0, r7	@ 0000568a c019
.org 0x568c
	mov r8, r0	@ 0000568c 8046
.org 0x568e
	ldr r0, [r0, #0]	@ 0000568e 0068
.org 0x5690
	movs r1, #196	@ 00005690 c421
.org 0x5692
	lsls r1, r1, #3	@ 00005692 c900
.org 0x5694
	adds r1, r1, r7	@ 00005694 c919
.org 0x5696
	mov sl, r1	@ 00005696 8a46
.org 0x5698
	ldr r1, [r1, #0]	@ 00005698 0968
.org 0x569a
	bl 0x62e8	@ 0000569a 00f025fe
.org 0x569e
	mov r2, r8	@ 0000569e 4246
.org 0x56a0
	ldr r0, [r2, #0]	@ 000056a0 1068
.org 0x56a2
	ldr r1, [pc, #172]	@ 000056a2 2b49
.org 0x56a4
	adds r4, r7, r1	@ 000056a4 7c18
.org 0x56a6
	ldr r1, [r4, #0]	@ 000056a6 2168
.org 0x56a8
	bl 0x62e8	@ 000056a8 00f01efe
.org 0x56ac
	movs r2, #193	@ 000056ac c122
.org 0x56ae
	lsls r2, r2, #3	@ 000056ae d200
.org 0x56b0
	adds r6, r7, r2	@ 000056b0 be18
.org 0x56b2
	ldr r0, [r6, #0]	@ 000056b2 3068
.org 0x56b4
	ldr r1, [pc, #156]	@ 000056b4 2749
.org 0x56b6
	adds r1, r1, r7	@ 000056b6 c919
.org 0x56b8
	mov r9, r1	@ 000056b8 8946
.org 0x56ba
	ldr r1, [r1, #0]	@ 000056ba 0968
.org 0x56bc
	bl 0x62e8	@ 000056bc 00f014fe
.org 0x56c0
	ldr r0, [r6, #0]	@ 000056c0 3068
.org 0x56c2
	ldr r1, [r4, #0]	@ 000056c2 2168
.org 0x56c4
	bl 0x62e8	@ 000056c4 00f010fe
.org 0x56c8
	ldr r2, [pc, #140]	@ 000056c8 234a
.org 0x56ca
	adds r5, r7, r2	@ 000056ca bd18
.org 0x56cc
	ldr r0, [r5, #0]	@ 000056cc 2868
.org 0x56ce
	mov r2, sl	@ 000056ce 5246
.org 0x56d0
	ldr r1, [r2, #0]	@ 000056d0 1168
.org 0x56d2
	bl 0x62e8	@ 000056d2 00f009fe
.org 0x56d6
	ldr r0, [r5, #0]	@ 000056d6 2868
.org 0x56d8
	mov r2, r9	@ 000056d8 4a46
.org 0x56da
	ldr r1, [r2, #0]	@ 000056da 1168
.org 0x56dc
	bl 0x62e8	@ 000056dc 00f004fe
.org 0x56e0
	ldr r0, [r5, #0]	@ 000056e0 2868
.org 0x56e2
	ldr r1, [r4, #0]	@ 000056e2 2168
.org 0x56e4
	bl 0x62e8	@ 000056e4 00f000fe
.org 0x56e8
	mov r1, r8	@ 000056e8 4146
.org 0x56ea
	ldr r0, [r1, #0]	@ 000056ea 0868
.org 0x56ec
	ldr r2, [pc, #108]	@ 000056ec 1b4a
.org 0x56ee
	adds r2, r2, r7	@ 000056ee d219
.org 0x56f0
	mov r9, r2	@ 000056f0 9146
.org 0x56f2
	ldr r1, [r2, #0]	@ 000056f2 1168
.org 0x56f4
	bl 0x6360	@ 000056f4 00f034fe
.org 0x56f8
	mov r1, r8	@ 000056f8 4146
.org 0x56fa
	ldr r0, [r1, #0]	@ 000056fa 0868
.org 0x56fc
	movs r2, #195	@ 000056fc c322
.org 0x56fe
	lsls r2, r2, #3	@ 000056fe d200
.org 0x5700
	adds r4, r7, r2	@ 00005700 bc18
.org 0x5702
	ldr r1, [r4, #0]	@ 00005702 2168
.org 0x5704
	bl 0x6360	@ 00005704 00f02cfe
.org 0x5708
	ldr r0, [r6, #0]	@ 00005708 3068
.org 0x570a
	movs r1, #194	@ 0000570a c221
.org 0x570c
	lsls r1, r1, #3	@ 0000570c c900
.org 0x570e
	adds r1, r1, r7	@ 0000570e c919
.org 0x5710
	mov r8, r1	@ 00005710 8846
.org 0x5712
	ldr r1, [r1, #0]	@ 00005712 0968
.org 0x5714
	bl 0x6360	@ 00005714 00f024fe
.org 0x5718
	ldr r0, [r6, #0]	@ 00005718 3068
.org 0x571a
	ldr r1, [r4, #0]	@ 0000571a 2168
.org 0x571c
	bl 0x6360	@ 0000571c 00f020fe
.org 0x5720
	ldr r0, [r5, #0]	@ 00005720 2868
.org 0x5722
	mov r2, r9	@ 00005722 4a46
.org 0x5724
	ldr r1, [r2, #0]	@ 00005724 1168
.org 0x5726
	bl 0x6360	@ 00005726 00f01bfe
.org 0x572a
	ldr r0, [r5, #0]	@ 0000572a 2868
.org 0x572c
	mov r2, r8	@ 0000572c 4246
.org 0x572e
	ldr r1, [r2, #0]	@ 0000572e 1168
.org 0x5730
	bl 0x6360	@ 00005730 00f016fe
.org 0x5734
	ldr r0, [r5, #0]	@ 00005734 2868
.org 0x5736
	ldr r1, [r4, #0]	@ 00005736 2168
.org 0x5738
	bl 0x6360	@ 00005738 00f012fe
.org 0x573c
	pop {r3, r4, r5}	@ 0000573c 38bc
.org 0x573e
	mov r8, r3	@ 0000573e 9846
.org 0x5740
	mov r9, r4	@ 00005740 a146
.org 0x5742
	mov sl, r5	@ 00005742 aa46
