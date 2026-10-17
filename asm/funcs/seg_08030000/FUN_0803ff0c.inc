@ FUN_0803ff0c  entry 0x0803ff0c  size 42
.thumb
.org 0x3ff0c
FUN_0803ff0c:
	push {lr}	@ 0003ff0c 00b5
.org 0x3ff0e
	adds r2, r0, #0	@ 0003ff0e 021c
.org 0x3ff10
	ldr r0, [r2, #20]	@ 0003ff10 5069
.org 0x3ff12
	movs r1, #1	@ 0003ff12 0121
.org 0x3ff14
	ands r0, r1	@ 0003ff14 0840
.org 0x3ff16
	cmp r0, #0	@ 0003ff16 0028
.org 0x3ff18
	beq.n 0x3ff32	@ 0003ff18 0bd0
.org 0x3ff1a
	ldr r0, [r2, #12]	@ 0003ff1a d068
.org 0x3ff1c
	ldr r0, [r0, #44]	@ 0003ff1c c06a
.org 0x3ff1e
	ldr r2, [r2, #44]	@ 0003ff1e d26a
.org 0x3ff20
	movs r3, #0	@ 0003ff20 0023
.org 0x3ff22
	ldr r1, [r0, #84]	@ 0003ff22 416d
.org 0x3ff24
	ldr r0, [r2, #84]	@ 0003ff24 506d
.org 0x3ff26
	cmp r1, r0	@ 0003ff26 8142
.org 0x3ff28
	ble.n 0x3ff2c	@ 0003ff28 00dd
.org 0x3ff2a
	movs r3, #1	@ 0003ff2a 0123
.org 0x3ff2c
	adds r0, r2, #0	@ 0003ff2c 101c
.org 0x3ff2e
	adds r0, #188	@ 0003ff2e bc30
.org 0x3ff30
	strb r3, [r0, #0]	@ 0003ff30 0370
.org 0x3ff32
	pop {r0}	@ 0003ff32 01bc
.org 0x3ff34
	bx r0	@ 0003ff34 0047
