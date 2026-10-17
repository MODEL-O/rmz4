@ FUN_08043b68  entry 0x08043b68  size 42
.thumb
.org 0x43b68
FUN_08043b68:
	push {lr}	@ 00043b68 00b5
.org 0x43b6a
	adds r2, r0, #0	@ 00043b6a 021c
.org 0x43b6c
	ldr r0, [r2, #20]	@ 00043b6c 5069
.org 0x43b6e
	movs r1, #1	@ 00043b6e 0121
.org 0x43b70
	ands r0, r1	@ 00043b70 0840
.org 0x43b72
	cmp r0, #0	@ 00043b72 0028
.org 0x43b74
	beq.n 0x43b8e	@ 00043b74 0bd0
.org 0x43b76
	ldr r0, [r2, #12]	@ 00043b76 d068
.org 0x43b78
	ldr r0, [r0, #44]	@ 00043b78 c06a
.org 0x43b7a
	ldr r2, [r2, #44]	@ 00043b7a d26a
.org 0x43b7c
	movs r3, #0	@ 00043b7c 0023
.org 0x43b7e
	ldr r1, [r0, #84]	@ 00043b7e 416d
.org 0x43b80
	ldr r0, [r2, #84]	@ 00043b80 506d
.org 0x43b82
	cmp r1, r0	@ 00043b82 8142
.org 0x43b84
	ble.n 0x43b88	@ 00043b84 00dd
.org 0x43b86
	movs r3, #1	@ 00043b86 0123
.org 0x43b88
	adds r0, r2, #0	@ 00043b88 101c
.org 0x43b8a
	adds r0, #188	@ 00043b8a bc30
.org 0x43b8c
	strb r3, [r0, #0]	@ 00043b8c 0370
.org 0x43b8e
	pop {r0}	@ 00043b8e 01bc
.org 0x43b90
	bx r0	@ 00043b90 0047
