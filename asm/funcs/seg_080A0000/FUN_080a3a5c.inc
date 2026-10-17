@ FUN_080a3a5c  entry 0x080a3a5c  size 42
.thumb
.org 0xa3a5c
FUN_080a3a5c:
	push {lr}	@ 000a3a5c 00b5
.org 0xa3a5e
	adds r2, r0, #0	@ 000a3a5e 021c
.org 0xa3a60
	ldr r0, [r2, #20]	@ 000a3a60 5069
.org 0xa3a62
	movs r1, #1	@ 000a3a62 0121
.org 0xa3a64
	ands r0, r1	@ 000a3a64 0840
.org 0xa3a66
	cmp r0, #0	@ 000a3a66 0028
.org 0xa3a68
	beq.n 0xa3a82	@ 000a3a68 0bd0
.org 0xa3a6a
	ldr r0, [r2, #12]	@ 000a3a6a d068
.org 0xa3a6c
	ldr r0, [r0, #44]	@ 000a3a6c c06a
.org 0xa3a6e
	ldr r2, [r2, #44]	@ 000a3a6e d26a
.org 0xa3a70
	movs r3, #0	@ 000a3a70 0023
.org 0xa3a72
	ldr r1, [r0, #84]	@ 000a3a72 416d
.org 0xa3a74
	ldr r0, [r2, #84]	@ 000a3a74 506d
.org 0xa3a76
	cmp r1, r0	@ 000a3a76 8142
.org 0xa3a78
	ble.n 0xa3a7c	@ 000a3a78 00dd
.org 0xa3a7a
	movs r3, #1	@ 000a3a7a 0123
.org 0xa3a7c
	adds r0, r2, #0	@ 000a3a7c 101c
.org 0xa3a7e
	adds r0, #188	@ 000a3a7e bc30
.org 0xa3a80
	strb r3, [r0, #0]	@ 000a3a80 0370
.org 0xa3a82
	pop {r0}	@ 000a3a82 01bc
.org 0xa3a84
	bx r0	@ 000a3a84 0047
