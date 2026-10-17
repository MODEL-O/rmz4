@ FUN_080c9804  entry 0x080c9804  size 84
.thumb
.org 0xc9804
FUN_080c9804:
	push {r4, r5, r6, lr}	@ 000c9804 70b5
.org 0xc9806
	adds r6, r0, #0	@ 000c9806 061c
.org 0xc9808
	lsls r1, r1, #24	@ 000c9808 0906
.org 0xc980a
	lsrs r5, r1, #24	@ 000c980a 0d0e
.org 0xc980c
	lsls r2, r2, #24	@ 000c980c 1206
.org 0xc980e
	lsrs r4, r2, #24	@ 000c980e 140e
.org 0xc9810
	ldr r0, [pc, #68]	@ 000c9810 1148
.org 0xc9812
	ldr r0, [r0, #0]	@ 000c9812 0068
.org 0xc9814
	bl 0x5500	@ 000c9814 3bf774fe
.org 0xc9818
	adds r3, r0, #0	@ 000c9818 031c
.org 0xc981a
	cmp r3, #0	@ 000c981a 002b
.org 0xc981c
	beq.n 0xc9850	@ 000c981c 18d0
.org 0xc981e
	adds r1, r3, #0	@ 000c981e 191c
.org 0xc9820
	adds r1, #37	@ 000c9820 2531
.org 0xc9822
	movs r2, #0	@ 000c9822 0022
.org 0xc9824
	movs r0, #8	@ 000c9824 0820
.org 0xc9826
	strb r0, [r1, #0]	@ 000c9826 0870
.org 0xc9828
	ldr r0, [pc, #48]	@ 000c9828 0c48
.org 0xc982a
	movs r1, #32	@ 000c982a 2021
.org 0xc982c
	strb r1, [r3, #9]	@ 000c982c 5972
.org 0xc982e
	adds r0, #128	@ 000c982e 8030
.org 0xc9830
	ldr r0, [r0, #0]	@ 000c9830 0068
.org 0xc9832
	ldr r0, [r0, #0]	@ 000c9832 0068
.org 0xc9834
	str r0, [r3, #20]	@ 000c9834 5861
.org 0xc9836
	movs r0, #0	@ 000c9836 0020
.org 0xc9838
	strh r2, [r3, #32]	@ 000c9838 1a84
.org 0xc983a
	adds r1, r3, #0	@ 000c983a 191c
.org 0xc983c
	adds r1, #34	@ 000c983c 2231
.org 0xc983e
	strb r0, [r1, #0]	@ 000c983e 0870
.org 0xc9840
	ldr r0, [r6, #0]	@ 000c9840 3068
.org 0xc9842
	ldr r1, [r6, #4]	@ 000c9842 7168
.org 0xc9844
	str r0, [r3, #84]	@ 000c9844 5865
.org 0xc9846
	str r1, [r3, #88]	@ 000c9846 9965
.org 0xc9848
	adds r0, r3, #0	@ 000c9848 181c
.org 0xc984a
	adds r0, #180	@ 000c984a b430
.org 0xc984c
	strb r5, [r0, #0]	@ 000c984c 0570
.org 0xc984e
	strb r4, [r3, #17]	@ 000c984e 5c74
.org 0xc9850
	adds r0, r3, #0	@ 000c9850 181c
.org 0xc9852
	pop {r4, r5, r6}	@ 000c9852 70bc
.org 0xc9854
	pop {r1}	@ 000c9854 02bc
.org 0xc9856
	bx r1	@ 000c9856 0847
