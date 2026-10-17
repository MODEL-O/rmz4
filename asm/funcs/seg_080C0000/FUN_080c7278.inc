@ FUN_080c7278  entry 0x080c7278  size 20
.thumb
.org 0xc7278
FUN_080c7278:
	push {lr}	@ 000c7278 00b5
.org 0xc727a
	ldr r2, [pc, #16]	@ 000c727a 044a
.org 0xc727c
	ldrb r1, [r0, #16]	@ 000c727c 017c
.org 0xc727e
	lsls r1, r1, #2	@ 000c727e 8900
.org 0xc7280
	adds r1, r1, r2	@ 000c7280 8918
.org 0xc7282
	ldr r1, [r1, #0]	@ 000c7282 0968
.org 0xc7284
	bl 0x128f80	@ 000c7284 61f07cfe
.org 0xc7288
	pop {r0}	@ 000c7288 01bc
.org 0xc728a
	bx r0	@ 000c728a 0047
