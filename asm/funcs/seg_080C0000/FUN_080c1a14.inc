@ FUN_080c1a14  entry 0x080c1a14  size 24
.thumb
.org 0xc1a14
FUN_080c1a14:
	push {lr}	@ 000c1a14 00b5
.org 0xc1a16
	adds r2, r0, #0	@ 000c1a16 021c
.org 0xc1a18
	adds r0, #180	@ 000c1a18 b430
.org 0xc1a1a
	ldrb r1, [r0, #0]	@ 000c1a1a 0178
.org 0xc1a1c
	cmp r1, #0	@ 000c1a1c 0029
.org 0xc1a1e
	bne.n 0xc1a28	@ 000c1a1e 03d1
.org 0xc1a20
	movs r0, #3	@ 000c1a20 0320
.org 0xc1a22
	strb r0, [r2, #13]	@ 000c1a22 5073
.org 0xc1a24
	strb r1, [r2, #14]	@ 000c1a24 9173
.org 0xc1a26
	strb r1, [r2, #15]	@ 000c1a26 d173
.org 0xc1a28
	pop {r0}	@ 000c1a28 01bc
.org 0xc1a2a
	bx r0	@ 000c1a2a 0047
