@ FUN_080d8710  entry 0x080d8710  size 20
.thumb
.org 0xd8710
FUN_080d8710:
	push {lr}	@ 000d8710 00b5
.org 0xd8712
	ldr r2, [pc, #16]	@ 000d8712 044a
.org 0xd8714
	ldrb r1, [r0, #16]	@ 000d8714 017c
.org 0xd8716
	lsls r1, r1, #2	@ 000d8716 8900
.org 0xd8718
	adds r1, r1, r2	@ 000d8718 8918
.org 0xd871a
	ldr r1, [r1, #0]	@ 000d871a 0968
.org 0xd871c
	bl 0x128f80	@ 000d871c 50f030fc
.org 0xd8720
	pop {r0}	@ 000d8720 01bc
.org 0xd8722
	bx r0	@ 000d8722 0047
