@ FUN_080534fc  entry 0x080534fc  size 20
.thumb
.org 0x534fc
FUN_080534fc:
	push {lr}	@ 000534fc 00b5
.org 0x534fe
	ldr r2, [pc, #16]	@ 000534fe 044a
.org 0x53500
	ldrb r1, [r0, #14]	@ 00053500 817b
.org 0x53502
	lsls r1, r1, #2	@ 00053502 8900
.org 0x53504
	adds r1, r1, r2	@ 00053504 8918
.org 0x53506
	ldr r1, [r1, #0]	@ 00053506 0968
.org 0x53508
	bl 0x128f80	@ 00053508 d5f03afd
.org 0x5350c
	pop {r0}	@ 0005350c 01bc
.org 0x5350e
	bx r0	@ 0005350e 0047
