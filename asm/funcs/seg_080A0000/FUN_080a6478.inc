@ FUN_080a6478  entry 0x080a6478  size 40
.thumb
.org 0xa6478
FUN_080a6478:
	push {r4, lr}	@ 000a6478 10b5
.org 0xa647a
	adds r4, r0, #0	@ 000a647a 041c
.org 0xa647c
	ldrb r0, [r4, #14]	@ 000a647c a07b
.org 0xa647e
	cmp r0, #0	@ 000a647e 0028
.org 0xa6480
	bne.n 0xa6486	@ 000a6480 01d1
.org 0xa6482
	adds r0, #1	@ 000a6482 0130
.org 0xa6484
	strb r0, [r4, #14]	@ 000a6484 a073
.org 0xa6486
	adds r0, r4, #0	@ 000a6486 201c
.org 0xa6488
	bl 0xa669c	@ 000a6488 00f008f9
.org 0xa648c
	lsls r0, r0, #24	@ 000a648c 0006
.org 0xa648e
	cmp r0, #0	@ 000a648e 0028
.org 0xa6490
	beq.n 0xa649a	@ 000a6490 03d0
.org 0xa6492
	movs r1, #0	@ 000a6492 0021
.org 0xa6494
	movs r0, #1	@ 000a6494 0120
.org 0xa6496
	strb r0, [r4, #13]	@ 000a6496 6073
.org 0xa6498
	strb r1, [r4, #14]	@ 000a6498 a173
.org 0xa649a
	pop {r4}	@ 000a649a 10bc
.org 0xa649c
	pop {r0}	@ 000a649c 01bc
.org 0xa649e
	bx r0	@ 000a649e 0047
