@ FUN_080bd418  entry 0x080bd418  size 28
.thumb
.org 0xbd418
FUN_080bd418:
	push {lr}	@ 000bd418 00b5
.org 0xbd41a
	adds r1, r0, #0	@ 000bd41a 011c
.org 0xbd41c
	ldr r0, [pc, #16]	@ 000bd41c 0448
.org 0xbd41e
	ldr r0, [r0, #0]	@ 000bd41e 0068
.org 0xbd420
	adds r1, #84	@ 000bd420 5431
.org 0xbd422
	bl 0x1cb30	@ 000bd422 5ff785fb
.org 0xbd426
	cmp r0, #0	@ 000bd426 0028
.org 0xbd428
	bne.n 0xbd434	@ 000bd428 04d1
.org 0xbd42a
	movs r0, #0	@ 000bd42a 0020
.org 0xbd42c
	b.n 0xbd436	@ 000bd42c 03e0
.org 0xbd42e
	.byte 0x00	@ 000bd42e data
.org 0xbd42f
	.byte 0x00	@ 000bd42f data
.org 0xbd430
	.byte 0x88,0xed,0x02,0x02	@ 000bd430 data
