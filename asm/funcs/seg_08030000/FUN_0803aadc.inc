@ FUN_0803aadc  entry 0x0803aadc  size 24
.thumb
.org 0x3aadc
FUN_0803aadc:
	push {lr}	@ 0003aadc 00b5
.org 0x3aade
	adds r0, #230	@ 0003aade e630
.org 0x3aae0
	ldrb r0, [r0, #0]	@ 0003aae0 0078
.org 0x3aae2
	cmp r0, #255	@ 0003aae2 ff28
.org 0x3aae4
	beq.n 0x3aaee	@ 0003aae4 03d0
.org 0x3aae6
	cmp r0, #1	@ 0003aae6 0128
.org 0x3aae8
	bhi.n 0x3aaee	@ 0003aae8 01d8
.org 0x3aaea
	movs r0, #1	@ 0003aaea 0120
.org 0x3aaec
	b.n 0x3aaf0	@ 0003aaec 00e0
.org 0x3aaee
	movs r0, #0	@ 0003aaee 0020
.org 0x3aaf0
	pop {r1}	@ 0003aaf0 02bc
.org 0x3aaf2
	bx r1	@ 0003aaf2 0847
