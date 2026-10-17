@ FUN_080fa4f4  entry 0x080fa4f4  size 64
.thumb
.org 0xfa4f4
FUN_080fa4f4:
	push {r4, lr}	@ 000fa4f4 10b5
.org 0xfa4f6
	adds r4, r0, #0	@ 000fa4f6 041c
.org 0xfa4f8
	ldrb r0, [r4, #14]	@ 000fa4f8 a07b
.org 0xfa4fa
	cmp r0, #0	@ 000fa4fa 0028
.org 0xfa4fc
	bne.n 0xfa516	@ 000fa4fc 0bd1
.org 0xfa4fe
	movs r1, #140	@ 000fa4fe 8c21
.org 0xfa500
	lsls r1, r1, #8	@ 000fa500 0902
.org 0xfa502
	adds r0, r4, #0	@ 000fa502 201c
.org 0xfa504
	bl 0x1cf00	@ 000fa504 22f7fcfc
.org 0xfa508
	adds r1, r4, #0	@ 000fa508 211c
.org 0xfa50a
	adds r1, #184	@ 000fa50a b831
.org 0xfa50c
	ldr r0, [r4, #88]	@ 000fa50c a06d
.org 0xfa50e
	str r0, [r1, #0]	@ 000fa50e 0860
.org 0xfa510
	ldrb r0, [r4, #14]	@ 000fa510 a07b
.org 0xfa512
	adds r0, #1	@ 000fa512 0130
.org 0xfa514
	strb r0, [r4, #14]	@ 000fa514 a073
.org 0xfa516
	adds r0, r4, #0	@ 000fa516 201c
.org 0xfa518
	bl 0x1cff0	@ 000fa518 22f76afd
.org 0xfa51c
	adds r0, r4, #0	@ 000fa51c 201c
.org 0xfa51e
	adds r0, #190	@ 000fa51e be30
.org 0xfa520
	ldrb r0, [r0, #0]	@ 000fa520 0078
.org 0xfa522
	cmp r0, #0	@ 000fa522 0028
.org 0xfa524
	beq.n 0xfa52e	@ 000fa524 03d0
.org 0xfa526
	movs r1, #0	@ 000fa526 0021
.org 0xfa528
	movs r0, #1	@ 000fa528 0120
.org 0xfa52a
	strb r0, [r4, #13]	@ 000fa52a 6073
.org 0xfa52c
	strb r1, [r4, #14]	@ 000fa52c a173
.org 0xfa52e
	pop {r4}	@ 000fa52e 10bc
.org 0xfa530
	pop {r0}	@ 000fa530 01bc
.org 0xfa532
	bx r0	@ 000fa532 0047
