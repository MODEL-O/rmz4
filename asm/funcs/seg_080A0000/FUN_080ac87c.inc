@ FUN_080ac87c  entry 0x080ac87c  size 20
.thumb
.org 0xac87c
FUN_080ac87c:
	push {lr}	@ 000ac87c 00b5
.org 0xac87e
	ldr r2, [pc, #16]	@ 000ac87e 044a
.org 0xac880
	ldrb r1, [r0, #14]	@ 000ac880 817b
.org 0xac882
	lsls r1, r1, #2	@ 000ac882 8900
.org 0xac884
	adds r1, r1, r2	@ 000ac884 8918
.org 0xac886
	ldr r1, [r1, #0]	@ 000ac886 0968
.org 0xac888
	bl 0x128f80	@ 000ac888 7cf07afb
.org 0xac88c
	pop {r0}	@ 000ac88c 01bc
.org 0xac88e
	bx r0	@ 000ac88e 0047
