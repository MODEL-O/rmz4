@ FUN_08104174  entry 0x08104174  size 20
.thumb
.org 0x104174
FUN_08104174:
	push {lr}	@ 00104174 00b5
.org 0x104176
	ldr r2, [pc, #16]	@ 00104176 044a
.org 0x104178
	ldrb r1, [r0, #16]	@ 00104178 017c
.org 0x10417a
	lsls r1, r1, #2	@ 0010417a 8900
.org 0x10417c
	adds r1, r1, r2	@ 0010417c 8918
.org 0x10417e
	ldr r1, [r1, #0]	@ 0010417e 0968
.org 0x104180
	bl 0x128f80	@ 00104180 24f0fefe
.org 0x104184
	pop {r0}	@ 00104184 01bc
.org 0x104186
	bx r0	@ 00104186 0047
