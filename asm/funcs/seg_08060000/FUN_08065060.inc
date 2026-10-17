@ FUN_08065060  entry 0x08065060  size 246
.thumb
.org 0x65060
FUN_08065060:
	push {r4, r5, r6, lr}	@ 00065060 70b5
.org 0x65062
	adds r6, r0, #0	@ 00065062 061c
.org 0x65064
	ldrb r0, [r6, #10]	@ 00065064 b07a
.org 0x65066
	lsrs r4, r0, #4	@ 00065066 0409
.org 0x65068
	movs r5, #1	@ 00065068 0125
.org 0x6506a
	ands r4, r5	@ 0006506a 2c40
.org 0x6506c
	ldrb r0, [r6, #15]	@ 0006506c f07b
.org 0x6506e
	cmp r0, #0	@ 0006506e 0028
.org 0x65070
	bne.n 0x650c8	@ 00065070 2ad1
.org 0x65072
	adds r4, #1	@ 00065072 0134
.org 0x65074
	movs r0, #1	@ 00065074 0120
.org 0x65076
	ands r4, r0	@ 00065076 0440
.org 0x65078
	adds r0, r6, #0	@ 00065078 301c
.org 0x6507a
	movs r1, #18	@ 0006507a 1221
.org 0x6507c
	bl 0x65a94	@ 0006507c 00f00afd
.org 0x65080
	adds r1, r4, #0	@ 00065080 211c
.org 0x65082
	ands r1, r5	@ 00065082 2940
.org 0x65084
	adds r0, r6, #0	@ 00065084 301c
.org 0x65086
	adds r0, #76	@ 00065086 4c30
.org 0x65088
	strb r1, [r0, #0]	@ 00065088 0170
.org 0x6508a
	adds r3, r6, #0	@ 0006508a 331c
.org 0x6508c
	adds r3, #74	@ 0006508c 4a33
.org 0x6508e
	lsls r1, r1, #4	@ 0006508e 0901
.org 0x65090
	ldrb r2, [r3, #0]	@ 00065090 1a78
.org 0x65092
	movs r0, #17	@ 00065092 1120
.org 0x65094
	negs r0, r0	@ 00065094 4042
.org 0x65096
	ands r0, r2	@ 00065096 1040
.org 0x65098
	orrs r0, r1	@ 00065098 0843
.org 0x6509a
	strb r0, [r3, #0]	@ 0006509a 1870
.org 0x6509c
	ands r4, r5	@ 0006509c 2c40
.org 0x6509e
	cmp r4, #0	@ 0006509e 002c
.org 0x650a0
	beq.n 0x650aa	@ 000650a0 03d0
.org 0x650a2
	ldrb r0, [r6, #10]	@ 000650a2 b07a
.org 0x650a4
	movs r1, #16	@ 000650a4 1021
.org 0x650a6
	orrs r0, r1	@ 000650a6 0843
.org 0x650a8
	b.n 0x650b0	@ 000650a8 02e0
.org 0x650aa
	ldrb r1, [r6, #10]	@ 000650aa b17a
.org 0x650ac
	movs r0, #239	@ 000650ac ef20
.org 0x650ae
	ands r0, r1	@ 000650ae 0840
.org 0x650b0
	strb r0, [r6, #10]	@ 000650b0 b072
.org 0x650b2
	ldr r0, [r6, #88]	@ 000650b2 b06d
.org 0x650b4
	ldr r1, [pc, #160]	@ 000650b4 2849
.org 0x650b6
	adds r0, r0, r1	@ 000650b6 4018
.org 0x650b8
	str r0, [r6, #88]	@ 000650b8 b065
.org 0x650ba
	ldr r0, [r6, #84]	@ 000650ba 706d
.org 0x650bc
	str r0, [r6, #100]	@ 000650bc 7066
.org 0x650be
	movs r0, #80	@ 000650be 5020
.org 0x650c0
	strb r0, [r6, #18]	@ 000650c0 b074
.org 0x650c2
	ldrb r0, [r6, #15]	@ 000650c2 f07b
.org 0x650c4
	adds r0, #1	@ 000650c4 0130
.org 0x650c6
	strb r0, [r6, #15]	@ 000650c6 f073
.org 0x650c8
	adds r0, r6, #0	@ 000650c8 301c
.org 0x650ca
	bl 0x1cff0	@ 000650ca b7f791ff
.org 0x650ce
	adds r0, r6, #0	@ 000650ce 301c
.org 0x650d0
	adds r0, #116	@ 000650d0 7430
.org 0x650d2
	ldr r4, [pc, #136]	@ 000650d2 224c
.org 0x650d4
	ldr r3, [pc, #136]	@ 000650d4 224b
.org 0x650d6
	adds r1, r6, #0	@ 000650d6 311c
.org 0x650d8
	adds r1, #180	@ 000650d8 b431
.org 0x650da
	ldrb r2, [r1, #0]	@ 000650da 0a78
.org 0x650dc
	lsls r1, r2, #1	@ 000650dc 5100
.org 0x650de
	adds r1, r1, r3	@ 000650de c918
.org 0x650e0
	ldrh r1, [r1, #0]	@ 000650e0 0988
.org 0x650e2
	lsls r1, r1, #2	@ 000650e2 8900
.org 0x650e4
	adds r1, r1, r4	@ 000650e4 0919
.org 0x650e6
	adds r3, r6, #0	@ 000650e6 331c
.org 0x650e8
	adds r3, #113	@ 000650e8 7133
.org 0x650ea
	movs r5, #0	@ 000650ea 0025
.org 0x650ec
	ldrsb r5, [r3, r5]	@ 000650ec 5d57
.org 0x650ee
	ldr r1, [r1, #0]	@ 000650ee 0968
.org 0x650f0
	lsls r3, r5, #2	@ 000650f0 ab00
.org 0x650f2
	adds r3, r3, r1	@ 000650f2 5b18
.org 0x650f4
	ldr r4, [pc, #108]	@ 000650f4 1b4c
.org 0x650f6
	adds r1, r6, #0	@ 000650f6 311c
.org 0x650f8
	adds r1, #181	@ 000650f8 b531
.org 0x650fa
	ldrb r1, [r1, #0]	@ 000650fa 0978
.org 0x650fc
	lsls r1, r1, #2	@ 000650fc 8900
.org 0x650fe
	adds r1, r1, r4	@ 000650fe 0919
.org 0x65100
	ldr r1, [r1, #0]	@ 00065100 0968
.org 0x65102
	lsls r2, r2, #2	@ 00065102 9200
.org 0x65104
	adds r2, r2, r1	@ 00065104 5218
.org 0x65106
	ldr r1, [r2, #0]	@ 00065106 1168
.org 0x65108
	adds r1, r1, r5	@ 00065108 4919
.org 0x6510a
	ldrb r1, [r1, #0]	@ 0006510a 0978
.org 0x6510c
	lsls r2, r1, #1	@ 0006510c 4a00
.org 0x6510e
	adds r2, r2, r1	@ 0006510e 5218
.org 0x65110
	lsls r2, r2, #3	@ 00065110 d200
.org 0x65112
	ldr r1, [r3, #0]	@ 00065112 1968
.org 0x65114
	adds r1, r1, r2	@ 00065114 8918
.org 0x65116
	bl 0x5784	@ 00065116 a0f735fb
.org 0x6511a
	ldrb r0, [r6, #18]	@ 0006511a b07c
.org 0x6511c
	cmp r0, #0	@ 0006511c 0028
.org 0x6511e
	beq.n 0x65124	@ 0006511e 01d0
.org 0x65120
	subs r0, #1	@ 00065120 0138
.org 0x65122
	strb r0, [r6, #18]	@ 00065122 b074
.org 0x65124
	ldrb r2, [r6, #18]	@ 00065124 b27c
.org 0x65126
	movs r1, #1	@ 00065126 0121
.org 0x65128
	ands r1, r2	@ 00065128 1140
.org 0x6512a
	movs r0, #2	@ 0006512a 0220
.org 0x6512c
	ands r0, r2	@ 0006512c 1040
.org 0x6512e
	lsls r0, r0, #24	@ 0006512e 0006
.org 0x65130
	lsrs r0, r0, #24	@ 00065130 000e
.org 0x65132
	subs r0, #1	@ 00065132 0138
.org 0x65134
	muls r1, r0	@ 00065134 4143
.org 0x65136
	lsls r1, r1, #8	@ 00065136 0902
.org 0x65138
	ldr r0, [r6, #100]	@ 00065138 706e
.org 0x6513a
	adds r0, r0, r1	@ 0006513a 4018
.org 0x6513c
	str r0, [r6, #84]	@ 0006513c 7065
.org 0x6513e
	lsls r2, r2, #24	@ 0006513e 1206
.org 0x65140
	cmp r2, #0	@ 00065140 002a
.org 0x65142
	bne.n 0x65150	@ 00065142 05d1
.org 0x65144
	ldr r0, [r6, #44]	@ 00065144 f06a
.org 0x65146
	cmp r0, #0	@ 00065146 0028
.org 0x65148
	bne.n 0x65150	@ 00065148 02d1
.org 0x6514a
	adds r0, r6, #0	@ 0006514a 301c
.org 0x6514c
	bl 0x65f24	@ 0006514c 00f0eafe
.org 0x65150
	pop {r4, r5, r6}	@ 00065150 70bc
.org 0x65152
	pop {r0}	@ 00065152 01bc
.org 0x65154
	bx r0	@ 00065154 0047
