@ FUN_08040118  entry 0x08040118  size 50
.thumb
.org 0x40118
FUN_08040118:
	push {r4, lr}	@ 00040118 10b5
.org 0x4011a
	adds r4, r0, #0	@ 0004011a 041c
.org 0x4011c
	ldr r1, [pc, #44]	@ 0004011c 0b49
.org 0x4011e
	ldrb r0, [r4, #9]	@ 0004011e 607a
.org 0x40120
	lsls r0, r0, #2	@ 00040120 8000
.org 0x40122
	adds r0, r0, r1	@ 00040122 4018
.org 0x40124
	movs r1, #1	@ 00040124 0121
.org 0x40126
	str r1, [r4, #12]	@ 00040126 e160
.org 0x40128
	ldr r0, [r0, #0]	@ 00040128 0068
.org 0x4012a
	ldr r0, [r0, #4]	@ 0004012a 4068
.org 0x4012c
	str r0, [r4, #20]	@ 0004012c 6061
.org 0x4012e
	ldr r1, [pc, #32]	@ 0004012e 0849
.org 0x40130
	ldrb r0, [r4, #16]	@ 00040130 207c
.org 0x40132
	lsls r0, r0, #2	@ 00040132 8000
.org 0x40134
	adds r0, r0, r1	@ 00040134 4018
.org 0x40136
	ldr r1, [r0, #0]	@ 00040136 0168
.org 0x40138
	adds r0, r4, #0	@ 00040138 201c
.org 0x4013a
	bl 0x128f80	@ 0004013a e8f021ff
.org 0x4013e
	adds r0, r4, #0	@ 0004013e 201c
.org 0x40140
	bl 0x40154	@ 00040140 00f008f8
.org 0x40144
	pop {r4}	@ 00040144 10bc
.org 0x40146
	pop {r0}	@ 00040146 01bc
.org 0x40148
	bx r0	@ 00040148 0047
