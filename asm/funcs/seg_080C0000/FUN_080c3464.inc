@ FUN_080c3464  entry 0x080c3464  size 30
.thumb
.org 0xc3464
FUN_080c3464:
	push {lr}	@ 000c3464 00b5
.org 0xc3466
	adds r2, r0, #0	@ 000c3466 021c
.org 0xc3468
	ldr r1, [r2, #40]	@ 000c3468 916a
.org 0xc346a
	ldrb r0, [r1, #12]	@ 000c346a 087b
.org 0xc346c
	cmp r0, #1	@ 000c346c 0128
.org 0xc346e
	bhi.n 0xc3478	@ 000c346e 03d8
.org 0xc3470
	adds r1, #180	@ 000c3470 b431
.org 0xc3472
	ldrb r0, [r1, #0]	@ 000c3472 0878
.org 0xc3474
	subs r0, #1	@ 000c3474 0138
.org 0xc3476
	strb r0, [r1, #0]	@ 000c3476 0870
.org 0xc3478
	adds r0, r2, #0	@ 000c3478 101c
.org 0xc347a
	bl 0xbd3f8	@ 000c347a f9f7bdff
.org 0xc347e
	pop {r0}	@ 000c347e 01bc
.org 0xc3480
	bx r0	@ 000c3480 0047
