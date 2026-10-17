@ FUN_0801435c  entry 0x0801435c  size 52
.thumb
.org 0x1435c
FUN_0801435c:
	push {lr}	@ 0001435c 00b5
.org 0x1435e
	ldr r0, [pc, #32]	@ 0001435e 0848
.org 0x14360
	ldr r1, [pc, #32]	@ 00014360 0849
.org 0x14362
	adds r0, r0, r1	@ 00014362 4018
.org 0x14364
	ldr r0, [r0, #0]	@ 00014364 0068
.org 0x14366
	ldr r1, [r0, #88]	@ 00014366 816d
.org 0x14368
	movs r0, #156	@ 00014368 9c20
.org 0x1436a
	lsls r0, r0, #10	@ 0001436a 8002
.org 0x1436c
	cmp r1, r0	@ 0001436c 8142
.org 0x1436e
	ble.n 0x1438c	@ 0001436e 0ddd
.org 0x14370
	ldr r0, [pc, #20]	@ 00014370 0548
.org 0x14372
	movs r1, #210	@ 00014372 d221
.org 0x14374
	lsls r1, r1, #11	@ 00014374 c902
.org 0x14376
	str r1, [r0, #0]	@ 00014376 0160
.org 0x14378
	movs r1, #160	@ 00014378 a021
.org 0x1437a
	lsls r1, r1, #14	@ 0001437a 8903
.org 0x1437c
	b.n 0x14398	@ 0001437c 0ce0
.org 0x1437e
	.byte 0x00	@ 0001437e data
.org 0x1437f
	.byte 0x00	@ 0001437f data
.org 0x14380
	.byte 0x10,0xf6,0x02,0x02	@ 00014380 data
.org 0x14384
	.byte 0xa8,0x63,0x00,0x00	@ 00014384 data
.org 0x14388
	.byte 0x54,0xea,0x02,0x02	@ 00014388 data
.org 0x1438c
	ldr r0, [pc, #16]	@ 0001438c 0448
.org 0x1438e
	movs r1, #240	@ 0001438e f021
