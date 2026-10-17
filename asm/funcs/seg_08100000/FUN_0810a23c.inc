@ FUN_0810a23c  entry 0x0810a23c  size 70
.thumb
.org 0x10a23c
FUN_0810a23c:
	push {r4, r5, r6, lr}	@ 0010a23c 70b5
.org 0x10a23e
	adds r6, r0, #0	@ 0010a23e 061c
.org 0x10a240
	lsls r1, r1, #24	@ 0010a240 0906
.org 0x10a242
	lsrs r5, r1, #24	@ 0010a242 0d0e
.org 0x10a244
	lsls r2, r2, #24	@ 0010a244 1206
.org 0x10a246
	lsrs r4, r2, #24	@ 0010a246 140e
.org 0x10a248
	ldr r0, [pc, #56]	@ 0010a248 0e48
.org 0x10a24a
	ldr r0, [r0, #0]	@ 0010a24a 0068
.org 0x10a24c
	bl 0x5500	@ 0010a24c fbf658f9
.org 0x10a250
	adds r2, r0, #0	@ 0010a250 021c
.org 0x10a252
	cmp r2, #0	@ 0010a252 002a
.org 0x10a254
	beq.n 0x10a27a	@ 0010a254 11d0
.org 0x10a256
	adds r3, r2, #0	@ 0010a256 131c
.org 0x10a258
	adds r3, #37	@ 0010a258 2533
.org 0x10a25a
	movs r1, #0	@ 0010a25a 0021
.org 0x10a25c
	movs r0, #16	@ 0010a25c 1020
.org 0x10a25e
	strb r0, [r3, #0]	@ 0010a25e 1870
.org 0x10a260
	ldr r0, [pc, #36]	@ 0010a260 0948
.org 0x10a262
	strb r1, [r2, #9]	@ 0010a262 5172
.org 0x10a264
	ldr r0, [r0, #0]	@ 0010a264 0068
.org 0x10a266
	ldr r0, [r0, #0]	@ 0010a266 0068
.org 0x10a268
	str r0, [r2, #20]	@ 0010a268 5061
.org 0x10a26a
	movs r0, #0	@ 0010a26a 0020
.org 0x10a26c
	strh r1, [r2, #32]	@ 0010a26c 1184
.org 0x10a26e
	adds r1, r2, #0	@ 0010a26e 111c
.org 0x10a270
	adds r1, #34	@ 0010a270 2231
.org 0x10a272
	strb r0, [r1, #0]	@ 0010a272 0870
.org 0x10a274
	str r6, [r2, #40]	@ 0010a274 9662
.org 0x10a276
	strb r5, [r2, #16]	@ 0010a276 1574
.org 0x10a278
	strb r4, [r2, #17]	@ 0010a278 5474
.org 0x10a27a
	adds r0, r2, #0	@ 0010a27a 101c
.org 0x10a27c
	pop {r4, r5, r6}	@ 0010a27c 70bc
.org 0x10a27e
	pop {r1}	@ 0010a27e 02bc
.org 0x10a280
	bx r1	@ 0010a280 0847
