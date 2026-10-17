@ FUN_080bfa94  entry 0x080bfa94  size 20
.thumb
.org 0xbfa94
FUN_080bfa94:
	push {lr}	@ 000bfa94 00b5
.org 0xbfa96
	ldr r2, [pc, #16]	@ 000bfa96 044a
.org 0xbfa98
	ldrb r1, [r0, #16]	@ 000bfa98 017c
.org 0xbfa9a
	lsls r1, r1, #2	@ 000bfa9a 8900
.org 0xbfa9c
	adds r1, r1, r2	@ 000bfa9c 8918
.org 0xbfa9e
	ldr r1, [r1, #0]	@ 000bfa9e 0968
.org 0xbfaa0
	bl 0x128f80	@ 000bfaa0 69f06efa
.org 0xbfaa4
	pop {r0}	@ 000bfaa4 01bc
.org 0xbfaa6
	bx r0	@ 000bfaa6 0047
