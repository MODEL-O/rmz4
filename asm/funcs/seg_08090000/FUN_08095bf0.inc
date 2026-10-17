@ FUN_08095bf0  entry 0x08095bf0  size 20
.thumb
.org 0x95bf0
FUN_08095bf0:
	push {lr}	@ 00095bf0 00b5
.org 0x95bf2
	ldr r2, [pc, #16]	@ 00095bf2 044a
.org 0x95bf4
	ldrb r1, [r0, #16]	@ 00095bf4 017c
.org 0x95bf6
	lsls r1, r1, #2	@ 00095bf6 8900
.org 0x95bf8
	adds r1, r1, r2	@ 00095bf8 8918
.org 0x95bfa
	ldr r1, [r1, #0]	@ 00095bfa 0968
.org 0x95bfc
	bl 0x128f80	@ 00095bfc 93f0c0f9
.org 0x95c00
	pop {r0}	@ 00095c00 01bc
.org 0x95c02
	bx r0	@ 00095c02 0047
