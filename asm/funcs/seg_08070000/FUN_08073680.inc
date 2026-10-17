@ FUN_08073680  entry 0x08073680  size 64
.thumb
.org 0x73680
FUN_08073680:
	push {lr}	@ 00073680 00b5
.org 0x73682
	ldr r2, [r0, #44]	@ 00073682 c26a
.org 0x73684
	ldr r1, [r0, #12]	@ 00073684 c168
.org 0x73686
	ldr r1, [r1, #44]	@ 00073686 c96a
.org 0x73688
	ldr r0, [r0, #20]	@ 00073688 4069
.org 0x7368a
	movs r3, #1	@ 0007368a 0123
.org 0x7368c
	ands r0, r3	@ 0007368c 1840
.org 0x7368e
	cmp r0, #0	@ 0007368e 0028
.org 0x73690
	beq.n 0x736bc	@ 00073690 14d0
.org 0x73692
	ldr r0, [r1, #84]	@ 00073692 486d
.org 0x73694
	ldr r1, [r2, #84]	@ 00073694 516d
.org 0x73696
	cmp r0, r1	@ 00073696 8842
.org 0x73698
	bge.n 0x736a4	@ 00073698 04da
.org 0x7369a
	adds r1, r2, #0	@ 0007369a 111c
.org 0x7369c
	adds r1, #186	@ 0007369c ba31
.org 0x7369e
	movs r0, #0	@ 0007369e 0020
.org 0x736a0
	strb r0, [r1, #0]	@ 000736a0 0870
.org 0x736a2
	b.n 0x736bc	@ 000736a2 0be0
.org 0x736a4
	cmp r1, r0	@ 000736a4 8142
.org 0x736a6
	blt.n 0x736b6	@ 000736a6 06db
.org 0x736a8
	movs r3, #0	@ 000736a8 0023
.org 0x736aa
	ldr r0, [pc, #20]	@ 000736aa 0548
.org 0x736ac
	ldr r0, [r0, #0]	@ 000736ac 0068
.org 0x736ae
	ldr r0, [r0, #84]	@ 000736ae 406d
.org 0x736b0
	cmp r1, r0	@ 000736b0 8142
.org 0x736b2
	bge.n 0x736b6	@ 000736b2 00da
.org 0x736b4
	movs r3, #1	@ 000736b4 0123
.org 0x736b6
	adds r0, r2, #0	@ 000736b6 101c
.org 0x736b8
	adds r0, #186	@ 000736b8 ba30
.org 0x736ba
	strb r3, [r0, #0]	@ 000736ba 0370
.org 0x736bc
	pop {r0}	@ 000736bc 01bc
.org 0x736be
	bx r0	@ 000736be 0047
