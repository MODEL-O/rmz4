@ FUN_08053670  entry 0x08053670  size 54
.thumb
.org 0x53670
FUN_08053670:
	push {r4, lr}	@ 00053670 10b5
.org 0x53672
	adds r4, r0, #0	@ 00053672 041c
.org 0x53674
	ldrb r0, [r4, #15]	@ 00053674 e07b
.org 0x53676
	cmp r0, #0	@ 00053676 0028
.org 0x53678
	bne.n 0x53688	@ 00053678 06d1
.org 0x5367a
	ldr r1, [pc, #44]	@ 0005367a 0b49
.org 0x5367c
	adds r0, r4, #0	@ 0005367c 201c
.org 0x5367e
	bl 0x1cf00	@ 0005367e c9f73ffc
.org 0x53682
	ldrb r0, [r4, #15]	@ 00053682 e07b
.org 0x53684
	adds r0, #1	@ 00053684 0130
.org 0x53686
	strb r0, [r4, #15]	@ 00053686 e073
.org 0x53688
	adds r0, r4, #0	@ 00053688 201c
.org 0x5368a
	bl 0x1cff0	@ 0005368a c9f7b1fc
.org 0x5368e
	adds r0, r4, #0	@ 0005368e 201c
.org 0x53690
	adds r0, #115	@ 00053690 7330
.org 0x53692
	ldrb r0, [r0, #0]	@ 00053692 0078
.org 0x53694
	cmp r0, #3	@ 00053694 0328
.org 0x53696
	bne.n 0x536a0	@ 00053696 03d1
.org 0x53698
	movs r0, #0	@ 00053698 0020
.org 0x5369a
	strb r0, [r4, #13]	@ 0005369a 6073
.org 0x5369c
	strb r0, [r4, #14]	@ 0005369c a073
.org 0x5369e
	strb r0, [r4, #15]	@ 0005369e e073
.org 0x536a0
	pop {r4}	@ 000536a0 10bc
.org 0x536a2
	pop {r0}	@ 000536a2 01bc
.org 0x536a4
	bx r0	@ 000536a4 0047
