@ FUN_080a32e4  entry 0x080a32e4  size 20
.thumb
.org 0xa32e4
FUN_080a32e4:
	push {lr}	@ 000a32e4 00b5
.org 0xa32e6
	ldr r2, [pc, #16]	@ 000a32e6 044a
.org 0xa32e8
	ldrb r1, [r0, #16]	@ 000a32e8 017c
.org 0xa32ea
	lsls r1, r1, #2	@ 000a32ea 8900
.org 0xa32ec
	adds r1, r1, r2	@ 000a32ec 8918
.org 0xa32ee
	ldr r1, [r1, #0]	@ 000a32ee 0968
.org 0xa32f0
	bl 0x128f80	@ 000a32f0 85f046fe
.org 0xa32f4
	pop {r0}	@ 000a32f4 01bc
.org 0xa32f6
	bx r0	@ 000a32f6 0047
