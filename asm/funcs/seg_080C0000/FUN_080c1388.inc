@ FUN_080c1388  entry 0x080c1388  size 38
.thumb
.org 0xc1388
FUN_080c1388:
	push {lr}	@ 000c1388 00b5
.org 0xc138a
	adds r2, r0, #0	@ 000c138a 021c
.org 0xc138c
	ldrb r1, [r2, #15]	@ 000c138c d17b
.org 0xc138e
	cmp r1, #0	@ 000c138e 0029
.org 0xc1390
	bne.n 0xc13aa	@ 000c1390 0bd1
.org 0xc1392
	adds r0, #140	@ 000c1392 8c30
.org 0xc1394
	str r1, [r0, #0]	@ 000c1394 0160
.org 0xc1396
	adds r0, #4	@ 000c1396 0430
.org 0xc1398
	str r1, [r0, #0]	@ 000c1398 0160
.org 0xc139a
	adds r0, #4	@ 000c139a 0430
.org 0xc139c
	strb r1, [r0, #0]	@ 000c139c 0170
.org 0xc139e
	ldrb r1, [r2, #10]	@ 000c139e 917a
.org 0xc13a0
	movs r0, #251	@ 000c13a0 fb20
.org 0xc13a2
	ands r0, r1	@ 000c13a2 0840
.org 0xc13a4
	movs r1, #254	@ 000c13a4 fe21
.org 0xc13a6
	ands r0, r1	@ 000c13a6 0840
.org 0xc13a8
	strb r0, [r2, #10]	@ 000c13a8 9072
.org 0xc13aa
	pop {r0}	@ 000c13aa 01bc
.org 0xc13ac
	bx r0	@ 000c13ac 0047
