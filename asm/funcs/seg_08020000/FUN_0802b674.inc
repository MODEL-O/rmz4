@ FUN_0802b674  entry 0x0802b674  size 60
.thumb
.org 0x2b674
FUN_0802b674:
	push {lr}	@ 0002b674 00b5
.org 0x2b676
	adds r3, r0, #0	@ 0002b676 031c
.org 0x2b678
	movs r2, #0	@ 0002b678 0022
.org 0x2b67a
	adds r0, r3, #0	@ 0002b67a 181c
.org 0x2b67c
	adds r0, #188	@ 0002b67c bc30
.org 0x2b67e
	adds r1, r0, r2	@ 0002b67e 8118
.org 0x2b680
	ldrb r0, [r1, #0]	@ 0002b680 0878
.org 0x2b682
	cmp r0, #31	@ 0002b682 1f28
.org 0x2b684
	bhi.n 0x2b6a4	@ 0002b684 0ed8
.org 0x2b686
	adds r0, #1	@ 0002b686 0130
.org 0x2b688
	strb r0, [r1, #0]	@ 0002b688 0870
.org 0x2b68a
	lsls r0, r0, #24	@ 0002b68a 0006
.org 0x2b68c
	lsrs r0, r0, #24	@ 0002b68c 000e
.org 0x2b68e
	cmp r0, #32	@ 0002b68e 2028
.org 0x2b690
	bne.n 0x2b69a	@ 0002b690 03d1
.org 0x2b692
	movs r0, #33	@ 0002b692 2120
.org 0x2b694
	bl 0x2b10	@ 0002b694 d7f73cfa
.org 0x2b698
	b.n 0x2b6aa	@ 0002b698 07e0
.org 0x2b69a
	movs r0, #32	@ 0002b69a 2020
.org 0x2b69c
	bl 0x2b10	@ 0002b69c d7f738fa
.org 0x2b6a0
	movs r0, #1	@ 0002b6a0 0120
.org 0x2b6a2
	b.n 0x2b6ac	@ 0002b6a2 03e0
.org 0x2b6a4
	adds r2, #1	@ 0002b6a4 0132
.org 0x2b6a6
	cmp r2, #3	@ 0002b6a6 032a
.org 0x2b6a8
	bls.n 0x2b67a	@ 0002b6a8 e7d9
.org 0x2b6aa
	movs r0, #0	@ 0002b6aa 0020
.org 0x2b6ac
	pop {r1}	@ 0002b6ac 02bc
.org 0x2b6ae
	bx r1	@ 0002b6ae 0847
