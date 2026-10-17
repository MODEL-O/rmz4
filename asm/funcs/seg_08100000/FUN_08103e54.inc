@ FUN_08103e54  entry 0x08103e54  size 66
.thumb
.org 0x103e54
FUN_08103e54:
	push {r4, lr}	@ 00103e54 10b5
.org 0x103e56
	adds r4, r0, #0	@ 00103e56 041c
.org 0x103e58
	ldr r1, [pc, #60]	@ 00103e58 0f49
.org 0x103e5a
	ldrb r0, [r4, #13]	@ 00103e5a 607b
.org 0x103e5c
	lsls r0, r0, #2	@ 00103e5c 8000
.org 0x103e5e
	adds r0, r0, r1	@ 00103e5e 4018
.org 0x103e60
	ldr r1, [r0, #0]	@ 00103e60 0168
.org 0x103e62
	adds r0, r4, #0	@ 00103e62 201c
.org 0x103e64
	bl 0x128f80	@ 00103e64 25f08cf8
.org 0x103e68
	ldr r1, [pc, #48]	@ 00103e68 0c49
.org 0x103e6a
	ldr r0, [r4, #84]	@ 00103e6a 606d
.org 0x103e6c
	movs r2, #240	@ 00103e6c f022
.org 0x103e6e
	lsls r2, r2, #7	@ 00103e6e d201
.org 0x103e70
	adds r0, r0, r2	@ 00103e70 8018
.org 0x103e72
	ldr r1, [r1, #56]	@ 00103e72 896b
.org 0x103e74
	subs r1, r1, r0	@ 00103e74 091a
.org 0x103e76
	movs r0, #128	@ 00103e76 8020
.org 0x103e78
	lsls r0, r0, #6	@ 00103e78 8001
.org 0x103e7a
	cmp r1, r0	@ 00103e7a 8142
.org 0x103e7c
	ble.n 0x103e90	@ 00103e7c 08dd
.org 0x103e7e
	ldr r1, [pc, #32]	@ 00103e7e 0849
.org 0x103e80
	ldrb r0, [r4, #9]	@ 00103e80 607a
.org 0x103e82
	lsls r0, r0, #2	@ 00103e82 8000
.org 0x103e84
	adds r0, r0, r1	@ 00103e84 4018
.org 0x103e86
	movs r1, #2	@ 00103e86 0221
.org 0x103e88
	str r1, [r4, #12]	@ 00103e88 e160
.org 0x103e8a
	ldr r0, [r0, #0]	@ 00103e8a 0068
.org 0x103e8c
	ldr r0, [r0, #8]	@ 00103e8c 8068
.org 0x103e8e
	str r0, [r4, #20]	@ 00103e8e 6061
.org 0x103e90
	pop {r4}	@ 00103e90 10bc
.org 0x103e92
	pop {r0}	@ 00103e92 01bc
.org 0x103e94
	bx r0	@ 00103e94 0047
