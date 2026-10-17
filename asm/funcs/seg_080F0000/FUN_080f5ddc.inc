@ FUN_080f5ddc  entry 0x080f5ddc  size 20
.thumb
.org 0xf5ddc
FUN_080f5ddc:
	push {lr}	@ 000f5ddc 00b5
.org 0xf5dde
	ldr r2, [pc, #16]	@ 000f5dde 044a
.org 0xf5de0
	ldrb r1, [r0, #16]	@ 000f5de0 017c
.org 0xf5de2
	lsls r1, r1, #2	@ 000f5de2 8900
.org 0xf5de4
	adds r1, r1, r2	@ 000f5de4 8918
.org 0xf5de6
	ldr r1, [r1, #0]	@ 000f5de6 0968
.org 0xf5de8
	bl 0x128f80	@ 000f5de8 33f0caf8
.org 0xf5dec
	pop {r0}	@ 000f5dec 01bc
.org 0xf5dee
	bx r0	@ 000f5dee 0047
