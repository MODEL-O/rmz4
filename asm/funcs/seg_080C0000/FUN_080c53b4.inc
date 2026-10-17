@ FUN_080c53b4  entry 0x080c53b4  size 20
.thumb
.org 0xc53b4
FUN_080c53b4:
	push {lr}	@ 000c53b4 00b5
.org 0xc53b6
	ldr r2, [pc, #16]	@ 000c53b6 044a
.org 0xc53b8
	ldrb r1, [r0, #16]	@ 000c53b8 017c
.org 0xc53ba
	lsls r1, r1, #2	@ 000c53ba 8900
.org 0xc53bc
	adds r1, r1, r2	@ 000c53bc 8918
.org 0xc53be
	ldr r1, [r1, #0]	@ 000c53be 0968
.org 0xc53c0
	bl 0x128f80	@ 000c53c0 63f0defd
.org 0xc53c4
	pop {r0}	@ 000c53c4 01bc
.org 0xc53c6
	bx r0	@ 000c53c6 0047
