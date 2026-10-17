@ FUN_08004f50  entry 0x08004f50  size 48
.thumb
.org 0x4f50
FUN_08004f50:
	push {r4, r5, r6, lr}	@ 00004f50 70b5
.org 0x4f52
	adds r6, r0, #0	@ 00004f52 061c
.org 0x4f54
	lsls r2, r2, #16	@ 00004f54 1204
.org 0x4f56
	movs r3, #0	@ 00004f56 0023
.org 0x4f58
	lsrs r2, r2, #13	@ 00004f58 520b
.org 0x4f5a
	adds r2, r2, r1	@ 00004f5a 5218
.org 0x4f5c
	ldr r5, [r2, #0]	@ 00004f5c 1568
.org 0x4f5e
	ldr r4, [r2, #4]	@ 00004f5e 5468
.org 0x4f60
	lsls r0, r3, #7	@ 00004f60 d801
.org 0x4f62
	adds r2, r3, #1	@ 00004f62 5a1c
.org 0x4f64
	adds r0, r0, r6	@ 00004f64 8019
.org 0x4f66
	movs r1, #15	@ 00004f66 0f21
.org 0x4f68
	str r5, [r0, #0]	@ 00004f68 0560
.org 0x4f6a
	str r4, [r0, #64]	@ 00004f6a 0464
.org 0x4f6c
	adds r0, #4	@ 00004f6c 0430
.org 0x4f6e
	subs r1, #1	@ 00004f6e 0139
.org 0x4f70
	cmp r1, #0	@ 00004f70 0029
.org 0x4f72
	bge.n 0x4f68	@ 00004f72 f9da
.org 0x4f74
	adds r3, r2, #0	@ 00004f74 131c
.org 0x4f76
	cmp r3, #15	@ 00004f76 0f2b
.org 0x4f78
	ble.n 0x4f60	@ 00004f78 f2dd
.org 0x4f7a
	pop {r4, r5, r6}	@ 00004f7a 70bc
.org 0x4f7c
	pop {r0}	@ 00004f7c 01bc
.org 0x4f7e
	bx r0	@ 00004f7e 0047
