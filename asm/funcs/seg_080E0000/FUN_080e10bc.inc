@ FUN_080e10bc  entry 0x080e10bc  size 144
.thumb
.org 0xe10bc
FUN_080e10bc:
	push {r4, r5, r6, lr}	@ 000e10bc 70b5
.org 0xe10be
	adds r5, r0, #0	@ 000e10be 051c
.org 0xe10c0
	ldrb r4, [r5, #17]	@ 000e10c0 6c7c
.org 0xe10c2
	ldr r1, [pc, #80]	@ 000e10c2 1449
.org 0xe10c4
	ldrb r0, [r5, #9]	@ 000e10c4 687a
.org 0xe10c6
	lsls r0, r0, #2	@ 000e10c6 8000
.org 0xe10c8
	adds r0, r0, r1	@ 000e10c8 4018
.org 0xe10ca
	movs r1, #1	@ 000e10ca 0121
.org 0xe10cc
	str r1, [r5, #12]	@ 000e10cc e960
.org 0xe10ce
	ldr r0, [r0, #0]	@ 000e10ce 0068
.org 0xe10d0
	ldr r0, [r0, #4]	@ 000e10d0 4068
.org 0xe10d2
	str r0, [r5, #20]	@ 000e10d2 6861
.org 0xe10d4
	ldrb r1, [r5, #10]	@ 000e10d4 a97a
.org 0xe10d6
	movs r0, #1	@ 000e10d6 0120
.org 0xe10d8
	movs r6, #0	@ 000e10d8 0026
.org 0xe10da
	orrs r0, r1	@ 000e10da 0843
.org 0xe10dc
	movs r1, #2	@ 000e10dc 0221
.org 0xe10de
	orrs r0, r1	@ 000e10de 0843
.org 0xe10e0
	strb r0, [r5, #10]	@ 000e10e0 a872
.org 0xe10e2
	ldr r0, [pc, #52]	@ 000e10e2 0d48
.org 0xe10e4
	str r0, [r5, #96]	@ 000e10e4 2866
.org 0xe10e6
	ldr r2, [pc, #52]	@ 000e10e6 0d4a
.org 0xe10e8
	ldr r1, [r2, #0]	@ 000e10e8 1168
.org 0xe10ea
	ldr r0, [pc, #52]	@ 000e10ea 0d48
.org 0xe10ec
	muls r0, r1	@ 000e10ec 4843
.org 0xe10ee
	ldr r1, [pc, #52]	@ 000e10ee 0d49
.org 0xe10f0
	adds r0, r0, r1	@ 000e10f0 4018
.org 0xe10f2
	lsls r0, r0, #1	@ 000e10f2 4000
.org 0xe10f4
	lsrs r1, r0, #1	@ 000e10f4 4108
.org 0xe10f6
	str r1, [r2, #0]	@ 000e10f6 1160
.org 0xe10f8
	lsrs r0, r0, #17	@ 000e10f8 400c
.org 0xe10fa
	movs r1, #3	@ 000e10fa 0321
.org 0xe10fc
	ands r0, r1	@ 000e10fc 0840
.org 0xe10fe
	adds r0, #32	@ 000e10fe 2030
.org 0xe1100
	strb r0, [r5, #18]	@ 000e1100 a874
.org 0xe1102
	adds r0, r5, #0	@ 000e1102 281c
.org 0xe1104
	bl 0x1cc9c	@ 000e1104 3bf7cafd
.org 0xe1108
	cmp r4, #0	@ 000e1108 002c
.org 0xe110a
	beq.n 0xe1128	@ 000e110a 0dd0
.org 0xe110c
	ldrb r0, [r5, #10]	@ 000e110c a87a
.org 0xe110e
	movs r1, #16	@ 000e110e 1021
.org 0xe1110
	orrs r0, r1	@ 000e1110 0843
.org 0xe1112
	b.n 0xe112e	@ 000e1112 0ce0
.org 0xe1114
	.byte 0x64,0x6f,0x86,0x08	@ 000e1114 data
.org 0xe1118
	.byte 0x80,0xfe,0xff,0xff	@ 000e1118 data
.org 0xe111c
	.byte 0x38,0xdc,0x02,0x02	@ 000e111c data
.org 0xe1120
	.byte 0xfd,0x43,0x03,0x00	@ 000e1120 data
.org 0xe1124
	.byte 0xc3,0x9e,0x26,0x00	@ 000e1124 data
.org 0xe1128
	ldrb r1, [r5, #10]	@ 000e1128 a97a
.org 0xe112a
	movs r0, #239	@ 000e112a ef20
.org 0xe112c
	ands r0, r1	@ 000e112c 0840
.org 0xe112e
	strb r0, [r5, #10]	@ 000e112e a872
.org 0xe1130
	movs r1, #1	@ 000e1130 0121
.org 0xe1132
	ands r1, r4	@ 000e1132 2140
.org 0xe1134
	adds r0, r5, #0	@ 000e1134 281c
.org 0xe1136
	adds r0, #76	@ 000e1136 4c30
.org 0xe1138
	strb r1, [r0, #0]	@ 000e1138 0170
.org 0xe113a
	adds r3, r5, #0	@ 000e113a 2b1c
.org 0xe113c
	adds r3, #74	@ 000e113c 4a33
.org 0xe113e
	lsls r1, r1, #4	@ 000e113e 0901
.org 0xe1140
	ldrb r2, [r3, #0]	@ 000e1140 1a78
.org 0xe1142
	movs r0, #17	@ 000e1142 1120
.org 0xe1144
	negs r0, r0	@ 000e1144 4042
.org 0xe1146
	ands r0, r2	@ 000e1146 1040
.org 0xe1148
	orrs r0, r1	@ 000e1148 0843
.org 0xe114a
	strb r0, [r3, #0]	@ 000e114a 1870
