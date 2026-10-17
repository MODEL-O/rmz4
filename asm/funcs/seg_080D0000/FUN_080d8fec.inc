@ FUN_080d8fec  entry 0x080d8fec  size 20
.thumb
.org 0xd8fec
FUN_080d8fec:
	push {lr}	@ 000d8fec 00b5
.org 0xd8fee
	ldr r2, [pc, #16]	@ 000d8fee 044a
.org 0xd8ff0
	ldrb r1, [r0, #17]	@ 000d8ff0 417c
.org 0xd8ff2
	lsls r1, r1, #2	@ 000d8ff2 8900
.org 0xd8ff4
	adds r1, r1, r2	@ 000d8ff4 8918
.org 0xd8ff6
	ldr r1, [r1, #0]	@ 000d8ff6 0968
.org 0xd8ff8
	bl 0x128f80	@ 000d8ff8 4ff0c2ff
.org 0xd8ffc
	pop {r0}	@ 000d8ffc 01bc
.org 0xd8ffe
	bx r0	@ 000d8ffe 0047
