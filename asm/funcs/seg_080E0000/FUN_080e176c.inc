@ FUN_080e176c  entry 0x080e176c  size 56
.thumb
.org 0xe176c
FUN_080e176c:
	push {r4, lr}	@ 000e176c 10b5
.org 0xe176e
	adds r4, r0, #0	@ 000e176e 041c
.org 0xe1770
	adds r0, #116	@ 000e1770 7430
.org 0xe1772
	ldrb r0, [r0, #0]	@ 000e1772 0078
.org 0xe1774
	cmp r0, #0	@ 000e1774 0028
.org 0xe1776
	beq.n 0xe1780	@ 000e1776 03d0
.org 0xe1778
	ldrb r1, [r4, #10]	@ 000e1778 a17a
.org 0xe177a
	movs r0, #1	@ 000e177a 0120
.org 0xe177c
	orrs r0, r1	@ 000e177c 0843
.org 0xe177e
	b.n 0xe1786	@ 000e177e 02e0
.org 0xe1780
	ldrb r1, [r4, #10]	@ 000e1780 a17a
.org 0xe1782
	movs r0, #254	@ 000e1782 fe20
.org 0xe1784
	ands r0, r1	@ 000e1784 0840
.org 0xe1786
	strb r0, [r4, #10]	@ 000e1786 a072
.org 0xe1788
	ldr r0, [pc, #24]	@ 000e1788 0648
.org 0xe178a
	ldrb r1, [r4, #17]	@ 000e178a 617c
.org 0xe178c
	lsls r1, r1, #2	@ 000e178c 8900
.org 0xe178e
	adds r1, r1, r0	@ 000e178e 0918
.org 0xe1790
	ldr r1, [r1, #0]	@ 000e1790 0968
.org 0xe1792
	adds r0, r4, #0	@ 000e1792 201c
.org 0xe1794
	bl 0x128f80	@ 000e1794 47f0f4fb
.org 0xe1798
	adds r0, r4, #0	@ 000e1798 201c
.org 0xe179a
	bl 0x1cff0	@ 000e179a 3bf729fc
.org 0xe179e
	pop {r4}	@ 000e179e 10bc
.org 0xe17a0
	pop {r0}	@ 000e17a0 01bc
.org 0xe17a2
	bx r0	@ 000e17a2 0047
