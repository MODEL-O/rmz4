@ FUN_0807b6c8  entry 0x0807b6c8  size 20
.thumb
.org 0x7b6c8
FUN_0807b6c8:
	push {lr}	@ 0007b6c8 00b5
.org 0x7b6ca
	ldr r2, [pc, #16]	@ 0007b6ca 044a
.org 0x7b6cc
	ldrb r1, [r0, #14]	@ 0007b6cc 817b
.org 0x7b6ce
	lsls r1, r1, #2	@ 0007b6ce 8900
.org 0x7b6d0
	adds r1, r1, r2	@ 0007b6d0 8918
.org 0x7b6d2
	ldr r1, [r1, #0]	@ 0007b6d2 0968
.org 0x7b6d4
	bl 0x128f80	@ 0007b6d4 adf054fc
.org 0x7b6d8
	pop {r0}	@ 0007b6d8 01bc
.org 0x7b6da
	bx r0	@ 0007b6da 0047
