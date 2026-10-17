@ FUN_08046f08  entry 0x08046f08  size 48
.thumb
.org 0x46f08
FUN_08046f08:
	adds r2, r0, #0	@ 00046f08 021c
.org 0x46f0a
	adds r0, #140	@ 00046f0a 8c30
.org 0x46f0c
	movs r1, #0	@ 00046f0c 0021
.org 0x46f0e
	str r1, [r0, #0]	@ 00046f0e 0160
.org 0x46f10
	adds r0, #4	@ 00046f10 0430
.org 0x46f12
	str r1, [r0, #0]	@ 00046f12 0160
.org 0x46f14
	adds r0, #4	@ 00046f14 0430
.org 0x46f16
	strb r1, [r0, #0]	@ 00046f16 0170
.org 0x46f18
	ldrb r1, [r2, #10]	@ 00046f18 917a
.org 0x46f1a
	movs r0, #251	@ 00046f1a fb20
.org 0x46f1c
	ands r0, r1	@ 00046f1c 0840
.org 0x46f1e
	movs r1, #254	@ 00046f1e fe21
.org 0x46f20
	ands r0, r1	@ 00046f20 0840
.org 0x46f22
	strb r0, [r2, #10]	@ 00046f22 9072
.org 0x46f24
	ldr r1, [pc, #16]	@ 00046f24 0449
.org 0x46f26
	ldrb r0, [r2, #9]	@ 00046f26 507a
.org 0x46f28
	lsls r0, r0, #2	@ 00046f28 8000
.org 0x46f2a
	adds r0, r0, r1	@ 00046f2a 4018
.org 0x46f2c
	movs r1, #4	@ 00046f2c 0421
.org 0x46f2e
	str r1, [r2, #12]	@ 00046f2e d160
.org 0x46f30
	ldr r0, [r0, #0]	@ 00046f30 0068
.org 0x46f32
	ldr r0, [r0, #16]	@ 00046f32 0069
.org 0x46f34
	str r0, [r2, #20]	@ 00046f34 5061
.org 0x46f36
	bx lr	@ 00046f36 7047
