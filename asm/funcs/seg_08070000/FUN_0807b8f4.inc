@ FUN_0807b8f4  entry 0x0807b8f4  size 20
.thumb
.org 0x7b8f4
FUN_0807b8f4:
	push {lr}	@ 0007b8f4 00b5
.org 0x7b8f6
	ldr r2, [pc, #16]	@ 0007b8f6 044a
.org 0x7b8f8
	ldrb r1, [r0, #14]	@ 0007b8f8 817b
.org 0x7b8fa
	lsls r1, r1, #2	@ 0007b8fa 8900
.org 0x7b8fc
	adds r1, r1, r2	@ 0007b8fc 8918
.org 0x7b8fe
	ldr r1, [r1, #0]	@ 0007b8fe 0968
.org 0x7b900
	bl 0x128f80	@ 0007b900 adf03efb
.org 0x7b904
	pop {r0}	@ 0007b904 01bc
.org 0x7b906
	bx r0	@ 0007b906 0047
