@ FUN_08077760  entry 0x08077760  size 64
.thumb
.org 0x77760
FUN_08077760:
	push {r4, r5, lr}	@ 00077760 30b5
.org 0x77762
	ldrb r4, [r0, #14]	@ 00077762 847b
.org 0x77764
	adds r2, r0, #0	@ 00077764 021c
.org 0x77766
	adds r2, #200	@ 00077766 c832
.org 0x77768
	ldr r1, [r2, #0]	@ 00077768 1168
.org 0x7776a
	adds r1, #181	@ 0007776a b531
.org 0x7776c
	movs r5, #0	@ 0007776c 0025
.org 0x7776e
	movs r3, #1	@ 0007776e 0123
.org 0x77770
	strb r3, [r1, #0]	@ 00077770 0b70
.org 0x77772
	ldr r1, [r2, #0]	@ 00077772 1168
.org 0x77774
	adds r1, #182	@ 00077774 b631
.org 0x77776
	strb r3, [r1, #0]	@ 00077776 0b70
.org 0x77778
	adds r2, #4	@ 00077778 0432
.org 0x7777a
	ldr r1, [r2, #0]	@ 0007777a 1168
.org 0x7777c
	adds r1, #182	@ 0007777c b631
.org 0x7777e
	strb r5, [r1, #0]	@ 0007777e 0d70
.org 0x77780
	ldr r1, [r2, #0]	@ 00077780 1168
.org 0x77782
	adds r1, #185	@ 00077782 b931
.org 0x77784
	strb r3, [r1, #0]	@ 00077784 0b70
.org 0x77786
	adds r4, #1	@ 00077786 0134
.org 0x77788
	strb r4, [r0, #14]	@ 00077788 8473
.org 0x7778a
	strb r5, [r0, #15]	@ 0007778a c573
.org 0x7778c
	ldr r2, [pc, #16]	@ 0007778c 044a
.org 0x7778e
	ldrb r1, [r0, #13]	@ 0007778e 417b
.org 0x77790
	lsls r1, r1, #2	@ 00077790 8900
.org 0x77792
	adds r1, r1, r2	@ 00077792 8918
.org 0x77794
	ldr r1, [r1, #0]	@ 00077794 0968
.org 0x77796
	bl 0x128f80	@ 00077796 b1f0f3fb
.org 0x7779a
	pop {r4, r5}	@ 0007779a 30bc
.org 0x7779c
	pop {r0}	@ 0007779c 01bc
.org 0x7779e
	bx r0	@ 0007779e 0047
