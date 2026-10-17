@ FUN_0807869c  entry 0x0807869c  size 20
.thumb
.org 0x7869c
FUN_0807869c:
	push {lr}	@ 0007869c 00b5
.org 0x7869e
	ldr r2, [pc, #16]	@ 0007869e 044a
.org 0x786a0
	ldrb r1, [r0, #14]	@ 000786a0 817b
.org 0x786a2
	lsls r1, r1, #2	@ 000786a2 8900
.org 0x786a4
	adds r1, r1, r2	@ 000786a4 8918
.org 0x786a6
	ldr r1, [r1, #0]	@ 000786a6 0968
.org 0x786a8
	bl 0x128f80	@ 000786a8 b0f06afc
.org 0x786ac
	pop {r0}	@ 000786ac 01bc
.org 0x786ae
	bx r0	@ 000786ae 0047
