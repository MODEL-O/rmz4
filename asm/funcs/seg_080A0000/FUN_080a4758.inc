@ FUN_080a4758  entry 0x080a4758  size 70
.thumb
.org 0xa4758
FUN_080a4758:
	push {r4, lr}	@ 000a4758 10b5
.org 0xa475a
	adds r4, r0, #0	@ 000a475a 041c
.org 0xa475c
	adds r1, r4, #0	@ 000a475c 211c
.org 0xa475e
	adds r1, #84	@ 000a475e 5431
.org 0xa4760
	movs r0, #2	@ 000a4760 0220
.org 0xa4762
	bl 0xd0c88	@ 000a4762 2cf091fa
.org 0xa4766
	ldrb r1, [r4, #10]	@ 000a4766 a17a
.org 0xa4768
	movs r0, #254	@ 000a4768 fe20
.org 0xa476a
	ands r0, r1	@ 000a476a 0840
.org 0xa476c
	movs r1, #0	@ 000a476c 0021
.org 0xa476e
	strb r0, [r4, #10]	@ 000a476e a072
.org 0xa4770
	adds r0, r4, #0	@ 000a4770 201c
.org 0xa4772
	adds r0, #140	@ 000a4772 8c30
.org 0xa4774
	str r1, [r0, #0]	@ 000a4774 0160
.org 0xa4776
	adds r0, #4	@ 000a4776 0430
.org 0xa4778
	str r1, [r0, #0]	@ 000a4778 0160
.org 0xa477a
	adds r0, #4	@ 000a477a 0430
.org 0xa477c
	strb r1, [r0, #0]	@ 000a477c 0170
.org 0xa477e
	ldrb r1, [r4, #10]	@ 000a477e a17a
.org 0xa4780
	movs r0, #251	@ 000a4780 fb20
.org 0xa4782
	ands r0, r1	@ 000a4782 0840
.org 0xa4784
	strb r0, [r4, #10]	@ 000a4784 a072
.org 0xa4786
	ldr r1, [pc, #24]	@ 000a4786 0649
.org 0xa4788
	ldrb r0, [r4, #9]	@ 000a4788 607a
.org 0xa478a
	lsls r0, r0, #2	@ 000a478a 8000
.org 0xa478c
	adds r0, r0, r1	@ 000a478c 4018
.org 0xa478e
	movs r1, #4	@ 000a478e 0421
.org 0xa4790
	str r1, [r4, #12]	@ 000a4790 e160
.org 0xa4792
	ldr r0, [r0, #0]	@ 000a4792 0068
.org 0xa4794
	ldr r0, [r0, #16]	@ 000a4794 0069
.org 0xa4796
	str r0, [r4, #20]	@ 000a4796 6061
.org 0xa4798
	pop {r4}	@ 000a4798 10bc
.org 0xa479a
	pop {r0}	@ 000a479a 01bc
.org 0xa479c
	bx r0	@ 000a479c 0047
