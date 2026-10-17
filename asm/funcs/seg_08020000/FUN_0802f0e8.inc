@ FUN_0802f0e8  entry 0x0802f0e8  size 140
.thumb
.org 0x2f0e8
FUN_0802f0e8:
	push {r4, lr}	@ 0002f0e8 10b5
.org 0x2f0ea
	mov ip, r0	@ 0002f0ea 8446
.org 0x2f0ec
	movs r2, #63	@ 0002f0ec 3f22
.org 0x2f0ee
	movs r3, #232	@ 0002f0ee e823
.org 0x2f0f0
	lsls r3, r3, #1	@ 0002f0f0 5b00
.org 0x2f0f2
	add r3, ip	@ 0002f0f2 6344
.org 0x2f0f4
	movs r1, #147	@ 0002f0f4 9321
.org 0x2f0f6
	lsls r1, r1, #2	@ 0002f0f6 8900
.org 0x2f0f8
	add r1, ip	@ 0002f0f8 6144
.org 0x2f0fa
	ldrh r0, [r1, #0]	@ 0002f0fa 0888
.org 0x2f0fc
	strh r0, [r1, #2]	@ 0002f0fc 4880
.org 0x2f0fe
	subs r1, #2	@ 0002f0fe 0239
.org 0x2f100
	subs r2, #1	@ 0002f100 013a
.org 0x2f102
	cmp r2, #0	@ 0002f102 002a
.org 0x2f104
	bne.n 0x2f0fa	@ 0002f104 f9d1
.org 0x2f106
	mov r0, ip	@ 0002f106 6046
.org 0x2f108
	adds r0, #180	@ 0002f108 b430
.org 0x2f10a
	ldrb r0, [r0, #19]	@ 0002f10a c07c
.org 0x2f10c
	cmp r0, #3	@ 0002f10c 0328
.org 0x2f10e
	bls.n 0x2f154	@ 0002f10e 21d9
.org 0x2f110
	movs r0, #149	@ 0002f110 9520
.org 0x2f112
	lsls r0, r0, #2	@ 0002f112 8000
.org 0x2f114
	add r0, ip	@ 0002f114 6044
.org 0x2f116
	ldrb r1, [r0, #0]	@ 0002f116 0178
.org 0x2f118
	adds r4, r0, #0	@ 0002f118 041c
.org 0x2f11a
	cmp r1, #0	@ 0002f11a 0029
.org 0x2f11c
	beq.n 0x2f122	@ 0002f11c 01d0
.org 0x2f11e
	strh r2, [r3, #0]	@ 0002f11e 1a80
.org 0x2f120
	b.n 0x2f12c	@ 0002f120 04e0
.org 0x2f122
	ldr r0, [pc, #36]	@ 0002f122 0948
.org 0x2f124
	ldrh r1, [r0, #0]	@ 0002f124 0188
.org 0x2f126
	ldr r0, [pc, #36]	@ 0002f126 0948
.org 0x2f128
	ands r0, r1	@ 0002f128 0840
.org 0x2f12a
	strh r0, [r3, #0]	@ 0002f12a 1880
.org 0x2f12c
	ldr r2, [pc, #32]	@ 0002f12c 084a
.org 0x2f12e
	add r2, ip	@ 0002f12e 6244
.org 0x2f130
	ldrh r1, [r3, #0]	@ 0002f130 1988
.org 0x2f132
	ldrh r0, [r2, #0]	@ 0002f132 1088
.org 0x2f134
	eors r0, r1	@ 0002f134 4840
.org 0x2f136
	ands r0, r1	@ 0002f136 0840
.org 0x2f138
	movs r1, #148	@ 0002f138 9421
.org 0x2f13a
	lsls r1, r1, #2	@ 0002f13a 8900
.org 0x2f13c
	add r1, ip	@ 0002f13c 6144
.org 0x2f13e
	strh r0, [r1, #0]	@ 0002f13e 0880
.org 0x2f140
	ldrh r0, [r3, #0]	@ 0002f140 1888
.org 0x2f142
	strh r0, [r2, #0]	@ 0002f142 1080
.org 0x2f144
	b.n 0x2f178	@ 0002f144 18e0
.org 0x2f146
	.byte 0x00	@ 0002f146 data
.org 0x2f147
	.byte 0x00	@ 0002f147 data
.org 0x2f148
	.byte 0x60,0x07,0x00,0x02	@ 0002f148 data
.org 0x2f14c
	.byte 0xfb,0x0e,0x00,0x00	@ 0002f14c data
.org 0x2f150
	.byte 0x52,0x02,0x00,0x00	@ 0002f150 data
.org 0x2f154
	ldr r0, [pc, #44]	@ 0002f154 0b48
.org 0x2f156
	ldrh r2, [r0, #4]	@ 0002f156 8288
.org 0x2f158
	ldr r0, [pc, #44]	@ 0002f158 0b48
.org 0x2f15a
	ands r0, r2	@ 0002f15a 1040
.org 0x2f15c
	strh r0, [r3, #0]	@ 0002f15c 1880
.org 0x2f15e
	ldr r3, [pc, #44]	@ 0002f15e 0b4b
.org 0x2f160
	add r3, ip	@ 0002f160 6344
.org 0x2f162
	ldrh r0, [r3, #0]	@ 0002f162 1888
.org 0x2f164
	eors r0, r2	@ 0002f164 5040
.org 0x2f166
	ands r0, r2	@ 0002f166 1040
.org 0x2f168
	movs r1, #148	@ 0002f168 9421
.org 0x2f16a
	lsls r1, r1, #2	@ 0002f16a 8900
.org 0x2f16c
	add r1, ip	@ 0002f16c 6144
.org 0x2f16e
	strh r0, [r1, #0]	@ 0002f16e 0880
.org 0x2f170
	strh r2, [r3, #0]	@ 0002f170 1a80
.org 0x2f172
	movs r4, #149	@ 0002f172 9524
