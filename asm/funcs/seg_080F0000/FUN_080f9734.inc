@ FUN_080f9734  entry 0x080f9734  size 20
.thumb
.org 0xf9734
FUN_080f9734:
	push {lr}	@ 000f9734 00b5
.org 0xf9736
	ldr r2, [pc, #16]	@ 000f9736 044a
.org 0xf9738
	ldrb r1, [r0, #14]	@ 000f9738 817b
.org 0xf973a
	lsls r1, r1, #2	@ 000f973a 8900
.org 0xf973c
	adds r1, r1, r2	@ 000f973c 8918
.org 0xf973e
	ldr r1, [r1, #0]	@ 000f973e 0968
.org 0xf9740
	bl 0x128f80	@ 000f9740 2ff01efc
.org 0xf9744
	pop {r0}	@ 000f9744 01bc
.org 0xf9746
	bx r0	@ 000f9746 0047
