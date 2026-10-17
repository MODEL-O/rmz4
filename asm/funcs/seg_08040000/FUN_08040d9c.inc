@ FUN_08040d9c  entry 0x08040d9c  size 20
.thumb
.org 0x40d9c
FUN_08040d9c:
	push {lr}	@ 00040d9c 00b5
.org 0x40d9e
	ldr r2, [pc, #16]	@ 00040d9e 044a
.org 0x40da0
	ldrb r1, [r0, #16]	@ 00040da0 017c
.org 0x40da2
	lsls r1, r1, #2	@ 00040da2 8900
.org 0x40da4
	adds r1, r1, r2	@ 00040da4 8918
.org 0x40da6
	ldr r1, [r1, #0]	@ 00040da6 0968
.org 0x40da8
	bl 0x128f80	@ 00040da8 e8f0eaf8
.org 0x40dac
	pop {r0}	@ 00040dac 01bc
.org 0x40dae
	bx r0	@ 00040dae 0047
