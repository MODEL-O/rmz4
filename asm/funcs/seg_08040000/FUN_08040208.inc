@ FUN_08040208  entry 0x08040208  size 78
.thumb
.org 0x40208
FUN_08040208:
	push {r4, lr}	@ 00040208 10b5
.org 0x4020a
	adds r4, r0, #0	@ 0004020a 041c
.org 0x4020c
	ldr r1, [pc, #72]	@ 0004020c 1249
.org 0x4020e
	ldrb r0, [r4, #9]	@ 0004020e 607a
.org 0x40210
	lsls r0, r0, #2	@ 00040210 8000
.org 0x40212
	adds r0, r0, r1	@ 00040212 4018
.org 0x40214
	movs r1, #1	@ 00040214 0121
.org 0x40216
	str r1, [r4, #12]	@ 00040216 e160
.org 0x40218
	ldr r0, [r0, #0]	@ 00040218 0068
.org 0x4021a
	ldr r0, [r0, #4]	@ 0004021a 4068
.org 0x4021c
	str r0, [r4, #20]	@ 0004021c 6061
.org 0x4021e
	adds r0, r4, #0	@ 0004021e 201c
.org 0x40220
	bl 0x1cc9c	@ 00040220 dcf73cfd
.org 0x40224
	adds r0, r4, #0	@ 00040224 201c
.org 0x40226
	bl 0x1ceec	@ 00040226 dcf761fe
.org 0x4022a
	ldrb r1, [r4, #10]	@ 0004022a a17a
.org 0x4022c
	movs r0, #1	@ 0004022c 0120
.org 0x4022e
	orrs r0, r1	@ 0004022e 0843
.org 0x40230
	movs r1, #2	@ 00040230 0221
.org 0x40232
	orrs r0, r1	@ 00040232 0843
.org 0x40234
	strb r0, [r4, #10]	@ 00040234 a072
.org 0x40236
	adds r0, r4, #0	@ 00040236 201c
.org 0x40238
	bl 0x1ceec	@ 00040238 dcf758fe
.org 0x4023c
	ldr r1, [pc, #28]	@ 0004023c 0749
.org 0x4023e
	adds r0, r4, #0	@ 0004023e 201c
.org 0x40240
	bl 0x1cf00	@ 00040240 dcf75efe
.org 0x40244
	adds r0, r4, #0	@ 00040244 201c
.org 0x40246
	bl 0x1cff0	@ 00040246 dcf7d3fe
.org 0x4024a
	adds r0, r4, #0	@ 0004024a 201c
.org 0x4024c
	bl 0x40154	@ 0004024c fff782ff
.org 0x40250
	pop {r4}	@ 00040250 10bc
.org 0x40252
	pop {r0}	@ 00040252 01bc
.org 0x40254
	bx r0	@ 00040254 0047
