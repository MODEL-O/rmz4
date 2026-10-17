@ FUN_08093340  entry 0x08093340  size 32
.thumb
.org 0x93340
FUN_08093340:
	push {r4, lr}	@ 00093340 10b5
.org 0x93342
	adds r4, r0, #0	@ 00093342 041c
.org 0x93344
	ldr r1, [r4, #84]	@ 00093344 616d
.org 0x93346
	ldr r2, [r4, #88]	@ 00093346 a26d
.org 0x93348
	bl 0x947b4	@ 00093348 01f034fa
.org 0x9334c
	adds r1, r0, #0	@ 0009334c 011c
.org 0x9334e
	cmp r1, #0	@ 0009334e 0029
.org 0x93350
	bne.n 0x9335a	@ 00093350 03d1
.org 0x93352
	movs r0, #8	@ 00093352 0820
.org 0x93354
	strb r0, [r4, #13]	@ 00093354 6073
.org 0x93356
	strb r1, [r4, #14]	@ 00093356 a173
.org 0x93358
	strb r1, [r4, #15]	@ 00093358 e173
.org 0x9335a
	pop {r4}	@ 0009335a 10bc
.org 0x9335c
	pop {r0}	@ 0009335c 01bc
.org 0x9335e
	bx r0	@ 0009335e 0047
