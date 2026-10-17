@ FUN_080a2ac4  entry 0x080a2ac4  size 20
.thumb
.org 0xa2ac4
FUN_080a2ac4:
	push {lr}	@ 000a2ac4 00b5
.org 0xa2ac6
	ldr r2, [pc, #16]	@ 000a2ac6 044a
.org 0xa2ac8
	ldrb r1, [r0, #13]	@ 000a2ac8 417b
.org 0xa2aca
	lsls r1, r1, #2	@ 000a2aca 8900
.org 0xa2acc
	adds r1, r1, r2	@ 000a2acc 8918
.org 0xa2ace
	ldr r1, [r1, #0]	@ 000a2ace 0968
.org 0xa2ad0
	bl 0x128f80	@ 000a2ad0 86f056fa
.org 0xa2ad4
	pop {r0}	@ 000a2ad4 01bc
.org 0xa2ad6
	bx r0	@ 000a2ad6 0047
