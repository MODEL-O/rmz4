@ FUN_080da104  entry 0x080da104  size 20
.thumb
.org 0xda104
FUN_080da104:
	push {lr}	@ 000da104 00b5
.org 0xda106
	ldr r2, [pc, #16]	@ 000da106 044a
.org 0xda108
	ldrb r1, [r0, #17]	@ 000da108 417c
.org 0xda10a
	lsls r1, r1, #2	@ 000da10a 8900
.org 0xda10c
	adds r1, r1, r2	@ 000da10c 8918
.org 0xda10e
	ldr r1, [r1, #0]	@ 000da10e 0968
.org 0xda110
	bl 0x128f80	@ 000da110 4ef036ff
.org 0xda114
	pop {r0}	@ 000da114 01bc
.org 0xda116
	bx r0	@ 000da116 0047
