@ FUN_08056f10  entry 0x08056f10  size 20
.thumb
.org 0x56f10
FUN_08056f10:
	push {lr}	@ 00056f10 00b5
.org 0x56f12
	ldr r2, [pc, #16]	@ 00056f12 044a
.org 0x56f14
	ldrb r1, [r0, #14]	@ 00056f14 817b
.org 0x56f16
	lsls r1, r1, #2	@ 00056f16 8900
.org 0x56f18
	adds r1, r1, r2	@ 00056f18 8918
.org 0x56f1a
	ldr r1, [r1, #0]	@ 00056f1a 0968
.org 0x56f1c
	bl 0x128f80	@ 00056f1c d2f030f8
.org 0x56f20
	pop {r0}	@ 00056f20 01bc
.org 0x56f22
	bx r0	@ 00056f22 0047
