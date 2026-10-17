@ FUN_08012874  entry 0x08012874  size 56
.thumb
.org 0x12874
FUN_08012874:
	push {lr}	@ 00012874 00b5
.org 0x12876
	adds r3, r0, #0	@ 00012876 031c
.org 0x12878
	ldrb r0, [r3, #14]	@ 00012878 987b
.org 0x1287a
	cmp r0, #0	@ 0001287a 0028
.org 0x1287c
	bne.n 0x128a8	@ 0001287c 14d1
.org 0x1287e
	movs r0, #165	@ 0001287e a520
.org 0x12880
	lsls r0, r0, #4	@ 00012880 0001
.org 0x12882
	str r0, [r3, #76]	@ 00012882 d864
.org 0x12884
	movs r0, #128	@ 00012884 8020
.org 0x12886
	str r0, [r3, #68]	@ 00012886 5864
.org 0x12888
	adds r0, #128	@ 00012888 8030
.org 0x1288a
	str r0, [r3, #72]	@ 0001288a 9864
.org 0x1288c
	ldr r1, [r3, #92]	@ 0001288c d96d
.org 0x1288e
	lsrs r1, r1, #4	@ 0001288e 0909
.org 0x12890
	lsls r1, r1, #1	@ 00012890 4900
.org 0x12892
	ldr r0, [pc, #24]	@ 00012892 0648
.org 0x12894
	adds r1, r1, r0	@ 00012894 0918
.org 0x12896
	ldrh r2, [r1, #0]	@ 00012896 0a88
.org 0x12898
	ldr r0, [pc, #20]	@ 00012898 0548
.org 0x1289a
	ands r0, r2	@ 0001289a 1040
.org 0x1289c
	movs r2, #3	@ 0001289c 0322
.org 0x1289e
	orrs r0, r2	@ 0001289e 1043
.org 0x128a0
	strh r0, [r1, #0]	@ 000128a0 0880
.org 0x128a2
	ldrb r0, [r3, #14]	@ 000128a2 987b
.org 0x128a4
	adds r0, #1	@ 000128a4 0130
.org 0x128a6
	strb r0, [r3, #14]	@ 000128a6 9873
.org 0x128a8
	pop {r0}	@ 000128a8 01bc
.org 0x128aa
	bx r0	@ 000128aa 0047
