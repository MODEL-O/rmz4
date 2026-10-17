@ FUN_08033768  entry 0x08033768  size 214
.thumb
.org 0x33768
FUN_08033768:
	push {r4, r5, lr}	@ 00033768 30b5
.org 0x3376a
	adds r4, r0, #0	@ 0003376a 041c
.org 0x3376c
	adds r0, #180	@ 0003376c b430
.org 0x3376e
	movs r1, #163	@ 0003376e a321
.org 0x33770
	lsls r1, r1, #1	@ 00033770 4900
.org 0x33772
	adds r2, r4, r1	@ 00033772 6218
.org 0x33774
	movs r1, #0	@ 00033774 0021
.org 0x33776
	strb r1, [r2, #0]	@ 00033776 1170
.org 0x33778
	ldrb r0, [r0, #12]	@ 00033778 007b
.org 0x3377a
	cmp r0, #1	@ 0003377a 0128
.org 0x3377c
	bne.n 0x33782	@ 0003377c 01d1
.org 0x3377e
	adds r0, r4, #0	@ 0003377e 201c
.org 0x33780
	b.n 0x33786	@ 00033780 01e0
.org 0x33782
	adds r0, r4, #0	@ 00033782 201c
.org 0x33784
	movs r1, #1	@ 00033784 0121
.org 0x33786
	bl 0x3a428	@ 00033786 06f04ffe
.org 0x3378a
	lsls r0, r0, #24	@ 0003378a 0006
.org 0x3378c
	lsrs r1, r0, #24	@ 0003378c 010e
.org 0x3378e
	ldr r2, [pc, #44]	@ 0003378e 0b4a
.org 0x33790
	adds r0, r4, r2	@ 00033790 a018
.org 0x33792
	ldrb r0, [r0, #0]	@ 00033792 0078
.org 0x33794
	adds r5, r4, #0	@ 00033794 251c
.org 0x33796
	adds r5, #180	@ 00033796 b435
.org 0x33798
	cmp r0, #3	@ 00033798 0328
.org 0x3379a
	bne.n 0x3379e	@ 0003379a 00d1
.org 0x3379c
	movs r1, #2	@ 0003379c 0221
.org 0x3379e
	cmp r1, #2	@ 0003379e 0229
.org 0x337a0
	bne.n 0x337c4	@ 000337a0 10d1
.org 0x337a2
	ldr r0, [pc, #28]	@ 000337a2 0748
.org 0x337a4
	adds r2, r4, r0	@ 000337a4 2218
.org 0x337a6
	movs r1, #0	@ 000337a6 0021
.org 0x337a8
	movs r0, #4	@ 000337a8 0420
.org 0x337aa
	strb r0, [r2, #0]	@ 000337aa 1070
.org 0x337ac
	movs r2, #129	@ 000337ac 8122
.org 0x337ae
	lsls r2, r2, #1	@ 000337ae 5200
.org 0x337b0
	adds r0, r4, r2	@ 000337b0 a018
.org 0x337b2
	strb r1, [r0, #0]	@ 000337b2 0170
.org 0x337b4
	adds r0, r4, #0	@ 000337b4 201c
.org 0x337b6
	bl 0x33b8c	@ 000337b6 00f0e9f9
.org 0x337ba
	b.n 0x3384c	@ 000337ba 47e0
.org 0x337bc
	.byte 0x6f,0x02,0x00,0x00	@ 000337bc data
.org 0x337c0
	.byte 0x01,0x01,0x00,0x00	@ 000337c0 data
.org 0x337c4
	movs r0, #150	@ 000337c4 9620
.org 0x337c6
	lsls r0, r0, #2	@ 000337c6 8000
.org 0x337c8
	adds r1, r4, r0	@ 000337c8 2118
.org 0x337ca
	ldr r0, [r1, #0]	@ 000337ca 0868
.org 0x337cc
	movs r2, #64	@ 000337cc 4022
.org 0x337ce
	ands r0, r2	@ 000337ce 1040
.org 0x337d0
	adds r3, r1, #0	@ 000337d0 0b1c
.org 0x337d2
	cmp r0, #0	@ 000337d2 0028
.org 0x337d4
	beq.n 0x33800	@ 000337d4 14d0
.org 0x337d6
	ldrh r1, [r5, #20]	@ 000337d6 a98a
.org 0x337d8
	adds r0, r2, #0	@ 000337d8 101c
.org 0x337da
	ands r0, r1	@ 000337da 0840
.org 0x337dc
	cmp r0, #0	@ 000337dc 0028
.org 0x337de
	beq.n 0x33800	@ 000337de 0fd0
.org 0x337e0
	ldr r1, [pc, #24]	@ 000337e0 0649
.org 0x337e2
	adds r2, r4, r1	@ 000337e2 6218
.org 0x337e4
	movs r1, #0	@ 000337e4 0021
.org 0x337e6
	movs r0, #7	@ 000337e6 0720
.org 0x337e8
	strb r0, [r2, #0]	@ 000337e8 1070
.org 0x337ea
	movs r2, #129	@ 000337ea 8122
.org 0x337ec
	lsls r2, r2, #1	@ 000337ec 5200
.org 0x337ee
	adds r0, r4, r2	@ 000337ee a018
.org 0x337f0
	strb r1, [r0, #0]	@ 000337f0 0170
.org 0x337f2
	adds r0, r4, #0	@ 000337f2 201c
.org 0x337f4
	bl 0x33d14	@ 000337f4 00f08efa
.org 0x337f8
	b.n 0x3384c	@ 000337f8 28e0
.org 0x337fa
	.byte 0x00	@ 000337fa data
.org 0x337fb
	.byte 0x00	@ 000337fb data
.org 0x337fc
	.byte 0x01,0x01,0x00,0x00	@ 000337fc data
.org 0x33800
	ldr r0, [r3, #0]	@ 00033800 1868
.org 0x33802
	movs r2, #128	@ 00033802 8022
.org 0x33804
	ands r0, r2	@ 00033804 1040
.org 0x33806
	cmp r0, #0	@ 00033806 0028
.org 0x33808
	beq.n 0x33834	@ 00033808 14d0
.org 0x3380a
	ldrh r1, [r5, #20]	@ 0003380a a98a
.org 0x3380c
	adds r0, r2, #0	@ 0003380c 101c
.org 0x3380e
	ands r0, r1	@ 0003380e 0840
.org 0x33810
	cmp r0, #0	@ 00033810 0028
.org 0x33812
	beq.n 0x33834	@ 00033812 0fd0
.org 0x33814
	ldr r0, [pc, #24]	@ 00033814 0648
.org 0x33816
	adds r2, r4, r0	@ 00033816 2218
.org 0x33818
	movs r1, #0	@ 00033818 0021
.org 0x3381a
	movs r0, #6	@ 0003381a 0620
.org 0x3381c
	strb r0, [r2, #0]	@ 0003381c 1070
.org 0x3381e
	movs r2, #129	@ 0003381e 8122
.org 0x33820
	lsls r2, r2, #1	@ 00033820 5200
.org 0x33822
	adds r0, r4, r2	@ 00033822 a018
.org 0x33824
	strb r1, [r0, #0]	@ 00033824 0170
.org 0x33826
	adds r0, r4, #0	@ 00033826 201c
.org 0x33828
	bl 0x33ca0	@ 00033828 00f03afa
.org 0x3382c
	b.n 0x3384c	@ 0003382c 0ee0
.org 0x3382e
	.byte 0x00	@ 0003382e data
.org 0x3382f
	.byte 0x00	@ 0003382f data
.org 0x33830
	.byte 0x01,0x01,0x00,0x00	@ 00033830 data
.org 0x33834
	ldr r0, [pc, #28]	@ 00033834 0748
.org 0x33836
	adds r2, r4, r0	@ 00033836 2218
.org 0x33838
	movs r1, #0	@ 00033838 0021
.org 0x3383a
	movs r0, #1	@ 0003383a 0120
.org 0x3383c
	strb r0, [r2, #0]	@ 0003383c 1070
