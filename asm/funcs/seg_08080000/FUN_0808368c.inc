@ FUN_0808368c  entry 0x0808368c  size 468
.thumb
.org 0x8368c
FUN_0808368c:
	push {r4, r5, r6, r7, lr}	@ 0008368c f0b5
.org 0x8368e
	adds r4, r0, #0	@ 0008368e 041c
.org 0x83690
	adds r6, r1, #0	@ 00083690 0e1c
.org 0x83692
	movs r7, #0	@ 00083692 0027
.org 0x83694
	cmp r2, #0	@ 00083694 002a
.org 0x83696
	bne.n 0x8369a	@ 00083696 00d1
.org 0x83698
	b.n 0x837a8	@ 00083698 86e0
.org 0x8369a
	ldr r0, [r4, #88]	@ 0008369a a06d
.org 0x8369c
	adds r1, r0, r2	@ 0008369c 8118
.org 0x8369e
	str r1, [r4, #88]	@ 0008369e a165
.org 0x836a0
	movs r2, #0	@ 000836a0 0022
.org 0x836a2
	ldr r0, [r4, #96]	@ 000836a2 206e
.org 0x836a4
	cmp r0, #0	@ 000836a4 0028
.org 0x836a6
	ble.n 0x836aa	@ 000836a6 00dd
.org 0x836a8
	movs r2, #1	@ 000836a8 0122
.org 0x836aa
	adds r5, r2, #0	@ 000836aa 151c
.org 0x836ac
	ldr r0, [r4, #84]	@ 000836ac 606d
.org 0x836ae
	ldr r2, [pc, #36]	@ 000836ae 094a
.org 0x836b0
	adds r3, r0, r2	@ 000836b0 8318
.org 0x836b2
	adds r2, r1, #0	@ 000836b2 0a1c
.org 0x836b4
	ldrb r1, [r4, #10]	@ 000836b4 a17a
.org 0x836b6
	movs r0, #32	@ 000836b6 2020
.org 0x836b8
	ands r0, r1	@ 000836b8 0840
.org 0x836ba
	lsls r0, r0, #24	@ 000836ba 0006
.org 0x836bc
	lsrs r0, r0, #24	@ 000836bc 000e
.org 0x836be
	ldr r1, [pc, #24]	@ 000836be 0649
.org 0x836c0
	cmp r0, #0	@ 000836c0 0028
.org 0x836c2
	beq.n 0x836dc	@ 000836c2 0bd0
.org 0x836c4
	movs r1, #188	@ 000836c4 bc21
.org 0x836c6
	lsls r1, r1, #6	@ 000836c6 8901
.org 0x836c8
	cmp r0, #0	@ 000836c8 0028
.org 0x836ca
	beq.n 0x836dc	@ 000836ca 07d0
.org 0x836cc
	adds r0, r1, #0	@ 000836cc 081c
.org 0x836ce
	muls r0, r5	@ 000836ce 6843
.org 0x836d0
	b.n 0x836e2	@ 000836d0 07e0
.org 0x836d2
	.byte 0x00	@ 000836d2 data
.org 0x836d3
	.byte 0x00	@ 000836d3 data
.org 0x836d4
	.byte 0x00,0xf9,0xff,0xff	@ 000836d4 data
.org 0x836d8
	.byte 0x00,0xd1,0xff,0xff	@ 000836d8 data
.org 0x836dc
	movs r0, #1	@ 000836dc 0120
.org 0x836de
	eors r0, r5	@ 000836de 6840
.org 0x836e0
	muls r0, r1	@ 000836e0 4843
.org 0x836e2
	adds r2, r2, r0	@ 000836e2 1218
.org 0x836e4
	cmp r5, #0	@ 000836e4 002d
.org 0x836e6
	beq.n 0x83704	@ 000836e6 0dd0
.org 0x836e8
	ldr r0, [pc, #20]	@ 000836e8 0548
.org 0x836ea
	adds r1, r2, r0	@ 000836ea 1118
.org 0x836ec
	adds r0, r3, #0	@ 000836ec 181c
.org 0x836ee
	bl 0x7db4	@ 000836ee 84f761fb
.org 0x836f2
	adds r2, r0, #0	@ 000836f2 021c
.org 0x836f4
	cmp r2, #0	@ 000836f4 002a
.org 0x836f6
	bge.n 0x83724	@ 000836f6 15da
.org 0x836f8
	ldr r0, [r4, #88]	@ 000836f8 a06d
.org 0x836fa
	movs r1, #128	@ 000836fa 8021
.org 0x836fc
	lsls r1, r1, #1	@ 000836fc 4900
.org 0x836fe
	b.n 0x8371a	@ 000836fe 0ce0
.org 0x83700
	.byte 0x00,0xff,0xff,0xff	@ 00083700 data
.org 0x83704
	movs r0, #128	@ 00083704 8020
.org 0x83706
	lsls r0, r0, #1	@ 00083706 4000
.org 0x83708
	adds r1, r2, r0	@ 00083708 1118
.org 0x8370a
	adds r0, r3, #0	@ 0008370a 181c
.org 0x8370c
	bl 0x7f8c	@ 0008370c 84f73efc
.org 0x83710
	adds r2, r0, #0	@ 00083710 021c
.org 0x83712
	cmp r2, #0	@ 00083712 002a
.org 0x83714
	ble.n 0x83724	@ 00083714 06dd
.org 0x83716
	ldr r0, [r4, #88]	@ 00083716 a06d
.org 0x83718
	ldr r1, [pc, #60]	@ 00083718 0f49
.org 0x8371a
	adds r0, r0, r1	@ 0008371a 4018
.org 0x8371c
	adds r0, r0, r2	@ 0008371c 8018
.org 0x8371e
	str r0, [r4, #88]	@ 0008371e a065
.org 0x83720
	movs r0, #1	@ 00083720 0120
.org 0x83722
	orrs r7, r0	@ 00083722 0743
.org 0x83724
	movs r1, #0	@ 00083724 0021
.org 0x83726
	ldr r0, [r4, #96]	@ 00083726 206e
.org 0x83728
	cmp r0, #0	@ 00083728 0028
.org 0x8372a
	ble.n 0x8372e	@ 0008372a 00dd
.org 0x8372c
	movs r1, #1	@ 0008372c 0121
.org 0x8372e
	adds r5, r1, #0	@ 0008372e 0d1c
.org 0x83730
	ldr r0, [r4, #84]	@ 00083730 606d
.org 0x83732
	movs r2, #224	@ 00083732 e022
.org 0x83734
	lsls r2, r2, #3	@ 00083734 d200
.org 0x83736
	adds r3, r0, r2	@ 00083736 8318
.org 0x83738
	ldr r2, [r4, #88]	@ 00083738 a26d
.org 0x8373a
	ldrb r1, [r4, #10]	@ 0008373a a17a
.org 0x8373c
	movs r0, #32	@ 0008373c 2020
.org 0x8373e
	ands r0, r1	@ 0008373e 0840
.org 0x83740
	lsls r0, r0, #24	@ 00083740 0006
.org 0x83742
	lsrs r0, r0, #24	@ 00083742 000e
.org 0x83744
	ldr r1, [pc, #20]	@ 00083744 0549
.org 0x83746
	cmp r0, #0	@ 00083746 0028
.org 0x83748
	beq.n 0x83760	@ 00083748 0ad0
.org 0x8374a
	movs r1, #188	@ 0008374a bc21
.org 0x8374c
	lsls r1, r1, #6	@ 0008374c 8901
.org 0x8374e
	cmp r0, #0	@ 0008374e 0028
.org 0x83750
	beq.n 0x83760	@ 00083750 06d0
.org 0x83752
	adds r0, r1, #0	@ 00083752 081c
.org 0x83754
	muls r0, r5	@ 00083754 6843
.org 0x83756
	b.n 0x83766	@ 00083756 06e0
.org 0x83758
	.byte 0x00,0xff,0xff,0xff	@ 00083758 data
.org 0x8375c
	.byte 0x00,0xd1,0xff,0xff	@ 0008375c data
.org 0x83760
	movs r0, #1	@ 00083760 0120
.org 0x83762
	eors r0, r5	@ 00083762 6840
.org 0x83764
	muls r0, r1	@ 00083764 4843
.org 0x83766
	adds r2, r2, r0	@ 00083766 1218
.org 0x83768
	cmp r5, #0	@ 00083768 002d
.org 0x8376a
	beq.n 0x83788	@ 0008376a 0dd0
.org 0x8376c
	ldr r0, [pc, #20]	@ 0008376c 0548
.org 0x8376e
	adds r1, r2, r0	@ 0008376e 1118
.org 0x83770
	adds r0, r3, #0	@ 00083770 181c
.org 0x83772
	bl 0x7db4	@ 00083772 84f71ffb
.org 0x83776
	adds r2, r0, #0	@ 00083776 021c
.org 0x83778
	cmp r2, #0	@ 00083778 002a
.org 0x8377a
	bge.n 0x837a8	@ 0008377a 15da
.org 0x8377c
	ldr r0, [r4, #88]	@ 0008377c a06d
.org 0x8377e
	movs r1, #128	@ 0008377e 8021
.org 0x83780
	lsls r1, r1, #1	@ 00083780 4900
.org 0x83782
	b.n 0x8379e	@ 00083782 0ce0
.org 0x83784
	.byte 0x00,0xff,0xff,0xff	@ 00083784 data
.org 0x83788
	movs r0, #128	@ 00083788 8020
.org 0x8378a
	lsls r0, r0, #1	@ 0008378a 4000
.org 0x8378c
	adds r1, r2, r0	@ 0008378c 1118
.org 0x8378e
	adds r0, r3, #0	@ 0008378e 181c
.org 0x83790
	bl 0x7f8c	@ 00083790 84f7fcfb
.org 0x83794
	adds r2, r0, #0	@ 00083794 021c
.org 0x83796
	cmp r2, #0	@ 00083796 002a
.org 0x83798
	ble.n 0x837a8	@ 00083798 06dd
.org 0x8379a
	ldr r0, [r4, #88]	@ 0008379a a06d
.org 0x8379c
	ldr r1, [pc, #84]	@ 0008379c 1549
.org 0x8379e
	adds r0, r0, r1	@ 0008379e 4018
.org 0x837a0
	adds r0, r0, r2	@ 000837a0 8018
.org 0x837a2
	str r0, [r4, #88]	@ 000837a2 a065
.org 0x837a4
	movs r0, #1	@ 000837a4 0120
.org 0x837a6
	orrs r7, r0	@ 000837a6 0743
.org 0x837a8
	cmp r6, #0	@ 000837a8 002e
.org 0x837aa
	beq.n 0x83888	@ 000837aa 6dd0
.org 0x837ac
	ldr r0, [r4, #84]	@ 000837ac 606d
.org 0x837ae
	adds r1, r0, r6	@ 000837ae 8119
.org 0x837b0
	str r1, [r4, #84]	@ 000837b0 6165
.org 0x837b2
	movs r2, #0	@ 000837b2 0022
.org 0x837b4
	ldr r0, [r4, #92]	@ 000837b4 e06d
.org 0x837b6
	cmp r0, #0	@ 000837b6 0028
.org 0x837b8
	ble.n 0x837bc	@ 000837b8 00dd
.org 0x837ba
	movs r2, #1	@ 000837ba 0122
.org 0x837bc
	adds r5, r2, #0	@ 000837bc 151c
.org 0x837be
	ldr r2, [pc, #56]	@ 000837be 0e4a
.org 0x837c0
	adds r3, r1, r2	@ 000837c0 8b18
.org 0x837c2
	lsls r0, r5, #3	@ 000837c2 e800
.org 0x837c4
	subs r0, r0, r5	@ 000837c4 401b
.org 0x837c6
	lsls r0, r0, #9	@ 000837c6 4002
.org 0x837c8
	adds r3, r3, r0	@ 000837c8 1b18
.org 0x837ca
	ldr r6, [r4, #88]	@ 000837ca a66d
.org 0x837cc
	ldr r0, [pc, #44]	@ 000837cc 0b48
.org 0x837ce
	adds r2, r6, r0	@ 000837ce 3218
.org 0x837d0
	ldrb r1, [r4, #10]	@ 000837d0 a17a
.org 0x837d2
	movs r0, #32	@ 000837d2 2020
.org 0x837d4
	ands r0, r1	@ 000837d4 0840
.org 0x837d6
	cmp r0, #0	@ 000837d6 0028
.org 0x837d8
	beq.n 0x837e0	@ 000837d8 02d0
.org 0x837da
	movs r1, #128	@ 000837da 8021
.org 0x837dc
	lsls r1, r1, #2	@ 000837dc 8900
.org 0x837de
	adds r2, r6, r1	@ 000837de 7218
.org 0x837e0
	cmp r5, #0	@ 000837e0 002d
.org 0x837e2
	beq.n 0x83800	@ 000837e2 0dd0
.org 0x837e4
	adds r0, r3, #0	@ 000837e4 181c
.org 0x837e6
	adds r1, r2, #0	@ 000837e6 111c
.org 0x837e8
	bl 0x816c	@ 000837e8 84f7c0fc
.org 0x837ec
	adds r3, r0, #0	@ 000837ec 031c
.org 0x837ee
	cmp r3, #0	@ 000837ee 002b
.org 0x837f0
	bge.n 0x8381c	@ 000837f0 14da
.org 0x837f2
	b.n 0x8380e	@ 000837f2 0ce0
.org 0x837f4
	.byte 0x00,0xff,0xff,0xff	@ 000837f4 data
.org 0x837f8
	.byte 0x00,0xf9,0xff,0xff	@ 000837f8 data
.org 0x837fc
	.byte 0x00,0xfe,0xff,0xff	@ 000837fc data
.org 0x83800
	adds r0, r3, #0	@ 00083800 181c
.org 0x83802
	adds r1, r2, #0	@ 00083802 111c
.org 0x83804
	bl 0x834c	@ 00083804 84f7a2fd
.org 0x83808
	adds r3, r0, #0	@ 00083808 031c
.org 0x8380a
	cmp r3, #0	@ 0008380a 002b
.org 0x8380c
	ble.n 0x8381c	@ 0008380c 06dd
.org 0x8380e
	ldr r0, [r4, #84]	@ 0008380e 606d
.org 0x83810
	adds r0, r0, r3	@ 00083810 c018
.org 0x83812
	str r0, [r4, #84]	@ 00083812 6065
.org 0x83814
	movs r0, #2	@ 00083814 0220
.org 0x83816
	orrs r7, r0	@ 00083816 0743
.org 0x83818
	lsls r0, r7, #24	@ 00083818 3806
.org 0x8381a
	lsrs r7, r0, #24	@ 0008381a 070e
.org 0x8381c
	movs r1, #0	@ 0008381c 0021
.org 0x8381e
	ldr r0, [r4, #92]	@ 0008381e e06d
.org 0x83820
	cmp r0, #0	@ 00083820 0028
.org 0x83822
	ble.n 0x83826	@ 00083822 00dd
.org 0x83824
	movs r1, #1	@ 00083824 0121
.org 0x83826
	adds r5, r1, #0	@ 00083826 0d1c
.org 0x83828
	ldr r3, [r4, #84]	@ 00083828 636d
.org 0x8382a
	ldr r2, [pc, #32]	@ 0008382a 084a
.org 0x8382c
	adds r3, r3, r2	@ 0008382c 9b18
.org 0x8382e
	lsls r0, r5, #3	@ 0008382e e800
.org 0x83830
	subs r0, r0, r5	@ 00083830 401b
.org 0x83832
	lsls r0, r0, #9	@ 00083832 4002
.org 0x83834
	adds r3, r3, r0	@ 00083834 1b18
.org 0x83836
	ldr r2, [r4, #88]	@ 00083836 a26d
.org 0x83838
	ldrb r1, [r4, #10]	@ 00083838 a17a
.org 0x8383a
	movs r0, #32	@ 0008383a 2020
.org 0x8383c
	ands r0, r1	@ 0008383c 0840
.org 0x8383e
	cmp r0, #0	@ 0008383e 0028
.org 0x83840
	beq.n 0x83850	@ 00083840 06d0
.org 0x83842
	movs r0, #180	@ 00083842 b420
.org 0x83844
	lsls r0, r0, #6	@ 00083844 8001
.org 0x83846
	adds r2, r2, r0	@ 00083846 1218
.org 0x83848
	b.n 0x83854	@ 00083848 04e0
.org 0x8384a
	.byte 0x00	@ 0008384a data
.org 0x8384b
	.byte 0x00	@ 0008384b data
.org 0x8384c
	.byte 0x00,0xf9,0xff,0xff	@ 0008384c data
.org 0x83850
	ldr r1, [pc, #20]	@ 00083850 0549
.org 0x83852
	adds r2, r2, r1	@ 00083852 5218
.org 0x83854
	cmp r5, #0	@ 00083854 002d
.org 0x83856
	beq.n 0x8386c	@ 00083856 09d0
.org 0x83858
	adds r0, r3, #0	@ 00083858 181c
.org 0x8385a
	adds r1, r2, #0	@ 0008385a 111c
.org 0x8385c
	bl 0x816c	@ 0008385c 84f786fc
