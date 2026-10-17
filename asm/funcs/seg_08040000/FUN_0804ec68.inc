@ FUN_0804ec68  entry 0x0804ec68  size 42
.thumb
.org 0x4ec68
FUN_0804ec68:
	push {lr}	@ 0004ec68 00b5
.org 0x4ec6a
	adds r2, r0, #0	@ 0004ec6a 021c
.org 0x4ec6c
	ldr r0, [r2, #20]	@ 0004ec6c 5069
.org 0x4ec6e
	movs r1, #1	@ 0004ec6e 0121
.org 0x4ec70
	ands r0, r1	@ 0004ec70 0840
.org 0x4ec72
	cmp r0, #0	@ 0004ec72 0028
.org 0x4ec74
	beq.n 0x4ec8e	@ 0004ec74 0bd0
.org 0x4ec76
	ldr r0, [r2, #12]	@ 0004ec76 d068
.org 0x4ec78
	ldr r0, [r0, #44]	@ 0004ec78 c06a
.org 0x4ec7a
	ldr r2, [r2, #44]	@ 0004ec7a d26a
.org 0x4ec7c
	movs r3, #0	@ 0004ec7c 0023
.org 0x4ec7e
	ldr r1, [r0, #84]	@ 0004ec7e 416d
.org 0x4ec80
	ldr r0, [r2, #84]	@ 0004ec80 506d
.org 0x4ec82
	cmp r1, r0	@ 0004ec82 8142
.org 0x4ec84
	ble.n 0x4ec88	@ 0004ec84 00dd
.org 0x4ec86
	movs r3, #1	@ 0004ec86 0123
.org 0x4ec88
	adds r0, r2, #0	@ 0004ec88 101c
.org 0x4ec8a
	adds r0, #188	@ 0004ec8a bc30
.org 0x4ec8c
	strb r3, [r0, #0]	@ 0004ec8c 0370
.org 0x4ec8e
	pop {r0}	@ 0004ec8e 01bc
.org 0x4ec90
	bx r0	@ 0004ec90 0047
