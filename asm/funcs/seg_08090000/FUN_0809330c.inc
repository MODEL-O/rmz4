@ FUN_0809330c  entry 0x0809330c  size 52
.thumb
.org 0x9330c
FUN_0809330c:
	push {r4, lr}	@ 0009330c 10b5
.org 0x9330e
	adds r4, r0, #0	@ 0009330e 041c
.org 0x93310
	bl 0x94f38	@ 00093310 01f012fe
.org 0x93314
	cmp r0, #0	@ 00093314 0028
.org 0x93316
	beq.n 0x93322	@ 00093316 04d0
.org 0x93318
	movs r1, #0	@ 00093318 0021
.org 0x9331a
	movs r0, #3	@ 0009331a 0320
.org 0x9331c
	strb r0, [r4, #13]	@ 0009331c 6073
.org 0x9331e
	strb r1, [r4, #14]	@ 0009331e a173
.org 0x93320
	strb r1, [r4, #15]	@ 00093320 e173
.org 0x93322
	ldr r1, [r4, #84]	@ 00093322 616d
.org 0x93324
	ldr r2, [r4, #88]	@ 00093324 a26d
.org 0x93326
	adds r0, r4, #0	@ 00093326 201c
.org 0x93328
	bl 0x947b4	@ 00093328 01f044fa
.org 0x9332c
	adds r1, r0, #0	@ 0009332c 011c
.org 0x9332e
	cmp r1, #0	@ 0009332e 0029
.org 0x93330
	bne.n 0x9333a	@ 00093330 03d1
.org 0x93332
	movs r0, #8	@ 00093332 0820
.org 0x93334
	strb r0, [r4, #13]	@ 00093334 6073
.org 0x93336
	strb r1, [r4, #14]	@ 00093336 a173
.org 0x93338
	strb r1, [r4, #15]	@ 00093338 e173
.org 0x9333a
	pop {r4}	@ 0009333a 10bc
.org 0x9333c
	pop {r0}	@ 0009333c 01bc
.org 0x9333e
	bx r0	@ 0009333e 0047
