@ FUN_080b56a8  entry 0x080b56a8  size 24
.thumb
.org 0xb56a8
FUN_080b56a8:
	push {lr}	@ 000b56a8 00b5
.org 0xb56aa
	adds r1, r0, #0	@ 000b56aa 011c
.org 0xb56ac
	ldrb r0, [r1, #18]	@ 000b56ac 887c
.org 0xb56ae
	cmp r0, #0	@ 000b56ae 0028
.org 0xb56b0
	beq.n 0xb56ba	@ 000b56b0 03d0
.org 0xb56b2
	subs r0, #1	@ 000b56b2 0138
.org 0xb56b4
	strb r0, [r1, #18]	@ 000b56b4 8874
.org 0xb56b6
	movs r0, #0	@ 000b56b6 0020
.org 0xb56b8
	b.n 0xb56bc	@ 000b56b8 00e0
.org 0xb56ba
	movs r0, #1	@ 000b56ba 0120
.org 0xb56bc
	pop {r1}	@ 000b56bc 02bc
.org 0xb56be
	bx r1	@ 000b56be 0847
