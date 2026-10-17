@ FUN_080006c8  entry 0x080006c8  size 210
.thumb
.org 0x6c8
FUN_080006c8:
	push {r4, r5, r6, lr}	@ 000006c8 70b5
.org 0x6ca
	bl 0xa10	@ 000006ca 00f0a1f9
.org 0x6ce
	bl 0xba8	@ 000006ce 00f06bfa
.org 0x6d2
	bl 0x11c0	@ 000006d2 00f075fd
.org 0x6d6
	bl 0x1454	@ 000006d6 00f0bdfe
.org 0x6da
	bl 0x155c	@ 000006da 00f03fff
.org 0x6de
	movs r1, #128	@ 000006de 8021
.org 0x6e0
	lsls r1, r1, #19	@ 000006e0 c904
.org 0x6e2
	movs r0, #128	@ 000006e2 8020
.org 0x6e4
	strh r0, [r1, #0]	@ 000006e4 0880
.org 0x6e6
	bl 0x1c04	@ 000006e6 01f08dfa
.org 0x6ea
	bl 0x202c	@ 000006ea 01f09ffc
.org 0x6ee
	bl 0x2348	@ 000006ee 01f02bfe
.org 0x6f2
	bl 0x2664	@ 000006f2 01f0b7ff
.org 0x6f6
	bl 0x2820	@ 000006f6 02f093f8
.org 0x6fa
	bl 0x28e0	@ 000006fa 02f0f1f8
.org 0x6fe
	bl 0x290c	@ 000006fe 02f005f9
.org 0x702
	bl 0x2970	@ 00000702 02f035f9
.org 0x706
	bl 0x2990	@ 00000706 02f043f9
.org 0x70a
	ldr r4, [pc, #144]	@ 0000070a 244c
.org 0x70c
	ldr r0, [pc, #144]	@ 0000070c 2448
.org 0x70e
	ldrh r0, [r0, #0]	@ 0000070e 0088
.org 0x710
	movs r1, #248	@ 00000710 f821
.org 0x712
	lsls r1, r1, #5	@ 00000712 4901
.org 0x714
	ands r1, r0	@ 00000714 0140
.org 0x716
	lsls r1, r1, #3	@ 00000716 c900
.org 0x718
	movs r2, #176	@ 00000718 b022
.org 0x71a
	lsls r2, r2, #3	@ 0000071a d200
.org 0x71c
	movs r3, #240	@ 0000071c f023
.org 0x71e
	lsls r3, r3, #2	@ 0000071e 9b00
.org 0x720
	adds r0, r4, #0	@ 00000720 201c
.org 0x722
	bl 0x1fd4	@ 00000722 01f057fc
.org 0x726
	adds r0, r4, #0	@ 00000726 201c
.org 0x728
	bl 0x10d458	@ 00000728 0cf196fe
.org 0x72c
	ldr r1, [pc, #116]	@ 0000072c 1d49
.org 0x72e
	ldr r2, [pc, #120]	@ 0000072e 1e4a
.org 0x730
	adds r0, r2, #0	@ 00000730 101c
.org 0x732
	strh r0, [r1, #0]	@ 00000732 0880
.org 0x734
	ldr r3, [pc, #116]	@ 00000734 1d4b
.org 0x736
	ldr r6, [pc, #120]	@ 00000736 1e4e
.org 0x738
	adds r1, r3, r6	@ 00000738 9919
.org 0x73a
	ldrb r0, [r1, #0]	@ 0000073a 0878
.org 0x73c
	movs r5, #0	@ 0000073c 0025
.org 0x73e
	movs r2, #1	@ 0000073e 0122
.org 0x740
	strb r2, [r1, #0]	@ 00000740 0a70
.org 0x742
	movs r0, #174	@ 00000742 ae20
.org 0x744
	lsls r0, r0, #1	@ 00000744 4000
.org 0x746
	adds r1, r3, r0	@ 00000746 1918
.org 0x748
	ldr r0, [pc, #104]	@ 00000748 1a48
.org 0x74a
	str r0, [r1, #0]	@ 0000074a 0860
.org 0x74c
	ldr r0, [pc, #104]	@ 0000074c 1a48
.org 0x74e
	ldrh r0, [r0, #0]	@ 0000074e 0088
.org 0x750
	movs r0, #0	@ 00000750 0020
.org 0x752
	adds r6, #1	@ 00000752 0136
.org 0x754
	adds r1, r3, r6	@ 00000754 9919
.org 0x756
	strb r0, [r1, #0]	@ 00000756 0870
.org 0x758
	movs r0, #172	@ 00000758 ac20
.org 0x75a
	lsls r0, r0, #1	@ 0000075a 4000
.org 0x75c
	adds r1, r3, r0	@ 0000075c 1918
.org 0x75e
	ldr r0, [pc, #92]	@ 0000075e 1748
.org 0x760
	str r0, [r1, #0]	@ 00000760 0860
.org 0x762
	subs r4, #16	@ 00000762 103c
.org 0x764
	str r2, [r4, #12]	@ 00000764 e260
.org 0x766
	ldr r4, [pc, #88]	@ 00000766 164c
.org 0x768
	adds r0, r4, #0	@ 00000768 201c
.org 0x76a
	movs r1, #0	@ 0000076a 0021
.org 0x76c
	bl 0x10f6f8	@ 0000076c 0ef1c4ff
.org 0x770
	strh r5, [r4, #18]	@ 00000770 6582
.org 0x772
	movs r2, #141	@ 00000772 8d22
.org 0x774
	lsls r2, r2, #2	@ 00000774 9200
.org 0x776
	adds r4, r4, r2	@ 00000776 a418
.org 0x778
	str r5, [r4, #0]	@ 00000778 2560
.org 0x77a
	movs r0, #1	@ 0000077a 0120
.org 0x77c
	bl 0x11cc	@ 0000077c 00f026fd
.org 0x780
	ldr r1, [pc, #64]	@ 00000780 1049
.org 0x782
	movs r0, #0	@ 00000782 0020
.org 0x784
	bl 0x12b8	@ 00000784 00f098fd
.org 0x788
	ldr r1, [pc, #60]	@ 00000788 0f49
.org 0x78a
	movs r0, #2	@ 0000078a 0220
.org 0x78c
	bl 0x12b8	@ 0000078c 00f094fd
.org 0x790
	bl 0x11fc	@ 00000790 00f034fd
.org 0x794
	pop {r4, r5, r6}	@ 00000794 70bc
.org 0x796
	pop {r0}	@ 00000796 01bc
.org 0x798
	bx r0	@ 00000798 0047
