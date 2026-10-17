@ FUN_0801b0ec  entry 0x0801b0ec  size 118
.thumb
.org 0x1b0ec
FUN_0801b0ec:
	push {r4, lr}	@ 0001b0ec 10b5
.org 0x1b0ee
	ldr r0, [pc, #116]	@ 0001b0ee 1d48
.org 0x1b0f0
	ldr r2, [pc, #116]	@ 0001b0f0 1d4a
.org 0x1b0f2
	adds r1, r0, r2	@ 0001b0f2 8118
.org 0x1b0f4
	movs r3, #0	@ 0001b0f4 0023
.org 0x1b0f6
	strb r3, [r1, #0]	@ 0001b0f6 0b70
.org 0x1b0f8
	subs r2, #4	@ 0001b0f8 043a
.org 0x1b0fa
	adds r1, r0, r2	@ 0001b0fa 8118
.org 0x1b0fc
	strb r3, [r1, #0]	@ 0001b0fc 0b70
.org 0x1b0fe
	adds r2, #20	@ 0001b0fe 1432
.org 0x1b100
	adds r1, r0, r2	@ 0001b100 8118
.org 0x1b102
	str r3, [r1, #0]	@ 0001b102 0b60
.org 0x1b104
	ldr r1, [pc, #100]	@ 0001b104 1949
.org 0x1b106
	adds r2, r0, r1	@ 0001b106 4218
.org 0x1b108
	movs r1, #235	@ 0001b108 eb21
.org 0x1b10a
	lsls r1, r1, #12	@ 0001b10a 0903
.org 0x1b10c
	str r1, [r2, #0]	@ 0001b10c 1160
.org 0x1b10e
	ldr r1, [pc, #96]	@ 0001b10e 1849
.org 0x1b110
	adds r2, r0, r1	@ 0001b110 4218
.org 0x1b112
	movs r1, #224	@ 0001b112 e021
.org 0x1b114
	lsls r1, r1, #9	@ 0001b114 4902
.org 0x1b116
	str r1, [r2, #0]	@ 0001b116 1160
.org 0x1b118
	ldr r2, [pc, #88]	@ 0001b118 164a
.org 0x1b11a
	adds r1, r0, r2	@ 0001b11a 8118
.org 0x1b11c
	movs r4, #0	@ 0001b11c 0024
.org 0x1b11e
	strh r3, [r1, #0]	@ 0001b11e 0b80
.org 0x1b120
	adds r2, #2	@ 0001b120 0232
.org 0x1b122
	adds r1, r0, r2	@ 0001b122 8118
.org 0x1b124
	strh r3, [r1, #0]	@ 0001b124 0b80
.org 0x1b126
	subs r2, #13	@ 0001b126 0d3a
.org 0x1b128
	adds r1, r0, r2	@ 0001b128 8118
.org 0x1b12a
	strb r4, [r1, #0]	@ 0001b12a 0c70
.org 0x1b12c
	subs r2, #4	@ 0001b12c 043a
.org 0x1b12e
	adds r1, r0, r2	@ 0001b12e 8118
.org 0x1b130
	strb r4, [r1, #0]	@ 0001b130 0c70
.org 0x1b132
	ldr r1, [pc, #68]	@ 0001b132 1149
.org 0x1b134
	adds r2, r0, r1	@ 0001b134 4218
.org 0x1b136
	movs r1, #16	@ 0001b136 1021
.org 0x1b138
	strb r1, [r2, #0]	@ 0001b138 1170
.org 0x1b13a
	ldr r2, [pc, #64]	@ 0001b13a 104a
.org 0x1b13c
	adds r1, r0, r2	@ 0001b13c 8118
.org 0x1b13e
	strb r4, [r1, #0]	@ 0001b13e 0c70
.org 0x1b140
	adds r2, #18	@ 0001b140 1232
.org 0x1b142
	adds r1, r0, r2	@ 0001b142 8118
.org 0x1b144
	strh r3, [r1, #0]	@ 0001b144 0b80
.org 0x1b146
	subs r2, #22	@ 0001b146 163a
.org 0x1b148
	adds r1, r0, r2	@ 0001b148 8118
.org 0x1b14a
	strb r4, [r1, #0]	@ 0001b14a 0c70
.org 0x1b14c
	adds r2, #26	@ 0001b14c 1a32
.org 0x1b14e
	adds r1, r0, r2	@ 0001b14e 8118
.org 0x1b150
	str r3, [r1, #0]	@ 0001b150 0b60
.org 0x1b152
	ldr r1, [pc, #44]	@ 0001b152 0b49
.org 0x1b154
	adds r0, r0, r1	@ 0001b154 4018
.org 0x1b156
	movs r1, #225	@ 0001b156 e121
.org 0x1b158
	lsls r1, r1, #5	@ 0001b158 4901
.org 0x1b15a
	str r1, [r0, #0]	@ 0001b15a 0160
.org 0x1b15c
	pop {r4}	@ 0001b15c 10bc
.org 0x1b15e
	pop {r0}	@ 0001b15e 01bc
.org 0x1b160
	bx r0	@ 0001b160 0047
