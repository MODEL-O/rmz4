@ FUN_080cdd84  entry 0x080cdd84  size 20
.thumb
.org 0xcdd84
FUN_080cdd84:
	ldr r2, [pc, #16]	@ 000cdd84 044a
.org 0xcdd86
	ldrb r1, [r0, #9]	@ 000cdd86 417a
.org 0xcdd88
	lsls r1, r1, #2	@ 000cdd88 8900
.org 0xcdd8a
	adds r1, r1, r2	@ 000cdd8a 8918
.org 0xcdd8c
	movs r2, #4	@ 000cdd8c 0422
.org 0xcdd8e
	str r2, [r0, #12]	@ 000cdd8e c260
.org 0xcdd90
	ldr r1, [r1, #0]	@ 000cdd90 0968
.org 0xcdd92
	ldr r1, [r1, #16]	@ 000cdd92 0969
.org 0xcdd94
	str r1, [r0, #20]	@ 000cdd94 4161
.org 0xcdd96
	bx lr	@ 000cdd96 7047
