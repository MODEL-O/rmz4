@ FUN_08125820  entry 0x08125820  size 166
.thumb
.org 0x125820
FUN_08125820:
	push {r4, r5, lr}	@ 00125820 30b5
.org 0x125822
	adds r5, r0, #0	@ 00125822 051c
.org 0x125824
	ldr r0, [pc, #16]	@ 00125824 0448
.org 0x125826
	adds r4, r5, r0	@ 00125826 2c18
.org 0x125828
	ldrb r0, [r4, #25]	@ 00125828 607e
.org 0x12582a
	cmp r0, #1	@ 0012582a 0128
.org 0x12582c
	beq.n 0x12585e	@ 0012582c 17d0
.org 0x12582e
	cmp r0, #1	@ 0012582e 0128
.org 0x125830
	bgt.n 0x12583c	@ 00125830 04dc
.org 0x125832
	cmp r0, #0	@ 00125832 0028
.org 0x125834
	beq.n 0x125846	@ 00125834 07d0
.org 0x125836
	b.n 0x1258ba	@ 00125836 40e0
.org 0x125838
	.byte 0xcc,0x0d,0x00,0x00	@ 00125838 data
.org 0x12583c
	cmp r0, #2	@ 0012583c 0228
.org 0x12583e
	beq.n 0x125880	@ 0012583e 1fd0
.org 0x125840
	cmp r0, #3	@ 00125840 0328
.org 0x125842
	beq.n 0x125896	@ 00125842 28d0
.org 0x125844
	b.n 0x1258ba	@ 00125844 39e0
.org 0x125846
	ldr r0, [pc, #48]	@ 00125846 0c48
.org 0x125848
	movs r1, #172	@ 00125848 ac21
.org 0x12584a
	lsls r1, r1, #1	@ 0012584a 4900
.org 0x12584c
	adds r0, r0, r1	@ 0012584c 4018
.org 0x12584e
	movs r1, #128	@ 0012584e 8021
.org 0x125850
	lsls r1, r1, #8	@ 00125850 0902
.org 0x125852
	strh r1, [r0, #0]	@ 00125852 0180
.org 0x125854
	movs r0, #60	@ 00125854 3c20
.org 0x125856
	strb r0, [r4, #28]	@ 00125856 2077
.org 0x125858
	ldrb r0, [r4, #25]	@ 00125858 607e
.org 0x12585a
	adds r0, #1	@ 0012585a 0130
.org 0x12585c
	strb r0, [r4, #25]	@ 0012585c 6076
.org 0x12585e
	ldr r2, [pc, #28]	@ 0012585e 074a
.org 0x125860
	adds r1, r5, r2	@ 00125860 a918
.org 0x125862
	ldrb r0, [r1, #28]	@ 00125862 087f
.org 0x125864
	subs r0, #1	@ 00125864 0138
.org 0x125866
	strb r0, [r1, #28]	@ 00125866 0877
.org 0x125868
	lsls r0, r0, #24	@ 00125868 0006
.org 0x12586a
	lsrs r0, r0, #24	@ 0012586a 000e
.org 0x12586c
	cmp r0, #255	@ 0012586c ff28
.org 0x12586e
	bne.n 0x1258ba	@ 0012586e 24d1
.org 0x125870
	ldrb r0, [r1, #25]	@ 00125870 487e
.org 0x125872
	adds r0, #1	@ 00125872 0130
.org 0x125874
	strb r0, [r1, #25]	@ 00125874 4876
.org 0x125876
	b.n 0x1258ba	@ 00125876 20e0
.org 0x125878
	.byte 0x10,0xe9,0x02,0x02	@ 00125878 data
.org 0x12587c
	.byte 0xcc,0x0d,0x00,0x00	@ 0012587c data
.org 0x125880
	movs r0, #0	@ 00125880 0020
.org 0x125882
	bl 0xd3ebc	@ 00125882 aef71bfb
.org 0x125886
	str r0, [r4, #4]	@ 00125886 6060
.org 0x125888
	movs r0, #30	@ 00125888 1e20
.org 0x12588a
	bl 0x2b10	@ 0012588a ddf641f9
.org 0x12588e
	ldrb r0, [r4, #25]	@ 0012588e 607e
.org 0x125890
	adds r0, #1	@ 00125890 0130
.org 0x125892
	strb r0, [r4, #25]	@ 00125892 6076
.org 0x125894
	b.n 0x1258ba	@ 00125894 11e0
.org 0x125896
	ldr r0, [r4, #4]	@ 00125896 6068
.org 0x125898
	ldrb r0, [r0, #12]	@ 00125898 007b
.org 0x12589a
	cmp r0, #1	@ 0012589a 0128
.org 0x12589c
	bls.n 0x1258ba	@ 0012589c 0dd9
.org 0x12589e
	ldrb r0, [r4, #24]	@ 0012589e 207e
.org 0x1258a0
	adds r0, #1	@ 001258a0 0130
.org 0x1258a2
	movs r1, #0	@ 001258a2 0021
.org 0x1258a4
	strb r0, [r4, #24]	@ 001258a4 2076
.org 0x1258a6
	strb r1, [r4, #25]	@ 001258a6 6176
.org 0x1258a8
	ldr r0, [pc, #40]	@ 001258a8 0a48
.org 0x1258aa
	movs r2, #172	@ 001258aa ac22
.org 0x1258ac
	lsls r2, r2, #1	@ 001258ac 5200
.org 0x1258ae
	adds r0, r0, r2	@ 001258ae 8018
.org 0x1258b0
	strh r1, [r0, #0]	@ 001258b0 0180
.org 0x1258b2
	ldr r0, [r4, #36]	@ 001258b2 606a
.org 0x1258b4
	movs r1, #1	@ 001258b4 0121
.org 0x1258b6
	orrs r0, r1	@ 001258b6 0843
.org 0x1258b8
	str r0, [r4, #36]	@ 001258b8 6062
.org 0x1258ba
	ldr r1, [pc, #28]	@ 001258ba 0749
.org 0x1258bc
	adds r0, r5, r1	@ 001258bc 6818
.org 0x1258be
	ldr r0, [r0, #0]	@ 001258be 0068
.org 0x1258c0
	movs r2, #149	@ 001258c0 9522
.org 0x1258c2
	lsls r2, r2, #2	@ 001258c2 9200
.org 0x1258c4
	adds r0, r0, r2	@ 001258c4 8018
