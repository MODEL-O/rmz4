@ FUN_0800931c  entry 0x0800931c  size 36
.thumb
.org 0x931c
FUN_0800931c:
	push {lr}	@ 0000931c 00b5
.org 0x931e
	adds r2, r0, #0	@ 0000931e 021c
.org 0x9320
	ldr r0, [pc, #24]	@ 00009320 0648
.org 0x9322
	cmp r2, r0	@ 00009322 8242
.org 0x9324
	ble.n 0x9348	@ 00009324 10dd
.org 0x9326
	ldr r0, [pc, #24]	@ 00009326 0648
.org 0x9328
	cmp r2, r0	@ 00009328 8242
.org 0x932a
	bgt.n 0x9336	@ 0000932a 04dc
.org 0x932c
	ldr r3, [pc, #20]	@ 0000932c 054b
.org 0x932e
	adds r0, r2, r3	@ 0000932e d018
.org 0x9330
	lsls r0, r0, #2	@ 00009330 8000
.org 0x9332
	cmp r1, r0	@ 00009332 8142
.org 0x9334
	bge.n 0x9348	@ 00009334 08da
.org 0x9336
	mvns r0, r1	@ 00009336 c843
.org 0x9338
	b.n 0x934a	@ 00009338 07e0
.org 0x933a
	.byte 0x00	@ 0000933a data
.org 0x933b
	.byte 0x00	@ 0000933b data
.org 0x933c
	.byte 0xff,0x03,0x00,0x00	@ 0000933c data
