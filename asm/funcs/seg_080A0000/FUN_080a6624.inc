@ FUN_080a6624  entry 0x080a6624  size 102
.thumb
.org 0xa6624
FUN_080a6624:
	push {r4, lr}	@ 000a6624 10b5
.org 0xa6626
	adds r4, r0, #0	@ 000a6626 041c
.org 0xa6628
	ldrb r0, [r4, #14]	@ 000a6628 a07b
.org 0xa662a
	cmp r0, #0	@ 000a662a 0028
.org 0xa662c
	bne.n 0xa663c	@ 000a662c 06d1
.org 0xa662e
	ldr r1, [pc, #92]	@ 000a662e 1749
.org 0xa6630
	adds r0, r4, #0	@ 000a6630 201c
.org 0xa6632
	bl 0x1cf00	@ 000a6632 76f765fc
.org 0xa6636
	ldrb r0, [r4, #14]	@ 000a6636 a07b
.org 0xa6638
	adds r0, #1	@ 000a6638 0130
.org 0xa663a
	strb r0, [r4, #14]	@ 000a663a a073
.org 0xa663c
	ldr r0, [r4, #112]	@ 000a663c 206f
.org 0xa663e
	ldr r1, [pc, #80]	@ 000a663e 1449
.org 0xa6640
	ands r0, r1	@ 000a6640 0840
.org 0xa6642
	movs r1, #129	@ 000a6642 8121
.org 0xa6644
	lsls r1, r1, #9	@ 000a6644 4902
.org 0xa6646
	cmp r0, r1	@ 000a6646 8842
.org 0xa6648
	bne.n 0xa6664	@ 000a6648 0cd1
.org 0xa664a
	adds r0, r4, #0	@ 000a664a 201c
.org 0xa664c
	adds r0, #84	@ 000a664c 5430
.org 0xa664e
	movs r1, #0	@ 000a664e 0021
.org 0xa6650
	bl 0xcab5c	@ 000a6650 24f084fa
.org 0xa6654
	ldr r0, [pc, #60]	@ 000a6654 0f48
.org 0xa6656
	bl 0x2b10	@ 000a6656 5cf75bfa
.org 0xa665a
	adds r0, r4, #0	@ 000a665a 201c
.org 0xa665c
	adds r0, #116	@ 000a665c 7430
.org 0xa665e
	ldr r1, [pc, #56]	@ 000a665e 0e49
.org 0xa6660
	bl 0x5784	@ 000a6660 5ff790f8
.org 0xa6664
	adds r0, r4, #0	@ 000a6664 201c
.org 0xa6666
	adds r0, #115	@ 000a6666 7330
.org 0xa6668
	ldrb r0, [r0, #0]	@ 000a6668 0078
.org 0xa666a
	cmp r0, #3	@ 000a666a 0328
.org 0xa666c
	bne.n 0xa6684	@ 000a666c 0ad1
.org 0xa666e
	movs r1, #138	@ 000a666e 8a21
.org 0xa6670
	lsls r1, r1, #8	@ 000a6670 0902
.org 0xa6672
	adds r0, r4, #0	@ 000a6672 201c
.org 0xa6674
	bl 0x1cf00	@ 000a6674 76f744fc
.org 0xa6678
	movs r1, #0	@ 000a6678 0021
.org 0xa667a
	movs r0, #120	@ 000a667a 7820
.org 0xa667c
	strb r0, [r4, #18]	@ 000a667c a074
.org 0xa667e
	movs r0, #2	@ 000a667e 0220
.org 0xa6680
	strb r0, [r4, #13]	@ 000a6680 6073
.org 0xa6682
	strb r1, [r4, #14]	@ 000a6682 a173
.org 0xa6684
	pop {r4}	@ 000a6684 10bc
.org 0xa6686
	pop {r0}	@ 000a6686 01bc
.org 0xa6688
	bx r0	@ 000a6688 0047
