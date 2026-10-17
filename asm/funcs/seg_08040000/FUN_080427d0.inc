@ FUN_080427d0  entry 0x080427d0  size 42
.thumb
.org 0x427d0
FUN_080427d0:
	push {lr}	@ 000427d0 00b5
.org 0x427d2
	adds r2, r0, #0	@ 000427d2 021c
.org 0x427d4
	ldr r0, [r2, #20]	@ 000427d4 5069
.org 0x427d6
	movs r1, #1	@ 000427d6 0121
.org 0x427d8
	ands r0, r1	@ 000427d8 0840
.org 0x427da
	cmp r0, #0	@ 000427da 0028
.org 0x427dc
	beq.n 0x427f6	@ 000427dc 0bd0
.org 0x427de
	ldr r0, [r2, #12]	@ 000427de d068
.org 0x427e0
	ldr r0, [r0, #44]	@ 000427e0 c06a
.org 0x427e2
	ldr r2, [r2, #44]	@ 000427e2 d26a
.org 0x427e4
	movs r3, #0	@ 000427e4 0023
.org 0x427e6
	ldr r1, [r0, #84]	@ 000427e6 416d
.org 0x427e8
	ldr r0, [r2, #84]	@ 000427e8 506d
.org 0x427ea
	cmp r1, r0	@ 000427ea 8142
.org 0x427ec
	ble.n 0x427f0	@ 000427ec 00dd
.org 0x427ee
	movs r3, #1	@ 000427ee 0123
.org 0x427f0
	adds r0, r2, #0	@ 000427f0 101c
.org 0x427f2
	adds r0, #188	@ 000427f2 bc30
.org 0x427f4
	strb r3, [r0, #0]	@ 000427f4 0370
.org 0x427f6
	pop {r0}	@ 000427f6 01bc
.org 0x427f8
	bx r0	@ 000427f8 0047
