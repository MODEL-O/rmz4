@ FUN_080a51fc  entry 0x080a51fc  size 72
.thumb
.org 0xa51fc
FUN_080a51fc:
	push {r4, lr}	@ 000a51fc 10b5
.org 0xa51fe
	adds r4, r0, #0	@ 000a51fe 041c
.org 0xa5200
	movs r0, #63	@ 000a5200 3f20
.org 0xa5202
	bl 0x2b10	@ 000a5202 5df785fc
.org 0xa5206
	adds r0, r4, #0	@ 000a5206 201c
.org 0xa5208
	bl 0xa5378	@ 000a5208 00f0b6f8
.org 0xa520c
	ldrb r1, [r4, #10]	@ 000a520c a17a
.org 0xa520e
	movs r0, #254	@ 000a520e fe20
.org 0xa5210
	ands r0, r1	@ 000a5210 0840
.org 0xa5212
	movs r1, #0	@ 000a5212 0021
.org 0xa5214
	strb r0, [r4, #10]	@ 000a5214 a072
.org 0xa5216
	adds r0, r4, #0	@ 000a5216 201c
.org 0xa5218
	adds r0, #140	@ 000a5218 8c30
.org 0xa521a
	str r1, [r0, #0]	@ 000a521a 0160
.org 0xa521c
	adds r0, #4	@ 000a521c 0430
.org 0xa521e
	str r1, [r0, #0]	@ 000a521e 0160
.org 0xa5220
	adds r0, #4	@ 000a5220 0430
.org 0xa5222
	strb r1, [r0, #0]	@ 000a5222 0170
.org 0xa5224
	ldrb r1, [r4, #10]	@ 000a5224 a17a
.org 0xa5226
	movs r0, #251	@ 000a5226 fb20
.org 0xa5228
	ands r0, r1	@ 000a5228 0840
.org 0xa522a
	strb r0, [r4, #10]	@ 000a522a a072
.org 0xa522c
	ldr r1, [pc, #20]	@ 000a522c 0549
.org 0xa522e
	ldrb r0, [r4, #9]	@ 000a522e 607a
.org 0xa5230
	lsls r0, r0, #2	@ 000a5230 8000
.org 0xa5232
	adds r0, r0, r1	@ 000a5232 4018
.org 0xa5234
	movs r1, #4	@ 000a5234 0421
.org 0xa5236
	str r1, [r4, #12]	@ 000a5236 e160
.org 0xa5238
	ldr r0, [r0, #0]	@ 000a5238 0068
.org 0xa523a
	ldr r0, [r0, #16]	@ 000a523a 0069
.org 0xa523c
	str r0, [r4, #20]	@ 000a523c 6061
.org 0xa523e
	pop {r4}	@ 000a523e 10bc
.org 0xa5240
	pop {r0}	@ 000a5240 01bc
.org 0xa5242
	bx r0	@ 000a5242 0047
