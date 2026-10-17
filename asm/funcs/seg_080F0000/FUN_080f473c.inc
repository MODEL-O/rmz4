@ FUN_080f473c  entry 0x080f473c  size 114
.thumb
.org 0xf473c
FUN_080f473c:
	push {r4, lr}	@ 000f473c 10b5
.org 0xf473e
	adds r4, r0, #0	@ 000f473e 041c
.org 0xf4740
	adds r2, r4, #0	@ 000f4740 221c
.org 0xf4742
	adds r2, #140	@ 000f4742 8c32
.org 0xf4744
	ldr r0, [r2, #0]	@ 000f4744 1068
.org 0xf4746
	movs r1, #128	@ 000f4746 8021
.org 0xf4748
	lsls r1, r1, #2	@ 000f4748 8900
.org 0xf474a
	ands r0, r1	@ 000f474a 0840
.org 0xf474c
	cmp r0, #0	@ 000f474c 0028
.org 0xf474e
	beq.n 0xf47a2	@ 000f474e 28d0
.org 0xf4750
	ldr r1, [pc, #92]	@ 000f4750 1749
.org 0xf4752
	ldrb r0, [r4, #9]	@ 000f4752 607a
.org 0xf4754
	lsls r0, r0, #2	@ 000f4754 8000
.org 0xf4756
	adds r0, r0, r1	@ 000f4756 4018
.org 0xf4758
	movs r1, #2	@ 000f4758 0221
.org 0xf475a
	str r1, [r4, #12]	@ 000f475a e160
.org 0xf475c
	ldr r0, [r0, #0]	@ 000f475c 0068
.org 0xf475e
	ldr r0, [r0, #8]	@ 000f475e 8068
.org 0xf4760
	str r0, [r4, #20]	@ 000f4760 6061
.org 0xf4762
	ldr r0, [r2, #0]	@ 000f4762 1068
.org 0xf4764
	movs r1, #128	@ 000f4764 8021
.org 0xf4766
	lsls r1, r1, #10	@ 000f4766 8902
.org 0xf4768
	ands r0, r1	@ 000f4768 0840
.org 0xf476a
	cmp r0, #0	@ 000f476a 0028
.org 0xf476c
	beq.n 0xf4774	@ 000f476c 02d0
.org 0xf476e
	ldrb r0, [r4, #16]	@ 000f476e 207c
.org 0xf4770
	adds r0, #3	@ 000f4770 0330
.org 0xf4772
	strb r0, [r4, #16]	@ 000f4772 2074
.org 0xf4774
	movs r1, #0	@ 000f4774 0021
.org 0xf4776
	str r1, [r2, #0]	@ 000f4776 1160
.org 0xf4778
	adds r0, r4, #0	@ 000f4778 201c
.org 0xf477a
	adds r0, #144	@ 000f477a 9030
.org 0xf477c
	str r1, [r0, #0]	@ 000f477c 0160
.org 0xf477e
	adds r0, #4	@ 000f477e 0430
.org 0xf4780
	strb r1, [r0, #0]	@ 000f4780 0170
.org 0xf4782
	ldrb r1, [r4, #10]	@ 000f4782 a17a
.org 0xf4784
	movs r0, #251	@ 000f4784 fb20
.org 0xf4786
	ands r0, r1	@ 000f4786 0840
.org 0xf4788
	strb r0, [r4, #10]	@ 000f4788 a072
.org 0xf478a
	ldr r2, [pc, #40]	@ 000f478a 0a4a
.org 0xf478c
	ldr r0, [pc, #40]	@ 000f478c 0a48
.org 0xf478e
	adds r2, r2, r0	@ 000f478e 1218
.org 0xf4790
	movs r0, #1	@ 000f4790 0120
.org 0xf4792
	ldrb r1, [r4, #17]	@ 000f4792 617c
.org 0xf4794
	lsls r0, r1	@ 000f4794 8840
.org 0xf4796
	ldrb r1, [r2, #0]	@ 000f4796 1178
.org 0xf4798
	orrs r0, r1	@ 000f4798 0843
.org 0xf479a
	strb r0, [r2, #0]	@ 000f479a 1070
.org 0xf479c
	adds r0, r4, #0	@ 000f479c 201c
.org 0xf479e
	bl 0xf3f1c	@ 000f479e fff7bdfb
.org 0xf47a2
	adds r0, r4, #0	@ 000f47a2 201c
.org 0xf47a4
	bl 0x1cff0	@ 000f47a4 28f724fc
.org 0xf47a8
	pop {r4}	@ 000f47a8 10bc
.org 0xf47aa
	pop {r0}	@ 000f47aa 01bc
.org 0xf47ac
	bx r0	@ 000f47ac 0047
