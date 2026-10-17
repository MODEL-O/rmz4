@ FUN_080ac730  entry 0x080ac730  size 164
.thumb
.org 0xac730
FUN_080ac730:
	push {lr}	@ 000ac730 00b5
.org 0xac732
	adds r2, r0, #0	@ 000ac732 021c
.org 0xac734
	ldr r0, [r2, #40]	@ 000ac734 906a
.org 0xac736
	ldrb r0, [r0, #12]	@ 000ac736 007b
.org 0xac738
	cmp r0, #1	@ 000ac738 0128
.org 0xac73a
	bls.n 0xac7a0	@ 000ac73a 31d9
.org 0xac73c
	adds r0, r2, #0	@ 000ac73c 101c
.org 0xac73e
	adds r0, #184	@ 000ac73e b830
.org 0xac740
	ldrb r3, [r0, #0]	@ 000ac740 0378
.org 0xac742
	cmp r3, #0	@ 000ac742 002b
.org 0xac744
	bne.n 0xac780	@ 000ac744 1cd1
.org 0xac746
	ldrb r1, [r2, #10]	@ 000ac746 917a
.org 0xac748
	movs r0, #254	@ 000ac748 fe20
.org 0xac74a
	ands r0, r1	@ 000ac74a 0840
.org 0xac74c
	movs r1, #253	@ 000ac74c fd21
.org 0xac74e
	ands r0, r1	@ 000ac74e 0840
.org 0xac750
	strb r0, [r2, #10]	@ 000ac750 9072
.org 0xac752
	adds r0, r2, #0	@ 000ac752 101c
.org 0xac754
	adds r0, #140	@ 000ac754 8c30
.org 0xac756
	str r3, [r0, #0]	@ 000ac756 0360
.org 0xac758
	adds r0, #4	@ 000ac758 0430
.org 0xac75a
	str r3, [r0, #0]	@ 000ac75a 0360
.org 0xac75c
	adds r0, #4	@ 000ac75c 0430
.org 0xac75e
	strb r3, [r0, #0]	@ 000ac75e 0370
.org 0xac760
	ldrb r1, [r2, #10]	@ 000ac760 917a
.org 0xac762
	movs r0, #251	@ 000ac762 fb20
.org 0xac764
	ands r0, r1	@ 000ac764 0840
.org 0xac766
	strb r0, [r2, #10]	@ 000ac766 9072
.org 0xac768
	ldr r1, [pc, #16]	@ 000ac768 0449
.org 0xac76a
	ldrb r0, [r2, #9]	@ 000ac76a 507a
.org 0xac76c
	lsls r0, r0, #2	@ 000ac76c 8000
.org 0xac76e
	adds r0, r0, r1	@ 000ac76e 4018
.org 0xac770
	movs r1, #3	@ 000ac770 0321
.org 0xac772
	str r1, [r2, #12]	@ 000ac772 d160
.org 0xac774
	ldr r0, [r0, #0]	@ 000ac774 0068
.org 0xac776
	ldr r0, [r0, #12]	@ 000ac776 c068
.org 0xac778
	str r0, [r2, #20]	@ 000ac778 5061
.org 0xac77a
	b.n 0xac7da	@ 000ac77a 2ee0
.org 0xac77c
	.byte 0x40,0xdb,0x85,0x08	@ 000ac77c data
.org 0xac780
	ldr r1, [pc, #24]	@ 000ac780 0649
.org 0xac782
	ldrb r0, [r2, #9]	@ 000ac782 507a
.org 0xac784
	lsls r0, r0, #2	@ 000ac784 8000
.org 0xac786
	adds r0, r0, r1	@ 000ac786 4018
.org 0xac788
	movs r1, #2	@ 000ac788 0221
.org 0xac78a
	str r1, [r2, #12]	@ 000ac78a d160
.org 0xac78c
	ldr r0, [r0, #0]	@ 000ac78c 0068
.org 0xac78e
	ldr r0, [r0, #8]	@ 000ac78e 8068
.org 0xac790
	str r0, [r2, #20]	@ 000ac790 5061
.org 0xac792
	adds r0, r2, #0	@ 000ac792 101c
.org 0xac794
	bl 0xacab8	@ 000ac794 00f090f9
.org 0xac798
	b.n 0xac7da	@ 000ac798 1fe0
.org 0xac79a
	.byte 0x00	@ 000ac79a data
.org 0xac79b
	.byte 0x00	@ 000ac79b data
.org 0xac79c
	.byte 0x40,0xdb,0x85,0x08	@ 000ac79c data
.org 0xac7a0
	movs r0, #182	@ 000ac7a0 b620
.org 0xac7a2
	adds r0, r0, r2	@ 000ac7a2 8018
.org 0xac7a4
	mov ip, r0	@ 000ac7a4 8446
.org 0xac7a6
	ldrb r0, [r0, #0]	@ 000ac7a6 0078
.org 0xac7a8
	cmp r0, #0	@ 000ac7a8 0028
.org 0xac7aa
	beq.n 0xac7ca	@ 000ac7aa 0ed0
.org 0xac7ac
	adds r3, r2, #0	@ 000ac7ac 131c
.org 0xac7ae
	adds r3, #180	@ 000ac7ae b433
.org 0xac7b0
	ldrb r0, [r3, #0]	@ 000ac7b0 1878
.org 0xac7b2
	cmp r0, #0	@ 000ac7b2 0028
.org 0xac7b4
	beq.n 0xac7ca	@ 000ac7b4 09d0
.org 0xac7b6
	adds r0, r2, #0	@ 000ac7b6 101c
.org 0xac7b8
	adds r0, #181	@ 000ac7b8 b530
.org 0xac7ba
	ldrb r1, [r0, #0]	@ 000ac7ba 0178
.org 0xac7bc
	movs r0, #0	@ 000ac7bc 0020
.org 0xac7be
	strb r1, [r2, #13]	@ 000ac7be 5173
.org 0xac7c0
	strb r0, [r2, #14]	@ 000ac7c0 9073
.org 0xac7c2
	strb r0, [r2, #15]	@ 000ac7c2 d073
.org 0xac7c4
	strb r0, [r3, #0]	@ 000ac7c4 1870
.org 0xac7c6
	mov r1, ip	@ 000ac7c6 6146
.org 0xac7c8
	strb r0, [r1, #0]	@ 000ac7c8 0870
.org 0xac7ca
	ldr r0, [pc, #20]	@ 000ac7ca 0548
.org 0xac7cc
	ldrb r1, [r2, #13]	@ 000ac7cc 517b
.org 0xac7ce
	lsls r1, r1, #2	@ 000ac7ce 8900
.org 0xac7d0
	adds r1, r1, r0	@ 000ac7d0 0918
.org 0xac7d2
	ldr r1, [r1, #0]	@ 000ac7d2 0968
