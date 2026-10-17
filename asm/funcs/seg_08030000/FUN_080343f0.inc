@ FUN_080343f0  entry 0x080343f0  size 72
.thumb
.org 0x343f0
FUN_080343f0:
	push {r4, lr}	@ 000343f0 10b5
.org 0x343f2
	adds r4, r0, #0	@ 000343f2 041c
.org 0x343f4
	ldr r1, [pc, #32]	@ 000343f4 0849
.org 0x343f6
	adds r0, r4, r1	@ 000343f6 6018
.org 0x343f8
	ldrb r1, [r0, #0]	@ 000343f8 0178
.org 0x343fa
	cmp r1, #0	@ 000343fa 0029
.org 0x343fc
	beq.n 0x34420	@ 000343fc 10d0
.org 0x343fe
	ldr r0, [pc, #28]	@ 000343fe 0748
.org 0x34400
	adds r2, r4, r0	@ 00034400 2218
.org 0x34402
	movs r1, #0	@ 00034402 0021
.org 0x34404
	movs r0, #1	@ 00034404 0120
.org 0x34406
	strb r0, [r2, #0]	@ 00034406 1070
.org 0x34408
	movs r2, #129	@ 00034408 8122
.org 0x3440a
	lsls r2, r2, #1	@ 0003440a 5200
.org 0x3440c
	adds r0, r4, r2	@ 0003440c a018
.org 0x3440e
	strb r1, [r0, #0]	@ 0003440e 0170
.org 0x34410
	adds r0, r4, #0	@ 00034410 201c
.org 0x34412
	bl 0x34440	@ 00034412 00f015f8
.org 0x34416
	b.n 0x3443a	@ 00034416 10e0
.org 0x34418
	.byte 0x67,0x01,0x00,0x00	@ 00034418 data
.org 0x3441c
	.byte 0x01,0x01,0x00,0x00	@ 0003441c data
.org 0x34420
	movs r2, #128	@ 00034420 8022
.org 0x34422
	lsls r2, r2, #1	@ 00034422 5200
.org 0x34424
	adds r0, r4, r2	@ 00034424 a018
.org 0x34426
	strb r1, [r0, #0]	@ 00034426 0170
.org 0x34428
	adds r0, r4, #0	@ 00034428 201c
.org 0x3442a
	bl 0x2b7d8	@ 0003442a f7f7d5f9
.org 0x3442e
	adds r1, r0, #0	@ 0003442e 011c
.org 0x34430
	lsls r1, r1, #16	@ 00034430 0904
.org 0x34432
	lsrs r1, r1, #16	@ 00034432 090c
.org 0x34434
	adds r0, r4, #0	@ 00034434 201c
.org 0x34436
	bl 0x1cf00	@ 00034436 e8f763fd
