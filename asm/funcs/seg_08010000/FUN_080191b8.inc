@ FUN_080191b8  entry 0x080191b8  size 86
.thumb
.org 0x191b8
FUN_080191b8:
	push {r4, r5, r6, lr}	@ 000191b8 70b5
.org 0x191ba
	adds r5, r0, #0	@ 000191ba 051c
.org 0x191bc
	ldrb r6, [r5, #14]	@ 000191bc ae7b
.org 0x191be
	cmp r6, #0	@ 000191be 002e
.org 0x191c0
	bne.n 0x19208	@ 000191c0 22d1
.org 0x191c2
	ldr r0, [r5, #92]	@ 000191c2 e86d
.org 0x191c4
	lsls r0, r0, #16	@ 000191c4 0004
.org 0x191c6
	lsrs r0, r0, #20	@ 000191c6 000d
.org 0x191c8
	lsls r3, r0, #1	@ 000191c8 4300
.org 0x191ca
	ldr r4, [pc, #68]	@ 000191ca 114c
.org 0x191cc
	adds r3, r3, r4	@ 000191cc 1b19
.org 0x191ce
	ldr r1, [r5, #100]	@ 000191ce 696e
.org 0x191d0
	movs r2, #71	@ 000191d0 4722
.org 0x191d2
	orrs r1, r2	@ 000191d2 1143
.org 0x191d4
	strh r1, [r3, #0]	@ 000191d4 1980
.org 0x191d6
	lsls r0, r0, #2	@ 000191d6 8000
.org 0x191d8
	adds r4, #8	@ 000191d8 0834
.org 0x191da
	adds r0, r0, r4	@ 000191da 0019
.org 0x191dc
	str r6, [r0, #0]	@ 000191dc 0660
.org 0x191de
	ldr r0, [pc, #52]	@ 000191de 0d48
.org 0x191e0
	ldr r0, [r0, #0]	@ 000191e0 0068
.org 0x191e2
	ldr r2, [pc, #52]	@ 000191e2 0d4a
.org 0x191e4
	adds r0, r0, r2	@ 000191e4 8018
.org 0x191e6
	movs r2, #248	@ 000191e6 f822
.org 0x191e8
	lsls r2, r2, #5	@ 000191e8 5201
.org 0x191ea
	ands r1, r2	@ 000191ea 1140
.org 0x191ec
	lsls r1, r1, #3	@ 000191ec c900
.org 0x191ee
	movs r2, #192	@ 000191ee c022
.org 0x191f0
	lsls r2, r2, #19	@ 000191f0 d204
.org 0x191f2
	adds r1, r1, r2	@ 000191f2 8918
.org 0x191f4
	movs r2, #128	@ 000191f4 8022
.org 0x191f6
	lsls r2, r2, #2	@ 000191f6 9200
.org 0x191f8
	bl 0x128be0	@ 000191f8 0ff1f2fc
.org 0x191fc
	movs r0, #192	@ 000191fc c020
.org 0x191fe
	str r0, [r5, #68]	@ 000191fe 6864
.org 0x19200
	str r0, [r5, #72]	@ 00019200 a864
.org 0x19202
	ldrb r0, [r5, #14]	@ 00019202 a87b
.org 0x19204
	adds r0, #1	@ 00019204 0130
.org 0x19206
	strb r0, [r5, #14]	@ 00019206 a873
.org 0x19208
	pop {r4, r5, r6}	@ 00019208 70bc
.org 0x1920a
	pop {r0}	@ 0001920a 01bc
.org 0x1920c
	bx r0	@ 0001920c 0047
