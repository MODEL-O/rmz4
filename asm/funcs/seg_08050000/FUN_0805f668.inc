@ FUN_0805f668  entry 0x0805f668  size 74
.thumb
.org 0x5f668
FUN_0805f668:
	push {r4, lr}	@ 0005f668 10b5
.org 0x5f66a
	adds r4, r0, #0	@ 0005f66a 041c
.org 0x5f66c
	ldrb r0, [r4, #14]	@ 0005f66c a07b
.org 0x5f66e
	cmp r0, #0	@ 0005f66e 0028
.org 0x5f670
	bne.n 0x5f684	@ 0005f670 08d1
.org 0x5f672
	ldr r1, [pc, #64]	@ 0005f672 1049
.org 0x5f674
	adds r0, r4, #0	@ 0005f674 201c
.org 0x5f676
	bl 0x1cf00	@ 0005f676 bdf743fc
.org 0x5f67a
	movs r0, #2	@ 0005f67a 0220
.org 0x5f67c
	strb r0, [r4, #15]	@ 0005f67c e073
.org 0x5f67e
	ldrb r0, [r4, #14]	@ 0005f67e a07b
.org 0x5f680
	adds r0, #1	@ 0005f680 0130
.org 0x5f682
	strb r0, [r4, #14]	@ 0005f682 a073
.org 0x5f684
	ldrb r0, [r4, #15]	@ 0005f684 e07b
.org 0x5f686
	cmp r0, #0	@ 0005f686 0028
.org 0x5f688
	blt.n 0x5f6a6	@ 0005f688 0ddb
.org 0x5f68a
	cmp r0, #1	@ 0005f68a 0128
.org 0x5f68c
	ble.n 0x5f6a6	@ 0005f68c 0bdd
.org 0x5f68e
	cmp r0, #2	@ 0005f68e 0228
.org 0x5f690
	bne.n 0x5f6a6	@ 0005f690 09d1
.org 0x5f692
	ldr r0, [r4, #24]	@ 0005f692 a069
.org 0x5f694
	ldrb r1, [r0, #9]	@ 0005f694 417a
.org 0x5f696
	movs r2, #1	@ 0005f696 0122
.org 0x5f698
	adds r0, r2, #0	@ 0005f698 101c
.org 0x5f69a
	ands r0, r1	@ 0005f69a 0840
.org 0x5f69c
	cmp r0, #0	@ 0005f69c 0028
.org 0x5f69e
	beq.n 0x5f6a6	@ 0005f69e 02d0
.org 0x5f6a0
	movs r0, #0	@ 0005f6a0 0020
.org 0x5f6a2
	strb r2, [r4, #13]	@ 0005f6a2 6273
.org 0x5f6a4
	strb r0, [r4, #14]	@ 0005f6a4 a073
.org 0x5f6a6
	adds r0, r4, #0	@ 0005f6a6 201c
.org 0x5f6a8
	bl 0x1cff0	@ 0005f6a8 bdf7a2fc
.org 0x5f6ac
	pop {r4}	@ 0005f6ac 10bc
.org 0x5f6ae
	pop {r0}	@ 0005f6ae 01bc
.org 0x5f6b0
	bx r0	@ 0005f6b0 0047
