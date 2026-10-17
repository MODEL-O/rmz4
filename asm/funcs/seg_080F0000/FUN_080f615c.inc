@ FUN_080f615c  entry 0x080f615c  size 90
.thumb
.org 0xf615c
FUN_080f615c:
	push {r4, r5, r6, lr}	@ 000f615c 70b5
.org 0xf615e
	adds r6, r0, #0	@ 000f615e 061c
.org 0xf6160
	lsls r1, r1, #24	@ 000f6160 0906
.org 0xf6162
	lsrs r5, r1, #24	@ 000f6162 0d0e
.org 0xf6164
	lsls r2, r2, #24	@ 000f6164 1206
.org 0xf6166
	lsrs r4, r2, #24	@ 000f6166 140e
.org 0xf6168
	ldr r0, [pc, #76]	@ 000f6168 1348
.org 0xf616a
	ldr r0, [r0, #0]	@ 000f616a 0068
.org 0xf616c
	bl 0x5500	@ 000f616c 0ff7c8f9
.org 0xf6170
	adds r3, r0, #0	@ 000f6170 031c
.org 0xf6172
	cmp r3, #0	@ 000f6172 002b
.org 0xf6174
	beq.n 0xf61ae	@ 000f6174 1bd0
.org 0xf6176
	adds r1, r3, #0	@ 000f6176 191c
.org 0xf6178
	adds r1, #37	@ 000f6178 2531
.org 0xf617a
	movs r2, #0	@ 000f617a 0022
.org 0xf617c
	movs r0, #30	@ 000f617c 1e20
.org 0xf617e
	strb r0, [r1, #0]	@ 000f617e 0870
.org 0xf6180
	ldr r1, [pc, #56]	@ 000f6180 0e49
.org 0xf6182
	movs r0, #23	@ 000f6182 1720
.org 0xf6184
	strb r0, [r3, #9]	@ 000f6184 5872
.org 0xf6186
	ldr r0, [r1, #92]	@ 000f6186 c86d
.org 0xf6188
	ldr r0, [r0, #0]	@ 000f6188 0068
.org 0xf618a
	str r0, [r3, #20]	@ 000f618a 5861
.org 0xf618c
	movs r0, #0	@ 000f618c 0020
.org 0xf618e
	strh r2, [r3, #32]	@ 000f618e 1a84
.org 0xf6190
	adds r1, r3, #0	@ 000f6190 191c
.org 0xf6192
	adds r1, #34	@ 000f6192 2231
.org 0xf6194
	strb r0, [r1, #0]	@ 000f6194 0870
.org 0xf6196
	ldrb r1, [r3, #11]	@ 000f6196 d97a
.org 0xf6198
	movs r0, #16	@ 000f6198 1020
.org 0xf619a
	orrs r0, r1	@ 000f619a 0843
.org 0xf619c
	strb r0, [r3, #11]	@ 000f619c d872
.org 0xf619e
	ldrb r0, [r3, #28]	@ 000f619e 187f
.org 0xf61a0
	strb r0, [r3, #29]	@ 000f61a0 5877
.org 0xf61a2
	ldr r0, [r6, #0]	@ 000f61a2 3068
.org 0xf61a4
	ldr r1, [r6, #4]	@ 000f61a4 7168
.org 0xf61a6
	str r0, [r3, #84]	@ 000f61a6 5865
.org 0xf61a8
	str r1, [r3, #88]	@ 000f61a8 9965
.org 0xf61aa
	strb r5, [r3, #16]	@ 000f61aa 1d74
.org 0xf61ac
	strb r4, [r3, #17]	@ 000f61ac 5c74
.org 0xf61ae
	adds r0, r3, #0	@ 000f61ae 181c
.org 0xf61b0
	pop {r4, r5, r6}	@ 000f61b0 70bc
.org 0xf61b2
	pop {r1}	@ 000f61b2 02bc
.org 0xf61b4
	bx r1	@ 000f61b4 0847
