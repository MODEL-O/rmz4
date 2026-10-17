@ FUN_08049e14  entry 0x08049e14  size 42
.thumb
.org 0x49e14
FUN_08049e14:
	push {lr}	@ 00049e14 00b5
.org 0x49e16
	adds r2, r0, #0	@ 00049e16 021c
.org 0x49e18
	ldr r0, [r2, #20]	@ 00049e18 5069
.org 0x49e1a
	movs r1, #1	@ 00049e1a 0121
.org 0x49e1c
	ands r0, r1	@ 00049e1c 0840
.org 0x49e1e
	cmp r0, #0	@ 00049e1e 0028
.org 0x49e20
	beq.n 0x49e3a	@ 00049e20 0bd0
.org 0x49e22
	ldr r0, [r2, #12]	@ 00049e22 d068
.org 0x49e24
	ldr r0, [r0, #44]	@ 00049e24 c06a
.org 0x49e26
	ldr r2, [r2, #44]	@ 00049e26 d26a
.org 0x49e28
	movs r3, #0	@ 00049e28 0023
.org 0x49e2a
	ldr r1, [r0, #84]	@ 00049e2a 416d
.org 0x49e2c
	ldr r0, [r2, #84]	@ 00049e2c 506d
.org 0x49e2e
	cmp r1, r0	@ 00049e2e 8142
.org 0x49e30
	ble.n 0x49e34	@ 00049e30 00dd
.org 0x49e32
	movs r3, #1	@ 00049e32 0123
.org 0x49e34
	adds r0, r2, #0	@ 00049e34 101c
.org 0x49e36
	adds r0, #188	@ 00049e36 bc30
.org 0x49e38
	strb r3, [r0, #0]	@ 00049e38 0370
.org 0x49e3a
	pop {r0}	@ 00049e3a 01bc
.org 0x49e3c
	bx r0	@ 00049e3c 0047
