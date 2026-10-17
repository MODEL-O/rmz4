@ FUN_08101de0  entry 0x08101de0  size 20
.thumb
.org 0x101de0
FUN_08101de0:
	push {lr}	@ 00101de0 00b5
.org 0x101de2
	ldr r2, [pc, #16]	@ 00101de2 044a
.org 0x101de4
	ldrb r1, [r0, #16]	@ 00101de4 017c
.org 0x101de6
	lsls r1, r1, #2	@ 00101de6 8900
.org 0x101de8
	adds r1, r1, r2	@ 00101de8 8918
.org 0x101dea
	ldr r1, [r1, #0]	@ 00101dea 0968
.org 0x101dec
	bl 0x128f80	@ 00101dec 27f0c8f8
.org 0x101df0
	pop {r0}	@ 00101df0 01bc
.org 0x101df2
	bx r0	@ 00101df2 0047
