@ FUN_080334dc  entry 0x080334dc  size 26
.thumb
.org 0x334dc
FUN_080334dc:
	push {lr}	@ 000334dc 00b5
.org 0x334de
	ldr r2, [pc, #24]	@ 000334de 064a
.org 0x334e0
	movs r3, #162	@ 000334e0 a223
.org 0x334e2
	lsls r3, r3, #1	@ 000334e2 5b00
.org 0x334e4
	adds r1, r0, r3	@ 000334e4 c118
.org 0x334e6
	ldrb r1, [r1, #0]	@ 000334e6 0978
.org 0x334e8
	lsls r1, r1, #2	@ 000334e8 8900
.org 0x334ea
	adds r1, r1, r2	@ 000334ea 8918
.org 0x334ec
	ldr r1, [r1, #0]	@ 000334ec 0968
.org 0x334ee
	bl 0x128f80	@ 000334ee f5f047fd
.org 0x334f2
	pop {r0}	@ 000334f2 01bc
.org 0x334f4
	bx r0	@ 000334f4 0047
