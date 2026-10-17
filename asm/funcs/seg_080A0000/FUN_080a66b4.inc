@ FUN_080a66b4  entry 0x080a66b4  size 286
.thumb
.org 0xa66b4
FUN_080a66b4:
	push {r4, r5, r6, lr}	@ 000a66b4 70b5
.org 0xa66b6
	adds r3, r0, #0	@ 000a66b6 031c
.org 0xa66b8
	ldrb r0, [r3, #10]	@ 000a66b8 987a
.org 0xa66ba
	lsrs r6, r0, #4	@ 000a66ba 0609
.org 0xa66bc
	movs r4, #1	@ 000a66bc 0124
.org 0xa66be
	ands r6, r4	@ 000a66be 2640
.org 0xa66c0
	adds r0, r3, #0	@ 000a66c0 181c
.org 0xa66c2
	adds r0, #184	@ 000a66c2 b830
.org 0xa66c4
	ldr r0, [r0, #0]	@ 000a66c4 0068
.org 0xa66c6
	ldr r1, [r3, #84]	@ 000a66c6 596d
.org 0xa66c8
	subs r0, r0, r1	@ 000a66c8 401a
.org 0xa66ca
	asrs r0, r0, #8	@ 000a66ca 0012
.org 0xa66cc
	cmp r0, #0	@ 000a66cc 0028
.org 0xa66ce
	bge.n 0xa66d2	@ 000a66ce 00da
.org 0xa66d0
	negs r0, r0	@ 000a66d0 4042
.org 0xa66d2
	movs r2, #128	@ 000a66d2 8022
.org 0xa66d4
	lsls r2, r2, #1	@ 000a66d4 5200
.org 0xa66d6
	cmp r0, r2	@ 000a66d6 9042
.org 0xa66d8
	bgt.n 0xa66f0	@ 000a66d8 0adc
.org 0xa66da
	adds r0, r3, #0	@ 000a66da 181c
.org 0xa66dc
	adds r0, #188	@ 000a66dc bc30
.org 0xa66de
	ldr r0, [r0, #0]	@ 000a66de 0068
.org 0xa66e0
	ldr r1, [r3, #88]	@ 000a66e0 996d
.org 0xa66e2
	subs r0, r0, r1	@ 000a66e2 401a
.org 0xa66e4
	asrs r0, r0, #8	@ 000a66e4 0012
.org 0xa66e6
	cmp r0, #0	@ 000a66e6 0028
.org 0xa66e8
	bge.n 0xa66ec	@ 000a66e8 00da
.org 0xa66ea
	negs r0, r0	@ 000a66ea 4042
.org 0xa66ec
	cmp r0, r2	@ 000a66ec 9042
.org 0xa66ee
	ble.n 0xa6736	@ 000a66ee 22dd
.org 0xa66f0
	adds r0, r3, #0	@ 000a66f0 181c
.org 0xa66f2
	adds r0, #181	@ 000a66f2 b530
.org 0xa66f4
	ldrb r1, [r0, #0]	@ 000a66f4 0178
.org 0xa66f6
	adds r4, r0, #0	@ 000a66f6 041c
.org 0xa66f8
	cmp r1, #2	@ 000a66f8 0229
.org 0xa66fa
	beq.n 0xa673e	@ 000a66fa 20d0
.org 0xa66fc
	movs r0, #2	@ 000a66fc 0220
.org 0xa66fe
	strb r0, [r4, #0]	@ 000a66fe 2070
.org 0xa6700
	ldrb r2, [r3, #10]	@ 000a6700 9a7a
.org 0xa6702
	lsrs r0, r2, #4	@ 000a6702 1009
.org 0xa6704
	movs r1, #1	@ 000a6704 0121
.org 0xa6706
	bics r1, r0	@ 000a6706 8143
.org 0xa6708
	cmp r1, #0	@ 000a6708 0029
.org 0xa670a
	beq.n 0xa6712	@ 000a670a 02d0
.org 0xa670c
	movs r0, #16	@ 000a670c 1020
.org 0xa670e
	orrs r0, r2	@ 000a670e 1043
.org 0xa6710
	b.n 0xa6716	@ 000a6710 01e0
.org 0xa6712
	movs r0, #239	@ 000a6712 ef20
.org 0xa6714
	ands r0, r2	@ 000a6714 1040
.org 0xa6716
	strb r0, [r3, #10]	@ 000a6716 9872
.org 0xa6718
	adds r0, r3, #0	@ 000a6718 181c
.org 0xa671a
	adds r0, #76	@ 000a671a 4c30
.org 0xa671c
	strb r1, [r0, #0]	@ 000a671c 0170
.org 0xa671e
	movs r0, #74	@ 000a671e 4a20
.org 0xa6720
	adds r0, r0, r3	@ 000a6720 c018
.org 0xa6722
	mov ip, r0	@ 000a6722 8446
.org 0xa6724
	lsls r1, r1, #4	@ 000a6724 0901
.org 0xa6726
	ldrb r2, [r0, #0]	@ 000a6726 0278
.org 0xa6728
	movs r0, #17	@ 000a6728 1120
.org 0xa672a
	negs r0, r0	@ 000a672a 4042
.org 0xa672c
	ands r0, r2	@ 000a672c 1040
.org 0xa672e
	orrs r0, r1	@ 000a672e 0843
.org 0xa6730
	mov r1, ip	@ 000a6730 6146
.org 0xa6732
	strb r0, [r1, #0]	@ 000a6732 0870
.org 0xa6734
	b.n 0xa673e	@ 000a6734 03e0
.org 0xa6736
	adds r0, r3, #0	@ 000a6736 181c
.org 0xa6738
	adds r0, #181	@ 000a6738 b530
.org 0xa673a
	strb r4, [r0, #0]	@ 000a673a 0470
.org 0xa673c
	adds r4, r0, #0	@ 000a673c 041c
.org 0xa673e
	ldrb r5, [r4, #0]	@ 000a673e 2578
.org 0xa6740
	cmp r5, #1	@ 000a6740 012d
.org 0xa6742
	bne.n 0xa67be	@ 000a6742 3cd1
.org 0xa6744
	ldr r0, [pc, #72]	@ 000a6744 1248
.org 0xa6746
	ldr r1, [r0, #0]	@ 000a6746 0168
.org 0xa6748
	ldr r4, [r1, #84]	@ 000a6748 4c6d
.org 0xa674a
	ldr r2, [r3, #84]	@ 000a674a 5a6d
.org 0xa674c
	subs r0, r4, r2	@ 000a674c a01a
.org 0xa674e
	asrs r0, r0, #8	@ 000a674e 0012
.org 0xa6750
	cmp r0, #0	@ 000a6750 0028
.org 0xa6752
	bge.n 0xa6756	@ 000a6752 00da
.org 0xa6754
	negs r0, r0	@ 000a6754 4042
.org 0xa6756
	cmp r0, #255	@ 000a6756 ff28
.org 0xa6758
	bgt.n 0xa67ba	@ 000a6758 2fdc
.org 0xa675a
	ldr r0, [r1, #88]	@ 000a675a 886d
.org 0xa675c
	ldr r1, [r3, #88]	@ 000a675c 996d
.org 0xa675e
	subs r0, r0, r1	@ 000a675e 401a
.org 0xa6760
	asrs r0, r0, #8	@ 000a6760 0012
.org 0xa6762
	cmp r0, #0	@ 000a6762 0028
.org 0xa6764
	bge.n 0xa6768	@ 000a6764 00da
.org 0xa6766
	negs r0, r0	@ 000a6766 4042
.org 0xa6768
	cmp r0, #255	@ 000a6768 ff28
.org 0xa676a
	bgt.n 0xa67ba	@ 000a676a 26dc
.org 0xa676c
	cmp r4, r2	@ 000a676c 9442
.org 0xa676e
	bge.n 0xa6794	@ 000a676e 11da
.org 0xa6770
	movs r2, #0	@ 000a6770 0022
.org 0xa6772
	ldrb r1, [r3, #10]	@ 000a6772 997a
.org 0xa6774
	movs r0, #239	@ 000a6774 ef20
.org 0xa6776
	ands r0, r1	@ 000a6776 0840
.org 0xa6778
	strb r0, [r3, #10]	@ 000a6778 9872
.org 0xa677a
	adds r0, r3, #0	@ 000a677a 181c
.org 0xa677c
	adds r0, #76	@ 000a677c 4c30
.org 0xa677e
	strb r2, [r0, #0]	@ 000a677e 0270
.org 0xa6780
	adds r2, r3, #0	@ 000a6780 1a1c
.org 0xa6782
	adds r2, #74	@ 000a6782 4a32
.org 0xa6784
	ldrb r1, [r2, #0]	@ 000a6784 1178
.org 0xa6786
	movs r0, #17	@ 000a6786 1120
.org 0xa6788
	negs r0, r0	@ 000a6788 4042
.org 0xa678a
	ands r0, r1	@ 000a678a 0840
.org 0xa678c
	strb r0, [r2, #0]	@ 000a678c 1070
.org 0xa678e
	b.n 0xa67be	@ 000a678e 16e0
.org 0xa6790
	.byte 0xf0,0xdb,0x02,0x02	@ 000a6790 data
.org 0xa6794
	ldrb r1, [r3, #10]	@ 000a6794 997a
.org 0xa6796
	movs r0, #16	@ 000a6796 1020
.org 0xa6798
	orrs r0, r1	@ 000a6798 0843
.org 0xa679a
	strb r0, [r3, #10]	@ 000a679a 9872
.org 0xa679c
	adds r0, r3, #0	@ 000a679c 181c
.org 0xa679e
	adds r0, #76	@ 000a679e 4c30
.org 0xa67a0
	strb r5, [r0, #0]	@ 000a67a0 0570
.org 0xa67a2
	movs r0, #74	@ 000a67a2 4a20
.org 0xa67a4
	adds r0, r0, r3	@ 000a67a4 c018
.org 0xa67a6
	mov ip, r0	@ 000a67a6 8446
.org 0xa67a8
	movs r2, #16	@ 000a67a8 1022
.org 0xa67aa
	ldrb r1, [r0, #0]	@ 000a67aa 0178
.org 0xa67ac
	movs r0, #17	@ 000a67ac 1120
.org 0xa67ae
	negs r0, r0	@ 000a67ae 4042
.org 0xa67b0
	ands r0, r1	@ 000a67b0 0840
.org 0xa67b2
	orrs r0, r2	@ 000a67b2 1043
.org 0xa67b4
	mov r1, ip	@ 000a67b4 6146
.org 0xa67b6
	strb r0, [r1, #0]	@ 000a67b6 0870
.org 0xa67b8
	b.n 0xa67be	@ 000a67b8 01e0
.org 0xa67ba
	movs r0, #2	@ 000a67ba 0220
.org 0xa67bc
	b.n 0xa67d0	@ 000a67bc 08e0
.org 0xa67be
	ldrb r0, [r3, #10]	@ 000a67be 987a
.org 0xa67c0
	lsrs r0, r0, #4	@ 000a67c0 0009
.org 0xa67c2
	movs r1, #1	@ 000a67c2 0121
.org 0xa67c4
	ands r0, r1	@ 000a67c4 0840
.org 0xa67c6
	cmp r6, r0	@ 000a67c6 8642
.org 0xa67c8
	bne.n 0xa67ce	@ 000a67c8 01d1
.org 0xa67ca
	movs r0, #0	@ 000a67ca 0020
.org 0xa67cc
	b.n 0xa67d0	@ 000a67cc 00e0
.org 0xa67ce
	movs r0, #1	@ 000a67ce 0120
.org 0xa67d0
	pop {r4, r5, r6}	@ 000a67d0 70bc
