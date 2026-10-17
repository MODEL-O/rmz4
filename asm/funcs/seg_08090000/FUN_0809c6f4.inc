@ FUN_0809c6f4  entry 0x0809c6f4  size 176
.thumb
.org 0x9c6f4
FUN_0809c6f4:
	push {r4, r5, r6, lr}	@ 0009c6f4 70b5
.org 0x9c6f6
	adds r5, r0, #0	@ 0009c6f6 051c
.org 0x9c6f8
	ldr r4, [r5, #40]	@ 0009c6f8 ac6a
.org 0x9c6fa
	bl 0x1cc9c	@ 0009c6fa 80f7cffa
.org 0x9c6fe
	ldrb r1, [r5, #10]	@ 0009c6fe a97a
.org 0x9c700
	movs r0, #1	@ 0009c700 0120
.org 0x9c702
	movs r6, #0	@ 0009c702 0026
.org 0x9c704
	orrs r0, r1	@ 0009c704 0843
.org 0x9c706
	movs r1, #2	@ 0009c706 0221
.org 0x9c708
	orrs r0, r1	@ 0009c708 0843
.org 0x9c70a
	strb r0, [r5, #10]	@ 0009c70a a872
.org 0x9c70c
	adds r0, r5, #0	@ 0009c70c 281c
.org 0x9c70e
	bl 0x1ceec	@ 0009c70e 80f7edfb
.org 0x9c712
	movs r1, #198	@ 0009c712 c621
.org 0x9c714
	lsls r1, r1, #8	@ 0009c714 0902
.org 0x9c716
	adds r0, r5, #0	@ 0009c716 281c
.org 0x9c718
	bl 0x1cf00	@ 0009c718 80f7f2fb
.org 0x9c71c
	adds r0, r5, #0	@ 0009c71c 281c
.org 0x9c71e
	bl 0x1cff0	@ 0009c71e 80f767fc
.org 0x9c722
	ldrb r2, [r5, #10]	@ 0009c722 aa7a
.org 0x9c724
	lsrs r1, r2, #4	@ 0009c724 1109
.org 0x9c726
	movs r0, #1	@ 0009c726 0120
.org 0x9c728
	ands r1, r0	@ 0009c728 0140
.org 0x9c72a
	cmp r1, #0	@ 0009c72a 0029
.org 0x9c72c
	beq.n 0x9c734	@ 0009c72c 02d0
.org 0x9c72e
	movs r0, #16	@ 0009c72e 1020
.org 0x9c730
	orrs r0, r2	@ 0009c730 1043
.org 0x9c732
	b.n 0x9c738	@ 0009c732 01e0
.org 0x9c734
	movs r0, #239	@ 0009c734 ef20
.org 0x9c736
	ands r0, r2	@ 0009c736 1040
.org 0x9c738
	strb r0, [r5, #10]	@ 0009c738 a872
.org 0x9c73a
	adds r0, r5, #0	@ 0009c73a 281c
.org 0x9c73c
	adds r0, #76	@ 0009c73c 4c30
.org 0x9c73e
	strb r1, [r0, #0]	@ 0009c73e 0170
.org 0x9c740
	adds r3, r5, #0	@ 0009c740 2b1c
.org 0x9c742
	adds r3, #74	@ 0009c742 4a33
.org 0x9c744
	lsls r1, r1, #4	@ 0009c744 0901
.org 0x9c746
	ldrb r2, [r3, #0]	@ 0009c746 1a78
.org 0x9c748
	movs r0, #17	@ 0009c748 1120
.org 0x9c74a
	negs r0, r0	@ 0009c74a 4042
.org 0x9c74c
	ands r0, r2	@ 0009c74c 1040
.org 0x9c74e
	orrs r0, r1	@ 0009c74e 0843
.org 0x9c750
	strb r0, [r3, #0]	@ 0009c750 1870
.org 0x9c752
	ldrb r1, [r4, #10]	@ 0009c752 a17a
.org 0x9c754
	movs r0, #16	@ 0009c754 1020
.org 0x9c756
	ands r0, r1	@ 0009c756 0840
.org 0x9c758
	cmp r0, #0	@ 0009c758 0028
.org 0x9c75a
	beq.n 0x9c764	@ 0009c75a 03d0
.org 0x9c75c
	ldr r0, [r4, #84]	@ 0009c75c 606d
.org 0x9c75e
	movs r1, #184	@ 0009c75e b821
.org 0x9c760
	lsls r1, r1, #5	@ 0009c760 4901
.org 0x9c762
	b.n 0x9c768	@ 0009c762 01e0
.org 0x9c764
	ldr r0, [r4, #84]	@ 0009c764 606d
.org 0x9c766
	ldr r1, [pc, #60]	@ 0009c766 0f49
.org 0x9c768
	adds r0, r0, r1	@ 0009c768 4018
.org 0x9c76a
	str r0, [r5, #84]	@ 0009c76a 6865
.org 0x9c76c
	ldr r0, [r4, #88]	@ 0009c76c a06d
.org 0x9c76e
	ldr r1, [pc, #56]	@ 0009c76e 0e49
.org 0x9c770
	adds r0, r0, r1	@ 0009c770 4018
.org 0x9c772
	str r0, [r5, #88]	@ 0009c772 a865
.org 0x9c774
	movs r4, #0	@ 0009c774 0024
.org 0x9c776
	str r4, [r5, #92]	@ 0009c776 ec65
.org 0x9c778
	str r4, [r5, #96]	@ 0009c778 2c66
.org 0x9c77a
	adds r1, r5, #0	@ 0009c77a 291c
.org 0x9c77c
	adds r1, #180	@ 0009c77c b431
.org 0x9c77e
	ldr r0, [r5, #84]	@ 0009c77e 686d
.org 0x9c780
	str r0, [r1, #0]	@ 0009c780 0860
.org 0x9c782
	adds r1, #4	@ 0009c782 0431
.org 0x9c784
	ldr r0, [r5, #88]	@ 0009c784 a86d
.org 0x9c786
	str r0, [r1, #0]	@ 0009c786 0860
.org 0x9c788
	ldr r0, [r5, #84]	@ 0009c788 686d
.org 0x9c78a
	ldr r1, [r5, #88]	@ 0009c78a a96d
.org 0x9c78c
	bl 0x8534	@ 0009c78c 6bf7d2fe
.org 0x9c790
	adds r1, r5, #0	@ 0009c790 291c
.org 0x9c792
	adds r1, #188	@ 0009c792 bc31
.org 0x9c794
	str r0, [r1, #0]	@ 0009c794 0860
.org 0x9c796
	strb r4, [r5, #18]	@ 0009c796 ac74
.org 0x9c798
	movs r0, #16	@ 0009c798 1020
.org 0x9c79a
	strb r0, [r5, #19]	@ 0009c79a e874
.org 0x9c79c
	str r4, [r5, #44]	@ 0009c79c ec62
.org 0x9c79e
	pop {r4, r5, r6}	@ 0009c79e 70bc
.org 0x9c7a0
	pop {r0}	@ 0009c7a0 01bc
.org 0x9c7a2
	bx r0	@ 0009c7a2 0047
