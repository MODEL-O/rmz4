@ FUN_08030a2c  entry 0x08030a2c  size 20
.thumb
.org 0x30a2c
FUN_08030a2c:
	push {lr}	@ 00030a2c 00b5
.org 0x30a2e
	ldr r2, [pc, #16]	@ 00030a2e 044a
.org 0x30a30
	ldrb r1, [r0, #15]	@ 00030a30 c17b
.org 0x30a32
	lsls r1, r1, #2	@ 00030a32 8900
.org 0x30a34
	adds r1, r1, r2	@ 00030a34 8918
.org 0x30a36
	ldr r1, [r1, #0]	@ 00030a36 0968
.org 0x30a38
	bl 0x128f80	@ 00030a38 f8f0a2fa
.org 0x30a3c
	pop {r0}	@ 00030a3c 01bc
.org 0x30a3e
	bx r0	@ 00030a3e 0047
