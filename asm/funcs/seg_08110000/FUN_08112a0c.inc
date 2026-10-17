@ FUN_08112a0c  entry 0x08112a0c  size 20
.thumb
.org 0x112a0c
FUN_08112a0c:
	push {lr}	@ 00112a0c 00b5
.org 0x112a0e
	ldr r2, [pc, #16]	@ 00112a0e 044a
.org 0x112a10
	ldrb r1, [r0, #1]	@ 00112a10 4178
.org 0x112a12
	lsls r1, r1, #2	@ 00112a12 8900
.org 0x112a14
	adds r1, r1, r2	@ 00112a14 8918
.org 0x112a16
	ldr r1, [r1, #0]	@ 00112a16 0968
.org 0x112a18
	bl 0x128f80	@ 00112a18 16f0b2fa
.org 0x112a1c
	pop {r0}	@ 00112a1c 01bc
.org 0x112a1e
	bx r0	@ 00112a1e 0047
