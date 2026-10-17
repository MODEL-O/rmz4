@ FUN_080ea444  entry 0x080ea444  size 28
.thumb
.org 0xea444
FUN_080ea444:
	push {r4, r5, lr}	@ 000ea444 30b5
.org 0xea446
	adds r5, r0, #0	@ 000ea446 051c
.org 0xea448
	ldrb r0, [r5, #14]	@ 000ea448 a87b
.org 0xea44a
	cmp r0, #4	@ 000ea44a 0428
.org 0xea44c
	bls.n 0xea450	@ 000ea44c 00d9
.org 0xea44e
	b.n 0xea63e	@ 000ea44e f6e0
.org 0xea450
	lsls r0, r0, #2	@ 000ea450 8000
.org 0xea452
	ldr r1, [pc, #8]	@ 000ea452 0249
.org 0xea454
	adds r0, r0, r1	@ 000ea454 4018
.org 0xea456
	ldr r0, [r0, #0]	@ 000ea456 0068
.org 0xea458
	mov pc, r0	@ 000ea458 8746
.org 0xea45a
	.byte 0x00	@ 000ea45a data
.org 0xea45b
	.byte 0x00	@ 000ea45b data
.org 0xea45c
	.byte 0x60,0xa4,0x0e,0x08	@ 000ea45c data
