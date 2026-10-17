@ FUN_0804ff5c  entry 0x0804ff5c  size 42
.thumb
.org 0x4ff5c
FUN_0804ff5c:
	push {lr}	@ 0004ff5c 00b5
.org 0x4ff5e
	adds r2, r0, #0	@ 0004ff5e 021c
.org 0x4ff60
	ldr r0, [r2, #20]	@ 0004ff60 5069
.org 0x4ff62
	movs r1, #1	@ 0004ff62 0121
.org 0x4ff64
	ands r0, r1	@ 0004ff64 0840
.org 0x4ff66
	cmp r0, #0	@ 0004ff66 0028
.org 0x4ff68
	beq.n 0x4ff82	@ 0004ff68 0bd0
.org 0x4ff6a
	ldr r0, [r2, #12]	@ 0004ff6a d068
.org 0x4ff6c
	ldr r0, [r0, #44]	@ 0004ff6c c06a
.org 0x4ff6e
	ldr r2, [r2, #44]	@ 0004ff6e d26a
.org 0x4ff70
	movs r3, #0	@ 0004ff70 0023
.org 0x4ff72
	ldr r1, [r0, #84]	@ 0004ff72 416d
.org 0x4ff74
	ldr r0, [r2, #84]	@ 0004ff74 506d
.org 0x4ff76
	cmp r1, r0	@ 0004ff76 8142
.org 0x4ff78
	ble.n 0x4ff7c	@ 0004ff78 00dd
.org 0x4ff7a
	movs r3, #1	@ 0004ff7a 0123
.org 0x4ff7c
	adds r0, r2, #0	@ 0004ff7c 101c
.org 0x4ff7e
	adds r0, #188	@ 0004ff7e bc30
.org 0x4ff80
	strb r3, [r0, #0]	@ 0004ff80 0370
.org 0x4ff82
	pop {r0}	@ 0004ff82 01bc
.org 0x4ff84
	bx r0	@ 0004ff84 0047
