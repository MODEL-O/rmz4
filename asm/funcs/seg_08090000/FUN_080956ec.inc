@ FUN_080956ec  entry 0x080956ec  size 214
.thumb
.org 0x956ec
FUN_080956ec:
	push {r4, r5, r6, r7, lr}	@ 000956ec f0b5
.org 0x956ee
	sub sp, #8	@ 000956ee 82b0
.org 0x956f0
	adds r5, r0, #0	@ 000956f0 051c
.org 0x956f2
	ldr r1, [pc, #208]	@ 000956f2 3449
.org 0x956f4
	mov r0, sp	@ 000956f4 6846
.org 0x956f6
	movs r2, #4	@ 000956f6 0422
.org 0x956f8
	bl 0x129258	@ 000956f8 93f0aefd
.org 0x956fc
	add r4, sp, #4	@ 000956fc 01ac
.org 0x956fe
	ldr r1, [pc, #200]	@ 000956fe 3249
.org 0x95700
	adds r0, r4, #0	@ 00095700 201c
.org 0x95702
	movs r2, #4	@ 00095702 0422
.org 0x95704
	bl 0x129258	@ 00095704 93f0a8fd
.org 0x95708
	ldrb r0, [r5, #17]	@ 00095708 687c
.org 0x9570a
	adds r6, r0, #0	@ 0009570a 061c
.org 0x9570c
	ldrb r0, [r5, #10]	@ 0009570c a87a
.org 0x9570e
	lsrs r0, r0, #4	@ 0009570e 0009
.org 0x95710
	movs r1, #1	@ 00095710 0121
.org 0x95712
	ands r0, r1	@ 00095712 0840
.org 0x95714
	adds r4, r4, r6	@ 00095714 a419
.org 0x95716
	ldrb r2, [r4, #0]	@ 00095716 2278
.org 0x95718
	movs r1, #160	@ 00095718 a021
.org 0x9571a
	lsls r1, r1, #1	@ 0009571a 4900
.org 0x9571c
	subs r1, r1, r2	@ 0009571c 891a
.org 0x9571e
	lsls r0, r0, #1	@ 0009571e 4000
.org 0x95720
	muls r0, r1	@ 00095720 4843
.org 0x95722
	adds r2, r2, r0	@ 00095722 1218
.org 0x95724
	lsls r2, r2, #24	@ 00095724 1206
.org 0x95726
	lsrs r0, r2, #24	@ 00095726 100e
.org 0x95728
	adds r2, r0, #0	@ 00095728 021c
.org 0x9572a
	ldrb r4, [r5, #15]	@ 0009572a ec7b
.org 0x9572c
	cmp r4, #0	@ 0009572c 002c
.org 0x9572e
	bne.n 0x95774	@ 0009572e 21d1
.org 0x95730
	ldr r3, [pc, #152]	@ 00095730 264b
.org 0x95732
	adds r0, #64	@ 00095732 4030
.org 0x95734
	lsls r0, r0, #24	@ 00095734 0006
.org 0x95736
	lsrs r0, r0, #23	@ 00095736 c00d
.org 0x95738
	adds r0, r0, r3	@ 00095738 c018
.org 0x9573a
	movs r7, #0	@ 0009573a 0027
.org 0x9573c
	ldrsh r1, [r0, r7]	@ 0009573c c15f
.org 0x9573e
	lsls r0, r1, #1	@ 0009573e 4800
.org 0x95740
	adds r0, r0, r1	@ 00095740 4018
.org 0x95742
	lsls r0, r0, #7	@ 00095742 c001
.org 0x95744
	cmp r0, #0	@ 00095744 0028
.org 0x95746
	bge.n 0x9574a	@ 00095746 00da
.org 0x95748
	adds r0, #255	@ 00095748 ff30
.org 0x9574a
	asrs r0, r0, #8	@ 0009574a 0012
.org 0x9574c
	str r0, [r5, #92]	@ 0009574c e865
.org 0x9574e
	lsls r0, r2, #1	@ 0009574e 5000
.org 0x95750
	adds r0, r0, r3	@ 00095750 c018
.org 0x95752
	movs r2, #0	@ 00095752 0022
.org 0x95754
	ldrsh r1, [r0, r2]	@ 00095754 815e
.org 0x95756
	lsls r0, r1, #1	@ 00095756 4800
.org 0x95758
	adds r0, r0, r1	@ 00095758 4018
.org 0x9575a
	lsls r0, r0, #7	@ 0009575a c001
.org 0x9575c
	cmp r0, #0	@ 0009575c 0028
.org 0x9575e
	bge.n 0x95762	@ 0009575e 00da
.org 0x95760
	adds r0, #255	@ 00095760 ff30
.org 0x95762
	asrs r0, r0, #8	@ 00095762 0012
.org 0x95764
	str r0, [r5, #96]	@ 00095764 2866
.org 0x95766
	mov r7, sp	@ 00095766 6f46
.org 0x95768
	adds r0, r7, r6	@ 00095768 b819
.org 0x9576a
	ldrb r0, [r0, #0]	@ 0009576a 0078
.org 0x9576c
	strb r0, [r5, #18]	@ 0009576c a874
.org 0x9576e
	strb r0, [r5, #19]	@ 0009576e e874
.org 0x95770
	adds r0, r4, #1	@ 00095770 601c
.org 0x95772
	strb r0, [r5, #15]	@ 00095772 e873
.org 0x95774
	adds r0, r5, #0	@ 00095774 281c
.org 0x95776
	bl 0x1cff0	@ 00095776 87f73bfc
.org 0x9577a
	ldrb r1, [r5, #18]	@ 0009577a a97c
.org 0x9577c
	ldr r0, [r5, #92]	@ 0009577c e86d
.org 0x9577e
	muls r0, r1	@ 0009577e 4843
.org 0x95780
	ldrb r1, [r5, #19]	@ 00095780 e97c
.org 0x95782
	bl 0x128fb8	@ 00095782 93f019fc
.org 0x95786
	ldr r1, [r5, #84]	@ 00095786 696d
.org 0x95788
	adds r1, r1, r0	@ 00095788 0918
.org 0x9578a
	str r1, [r5, #84]	@ 0009578a 6965
.org 0x9578c
	ldrb r1, [r5, #18]	@ 0009578c a97c
.org 0x9578e
	ldr r0, [r5, #96]	@ 0009578e 286e
.org 0x95790
	muls r0, r1	@ 00095790 4843
.org 0x95792
	ldrb r1, [r5, #19]	@ 00095792 e97c
.org 0x95794
	bl 0x128fb8	@ 00095794 93f010fc
.org 0x95798
	ldr r1, [r5, #88]	@ 00095798 a96d
.org 0x9579a
	adds r1, r1, r0	@ 0009579a 0918
.org 0x9579c
	str r1, [r5, #88]	@ 0009579c a965
.org 0x9579e
	adds r0, r5, #0	@ 0009579e 281c
.org 0x957a0
	bl 0x95cd8	@ 000957a0 00f09afa
.org 0x957a4
	ldrb r0, [r5, #18]	@ 000957a4 a87c
.org 0x957a6
	subs r0, #1	@ 000957a6 0138
.org 0x957a8
	strb r0, [r5, #18]	@ 000957a8 a874
.org 0x957aa
	lsls r0, r0, #24	@ 000957aa 0006
.org 0x957ac
	lsrs r1, r0, #24	@ 000957ac 010e
.org 0x957ae
	cmp r1, #0	@ 000957ae 0029
.org 0x957b0
	bne.n 0x957ba	@ 000957b0 03d1
.org 0x957b2
	movs r0, #1	@ 000957b2 0120
.org 0x957b4
	strb r0, [r5, #13]	@ 000957b4 6873
.org 0x957b6
	strb r1, [r5, #14]	@ 000957b6 a973
.org 0x957b8
	strb r1, [r5, #15]	@ 000957b8 e973
.org 0x957ba
	add sp, #8	@ 000957ba 02b0
.org 0x957bc
	pop {r4, r5, r6, r7}	@ 000957bc f0bc
.org 0x957be
	pop {r0}	@ 000957be 01bc
.org 0x957c0
	bx r0	@ 000957c0 0047
