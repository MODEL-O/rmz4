@ FUN_08013160  entry 0x08013160  size 106
.thumb
.org 0x13160
FUN_08013160:
	push {r4, r5, r6, r7, lr}	@ 00013160 f0b5
.org 0x13162
	adds r4, r0, #0	@ 00013162 041c
.org 0x13164
	bl 0x7638	@ 00013164 f4f768fa
.org 0x13168
	movs r0, #160	@ 00013168 a020
.org 0x1316a
	lsls r0, r0, #2	@ 0001316a 8000
.org 0x1316c
	bl 0xa70	@ 0001316c edf780fc
.org 0x13170
	adds r3, r0, #0	@ 00013170 031c
.org 0x13172
	cmp r3, #0	@ 00013172 002b
.org 0x13174
	beq.n 0x131c4	@ 00013174 26d0
.org 0x13176
	ldr r2, [pc, #84]	@ 00013176 154a
.org 0x13178
	movs r1, #186	@ 00013178 ba21
.org 0x1317a
	lsls r1, r1, #1	@ 0001317a 4900
.org 0x1317c
	adds r0, r2, r1	@ 0001317c 5018
.org 0x1317e
	str r3, [r0, #0]	@ 0001317e 0360
.org 0x13180
	movs r0, #188	@ 00013180 bc20
.org 0x13182
	lsls r0, r0, #1	@ 00013182 4000
.org 0x13184
	adds r1, r2, r0	@ 00013184 1118
.org 0x13186
	ldr r0, [pc, #72]	@ 00013186 1248
.org 0x13188
	str r0, [r1, #0]	@ 00013188 0860
.org 0x1318a
	movs r0, #190	@ 0001318a be20
.org 0x1318c
	lsls r0, r0, #1	@ 0001318c 4000
.org 0x1318e
	adds r1, r2, r0	@ 0001318e 1118
.org 0x13190
	ldr r0, [pc, #64]	@ 00013190 1048
.org 0x13192
	str r0, [r1, #0]	@ 00013192 0860
.org 0x13194
	ldrh r0, [r4, #56]	@ 00013194 208f
.org 0x13196
	ldr r7, [pc, #64]	@ 00013196 104f
.org 0x13198
	adds r6, r3, #0	@ 00013198 1e1c
.org 0x1319a
	lsls r2, r0, #5	@ 0001319a 4201
.org 0x1319c
	lsls r5, r0, #16	@ 0001319c 0504
.org 0x1319e
	movs r3, #159	@ 0001319e 9f23
.org 0x131a0
	ldr r0, [r4, #52]	@ 000131a0 606b
.org 0x131a2
	ldrb r1, [r4, #18]	@ 000131a2 a17c
.org 0x131a4
	adds r1, r1, r2	@ 000131a4 8918
.org 0x131a6
	lsls r1, r1, #24	@ 000131a6 0906
.org 0x131a8
	lsrs r1, r1, #23	@ 000131a8 c90d
.org 0x131aa
	adds r1, r1, r7	@ 000131aa c919
.org 0x131ac
	ldrh r1, [r1, #0]	@ 000131ac 0988
.org 0x131ae
	lsls r1, r1, #16	@ 000131ae 0904
.org 0x131b0
	asrs r1, r1, #24	@ 000131b0 0916
.org 0x131b2
	adds r0, r0, r1	@ 000131b2 4018
.org 0x131b4
	lsls r0, r0, #16	@ 000131b4 0004
.org 0x131b6
	lsrs r0, r0, #16	@ 000131b6 000c
.org 0x131b8
	orrs r0, r5	@ 000131b8 2843
.org 0x131ba
	stmia r6!, {r0}	@ 000131ba 01c6
.org 0x131bc
	adds r2, #32	@ 000131bc 2032
.org 0x131be
	subs r3, #1	@ 000131be 013b
.org 0x131c0
	cmp r3, #0	@ 000131c0 002b
.org 0x131c2
	bge.n 0x131a0	@ 000131c2 edda
.org 0x131c4
	pop {r4, r5, r6, r7}	@ 000131c4 f0bc
.org 0x131c6
	pop {r0}	@ 000131c6 01bc
.org 0x131c8
	bx r0	@ 000131c8 0047
