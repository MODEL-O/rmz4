@ FUN_080bc884  entry 0x080bc884  size 62
.thumb
.org 0xbc884
FUN_080bc884:
	push {r4, lr}	@ 000bc884 10b5
.org 0xbc886
	adds r4, r0, #0	@ 000bc886 041c
.org 0xbc888
	adds r0, #180	@ 000bc888 b430
.org 0xbc88a
	ldrb r0, [r0, #0]	@ 000bc88a 0078
.org 0xbc88c
	cmp r0, #0	@ 000bc88c 0028
.org 0xbc88e
	bne.n 0xbc89e	@ 000bc88e 06d1
.org 0xbc890
	adds r0, r4, #0	@ 000bc890 201c
.org 0xbc892
	bl 0xbc984	@ 000bc892 00f077f8
.org 0xbc896
	adds r0, r4, #0	@ 000bc896 201c
.org 0xbc898
	bl 0x1cff0	@ 000bc898 60f7aafb
.org 0xbc89c
	b.n 0xbc8bc	@ 000bc89c 0ee0
.org 0xbc89e
	adds r0, r4, #0	@ 000bc89e 201c
.org 0xbc8a0
	adds r0, #140	@ 000bc8a0 8c30
.org 0xbc8a2
	movs r1, #0	@ 000bc8a2 0021
.org 0xbc8a4
	str r1, [r0, #0]	@ 000bc8a4 0160
.org 0xbc8a6
	adds r0, #4	@ 000bc8a6 0430
.org 0xbc8a8
	str r1, [r0, #0]	@ 000bc8a8 0160
.org 0xbc8aa
	adds r0, #4	@ 000bc8aa 0430
.org 0xbc8ac
	strb r1, [r0, #0]	@ 000bc8ac 0170
.org 0xbc8ae
	ldrb r1, [r4, #10]	@ 000bc8ae a17a
.org 0xbc8b0
	movs r0, #251	@ 000bc8b0 fb20
.org 0xbc8b2
	ands r0, r1	@ 000bc8b2 0840
.org 0xbc8b4
	strb r0, [r4, #10]	@ 000bc8b4 a072
.org 0xbc8b6
	adds r0, r4, #0	@ 000bc8b6 201c
.org 0xbc8b8
	bl 0xbca38	@ 000bc8b8 00f0bef8
.org 0xbc8bc
	pop {r4}	@ 000bc8bc 10bc
.org 0xbc8be
	pop {r0}	@ 000bc8be 01bc
.org 0xbc8c0
	bx r0	@ 000bc8c0 0047
