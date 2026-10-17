@ FUN_08033104  entry 0x08033104  size 50
.thumb
.org 0x33104
FUN_08033104:
	push {r4, lr}	@ 00033104 10b5
.org 0x33106
	adds r3, r0, #0	@ 00033106 031c
.org 0x33108
	adds r4, r3, #0	@ 00033108 1c1c
.org 0x3310a
	adds r4, #180	@ 0003310a b434
.org 0x3310c
	ldr r2, [r4, #84]	@ 0003310c 626d
.org 0x3310e
	cmp r2, #0	@ 0003310e 002a
.org 0x33110
	beq.n 0x3311a	@ 00033110 03d0
.org 0x33112
	movs r1, #0	@ 00033112 0021
.org 0x33114
	movs r0, #1	@ 00033114 0120
.org 0x33116
	strb r0, [r2, #17]	@ 00033116 5074
.org 0x33118
	str r1, [r4, #84]	@ 00033118 6165
.org 0x3311a
	movs r1, #128	@ 0003311a 8021
.org 0x3311c
	lsls r1, r1, #1	@ 0003311c 4900
.org 0x3311e
	adds r0, r3, r1	@ 0003311e 5818
.org 0x33120
	movs r2, #0	@ 00033120 0022
.org 0x33122
	strb r2, [r0, #0]	@ 00033122 0270
.org 0x33124
	ldr r1, [pc, #16]	@ 00033124 0449
.org 0x33126
	movs r0, #1	@ 00033126 0120
.org 0x33128
	strb r0, [r1, #0]	@ 00033128 0870
.org 0x3312a
	ldrb r0, [r3, #15]	@ 0003312a d87b
.org 0x3312c
	strb r0, [r3, #14]	@ 0003312c 9873
.org 0x3312e
	strb r2, [r3, #15]	@ 0003312e da73
.org 0x33130
	pop {r4}	@ 00033130 10bc
.org 0x33132
	pop {r0}	@ 00033132 01bc
.org 0x33134
	bx r0	@ 00033134 0047
