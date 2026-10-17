@ FUN_080c344c  entry 0x080c344c  size 20
.thumb
.org 0xc344c
FUN_080c344c:
	push {lr}	@ 000c344c 00b5
.org 0xc344e
	ldr r2, [pc, #16]	@ 000c344e 044a
.org 0xc3450
	ldrb r1, [r0, #16]	@ 000c3450 017c
.org 0xc3452
	lsls r1, r1, #2	@ 000c3452 8900
.org 0xc3454
	adds r1, r1, r2	@ 000c3454 8918
.org 0xc3456
	ldr r1, [r1, #0]	@ 000c3456 0968
.org 0xc3458
	bl 0x128f80	@ 000c3458 65f092fd
.org 0xc345c
	pop {r0}	@ 000c345c 01bc
.org 0xc345e
	bx r0	@ 000c345e 0047
