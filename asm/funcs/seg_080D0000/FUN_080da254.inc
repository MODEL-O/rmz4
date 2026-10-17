@ FUN_080da254  entry 0x080da254  size 60
.thumb
.org 0xda254
FUN_080da254:
	push {lr}	@ 000da254 00b5
.org 0xda256
	adds r3, r0, #0	@ 000da256 031c
.org 0xda258
	ldrb r1, [r3, #10]	@ 000da258 997a
.org 0xda25a
	movs r0, #16	@ 000da25a 1020
.org 0xda25c
	ands r0, r1	@ 000da25c 0840
.org 0xda25e
	cmp r0, #0	@ 000da25e 0028
.org 0xda260
	beq.n 0xda268	@ 000da260 02d0
.org 0xda262
	movs r0, #192	@ 000da262 c020
.org 0xda264
	negs r0, r0	@ 000da264 4042
.org 0xda266
	b.n 0xda26a	@ 000da266 00e0
.org 0xda268
	movs r0, #192	@ 000da268 c020
.org 0xda26a
	str r0, [r3, #92]	@ 000da26a d865
.org 0xda26c
	movs r0, #0	@ 000da26c 0020
.org 0xda26e
	str r0, [r3, #96]	@ 000da26e 1866
.org 0xda270
	ldr r2, [pc, #28]	@ 000da270 074a
.org 0xda272
	ldr r1, [r2, #0]	@ 000da272 1168
.org 0xda274
	ldr r0, [pc, #28]	@ 000da274 0748
.org 0xda276
	muls r0, r1	@ 000da276 4843
.org 0xda278
	ldr r1, [pc, #28]	@ 000da278 0749
.org 0xda27a
	adds r0, r0, r1	@ 000da27a 4018
.org 0xda27c
	lsls r0, r0, #1	@ 000da27c 4000
.org 0xda27e
	lsrs r1, r0, #1	@ 000da27e 4108
.org 0xda280
	str r1, [r2, #0]	@ 000da280 1160
.org 0xda282
	lsrs r0, r0, #17	@ 000da282 400c
.org 0xda284
	movs r1, #7	@ 000da284 0721
.org 0xda286
	ands r0, r1	@ 000da286 0840
.org 0xda288
	adds r0, #76	@ 000da288 4c30
.org 0xda28a
	strb r0, [r3, #18]	@ 000da28a 9874
.org 0xda28c
	pop {r0}	@ 000da28c 01bc
.org 0xda28e
	bx r0	@ 000da28e 0047
