@ FUN_0805905c  entry 0x0805905c  size 180
.thumb
.org 0x5905c
FUN_0805905c:
	push {r4, lr}	@ 0005905c 10b5
.org 0x5905e
	adds r4, r0, #0	@ 0005905e 041c
.org 0x59060
	ldrb r0, [r4, #15]	@ 00059060 e07b
.org 0x59062
	cmp r0, #0	@ 00059062 0028
.org 0x59064
	bne.n 0x590b4	@ 00059064 26d1
.org 0x59066
	ldrb r1, [r4, #10]	@ 00059066 a17a
.org 0x59068
	lsrs r1, r1, #4	@ 00059068 0909
.org 0x5906a
	movs r0, #1	@ 0005906a 0120
.org 0x5906c
	ands r1, r0	@ 0005906c 0140
.org 0x5906e
	adds r1, #1	@ 0005906e 0131
.org 0x59070
	ands r1, r0	@ 00059070 0140
.org 0x59072
	adds r0, r4, #0	@ 00059072 201c
.org 0x59074
	adds r0, #76	@ 00059074 4c30
.org 0x59076
	strb r1, [r0, #0]	@ 00059076 0170
.org 0x59078
	movs r0, #74	@ 00059078 4a20
.org 0x5907a
	adds r0, r0, r4	@ 0005907a 0019
.org 0x5907c
	mov ip, r0	@ 0005907c 8446
.org 0x5907e
	lsls r3, r1, #4	@ 0005907e 0b01
.org 0x59080
	ldrb r2, [r0, #0]	@ 00059080 0278
.org 0x59082
	movs r0, #17	@ 00059082 1120
.org 0x59084
	negs r0, r0	@ 00059084 4042
.org 0x59086
	ands r0, r2	@ 00059086 1040
.org 0x59088
	orrs r0, r3	@ 00059088 1843
.org 0x5908a
	mov r2, ip	@ 0005908a 6246
.org 0x5908c
	strb r0, [r2, #0]	@ 0005908c 1070
.org 0x5908e
	cmp r1, #0	@ 0005908e 0029
.org 0x59090
	beq.n 0x5909a	@ 00059090 03d0
.org 0x59092
	ldrb r0, [r4, #10]	@ 00059092 a07a
.org 0x59094
	movs r1, #16	@ 00059094 1021
.org 0x59096
	orrs r0, r1	@ 00059096 0843
.org 0x59098
	b.n 0x590a0	@ 00059098 02e0
.org 0x5909a
	ldrb r1, [r4, #10]	@ 0005909a a17a
.org 0x5909c
	movs r0, #239	@ 0005909c ef20
.org 0x5909e
	ands r0, r1	@ 0005909e 0840
.org 0x590a0
	strb r0, [r4, #10]	@ 000590a0 a072
.org 0x590a2
	ldr r1, [pc, #108]	@ 000590a2 1b49
.org 0x590a4
	adds r0, r4, #0	@ 000590a4 201c
.org 0x590a6
	bl 0x1cf00	@ 000590a6 c3f72bff
.org 0x590aa
	movs r0, #4	@ 000590aa 0420
.org 0x590ac
	strb r0, [r4, #18]	@ 000590ac a074
.org 0x590ae
	ldrb r0, [r4, #15]	@ 000590ae e07b
.org 0x590b0
	adds r0, #1	@ 000590b0 0130
.org 0x590b2
	strb r0, [r4, #15]	@ 000590b2 e073
.org 0x590b4
	adds r0, r4, #0	@ 000590b4 201c
.org 0x590b6
	bl 0x1cff0	@ 000590b6 c3f79bff
.org 0x590ba
	adds r0, r4, #0	@ 000590ba 201c
.org 0x590bc
	adds r0, #116	@ 000590bc 7430
.org 0x590be
	ldr r3, [pc, #84]	@ 000590be 154b
.org 0x590c0
	ldrb r1, [r4, #30]	@ 000590c0 a17f
.org 0x590c2
	lsls r1, r1, #8	@ 000590c2 0902
.org 0x590c4
	adds r2, r4, #0	@ 000590c4 221c
.org 0x590c6
	adds r2, #112	@ 000590c6 7032
.org 0x590c8
	ldrb r2, [r2, #0]	@ 000590c8 1278
.org 0x590ca
	orrs r1, r2	@ 000590ca 1143
.org 0x590cc
	ldr r2, [pc, #72]	@ 000590cc 124a
.org 0x590ce
	adds r1, r1, r2	@ 000590ce 8918
.org 0x590d0
	lsls r1, r1, #2	@ 000590d0 8900
.org 0x590d2
	adds r1, r1, r3	@ 000590d2 c918
.org 0x590d4
	adds r2, r4, #0	@ 000590d4 221c
.org 0x590d6
	adds r2, #113	@ 000590d6 7132
.org 0x590d8
	ldrb r2, [r2, #0]	@ 000590d8 1278
.org 0x590da
	lsls r2, r2, #24	@ 000590da 1206
.org 0x590dc
	asrs r2, r2, #24	@ 000590dc 1216
.org 0x590de
	ldr r1, [r1, #0]	@ 000590de 0968
.org 0x590e0
	lsls r2, r2, #2	@ 000590e0 9200
.org 0x590e2
	adds r2, r2, r1	@ 000590e2 5218
.org 0x590e4
	ldr r1, [r2, #0]	@ 000590e4 1168
.org 0x590e6
	ldrb r2, [r1, #0]	@ 000590e6 0a78
.org 0x590e8
	lsls r1, r2, #1	@ 000590e8 5100
.org 0x590ea
	adds r1, r1, r2	@ 000590ea 8918
.org 0x590ec
	lsls r1, r1, #3	@ 000590ec c900
.org 0x590ee
	ldr r2, [pc, #44]	@ 000590ee 0b4a
.org 0x590f0
	adds r1, r1, r2	@ 000590f0 8918
.org 0x590f2
	bl 0x5784	@ 000590f2 acf747fb
.org 0x590f6
	ldrb r0, [r4, #18]	@ 000590f6 a07c
.org 0x590f8
	subs r0, #1	@ 000590f8 0138
.org 0x590fa
	strb r0, [r4, #18]	@ 000590fa a074
.org 0x590fc
	lsls r0, r0, #24	@ 000590fc 0006
.org 0x590fe
	lsrs r1, r0, #24	@ 000590fe 010e
.org 0x59100
	cmp r1, #0	@ 00059100 0029
.org 0x59102
	bne.n 0x5910a	@ 00059102 02d1
.org 0x59104
	movs r0, #3	@ 00059104 0320
.org 0x59106
	strb r0, [r4, #14]	@ 00059106 a073
.org 0x59108
	strb r1, [r4, #15]	@ 00059108 e173
.org 0x5910a
	pop {r4}	@ 0005910a 10bc
.org 0x5910c
	pop {r0}	@ 0005910c 01bc
.org 0x5910e
	bx r0	@ 0005910e 0047
