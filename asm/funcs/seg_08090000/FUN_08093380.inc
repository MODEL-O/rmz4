@ FUN_08093380  entry 0x08093380  size 32
.thumb
.org 0x93380
FUN_08093380:
	push {r4, lr}	@ 00093380 10b5
.org 0x93382
	adds r4, r0, #0	@ 00093382 041c
.org 0x93384
	ldr r1, [r4, #84]	@ 00093384 616d
.org 0x93386
	ldr r2, [r4, #88]	@ 00093386 a26d
.org 0x93388
	bl 0x947b4	@ 00093388 01f014fa
.org 0x9338c
	adds r1, r0, #0	@ 0009338c 011c
.org 0x9338e
	cmp r1, #0	@ 0009338e 0029
.org 0x93390
	bne.n 0x9339a	@ 00093390 03d1
.org 0x93392
	movs r0, #8	@ 00093392 0820
.org 0x93394
	strb r0, [r4, #13]	@ 00093394 6073
.org 0x93396
	strb r1, [r4, #14]	@ 00093396 a173
.org 0x93398
	strb r1, [r4, #15]	@ 00093398 e173
.org 0x9339a
	pop {r4}	@ 0009339a 10bc
.org 0x9339c
	pop {r0}	@ 0009339c 01bc
.org 0x9339e
	bx r0	@ 0009339e 0047
