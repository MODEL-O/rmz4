@ FUN_080fe040  entry 0x080fe040  size 20
.thumb
.org 0xfe040
FUN_080fe040:
	push {lr}	@ 000fe040 00b5
.org 0xfe042
	ldr r2, [pc, #16]	@ 000fe042 044a
.org 0xfe044
	ldrb r1, [r0, #16]	@ 000fe044 017c
.org 0xfe046
	lsls r1, r1, #2	@ 000fe046 8900
.org 0xfe048
	adds r1, r1, r2	@ 000fe048 8918
.org 0xfe04a
	ldr r1, [r1, #0]	@ 000fe04a 0968
.org 0xfe04c
	bl 0x128f80	@ 000fe04c 2af098ff
.org 0xfe050
	pop {r0}	@ 000fe050 01bc
.org 0xfe052
	bx r0	@ 000fe052 0047
