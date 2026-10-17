@ FUN_080c56d4  entry 0x080c56d4  size 20
.thumb
.org 0xc56d4
FUN_080c56d4:
	push {lr}	@ 000c56d4 00b5
.org 0xc56d6
	ldr r2, [pc, #16]	@ 000c56d6 044a
.org 0xc56d8
	ldrb r1, [r0, #16]	@ 000c56d8 017c
.org 0xc56da
	lsls r1, r1, #2	@ 000c56da 8900
.org 0xc56dc
	adds r1, r1, r2	@ 000c56dc 8918
.org 0xc56de
	ldr r1, [r1, #0]	@ 000c56de 0968
.org 0xc56e0
	bl 0x128f80	@ 000c56e0 63f04efc
.org 0xc56e4
	pop {r0}	@ 000c56e4 01bc
.org 0xc56e6
	bx r0	@ 000c56e6 0047
