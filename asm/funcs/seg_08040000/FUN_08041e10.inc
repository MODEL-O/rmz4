@ FUN_08041e10  entry 0x08041e10  size 42
.thumb
.org 0x41e10
FUN_08041e10:
	push {lr}	@ 00041e10 00b5
.org 0x41e12
	adds r2, r0, #0	@ 00041e12 021c
.org 0x41e14
	ldr r0, [r2, #20]	@ 00041e14 5069
.org 0x41e16
	movs r1, #1	@ 00041e16 0121
.org 0x41e18
	ands r0, r1	@ 00041e18 0840
.org 0x41e1a
	cmp r0, #0	@ 00041e1a 0028
.org 0x41e1c
	beq.n 0x41e36	@ 00041e1c 0bd0
.org 0x41e1e
	ldr r0, [r2, #12]	@ 00041e1e d068
.org 0x41e20
	ldr r0, [r0, #44]	@ 00041e20 c06a
.org 0x41e22
	ldr r2, [r2, #44]	@ 00041e22 d26a
.org 0x41e24
	movs r3, #0	@ 00041e24 0023
.org 0x41e26
	ldr r1, [r0, #84]	@ 00041e26 416d
.org 0x41e28
	ldr r0, [r2, #84]	@ 00041e28 506d
.org 0x41e2a
	cmp r1, r0	@ 00041e2a 8142
.org 0x41e2c
	ble.n 0x41e30	@ 00041e2c 00dd
.org 0x41e2e
	movs r3, #1	@ 00041e2e 0123
.org 0x41e30
	adds r0, r2, #0	@ 00041e30 101c
.org 0x41e32
	adds r0, #188	@ 00041e32 bc30
.org 0x41e34
	strb r3, [r0, #0]	@ 00041e34 0370
.org 0x41e36
	pop {r0}	@ 00041e36 01bc
.org 0x41e38
	bx r0	@ 00041e38 0047
