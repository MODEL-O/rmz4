@ FUN_080d5af0  entry 0x080d5af0  size 20
.thumb
.org 0xd5af0
FUN_080d5af0:
	push {lr}	@ 000d5af0 00b5
.org 0xd5af2
	ldr r2, [pc, #16]	@ 000d5af2 044a
.org 0xd5af4
	ldrb r1, [r0, #16]	@ 000d5af4 017c
.org 0xd5af6
	lsls r1, r1, #2	@ 000d5af6 8900
.org 0xd5af8
	adds r1, r1, r2	@ 000d5af8 8918
.org 0xd5afa
	ldr r1, [r1, #0]	@ 000d5afa 0968
.org 0xd5afc
	bl 0x128f80	@ 000d5afc 53f040fa
.org 0xd5b00
	pop {r0}	@ 000d5b00 01bc
.org 0xd5b02
	bx r0	@ 000d5b02 0047
