@ FUN_0804fc5c  entry 0x0804fc5c  size 42
.thumb
.org 0x4fc5c
FUN_0804fc5c:
	push {lr}	@ 0004fc5c 00b5
.org 0x4fc5e
	adds r2, r0, #0	@ 0004fc5e 021c
.org 0x4fc60
	ldr r0, [r2, #20]	@ 0004fc60 5069
.org 0x4fc62
	movs r1, #1	@ 0004fc62 0121
.org 0x4fc64
	ands r0, r1	@ 0004fc64 0840
.org 0x4fc66
	cmp r0, #0	@ 0004fc66 0028
.org 0x4fc68
	beq.n 0x4fc82	@ 0004fc68 0bd0
.org 0x4fc6a
	ldr r0, [r2, #12]	@ 0004fc6a d068
.org 0x4fc6c
	ldr r0, [r0, #44]	@ 0004fc6c c06a
.org 0x4fc6e
	ldr r2, [r2, #44]	@ 0004fc6e d26a
.org 0x4fc70
	movs r3, #0	@ 0004fc70 0023
.org 0x4fc72
	ldr r1, [r0, #84]	@ 0004fc72 416d
.org 0x4fc74
	ldr r0, [r2, #84]	@ 0004fc74 506d
.org 0x4fc76
	cmp r1, r0	@ 0004fc76 8142
.org 0x4fc78
	ble.n 0x4fc7c	@ 0004fc78 00dd
.org 0x4fc7a
	movs r3, #1	@ 0004fc7a 0123
.org 0x4fc7c
	adds r0, r2, #0	@ 0004fc7c 101c
.org 0x4fc7e
	adds r0, #188	@ 0004fc7e bc30
.org 0x4fc80
	strb r3, [r0, #0]	@ 0004fc80 0370
.org 0x4fc82
	pop {r0}	@ 0004fc82 01bc
.org 0x4fc84
	bx r0	@ 0004fc84 0047
