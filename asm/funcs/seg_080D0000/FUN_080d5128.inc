@ FUN_080d5128  entry 0x080d5128  size 20
.thumb
.org 0xd5128
FUN_080d5128:
	push {lr}	@ 000d5128 00b5
.org 0xd512a
	ldr r2, [pc, #16]	@ 000d512a 044a
.org 0xd512c
	ldrb r1, [r0, #16]	@ 000d512c 017c
.org 0xd512e
	lsls r1, r1, #2	@ 000d512e 8900
.org 0xd5130
	adds r1, r1, r2	@ 000d5130 8918
.org 0xd5132
	ldr r1, [r1, #0]	@ 000d5132 0968
.org 0xd5134
	bl 0x128f80	@ 000d5134 53f024ff
.org 0xd5138
	pop {r0}	@ 000d5138 01bc
.org 0xd513a
	bx r0	@ 000d513a 0047
