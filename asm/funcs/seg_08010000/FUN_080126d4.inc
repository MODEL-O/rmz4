@ FUN_080126d4  entry 0x080126d4  size 92
.thumb
.org 0x126d4
FUN_080126d4:
	push {r4, r5, r6, lr}	@ 000126d4 70b5
.org 0x126d6
	adds r5, r0, #0	@ 000126d6 051c
.org 0x126d8
	ldrb r6, [r5, #14]	@ 000126d8 ae7b
.org 0x126da
	cmp r6, #0	@ 000126da 002e
.org 0x126dc
	bne.n 0x12724	@ 000126dc 22d1
.org 0x126de
	ldr r0, [r5, #92]	@ 000126de e86d
.org 0x126e0
	lsls r0, r0, #16	@ 000126e0 0004
.org 0x126e2
	lsrs r0, r0, #20	@ 000126e2 000d
.org 0x126e4
	lsls r3, r0, #1	@ 000126e4 4300
.org 0x126e6
	ldr r4, [pc, #72]	@ 000126e6 124c
.org 0x126e8
	adds r3, r3, r4	@ 000126e8 1b19
.org 0x126ea
	ldr r1, [r5, #96]	@ 000126ea 296e
.org 0x126ec
	ldr r2, [r5, #100]	@ 000126ec 6a6e
.org 0x126ee
	orrs r1, r2	@ 000126ee 1143
.org 0x126f0
	movs r2, #68	@ 000126f0 4422
.org 0x126f2
	orrs r1, r2	@ 000126f2 1143
.org 0x126f4
	strh r1, [r3, #0]	@ 000126f4 1980
.org 0x126f6
	lsls r0, r0, #2	@ 000126f6 8000
.org 0x126f8
	adds r4, #8	@ 000126f8 0834
.org 0x126fa
	adds r0, r0, r4	@ 000126fa 0019
.org 0x126fc
	str r6, [r0, #0]	@ 000126fc 0660
.org 0x126fe
	ldr r0, [pc, #52]	@ 000126fe 0d48
.org 0x12700
	ldr r0, [r0, #0]	@ 00012700 0068
.org 0x12702
	ldr r2, [pc, #52]	@ 00012702 0d4a
.org 0x12704
	adds r0, r0, r2	@ 00012704 8018
.org 0x12706
	movs r2, #248	@ 00012706 f822
.org 0x12708
	lsls r2, r2, #5	@ 00012708 5201
.org 0x1270a
	ands r1, r2	@ 0001270a 1140
.org 0x1270c
	lsls r1, r1, #3	@ 0001270c c900
.org 0x1270e
	movs r2, #192	@ 0001270e c022
.org 0x12710
	lsls r2, r2, #19	@ 00012710 d204
.org 0x12712
	adds r1, r1, r2	@ 00012712 8918
.org 0x12714
	movs r2, #128	@ 00012714 8022
.org 0x12716
	lsls r2, r2, #2	@ 00012716 9200
.org 0x12718
	bl 0x128be0	@ 00012718 16f162fa
.org 0x1271c
	strh r6, [r5, #16]	@ 0001271c 2e82
.org 0x1271e
	ldrb r0, [r5, #14]	@ 0001271e a87b
.org 0x12720
	adds r0, #1	@ 00012720 0130
.org 0x12722
	strb r0, [r5, #14]	@ 00012722 a873
.org 0x12724
	ldrh r0, [r5, #16]	@ 00012724 288a
.org 0x12726
	adds r0, #1	@ 00012726 0130
.org 0x12728
	strh r0, [r5, #16]	@ 00012728 2882
.org 0x1272a
	pop {r4, r5, r6}	@ 0001272a 70bc
.org 0x1272c
	pop {r0}	@ 0001272c 01bc
.org 0x1272e
	bx r0	@ 0001272e 0047
