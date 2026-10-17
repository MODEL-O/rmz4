@ FUN_080a9774  entry 0x080a9774  size 38
.thumb
.org 0xa9774
FUN_080a9774:
	push {r4, lr}	@ 000a9774 10b5
.org 0xa9776
	adds r4, r0, #0	@ 000a9776 041c
.org 0xa9778
	ldrb r0, [r4, #15]	@ 000a9778 e07b
.org 0xa977a
	cmp r0, #0	@ 000a977a 0028
.org 0xa977c
	bne.n 0xa978e	@ 000a977c 07d1
.org 0xa977e
	movs r1, #147	@ 000a977e 9321
.org 0xa9780
	lsls r1, r1, #8	@ 000a9780 0902
.org 0xa9782
	adds r0, r4, #0	@ 000a9782 201c
.org 0xa9784
	bl 0x1cf00	@ 000a9784 73f7bcfb
.org 0xa9788
	ldrb r0, [r4, #15]	@ 000a9788 e07b
.org 0xa978a
	adds r0, #1	@ 000a978a 0130
.org 0xa978c
	strb r0, [r4, #15]	@ 000a978c e073
.org 0xa978e
	adds r0, r4, #0	@ 000a978e 201c
.org 0xa9790
	bl 0x1cff0	@ 000a9790 73f72efc
.org 0xa9794
	pop {r4}	@ 000a9794 10bc
.org 0xa9796
	pop {r0}	@ 000a9796 01bc
.org 0xa9798
	bx r0	@ 000a9798 0047
