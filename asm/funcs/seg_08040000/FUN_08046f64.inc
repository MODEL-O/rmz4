@ FUN_08046f64  entry 0x08046f64  size 42
.thumb
.org 0x46f64
FUN_08046f64:
	push {lr}	@ 00046f64 00b5
.org 0x46f66
	adds r2, r0, #0	@ 00046f66 021c
.org 0x46f68
	ldr r0, [r2, #20]	@ 00046f68 5069
.org 0x46f6a
	movs r1, #1	@ 00046f6a 0121
.org 0x46f6c
	ands r0, r1	@ 00046f6c 0840
.org 0x46f6e
	cmp r0, #0	@ 00046f6e 0028
.org 0x46f70
	beq.n 0x46f8a	@ 00046f70 0bd0
.org 0x46f72
	ldr r0, [r2, #12]	@ 00046f72 d068
.org 0x46f74
	ldr r0, [r0, #44]	@ 00046f74 c06a
.org 0x46f76
	ldr r2, [r2, #44]	@ 00046f76 d26a
.org 0x46f78
	movs r3, #0	@ 00046f78 0023
.org 0x46f7a
	ldr r1, [r0, #84]	@ 00046f7a 416d
.org 0x46f7c
	ldr r0, [r2, #84]	@ 00046f7c 506d
.org 0x46f7e
	cmp r1, r0	@ 00046f7e 8142
.org 0x46f80
	ble.n 0x46f84	@ 00046f80 00dd
.org 0x46f82
	movs r3, #1	@ 00046f82 0123
.org 0x46f84
	adds r0, r2, #0	@ 00046f84 101c
.org 0x46f86
	adds r0, #188	@ 00046f86 bc30
.org 0x46f88
	strb r3, [r0, #0]	@ 00046f88 0370
.org 0x46f8a
	pop {r0}	@ 00046f8a 01bc
.org 0x46f8c
	bx r0	@ 00046f8c 0047
