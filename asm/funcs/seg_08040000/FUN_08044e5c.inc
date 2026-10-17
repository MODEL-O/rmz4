@ FUN_08044e5c  entry 0x08044e5c  size 48
.thumb
.org 0x44e5c
FUN_08044e5c:
	adds r2, r0, #0	@ 00044e5c 021c
.org 0x44e5e
	adds r0, #140	@ 00044e5e 8c30
.org 0x44e60
	movs r1, #0	@ 00044e60 0021
.org 0x44e62
	str r1, [r0, #0]	@ 00044e62 0160
.org 0x44e64
	adds r0, #4	@ 00044e64 0430
.org 0x44e66
	str r1, [r0, #0]	@ 00044e66 0160
.org 0x44e68
	adds r0, #4	@ 00044e68 0430
.org 0x44e6a
	strb r1, [r0, #0]	@ 00044e6a 0170
.org 0x44e6c
	ldrb r1, [r2, #10]	@ 00044e6c 917a
.org 0x44e6e
	movs r0, #251	@ 00044e6e fb20
.org 0x44e70
	ands r0, r1	@ 00044e70 0840
.org 0x44e72
	movs r1, #254	@ 00044e72 fe21
.org 0x44e74
	ands r0, r1	@ 00044e74 0840
.org 0x44e76
	strb r0, [r2, #10]	@ 00044e76 9072
.org 0x44e78
	ldr r1, [pc, #16]	@ 00044e78 0449
.org 0x44e7a
	ldrb r0, [r2, #9]	@ 00044e7a 507a
.org 0x44e7c
	lsls r0, r0, #2	@ 00044e7c 8000
.org 0x44e7e
	adds r0, r0, r1	@ 00044e7e 4018
.org 0x44e80
	movs r1, #4	@ 00044e80 0421
.org 0x44e82
	str r1, [r2, #12]	@ 00044e82 d160
.org 0x44e84
	ldr r0, [r0, #0]	@ 00044e84 0068
.org 0x44e86
	ldr r0, [r0, #16]	@ 00044e86 0069
.org 0x44e88
	str r0, [r2, #20]	@ 00044e88 5061
.org 0x44e8a
	bx lr	@ 00044e8a 7047
