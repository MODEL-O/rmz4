@ FUN_0805459c  entry 0x0805459c  size 20
.thumb
.org 0x5459c
FUN_0805459c:
	push {lr}	@ 0005459c 00b5
.org 0x5459e
	ldr r2, [pc, #16]	@ 0005459e 044a
.org 0x545a0
	ldrb r1, [r0, #14]	@ 000545a0 817b
.org 0x545a2
	lsls r1, r1, #2	@ 000545a2 8900
.org 0x545a4
	adds r1, r1, r2	@ 000545a4 8918
.org 0x545a6
	ldr r1, [r1, #0]	@ 000545a6 0968
.org 0x545a8
	bl 0x128f80	@ 000545a8 d4f0eafc
.org 0x545ac
	pop {r0}	@ 000545ac 01bc
.org 0x545ae
	bx r0	@ 000545ae 0047
