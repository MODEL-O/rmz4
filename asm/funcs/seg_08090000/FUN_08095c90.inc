@ FUN_08095c90  entry 0x08095c90  size 20
.thumb
.org 0x95c90
FUN_08095c90:
	push {lr}	@ 00095c90 00b5
.org 0x95c92
	ldr r2, [pc, #16]	@ 00095c92 044a
.org 0x95c94
	ldrb r1, [r0, #16]	@ 00095c94 017c
.org 0x95c96
	lsls r1, r1, #2	@ 00095c96 8900
.org 0x95c98
	adds r1, r1, r2	@ 00095c98 8918
.org 0x95c9a
	ldr r1, [r1, #0]	@ 00095c9a 0968
.org 0x95c9c
	bl 0x128f80	@ 00095c9c 93f070f9
.org 0x95ca0
	pop {r0}	@ 00095ca0 01bc
.org 0x95ca2
	bx r0	@ 00095ca2 0047
