@ FUN_080181a8  entry 0x080181a8  size 156
.thumb
.org 0x181a8
FUN_080181a8:
	push {r4, r5, r6, r7, lr}	@ 000181a8 f0b5
.org 0x181aa
	mov r7, r8	@ 000181aa 4746
.org 0x181ac
	push {r7}	@ 000181ac 80b4
.org 0x181ae
	sub sp, #8	@ 000181ae 82b0
.org 0x181b0
	adds r7, r0, #0	@ 000181b0 071c
.org 0x181b2
	ldr r0, [r7, #92]	@ 000181b2 f86d
.org 0x181b4
	lsls r0, r0, #16	@ 000181b4 0004
.org 0x181b6
	mov r8, r0	@ 000181b6 8046
.org 0x181b8
	ldr r0, [pc, #136]	@ 000181b8 2248
.org 0x181ba
	ldr r1, [pc, #140]	@ 000181ba 2349
.org 0x181bc
	adds r0, r0, r1	@ 000181bc 4018
.org 0x181be
	ldrh r0, [r0, #0]	@ 000181be 0088
.org 0x181c0
	cmp r0, #0	@ 000181c0 0028
.org 0x181c2
	beq.n 0x1820e	@ 000181c2 24d0
.org 0x181c4
	ldr r0, [pc, #132]	@ 000181c4 2148
.org 0x181c6
	ldr r0, [r0, #0]	@ 000181c6 0068
.org 0x181c8
	ldr r1, [pc, #132]	@ 000181c8 2149
.org 0x181ca
	adds r0, r0, r1	@ 000181ca 4018
.org 0x181cc
	mov r1, r8	@ 000181cc 4146
.org 0x181ce
	lsrs r5, r1, #20	@ 000181ce 0d0d
.org 0x181d0
	lsls r5, r5, #1	@ 000181d0 6d00
.org 0x181d2
	ldr r1, [pc, #128]	@ 000181d2 2049
.org 0x181d4
	adds r5, r5, r1	@ 000181d4 6d18
.org 0x181d6
	ldrh r2, [r5, #0]	@ 000181d6 2a88
.org 0x181d8
	movs r4, #248	@ 000181d8 f824
.org 0x181da
	lsls r4, r4, #5	@ 000181da 6401
.org 0x181dc
	adds r1, r4, #0	@ 000181dc 211c
.org 0x181de
	ands r1, r2	@ 000181de 1140
.org 0x181e0
	lsls r1, r1, #3	@ 000181e0 c900
.org 0x181e2
	movs r2, #192	@ 000181e2 c022
.org 0x181e4
	lsls r2, r2, #19	@ 000181e4 d204
.org 0x181e6
	adds r1, r1, r2	@ 000181e6 8918
.org 0x181e8
	movs r6, #128	@ 000181e8 8026
.org 0x181ea
	lsls r6, r6, #2	@ 000181ea b600
.org 0x181ec
	adds r2, r6, #0	@ 000181ec 321c
.org 0x181ee
	bl 0x128be0	@ 000181ee 10f1f7fc
.org 0x181f2
	movs r1, #0	@ 000181f2 0021
.org 0x181f4
	ldrh r0, [r5, #0]	@ 000181f4 2888
.org 0x181f6
	ands r4, r0	@ 000181f6 0440
.org 0x181f8
	lsls r4, r4, #3	@ 000181f8 e400
.org 0x181fa
	ldr r0, [pc, #92]	@ 000181fa 1748
.org 0x181fc
	adds r4, r4, r0	@ 000181fc 2418
.org 0x181fe
	str r1, [sp, #0]	@ 000181fe 0091
.org 0x18200
	movs r2, #128	@ 00018200 8022
.org 0x18202
	lsls r2, r2, #17	@ 00018202 5204
.org 0x18204
	orrs r2, r6	@ 00018204 3243
.org 0x18206
	mov r0, sp	@ 00018206 6846
.org 0x18208
	adds r1, r4, #0	@ 00018208 211c
.org 0x1820a
	bl 0x128be0	@ 0001820a 10f1e9fc
.org 0x1820e
	mov r1, r8	@ 0001820e 4146
.org 0x18210
	lsrs r3, r1, #20	@ 00018210 0b0d
.org 0x18212
	lsls r3, r3, #2	@ 00018212 9b00
.org 0x18214
	ldr r2, [pc, #68]	@ 00018214 114a
.org 0x18216
	adds r4, r3, r2	@ 00018216 9c18
.org 0x18218
	ldr r1, [r7, #52]	@ 00018218 796b
.org 0x1821a
	ldr r0, [r7, #68]	@ 0001821a 786c
.org 0x1821c
	muls r1, r0	@ 0001821c 4143
.org 0x1821e
	asrs r1, r1, #8	@ 0001821e 0912
.org 0x18220
	ldr r0, [r7, #76]	@ 00018220 f86c
.org 0x18222
	adds r0, r0, r1	@ 00018222 4018
.org 0x18224
	strh r0, [r4, #0]	@ 00018224 2080
.org 0x18226
	adds r2, #2	@ 00018226 0232
.org 0x18228
	adds r3, r3, r2	@ 00018228 9b18
.org 0x1822a
	ldr r1, [r7, #56]	@ 0001822a b96b
.org 0x1822c
	ldr r0, [r7, #72]	@ 0001822c b86c
.org 0x1822e
	muls r1, r0	@ 0001822e 4143
.org 0x18230
	asrs r1, r1, #8	@ 00018230 0912
.org 0x18232
	ldr r0, [r7, #80]	@ 00018232 386d
.org 0x18234
	adds r0, r0, r1	@ 00018234 4018
.org 0x18236
	strh r0, [r3, #0]	@ 00018236 1880
.org 0x18238
	add sp, #8	@ 00018238 02b0
.org 0x1823a
	pop {r3}	@ 0001823a 08bc
.org 0x1823c
	mov r8, r3	@ 0001823c 9846
.org 0x1823e
	pop {r4, r5, r6, r7}	@ 0001823e f0bc
.org 0x18240
	pop {r0}	@ 00018240 01bc
.org 0x18242
	bx r0	@ 00018242 0047
