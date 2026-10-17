@ FUN_080b61e4  entry 0x080b61e4  size 122
.thumb
.org 0xb61e4
FUN_080b61e4:
	push {r4, r5, lr}	@ 000b61e4 30b5
.org 0xb61e6
	adds r5, r0, #0	@ 000b61e6 051c
.org 0xb61e8
	movs r4, #0	@ 000b61e8 0024
.org 0xb61ea
	ldr r1, [pc, #116]	@ 000b61ea 1d49
.org 0xb61ec
	ldrb r0, [r5, #9]	@ 000b61ec 687a
.org 0xb61ee
	lsls r0, r0, #2	@ 000b61ee 8000
.org 0xb61f0
	adds r0, r0, r1	@ 000b61f0 4018
.org 0xb61f2
	movs r1, #1	@ 000b61f2 0121
.org 0xb61f4
	str r1, [r5, #12]	@ 000b61f4 e960
.org 0xb61f6
	ldr r0, [r0, #0]	@ 000b61f6 0068
.org 0xb61f8
	ldr r0, [r0, #4]	@ 000b61f8 4068
.org 0xb61fa
	str r0, [r5, #20]	@ 000b61fa 6861
.org 0xb61fc
	strb r4, [r5, #13]	@ 000b61fc 6c73
.org 0xb61fe
	strb r4, [r5, #14]	@ 000b61fe ac73
.org 0xb6200
	strb r4, [r5, #15]	@ 000b6200 ec73
.org 0xb6202
	ldrb r0, [r5, #10]	@ 000b6202 a87a
.org 0xb6204
	orrs r0, r1	@ 000b6204 0843
.org 0xb6206
	movs r1, #2	@ 000b6206 0221
.org 0xb6208
	orrs r0, r1	@ 000b6208 0843
.org 0xb620a
	strb r0, [r5, #10]	@ 000b620a a872
.org 0xb620c
	adds r0, r5, #0	@ 000b620c 281c
.org 0xb620e
	adds r0, #180	@ 000b620e b430
.org 0xb6210
	strb r4, [r0, #0]	@ 000b6210 0470
.org 0xb6212
	adds r0, r5, #0	@ 000b6212 281c
.org 0xb6214
	bl 0x1cc9c	@ 000b6214 66f742fd
.org 0xb6218
	ldrb r1, [r5, #10]	@ 000b6218 a97a
.org 0xb621a
	movs r0, #239	@ 000b621a ef20
.org 0xb621c
	ands r0, r1	@ 000b621c 0840
.org 0xb621e
	strb r0, [r5, #10]	@ 000b621e a872
.org 0xb6220
	adds r0, r5, #0	@ 000b6220 281c
.org 0xb6222
	adds r0, #76	@ 000b6222 4c30
.org 0xb6224
	strb r4, [r0, #0]	@ 000b6224 0470
.org 0xb6226
	adds r2, r5, #0	@ 000b6226 2a1c
.org 0xb6228
	adds r2, #74	@ 000b6228 4a32
.org 0xb622a
	ldrb r1, [r2, #0]	@ 000b622a 1178
.org 0xb622c
	movs r0, #17	@ 000b622c 1120
.org 0xb622e
	negs r0, r0	@ 000b622e 4042
.org 0xb6230
	ands r0, r1	@ 000b6230 0840
.org 0xb6232
	strb r0, [r2, #0]	@ 000b6232 1070
.org 0xb6234
	ldrb r1, [r5, #10]	@ 000b6234 a97a
.org 0xb6236
	movs r0, #4	@ 000b6236 0420
.org 0xb6238
	orrs r0, r1	@ 000b6238 0843
.org 0xb623a
	strb r0, [r5, #10]	@ 000b623a a872
.org 0xb623c
	adds r4, r5, #0	@ 000b623c 2c1c
.org 0xb623e
	adds r4, #116	@ 000b623e 7434
.org 0xb6240
	ldr r1, [pc, #32]	@ 000b6240 0849
.org 0xb6242
	adds r2, #10	@ 000b6242 0a32
.org 0xb6244
	adds r0, r4, #0	@ 000b6244 201c
.org 0xb6246
	movs r3, #32	@ 000b6246 2023
.org 0xb6248
	bl 0x5760	@ 000b6248 4ff78afa
.org 0xb624c
	str r5, [r4, #44]	@ 000b624c e562
.org 0xb624e
	ldr r0, [pc, #24]	@ 000b624e 0648
.org 0xb6250
	str r0, [r4, #36]	@ 000b6250 6062
.org 0xb6252
	adds r0, r5, #0	@ 000b6252 281c
.org 0xb6254
	bl 0xb626c	@ 000b6254 00f00af8
.org 0xb6258
	pop {r4, r5}	@ 000b6258 30bc
.org 0xb625a
	pop {r0}	@ 000b625a 01bc
.org 0xb625c
	bx r0	@ 000b625c 0047
