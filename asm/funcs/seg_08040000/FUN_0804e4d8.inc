@ FUN_0804e4d8  entry 0x0804e4d8  size 42
.thumb
.org 0x4e4d8
FUN_0804e4d8:
	push {lr}	@ 0004e4d8 00b5
.org 0x4e4da
	adds r2, r0, #0	@ 0004e4da 021c
.org 0x4e4dc
	ldr r0, [r2, #20]	@ 0004e4dc 5069
.org 0x4e4de
	movs r1, #1	@ 0004e4de 0121
.org 0x4e4e0
	ands r0, r1	@ 0004e4e0 0840
.org 0x4e4e2
	cmp r0, #0	@ 0004e4e2 0028
.org 0x4e4e4
	beq.n 0x4e4fe	@ 0004e4e4 0bd0
.org 0x4e4e6
	ldr r0, [r2, #12]	@ 0004e4e6 d068
.org 0x4e4e8
	ldr r0, [r0, #44]	@ 0004e4e8 c06a
.org 0x4e4ea
	ldr r2, [r2, #44]	@ 0004e4ea d26a
.org 0x4e4ec
	movs r3, #0	@ 0004e4ec 0023
.org 0x4e4ee
	ldr r1, [r0, #84]	@ 0004e4ee 416d
.org 0x4e4f0
	ldr r0, [r2, #84]	@ 0004e4f0 506d
.org 0x4e4f2
	cmp r1, r0	@ 0004e4f2 8142
.org 0x4e4f4
	ble.n 0x4e4f8	@ 0004e4f4 00dd
.org 0x4e4f6
	movs r3, #1	@ 0004e4f6 0123
.org 0x4e4f8
	adds r0, r2, #0	@ 0004e4f8 101c
.org 0x4e4fa
	adds r0, #188	@ 0004e4fa bc30
.org 0x4e4fc
	strb r3, [r0, #0]	@ 0004e4fc 0370
.org 0x4e4fe
	pop {r0}	@ 0004e4fe 01bc
.org 0x4e500
	bx r0	@ 0004e500 0047
