@ FUN_080f60ec  entry 0x080f60ec  size 92
.thumb
.org 0xf60ec
FUN_080f60ec:
	push {r4, lr}	@ 000f60ec 10b5
.org 0xf60ee
	adds r4, r0, #0	@ 000f60ee 041c
.org 0xf60f0
	ldrb r0, [r4, #14]	@ 000f60f0 a07b
.org 0xf60f2
	cmp r0, #0	@ 000f60f2 0028
.org 0xf60f4
	bne.n 0xf6104	@ 000f60f4 06d1
.org 0xf60f6
	ldr r1, [pc, #80]	@ 000f60f6 1449
.org 0xf60f8
	adds r0, r4, #0	@ 000f60f8 201c
.org 0xf60fa
	bl 0x1cf00	@ 000f60fa 26f701ff
.org 0xf60fe
	ldrb r0, [r4, #14]	@ 000f60fe a07b
.org 0xf6100
	adds r0, #1	@ 000f6100 0130
.org 0xf6102
	strb r0, [r4, #14]	@ 000f6102 a073
.org 0xf6104
	ldr r0, [r4, #92]	@ 000f6104 e06d
.org 0xf6106
	subs r0, #32	@ 000f6106 2038
.org 0xf6108
	str r0, [r4, #92]	@ 000f6108 e065
.org 0xf610a
	ldr r1, [pc, #64]	@ 000f610a 1049
.org 0xf610c
	cmp r0, r1	@ 000f610c 8842
.org 0xf610e
	bge.n 0xf6112	@ 000f610e 00da
.org 0xf6110
	str r1, [r4, #92]	@ 000f6110 e165
.org 0xf6112
	ldr r0, [r4, #84]	@ 000f6112 606d
.org 0xf6114
	ldr r1, [r4, #92]	@ 000f6114 e16d
.org 0xf6116
	adds r0, r0, r1	@ 000f6116 4018
.org 0xf6118
	str r0, [r4, #84]	@ 000f6118 6065
.org 0xf611a
	ldr r1, [pc, #52]	@ 000f611a 0d49
.org 0xf611c
	cmp r0, r1	@ 000f611c 8842
.org 0xf611e
	ble.n 0xf6122	@ 000f611e 00dd
.org 0xf6120
	str r1, [r4, #84]	@ 000f6120 6165
.org 0xf6122
	ldr r1, [r4, #84]	@ 000f6122 616d
.org 0xf6124
	ldr r0, [pc, #44]	@ 000f6124 0b48
.org 0xf6126
	cmp r1, r0	@ 000f6126 8142
.org 0xf6128
	bgt.n 0xf6134	@ 000f6128 04dc
.org 0xf612a
	adds r0, #1	@ 000f612a 0130
.org 0xf612c
	str r0, [r4, #84]	@ 000f612c 6065
.org 0xf612e
	movs r0, #0	@ 000f612e 0020
.org 0xf6130
	strb r0, [r4, #13]	@ 000f6130 6073
.org 0xf6132
	strb r0, [r4, #14]	@ 000f6132 a073
.org 0xf6134
	ldr r0, [r4, #84]	@ 000f6134 606d
.org 0xf6136
	ldr r1, [r4, #88]	@ 000f6136 a16d
.org 0xf6138
	bl 0x8534	@ 000f6138 12f7fcf9
.org 0xf613c
	ldr r1, [pc, #24]	@ 000f613c 0649
.org 0xf613e
	adds r0, r0, r1	@ 000f613e 4018
.org 0xf6140
	str r0, [r4, #88]	@ 000f6140 a065
.org 0xf6142
	pop {r4}	@ 000f6142 10bc
.org 0xf6144
	pop {r0}	@ 000f6144 01bc
.org 0xf6146
	bx r0	@ 000f6146 0047
