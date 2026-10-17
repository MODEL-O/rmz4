@ FUN_0810c13c  entry 0x0810c13c  size 50
.thumb
.org 0x10c13c
FUN_0810c13c:
	push {r4, lr}	@ 0010c13c 10b5
.org 0x10c13e
	adds r4, r0, #0	@ 0010c13e 041c
.org 0x10c140
	ldr r1, [pc, #44]	@ 0010c140 0b49
.org 0x10c142
	ldrb r0, [r4, #16]	@ 0010c142 207c
.org 0x10c144
	lsls r0, r0, #2	@ 0010c144 8000
.org 0x10c146
	adds r0, r0, r1	@ 0010c146 4018
.org 0x10c148
	ldr r1, [r0, #0]	@ 0010c148 0168
.org 0x10c14a
	adds r0, r4, #0	@ 0010c14a 201c
.org 0x10c14c
	bl 0x128f80	@ 0010c14c 1cf018ff
.org 0x10c150
	ldr r1, [pc, #32]	@ 0010c150 0849
.org 0x10c152
	ldrb r0, [r4, #9]	@ 0010c152 607a
.org 0x10c154
	lsls r0, r0, #2	@ 0010c154 8000
.org 0x10c156
	adds r0, r0, r1	@ 0010c156 4018
.org 0x10c158
	movs r1, #1	@ 0010c158 0121
.org 0x10c15a
	str r1, [r4, #12]	@ 0010c15a e160
.org 0x10c15c
	ldr r0, [r0, #0]	@ 0010c15c 0068
.org 0x10c15e
	ldr r0, [r0, #4]	@ 0010c15e 4068
.org 0x10c160
	str r0, [r4, #20]	@ 0010c160 6061
.org 0x10c162
	adds r0, r4, #0	@ 0010c162 201c
.org 0x10c164
	bl 0x10c178	@ 0010c164 00f008f8
.org 0x10c168
	pop {r4}	@ 0010c168 10bc
.org 0x10c16a
	pop {r0}	@ 0010c16a 01bc
.org 0x10c16c
	bx r0	@ 0010c16c 0047
