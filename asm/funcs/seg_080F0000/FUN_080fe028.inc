@ FUN_080fe028  entry 0x080fe028  size 20
.thumb
.org 0xfe028
FUN_080fe028:
	push {lr}	@ 000fe028 00b5
.org 0xfe02a
	ldr r2, [pc, #16]	@ 000fe02a 044a
.org 0xfe02c
	ldrb r1, [r0, #16]	@ 000fe02c 017c
.org 0xfe02e
	lsls r1, r1, #2	@ 000fe02e 8900
.org 0xfe030
	adds r1, r1, r2	@ 000fe030 8918
.org 0xfe032
	ldr r1, [r1, #0]	@ 000fe032 0968
.org 0xfe034
	bl 0x128f80	@ 000fe034 2af0a4ff
.org 0xfe038
	pop {r0}	@ 000fe038 01bc
.org 0xfe03a
	bx r0	@ 000fe03a 0047
