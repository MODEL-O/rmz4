@ FUN_080022a4  entry 0x080022a4  size 78
.thumb
.org 0x22a4
FUN_080022a4:
	push {r4, r5, r6, r7}	@ 000022a4 f0b4
.org 0x22a6
	ldr r4, [r2, #0]	@ 000022a6 1468
.org 0x22a8
	movs r7, #255	@ 000022a8 ff27
.org 0x22aa
	push {r0, r1, r7}	@ 000022aa 83b4
.org 0x22ac
	ldr r1, [r0, #0]	@ 000022ac 0168
.org 0x22ae
	ldr r5, [r2, #4]	@ 000022ae 5568
.org 0x22b0
	ldr r0, [r3, #0]	@ 000022b0 1868
.org 0x22b2
	ands r0, r1	@ 000022b2 0840
.org 0x22b4
	muls r0, r4	@ 000022b4 6043
.org 0x22b6
	lsrs r0, r0, #5	@ 000022b6 4009
.org 0x22b8
	adds r0, r0, r5	@ 000022b8 4019
.org 0x22ba
	ldr r6, [r3, #0]	@ 000022ba 1e68
.org 0x22bc
	ands r6, r0	@ 000022bc 0640
.org 0x22be
	lsls r5, r5, #5	@ 000022be 6d01
.org 0x22c0
	ldr r0, [r3, #4]	@ 000022c0 5868
.org 0x22c2
	ands r0, r1	@ 000022c2 0840
.org 0x22c4
	muls r0, r4	@ 000022c4 6043
.org 0x22c6
	lsrs r0, r0, #5	@ 000022c6 4009
.org 0x22c8
	adds r0, r0, r5	@ 000022c8 4019
.org 0x22ca
	ldr r7, [r3, #4]	@ 000022ca 5f68
.org 0x22cc
	ands r7, r0	@ 000022cc 0740
.org 0x22ce
	orrs r6, r7	@ 000022ce 3e43
.org 0x22d0
	lsls r5, r5, #5	@ 000022d0 6d01
.org 0x22d2
	ldr r0, [r3, #8]	@ 000022d2 9868
.org 0x22d4
	ands r0, r1	@ 000022d4 0840
.org 0x22d6
	lsrs r0, r0, #5	@ 000022d6 4009
.org 0x22d8
	muls r0, r4	@ 000022d8 6043
.org 0x22da
	ldr r7, [r3, #8]	@ 000022da 9f68
.org 0x22dc
	adds r0, r0, r5	@ 000022dc 4019
.org 0x22de
	ands r7, r0	@ 000022de 0740
.org 0x22e0
	orrs r6, r7	@ 000022e0 3e43
.org 0x22e2
	pop {r0, r1, r7}	@ 000022e2 83bc
.org 0x22e4
	str r6, [r1, #0]	@ 000022e4 0e60
.org 0x22e6
	adds r0, #4	@ 000022e6 0430
.org 0x22e8
	adds r1, #4	@ 000022e8 0431
.org 0x22ea
	subs r7, #1	@ 000022ea 013f
.org 0x22ec
	bpl.n 0x22aa	@ 000022ec ddd5
.org 0x22ee
	pop {r4, r5, r6, r7}	@ 000022ee f0bc
.org 0x22f0
	bx lr	@ 000022f0 7047
