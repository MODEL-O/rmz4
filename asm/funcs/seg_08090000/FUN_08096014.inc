@ FUN_08096014  entry 0x08096014  size 20
.thumb
.org 0x96014
FUN_08096014:
	push {lr}	@ 00096014 00b5
.org 0x96016
	ldr r2, [pc, #16]	@ 00096016 044a
.org 0x96018
	ldrb r1, [r0, #13]	@ 00096018 417b
.org 0x9601a
	lsls r1, r1, #2	@ 0009601a 8900
.org 0x9601c
	adds r1, r1, r2	@ 0009601c 8918
.org 0x9601e
	ldr r1, [r1, #0]	@ 0009601e 0968
.org 0x96020
	bl 0x128f80	@ 00096020 92f0aeff
.org 0x96024
	pop {r0}	@ 00096024 01bc
.org 0x96026
	bx r0	@ 00096026 0047
