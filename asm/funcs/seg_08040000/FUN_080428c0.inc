@ FUN_080428c0  entry 0x080428c0  size 132
.thumb
.org 0x428c0
FUN_080428c0:
	push {r4, r5, lr}	@ 000428c0 30b5
.org 0x428c2
	adds r4, r0, #0	@ 000428c2 041c
.org 0x428c4
	adds r5, r1, #0	@ 000428c4 0d1c
.org 0x428c6
	ldr r0, [pc, #64]	@ 000428c6 1048
.org 0x428c8
	ldr r0, [r0, #0]	@ 000428c8 0068
.org 0x428ca
	bl 0x5500	@ 000428ca c2f719fe
.org 0x428ce
	adds r2, r0, #0	@ 000428ce 021c
.org 0x428d0
	cmp r2, #0	@ 000428d0 002a
.org 0x428d2
	beq.n 0x4294e	@ 000428d2 3cd0
.org 0x428d4
	adds r0, r4, #0	@ 000428d4 201c
.org 0x428d6
	adds r0, #248	@ 000428d6 f830
.org 0x428d8
	ldrb r0, [r0, #0]	@ 000428d8 0078
.org 0x428da
	cmp r0, #2	@ 000428da 0228
.org 0x428dc
	bne.n 0x42918	@ 000428dc 1cd1
.org 0x428de
	ldr r1, [pc, #44]	@ 000428de 0b49
.org 0x428e0
	movs r0, #14	@ 000428e0 0e20
.org 0x428e2
	strb r0, [r2, #9]	@ 000428e2 5072
.org 0x428e4
	ldr r0, [r1, #56]	@ 000428e4 886b
.org 0x428e6
	ldr r0, [r0, #0]	@ 000428e6 0068
.org 0x428e8
	str r0, [r2, #20]	@ 000428e8 5061
.org 0x428ea
	ldrb r1, [r2, #11]	@ 000428ea d17a
.org 0x428ec
	movs r0, #191	@ 000428ec bf20
.org 0x428ee
	ands r0, r1	@ 000428ee 0840
.org 0x428f0
	strb r0, [r2, #11]	@ 000428f0 d072
.org 0x428f2
	adds r1, r2, #0	@ 000428f2 111c
.org 0x428f4
	adds r1, #37	@ 000428f4 2531
.org 0x428f6
	movs r0, #16	@ 000428f6 1020
.org 0x428f8
	strb r0, [r1, #0]	@ 000428f8 0870
.org 0x428fa
	ldr r0, [pc, #20]	@ 000428fa 0548
.org 0x428fc
	ldrh r0, [r0, #0]	@ 000428fc 0088
.org 0x428fe
	strh r0, [r2, #32]	@ 000428fe 1084
.org 0x42900
	ldr r0, [pc, #16]	@ 00042900 0448
.org 0x42902
	ldrb r0, [r0, #0]	@ 00042902 0078
.org 0x42904
	b.n 0x4293e	@ 00042904 1be0
.org 0x42906
	.byte 0x00	@ 00042906 data
.org 0x42907
	.byte 0x00	@ 00042907 data
.org 0x42908
	.byte 0x88,0xed,0x02,0x02	@ 00042908 data
.org 0x4290c
	.byte 0xf8,0x39,0x85,0x08	@ 0004290c data
.org 0x42910
	.byte 0xfc,0x36,0x85,0x08	@ 00042910 data
.org 0x42914
	.byte 0x04,0x37,0x85,0x08	@ 00042914 data
.org 0x42918
	ldr r1, [pc, #60]	@ 00042918 0f49
.org 0x4291a
	movs r0, #14	@ 0004291a 0e20
.org 0x4291c
	strb r0, [r2, #9]	@ 0004291c 5072
.org 0x4291e
	ldr r0, [r1, #56]	@ 0004291e 886b
.org 0x42920
	ldr r0, [r0, #0]	@ 00042920 0068
.org 0x42922
	str r0, [r2, #20]	@ 00042922 5061
.org 0x42924
	ldrb r1, [r2, #11]	@ 00042924 d17a
.org 0x42926
	movs r0, #191	@ 00042926 bf20
.org 0x42928
	ands r0, r1	@ 00042928 0840
.org 0x4292a
	strb r0, [r2, #11]	@ 0004292a d072
.org 0x4292c
	adds r1, r2, #0	@ 0004292c 111c
.org 0x4292e
	adds r1, #37	@ 0004292e 2531
.org 0x42930
	movs r0, #16	@ 00042930 1020
.org 0x42932
	strb r0, [r1, #0]	@ 00042932 0870
.org 0x42934
	ldr r0, [pc, #36]	@ 00042934 0948
.org 0x42936
	ldrh r0, [r0, #2]	@ 00042936 4088
.org 0x42938
	strh r0, [r2, #32]	@ 00042938 1084
.org 0x4293a
	ldr r0, [pc, #36]	@ 0004293a 0948
.org 0x4293c
	ldrb r0, [r0, #1]	@ 0004293c 4078
.org 0x4293e
	subs r1, #3	@ 0004293e 0339
.org 0x42940
	strb r0, [r1, #0]	@ 00042940 0870
.org 0x42942
	str r4, [r2, #40]	@ 00042942 9462
