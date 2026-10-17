@ FUN_08047108  entry 0x08047108  size 64
.thumb
.org 0x47108
FUN_08047108:
	push {lr}	@ 00047108 00b5
.org 0x4710a
	adds r2, r0, #0	@ 0004710a 021c
.org 0x4710c
	adds r0, #140	@ 0004710c 8c30
.org 0x4710e
	ldr r0, [r0, #0]	@ 0004710e 0068
.org 0x47110
	movs r1, #128	@ 00047110 8021
.org 0x47112
	lsls r1, r1, #2	@ 00047112 8900
.org 0x47114
	ands r0, r1	@ 00047114 0840
.org 0x47116
	cmp r0, #0	@ 00047116 0028
.org 0x47118
	beq.n 0x47138	@ 00047118 0ed0
.org 0x4711a
	ldr r1, [pc, #24]	@ 0004711a 0649
.org 0x4711c
	ldrb r0, [r2, #9]	@ 0004711c 507a
.org 0x4711e
	lsls r0, r0, #2	@ 0004711e 8000
.org 0x47120
	adds r0, r0, r1	@ 00047120 4018
.org 0x47122
	movs r1, #2	@ 00047122 0221
.org 0x47124
	str r1, [r2, #12]	@ 00047124 d160
.org 0x47126
	ldr r0, [r0, #0]	@ 00047126 0068
.org 0x47128
	ldr r0, [r0, #8]	@ 00047128 8068
.org 0x4712a
	str r0, [r2, #20]	@ 0004712a 5061
.org 0x4712c
	adds r0, r2, #0	@ 0004712c 101c
.org 0x4712e
	bl 0x47150	@ 0004712e 00f00ff8
.org 0x47132
	b.n 0x47148	@ 00047132 09e0
.org 0x47134
	.byte 0xf8,0x39,0x85,0x08	@ 00047134 data
.org 0x47138
	ldr r0, [pc, #16]	@ 00047138 0448
.org 0x4713a
	ldrb r1, [r2, #16]	@ 0004713a 117c
.org 0x4713c
	lsls r1, r1, #2	@ 0004713c 8900
.org 0x4713e
	adds r1, r1, r0	@ 0004713e 0918
.org 0x47140
	ldr r1, [r1, #0]	@ 00047140 0968
.org 0x47142
	adds r0, r2, #0	@ 00047142 101c
.org 0x47144
	bl 0x128f80	@ 00047144 e1f01cff
