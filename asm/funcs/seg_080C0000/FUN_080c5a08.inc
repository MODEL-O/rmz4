@ FUN_080c5a08  entry 0x080c5a08  size 20
.thumb
.org 0xc5a08
FUN_080c5a08:
	push {lr}	@ 000c5a08 00b5
.org 0xc5a0a
	ldr r2, [pc, #16]	@ 000c5a0a 044a
.org 0xc5a0c
	ldrb r1, [r0, #13]	@ 000c5a0c 417b
.org 0xc5a0e
	lsls r1, r1, #2	@ 000c5a0e 8900
.org 0xc5a10
	adds r1, r1, r2	@ 000c5a10 8918
.org 0xc5a12
	ldr r1, [r1, #0]	@ 000c5a12 0968
.org 0xc5a14
	bl 0x128f80	@ 000c5a14 63f0b4fa
.org 0xc5a18
	pop {r0}	@ 000c5a18 01bc
.org 0xc5a1a
	bx r0	@ 000c5a1a 0047
