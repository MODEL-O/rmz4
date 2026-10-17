@ FUN_080c3a48  entry 0x080c3a48  size 20
.thumb
.org 0xc3a48
FUN_080c3a48:
	push {lr}	@ 000c3a48 00b5
.org 0xc3a4a
	ldr r2, [pc, #16]	@ 000c3a4a 044a
.org 0xc3a4c
	ldrb r1, [r0, #16]	@ 000c3a4c 017c
.org 0xc3a4e
	lsls r1, r1, #2	@ 000c3a4e 8900
.org 0xc3a50
	adds r1, r1, r2	@ 000c3a50 8918
.org 0xc3a52
	ldr r1, [r1, #0]	@ 000c3a52 0968
.org 0xc3a54
	bl 0x128f80	@ 000c3a54 65f094fa
.org 0xc3a58
	pop {r0}	@ 000c3a58 01bc
.org 0xc3a5a
	bx r0	@ 000c3a5a 0047
