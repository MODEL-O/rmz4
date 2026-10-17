@ FUN_081111d8  entry 0x081111d8  size 116
.thumb
.org 0x1111d8
FUN_081111d8:
	push {r4, lr}	@ 001111d8 10b5
.org 0x1111da
	adds r4, r0, #0	@ 001111da 041c
.org 0x1111dc
	ldrb r0, [r4, #7]	@ 001111dc e079
.org 0x1111de
	cmp r0, #0	@ 001111de 0028
.org 0x1111e0
	bne.n 0x111206	@ 001111e0 11d1
.org 0x1111e2
	movs r0, #225	@ 001111e2 e120
.org 0x1111e4
	lsls r0, r0, #1	@ 001111e4 4000
.org 0x1111e6
	bl 0x2b10	@ 001111e6 f1f693fc
.org 0x1111ea
	ldr r2, [pc, #96]	@ 001111ea 184a
.org 0x1111ec
	ldrh r1, [r2, #0]	@ 001111ec 1188
.org 0x1111ee
	ldr r0, [pc, #96]	@ 001111ee 1848
.org 0x1111f0
	ands r0, r1	@ 001111f0 0840
.org 0x1111f2
	movs r3, #244	@ 001111f2 f423
.org 0x1111f4
	lsls r3, r3, #6	@ 001111f4 9b01
.org 0x1111f6
	adds r1, r3, #0	@ 001111f6 191c
.org 0x1111f8
	orrs r0, r1	@ 001111f8 0843
.org 0x1111fa
	strh r0, [r2, #0]	@ 001111fa 1080
.org 0x1111fc
	movs r0, #32	@ 001111fc 2020
.org 0x1111fe
	strh r0, [r4, #8]	@ 001111fe 2081
.org 0x111200
	ldrb r0, [r4, #7]	@ 00111200 e079
.org 0x111202
	adds r0, #1	@ 00111202 0130
.org 0x111204
	strb r0, [r4, #7]	@ 00111204 e071
.org 0x111206
	ldrh r1, [r4, #8]	@ 00111206 2189
.org 0x111208
	movs r2, #8	@ 00111208 0822
.org 0x11120a
	ldrsh r0, [r4, r2]	@ 0011120a a05e
.org 0x11120c
	cmp r0, #0	@ 0011120c 0028
.org 0x11120e
	beq.n 0x111214	@ 0011120e 01d0
.org 0x111210
	subs r0, r1, #1	@ 00111210 481e
.org 0x111212
	strh r0, [r4, #8]	@ 00111212 2081
.org 0x111214
	ldr r2, [pc, #60]	@ 00111214 0f4a
.org 0x111216
	ldrb r0, [r4, #8]	@ 00111216 207a
.org 0x111218
	adds r0, #32	@ 00111218 2030
.org 0x11121a
	ldr r3, [pc, #60]	@ 0011121a 0f4b
.org 0x11121c
	adds r1, r2, r3	@ 0011121c d118
.org 0x11121e
	strb r0, [r1, #0]	@ 0011121e 0870
.org 0x111220
	movs r1, #255	@ 00111220 ff21
.org 0x111222
	ands r0, r1	@ 00111222 0840
.org 0x111224
	subs r3, #1	@ 00111224 013b
.org 0x111226
	adds r1, r2, r3	@ 00111226 d118
.org 0x111228
	strb r0, [r1, #0]	@ 00111228 0870
.org 0x11122a
	movs r1, #128	@ 0011122a 8021
.org 0x11122c
	lsls r1, r1, #3	@ 0011122c c900
.org 0x11122e
	adds r2, r2, r1	@ 0011122e 5218
.org 0x111230
	strb r0, [r2, #0]	@ 00111230 1070
.org 0x111232
	movs r0, #137	@ 00111232 8920
.org 0x111234
	bl 0x25d8	@ 00111234 f1f6d0f9
.org 0x111238
	movs r2, #8	@ 00111238 0822
.org 0x11123a
	ldrsh r1, [r4, r2]	@ 0011123a a15e
.org 0x11123c
	cmp r1, #0	@ 0011123c 0029
.org 0x11123e
	bne.n 0x111246	@ 0011123e 02d1
.org 0x111240
	movs r0, #2	@ 00111240 0220
.org 0x111242
	strb r0, [r4, #6]	@ 00111242 a071
.org 0x111244
	strb r1, [r4, #7]	@ 00111244 e171
.org 0x111246
	pop {r4}	@ 00111246 10bc
.org 0x111248
	pop {r0}	@ 00111248 01bc
.org 0x11124a
	bx r0	@ 0011124a 0047
