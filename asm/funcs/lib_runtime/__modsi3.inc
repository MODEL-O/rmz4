@ __modsi3  entry 0x08129050  size 206
.thumb
.org 0x129050
__modsi3:
	movs r3, #1	@ 00129050 0123
.org 0x129052
	cmp r1, #0	@ 00129052 0029
.org 0x129054
	beq.n 0x129114	@ 00129054 5ed0
.org 0x129056
	bpl.n 0x12905a	@ 00129056 00d5
.org 0x129058
	negs r1, r1	@ 00129058 4942
.org 0x12905a
	push {r4}	@ 0012905a 10b4
.org 0x12905c
	push {r0}	@ 0012905c 01b4
.org 0x12905e
	cmp r0, #0	@ 0012905e 0028
.org 0x129060
	bpl.n 0x129064	@ 00129060 00d5
.org 0x129062
	negs r0, r0	@ 00129062 4042
.org 0x129064
	cmp r0, r1	@ 00129064 8842
.org 0x129066
	bcc.n 0x129108	@ 00129066 4fd3
.org 0x129068
	movs r4, #1	@ 00129068 0124
.org 0x12906a
	lsls r4, r4, #28	@ 0012906a 2407
.org 0x12906c
	cmp r1, r4	@ 0012906c a142
.org 0x12906e
	bcs.n 0x12907a	@ 0012906e 04d2
.org 0x129070
	cmp r1, r0	@ 00129070 8142
.org 0x129072
	bcs.n 0x12907a	@ 00129072 02d2
.org 0x129074
	lsls r1, r1, #4	@ 00129074 0901
.org 0x129076
	lsls r3, r3, #4	@ 00129076 1b01
.org 0x129078
	b.n 0x12906c	@ 00129078 f8e7
.org 0x12907a
	lsls r4, r4, #3	@ 0012907a e400
.org 0x12907c
	cmp r1, r4	@ 0012907c a142
.org 0x12907e
	bcs.n 0x12908a	@ 0012907e 04d2
.org 0x129080
	cmp r1, r0	@ 00129080 8142
.org 0x129082
	bcs.n 0x12908a	@ 00129082 02d2
.org 0x129084
	lsls r1, r1, #1	@ 00129084 4900
.org 0x129086
	lsls r3, r3, #1	@ 00129086 5b00
.org 0x129088
	b.n 0x12907c	@ 00129088 f8e7
.org 0x12908a
	movs r2, #0	@ 0012908a 0022
.org 0x12908c
	cmp r0, r1	@ 0012908c 8842
.org 0x12908e
	bcc.n 0x129092	@ 0012908e 00d3
.org 0x129090
	subs r0, r0, r1	@ 00129090 401a
.org 0x129092
	lsrs r4, r1, #1	@ 00129092 4c08
.org 0x129094
	cmp r0, r4	@ 00129094 a042
.org 0x129096
	bcc.n 0x1290a4	@ 00129096 05d3
.org 0x129098
	subs r0, r0, r4	@ 00129098 001b
.org 0x12909a
	mov ip, r3	@ 0012909a 9c46
.org 0x12909c
	movs r4, #1	@ 0012909c 0124
.org 0x12909e
	rors r3, r4	@ 0012909e e341
.org 0x1290a0
	orrs r2, r3	@ 001290a0 1a43
.org 0x1290a2
	mov r3, ip	@ 001290a2 6346
.org 0x1290a4
	lsrs r4, r1, #2	@ 001290a4 8c08
.org 0x1290a6
	cmp r0, r4	@ 001290a6 a042
.org 0x1290a8
	bcc.n 0x1290b6	@ 001290a8 05d3
.org 0x1290aa
	subs r0, r0, r4	@ 001290aa 001b
.org 0x1290ac
	mov ip, r3	@ 001290ac 9c46
.org 0x1290ae
	movs r4, #2	@ 001290ae 0224
.org 0x1290b0
	rors r3, r4	@ 001290b0 e341
.org 0x1290b2
	orrs r2, r3	@ 001290b2 1a43
.org 0x1290b4
	mov r3, ip	@ 001290b4 6346
.org 0x1290b6
	lsrs r4, r1, #3	@ 001290b6 cc08
.org 0x1290b8
	cmp r0, r4	@ 001290b8 a042
.org 0x1290ba
	bcc.n 0x1290c8	@ 001290ba 05d3
.org 0x1290bc
	subs r0, r0, r4	@ 001290bc 001b
.org 0x1290be
	mov ip, r3	@ 001290be 9c46
.org 0x1290c0
	movs r4, #3	@ 001290c0 0324
.org 0x1290c2
	rors r3, r4	@ 001290c2 e341
.org 0x1290c4
	orrs r2, r3	@ 001290c4 1a43
.org 0x1290c6
	mov r3, ip	@ 001290c6 6346
.org 0x1290c8
	mov ip, r3	@ 001290c8 9c46
.org 0x1290ca
	cmp r0, #0	@ 001290ca 0028
.org 0x1290cc
	beq.n 0x1290d6	@ 001290cc 03d0
.org 0x1290ce
	lsrs r3, r3, #4	@ 001290ce 1b09
.org 0x1290d0
	beq.n 0x1290d6	@ 001290d0 01d0
.org 0x1290d2
	lsrs r1, r1, #4	@ 001290d2 0909
.org 0x1290d4
	b.n 0x12908a	@ 001290d4 d9e7
.org 0x1290d6
	movs r4, #14	@ 001290d6 0e24
.org 0x1290d8
	lsls r4, r4, #28	@ 001290d8 2407
.org 0x1290da
	ands r2, r4	@ 001290da 2240
.org 0x1290dc
	beq.n 0x129108	@ 001290dc 14d0
.org 0x1290de
	mov r3, ip	@ 001290de 6346
.org 0x1290e0
	movs r4, #3	@ 001290e0 0324
.org 0x1290e2
	rors r3, r4	@ 001290e2 e341
.org 0x1290e4
	tst r2, r3	@ 001290e4 1a42
.org 0x1290e6
	beq.n 0x1290ec	@ 001290e6 01d0
.org 0x1290e8
	lsrs r4, r1, #3	@ 001290e8 cc08
.org 0x1290ea
	adds r0, r0, r4	@ 001290ea 0019
.org 0x1290ec
	mov r3, ip	@ 001290ec 6346
.org 0x1290ee
	movs r4, #2	@ 001290ee 0224
.org 0x1290f0
	rors r3, r4	@ 001290f0 e341
.org 0x1290f2
	tst r2, r3	@ 001290f2 1a42
.org 0x1290f4
	beq.n 0x1290fa	@ 001290f4 01d0
.org 0x1290f6
	lsrs r4, r1, #2	@ 001290f6 8c08
.org 0x1290f8
	adds r0, r0, r4	@ 001290f8 0019
.org 0x1290fa
	mov r3, ip	@ 001290fa 6346
.org 0x1290fc
	movs r4, #1	@ 001290fc 0124
.org 0x1290fe
	rors r3, r4	@ 001290fe e341
.org 0x129100
	tst r2, r3	@ 00129100 1a42
.org 0x129102
	beq.n 0x129108	@ 00129102 01d0
.org 0x129104
	lsrs r4, r1, #1	@ 00129104 4c08
.org 0x129106
	adds r0, r0, r4	@ 00129106 0019
.org 0x129108
	pop {r4}	@ 00129108 10bc
.org 0x12910a
	cmp r4, #0	@ 0012910a 002c
.org 0x12910c
	bpl.n 0x129110	@ 0012910c 00d5
.org 0x12910e
	negs r0, r0	@ 0012910e 4042
.org 0x129110
	pop {r4}	@ 00129110 10bc
.org 0x129112
	mov pc, lr	@ 00129112 f746
.org 0x129114
	push {lr}	@ 00129114 00b5
.org 0x129116
	bl 0x12904c	@ 00129116 fff799ff
.org 0x12911a
	movs r0, #0	@ 0012911a 0020
.org 0x12911c
	pop {pc}	@ 0012911c 00bd
