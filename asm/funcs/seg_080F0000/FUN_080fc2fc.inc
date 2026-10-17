@ FUN_080fc2fc  entry 0x080fc2fc  size 44
.thumb
.org 0xfc2fc
FUN_080fc2fc:
	push {lr}	@ 000fc2fc 00b5
.org 0xfc2fe
	adds r2, r0, #0	@ 000fc2fe 021c
.org 0xfc300
	ldr r0, [r2, #20]	@ 000fc300 5069
.org 0xfc302
	movs r1, #4	@ 000fc302 0421
.org 0xfc304
	ands r0, r1	@ 000fc304 0840
.org 0xfc306
	cmp r0, #0	@ 000fc306 0028
.org 0xfc308
	beq.n 0xfc324	@ 000fc308 0cd0
.org 0xfc30a
	ldr r0, [r2, #12]	@ 000fc30a d068
.org 0xfc30c
	ldr r1, [r0, #44]	@ 000fc30c c16a
.org 0xfc30e
	ldr r2, [r2, #44]	@ 000fc30e d26a
.org 0xfc310
	movs r0, #8	@ 000fc310 0820
.org 0xfc312
	ldrsb r0, [r1, r0]	@ 000fc312 0856
.org 0xfc314
	cmp r0, #0	@ 000fc314 0028
.org 0xfc316
	bne.n 0xfc324	@ 000fc316 05d1
.org 0xfc318
	ldrb r0, [r1, #9]	@ 000fc318 487a
.org 0xfc31a
	cmp r0, #0	@ 000fc31a 0028
.org 0xfc31c
	bne.n 0xfc324	@ 000fc31c 02d1
.org 0xfc31e
	adds r0, r2, #0	@ 000fc31e 101c
.org 0xfc320
	adds r0, #192	@ 000fc320 c030
.org 0xfc322
	str r1, [r0, #0]	@ 000fc322 0160
.org 0xfc324
	pop {r0}	@ 000fc324 01bc
.org 0xfc326
	bx r0	@ 000fc326 0047
