@ FUN_0803e650  entry 0x0803e650  size 184
.thumb
.org 0x3e650
FUN_0803e650:
	push {r4, r5, r6, lr}	@ 0003e650 70b5
.org 0x3e652
	adds r4, r0, #0	@ 0003e652 041c
.org 0x3e654
	adds r0, #180	@ 0003e654 b430
.org 0x3e656
	ldr r6, [r0, #0]	@ 0003e656 0668
.org 0x3e658
	ldrb r5, [r4, #13]	@ 0003e658 657b
.org 0x3e65a
	cmp r5, #1	@ 0003e65a 012d
.org 0x3e65c
	beq.n 0x3e68c	@ 0003e65c 16d0
.org 0x3e65e
	cmp r5, #1	@ 0003e65e 012d
.org 0x3e660
	bgt.n 0x3e668	@ 0003e660 02dc
.org 0x3e662
	cmp r5, #0	@ 0003e662 002d
.org 0x3e664
	beq.n 0x3e672	@ 0003e664 05d0
.org 0x3e666
	b.n 0x3e708	@ 0003e666 4fe0
.org 0x3e668
	cmp r5, #2	@ 0003e668 022d
.org 0x3e66a
	beq.n 0x3e6d0	@ 0003e66a 31d0
.org 0x3e66c
	cmp r5, #3	@ 0003e66c 032d
.org 0x3e66e
	beq.n 0x3e6ec	@ 0003e66e 3dd0
.org 0x3e670
	b.n 0x3e708	@ 0003e670 4ae0
.org 0x3e672
	ldr r1, [pc, #88]	@ 0003e672 1649
.org 0x3e674
	adds r0, r4, #0	@ 0003e674 201c
.org 0x3e676
	bl 0x1cf00	@ 0003e676 def743fc
.org 0x3e67a
	movs r1, #170	@ 0003e67a aa21
.org 0x3e67c
	lsls r1, r1, #1	@ 0003e67c 4900
.org 0x3e67e
	adds r0, r6, r1	@ 0003e67e 7018
.org 0x3e680
	strb r5, [r0, #0]	@ 0003e680 0570
.org 0x3e682
	movs r0, #6	@ 0003e682 0620
.org 0x3e684
	strb r0, [r4, #18]	@ 0003e684 a074
.org 0x3e686
	ldrb r0, [r4, #13]	@ 0003e686 607b
.org 0x3e688
	adds r0, #1	@ 0003e688 0130
.org 0x3e68a
	strb r0, [r4, #13]	@ 0003e68a 6073
.org 0x3e68c
	ldrb r0, [r4, #18]	@ 0003e68c a07c
.org 0x3e68e
	subs r0, #1	@ 0003e68e 0138
.org 0x3e690
	strb r0, [r4, #18]	@ 0003e690 a074
.org 0x3e692
	lsls r0, r0, #24	@ 0003e692 0006
.org 0x3e694
	cmp r0, #0	@ 0003e694 0028
.org 0x3e696
	bne.n 0x3e708	@ 0003e696 37d1
.org 0x3e698
	adds r2, r6, #0	@ 0003e698 321c
.org 0x3e69a
	adds r2, #230	@ 0003e69a e632
.org 0x3e69c
	ldrb r0, [r2, #0]	@ 0003e69c 1078
.org 0x3e69e
	adds r1, r0, #0	@ 0003e69e 011c
.org 0x3e6a0
	cmp r1, #0	@ 0003e6a0 0029
.org 0x3e6a2
	beq.n 0x3e6ba	@ 0003e6a2 0ad0
.org 0x3e6a4
	cmp r1, #255	@ 0003e6a4 ff29
.org 0x3e6a6
	beq.n 0x3e6ac	@ 0003e6a6 01d0
.org 0x3e6a8
	subs r0, #1	@ 0003e6a8 0138
.org 0x3e6aa
	strb r0, [r2, #0]	@ 0003e6aa 1070
.org 0x3e6ac
	adds r0, r6, #0	@ 0003e6ac 301c
.org 0x3e6ae
	adds r1, r4, #0	@ 0003e6ae 211c
.org 0x3e6b0
	bl 0x413d8	@ 0003e6b0 02f092fe
.org 0x3e6b4
	movs r0, #18	@ 0003e6b4 1220
.org 0x3e6b6
	bl 0x2b10	@ 0003e6b6 c4f72bfa
.org 0x3e6ba
	movs r0, #170	@ 0003e6ba aa20
.org 0x3e6bc
	lsls r0, r0, #1	@ 0003e6bc 4000
.org 0x3e6be
	adds r1, r6, r0	@ 0003e6be 3118
.org 0x3e6c0
	movs r0, #1	@ 0003e6c0 0120
.org 0x3e6c2
	strb r0, [r1, #0]	@ 0003e6c2 0870
.org 0x3e6c4
	movs r0, #24	@ 0003e6c4 1820
.org 0x3e6c6
	strb r0, [r4, #18]	@ 0003e6c6 a074
.org 0x3e6c8
	b.n 0x3e702	@ 0003e6c8 1be0
.org 0x3e6ca
	.byte 0x00	@ 0003e6ca data
.org 0x3e6cb
	.byte 0x00	@ 0003e6cb data
.org 0x3e6cc
	.byte 0x15,0x80,0x00,0x00	@ 0003e6cc data
.org 0x3e6d0
	ldrb r0, [r4, #18]	@ 0003e6d0 a07c
.org 0x3e6d2
	subs r0, #1	@ 0003e6d2 0138
.org 0x3e6d4
	strb r0, [r4, #18]	@ 0003e6d4 a074
.org 0x3e6d6
	lsls r0, r0, #24	@ 0003e6d6 0006
.org 0x3e6d8
	cmp r0, #0	@ 0003e6d8 0028
.org 0x3e6da
	bne.n 0x3e708	@ 0003e6da 15d1
.org 0x3e6dc
	movs r0, #170	@ 0003e6dc aa20
.org 0x3e6de
	lsls r0, r0, #1	@ 0003e6de 4000
.org 0x3e6e0
	adds r1, r6, r0	@ 0003e6e0 3118
.org 0x3e6e2
	movs r0, #3	@ 0003e6e2 0320
.org 0x3e6e4
	strb r0, [r1, #0]	@ 0003e6e4 0870
.org 0x3e6e6
	movs r0, #16	@ 0003e6e6 1020
.org 0x3e6e8
	strb r0, [r4, #18]	@ 0003e6e8 a074
.org 0x3e6ea
	b.n 0x3e702	@ 0003e6ea 0ae0
.org 0x3e6ec
	ldrb r0, [r4, #18]	@ 0003e6ec a07c
.org 0x3e6ee
	subs r0, #1	@ 0003e6ee 0138
.org 0x3e6f0
	strb r0, [r4, #18]	@ 0003e6f0 a074
.org 0x3e6f2
	lsls r0, r0, #24	@ 0003e6f2 0006
.org 0x3e6f4
	cmp r0, #0	@ 0003e6f4 0028
.org 0x3e6f6
	bne.n 0x3e708	@ 0003e6f6 07d1
.org 0x3e6f8
	movs r0, #170	@ 0003e6f8 aa20
.org 0x3e6fa
	lsls r0, r0, #1	@ 0003e6fa 4000
.org 0x3e6fc
	adds r1, r6, r0	@ 0003e6fc 3118
.org 0x3e6fe
	movs r0, #4	@ 0003e6fe 0420
.org 0x3e700
	strb r0, [r1, #0]	@ 0003e700 0870
.org 0x3e702
	ldrb r0, [r4, #13]	@ 0003e702 607b
.org 0x3e704
	adds r0, #1	@ 0003e704 0130
.org 0x3e706
	strb r0, [r4, #13]	@ 0003e706 6073
