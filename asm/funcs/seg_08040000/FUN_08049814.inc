@ FUN_08049814  entry 0x08049814  size 20
.thumb
.org 0x49814
FUN_08049814:
	push {lr}	@ 00049814 00b5
.org 0x49816
	ldr r2, [pc, #16]	@ 00049816 044a
.org 0x49818
	ldrb r1, [r0, #16]	@ 00049818 017c
.org 0x4981a
	lsls r1, r1, #2	@ 0004981a 8900
.org 0x4981c
	adds r1, r1, r2	@ 0004981c 8918
.org 0x4981e
	ldr r1, [r1, #0]	@ 0004981e 0968
.org 0x49820
	bl 0x128f80	@ 00049820 dff0aefb
.org 0x49824
	pop {r0}	@ 00049824 01bc
.org 0x49826
	bx r0	@ 00049826 0047
