@ FUN_0811f268  entry 0x0811f268  size 64
.thumb
.org 0x11f268
FUN_0811f268:
	push {r4, r5, lr}	@ 0011f268 30b5
.org 0x11f26a
	adds r5, r0, #0	@ 0011f26a 051c
.org 0x11f26c
	ldr r0, [pc, #56]	@ 0011f26c 0e48
.org 0x11f26e
	adds r2, r5, r0	@ 0011f26e 2a18
.org 0x11f270
	ldr r0, [pc, #56]	@ 0011f270 0e48
.org 0x11f272
	ldrh r1, [r0, #0]	@ 0011f272 0188
.org 0x11f274
	ldr r0, [pc, #56]	@ 0011f274 0e48
.org 0x11f276
	ands r0, r1	@ 0011f276 0840
.org 0x11f278
	lsls r0, r0, #8	@ 0011f278 0002
.org 0x11f27a
	movs r1, #240	@ 0011f27a f021
.org 0x11f27c
	lsls r1, r1, #7	@ 0011f27c c901
.org 0x11f27e
	adds r0, r0, r1	@ 0011f27e 4018
.org 0x11f280
	str r0, [r2, #0]	@ 0011f280 1060
.org 0x11f282
	ldr r0, [pc, #48]	@ 0011f282 0c48
.org 0x11f284
	adds r5, r5, r0	@ 0011f284 2d18
.org 0x11f286
	adds r0, r5, #0	@ 0011f286 281c
.org 0x11f288
	bl 0x3470	@ 0011f288 e4f6f2f8
.org 0x11f28c
	ldr r4, [pc, #40]	@ 0011f28c 0a4c
.org 0x11f28e
	ldr r0, [r4, #0]	@ 0011f28e 2068
.org 0x11f290
	bl 0x1c79c	@ 0011f290 fdf684fa
.org 0x11f294
	ldr r0, [r4, #0]	@ 0011f294 2068
.org 0x11f296
	adds r1, r5, #0	@ 0011f296 291c
.org 0x11f298
	bl 0x1c924	@ 0011f298 fdf644fb
.org 0x11f29c
	adds r0, r5, #0	@ 0011f29c 281c
.org 0x11f29e
	bl 0x3420	@ 0011f29e e4f6bff8
.org 0x11f2a2
	pop {r4, r5}	@ 0011f2a2 30bc
.org 0x11f2a4
	pop {r0}	@ 0011f2a4 01bc
.org 0x11f2a6
	bx r0	@ 0011f2a6 0047
