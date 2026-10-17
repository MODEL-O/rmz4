@ FUN_0804d6fc  entry 0x0804d6fc  size 106
.thumb
.org 0x4d6fc
FUN_0804d6fc:
	push {r4, r5, r6, lr}	@ 0004d6fc 70b5
.org 0x4d6fe
	adds r4, r0, #0	@ 0004d6fe 041c
.org 0x4d700
	bl 0x1cd28	@ 0004d700 cff712fb
.org 0x4d704
	adds r0, r4, #0	@ 0004d704 201c
.org 0x4d706
	bl 0x1ceec	@ 0004d706 cff7f1fb
.org 0x4d70a
	ldrb r1, [r4, #10]	@ 0004d70a a17a
.org 0x4d70c
	movs r0, #1	@ 0004d70c 0120
.org 0x4d70e
	movs r6, #0	@ 0004d70e 0026
.org 0x4d710
	orrs r0, r1	@ 0004d710 0843
.org 0x4d712
	movs r1, #2	@ 0004d712 0221
.org 0x4d714
	orrs r0, r1	@ 0004d714 0843
.org 0x4d716
	strb r0, [r4, #10]	@ 0004d716 a072
.org 0x4d718
	ldr r1, [pc, #76]	@ 0004d718 1349
.org 0x4d71a
	adds r0, r4, #0	@ 0004d71a 201c
.org 0x4d71c
	bl 0x1cf00	@ 0004d71c cff7f0fb
.org 0x4d720
	ldrb r1, [r4, #10]	@ 0004d720 a17a
.org 0x4d722
	movs r0, #4	@ 0004d722 0420
.org 0x4d724
	orrs r0, r1	@ 0004d724 0843
.org 0x4d726
	strb r0, [r4, #10]	@ 0004d726 a072
.org 0x4d728
	adds r5, r4, #0	@ 0004d728 251c
.org 0x4d72a
	adds r5, #116	@ 0004d72a 7435
.org 0x4d72c
	ldr r1, [pc, #60]	@ 0004d72c 0f49
.org 0x4d72e
	adds r2, r4, #0	@ 0004d72e 221c
.org 0x4d730
	adds r2, #84	@ 0004d730 5432
.org 0x4d732
	adds r0, r5, #0	@ 0004d732 281c
.org 0x4d734
	movs r3, #8	@ 0004d734 0823
.org 0x4d736
	bl 0x5760	@ 0004d736 b8f713f8
.org 0x4d73a
	str r4, [r5, #44]	@ 0004d73a ec62
.org 0x4d73c
	ldr r0, [pc, #48]	@ 0004d73c 0c48
.org 0x4d73e
	str r0, [r5, #36]	@ 0004d73e 6862
.org 0x4d740
	movs r0, #58	@ 0004d740 3a20
.org 0x4d742
	bl 0x2b10	@ 0004d742 b5f7e5f9
.org 0x4d746
	strb r6, [r4, #18]	@ 0004d746 a674
.org 0x4d748
	ldr r1, [pc, #40]	@ 0004d748 0a49
.org 0x4d74a
	ldrb r0, [r4, #9]	@ 0004d74a 607a
.org 0x4d74c
	lsls r0, r0, #2	@ 0004d74c 8000
.org 0x4d74e
	adds r0, r0, r1	@ 0004d74e 4018
.org 0x4d750
	movs r1, #1	@ 0004d750 0121
.org 0x4d752
	str r1, [r4, #12]	@ 0004d752 e160
.org 0x4d754
	ldr r0, [r0, #0]	@ 0004d754 0068
.org 0x4d756
	ldr r0, [r0, #4]	@ 0004d756 4068
.org 0x4d758
	str r0, [r4, #20]	@ 0004d758 6061
.org 0x4d75a
	adds r0, r4, #0	@ 0004d75a 201c
.org 0x4d75c
	bl 0x4d778	@ 0004d75c 00f00cf8
.org 0x4d760
	pop {r4, r5, r6}	@ 0004d760 70bc
.org 0x4d762
	pop {r0}	@ 0004d762 01bc
.org 0x4d764
	bx r0	@ 0004d764 0047
