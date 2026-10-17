@ FUN_0804cc00  entry 0x0804cc00  size 42
.thumb
.org 0x4cc00
FUN_0804cc00:
	push {lr}	@ 0004cc00 00b5
.org 0x4cc02
	adds r2, r0, #0	@ 0004cc02 021c
.org 0x4cc04
	ldr r0, [r2, #20]	@ 0004cc04 5069
.org 0x4cc06
	movs r1, #1	@ 0004cc06 0121
.org 0x4cc08
	ands r0, r1	@ 0004cc08 0840
.org 0x4cc0a
	cmp r0, #0	@ 0004cc0a 0028
.org 0x4cc0c
	beq.n 0x4cc26	@ 0004cc0c 0bd0
.org 0x4cc0e
	ldr r0, [r2, #12]	@ 0004cc0e d068
.org 0x4cc10
	ldr r0, [r0, #44]	@ 0004cc10 c06a
.org 0x4cc12
	ldr r2, [r2, #44]	@ 0004cc12 d26a
.org 0x4cc14
	movs r3, #0	@ 0004cc14 0023
.org 0x4cc16
	ldr r1, [r0, #84]	@ 0004cc16 416d
.org 0x4cc18
	ldr r0, [r2, #84]	@ 0004cc18 506d
.org 0x4cc1a
	cmp r1, r0	@ 0004cc1a 8142
.org 0x4cc1c
	ble.n 0x4cc20	@ 0004cc1c 00dd
.org 0x4cc1e
	movs r3, #1	@ 0004cc1e 0123
.org 0x4cc20
	adds r0, r2, #0	@ 0004cc20 101c
.org 0x4cc22
	adds r0, #188	@ 0004cc22 bc30
.org 0x4cc24
	strb r3, [r0, #0]	@ 0004cc24 0370
.org 0x4cc26
	pop {r0}	@ 0004cc26 01bc
.org 0x4cc28
	bx r0	@ 0004cc28 0047
