@ FUN_080da7cc  entry 0x080da7cc  size 20
.thumb
.org 0xda7cc
FUN_080da7cc:
	push {lr}	@ 000da7cc 00b5
.org 0xda7ce
	ldr r2, [pc, #16]	@ 000da7ce 044a
.org 0xda7d0
	ldrb r1, [r0, #16]	@ 000da7d0 017c
.org 0xda7d2
	lsls r1, r1, #2	@ 000da7d2 8900
.org 0xda7d4
	adds r1, r1, r2	@ 000da7d4 8918
.org 0xda7d6
	ldr r1, [r1, #0]	@ 000da7d6 0968
.org 0xda7d8
	bl 0x128f80	@ 000da7d8 4ef0d2fb
.org 0xda7dc
	pop {r0}	@ 000da7dc 01bc
.org 0xda7de
	bx r0	@ 000da7de 0047
