@ FUN_08107848  entry 0x08107848  size 114
.thumb
.org 0x107848
FUN_08107848:
	push {r4, r5, lr}	@ 00107848 30b5
.org 0x10784a
	adds r5, r0, #0	@ 0010784a 051c
.org 0x10784c
	ldrb r0, [r5, #13]	@ 0010784c 687b
.org 0x10784e
	cmp r0, #0	@ 0010784e 0028
.org 0x107850
	beq.n 0x107858	@ 00107850 02d0
.org 0x107852
	cmp r0, #1	@ 00107852 0128
.org 0x107854
	beq.n 0x1078ae	@ 00107854 2bd0
.org 0x107856
	b.n 0x1078b4	@ 00107856 2de0
.org 0x107858
	ldr r0, [r5, #84]	@ 00107858 686d
.org 0x10785a
	ldr r1, [r5, #88]	@ 0010785a a96d
.org 0x10785c
	bl 0x8534	@ 0010785c 00f76afe
.org 0x107860
	str r0, [r5, #88]	@ 00107860 a865
.org 0x107862
	ldr r0, [pc, #88]	@ 00107862 1648
.org 0x107864
	movs r1, #210	@ 00107864 d221
.org 0x107866
	lsls r1, r1, #2	@ 00107866 8900
.org 0x107868
	strh r1, [r0, #28]	@ 00107868 8183
.org 0x10786a
	ldr r4, [pc, #84]	@ 0010786a 154c
.org 0x10786c
	movs r0, #8	@ 0010786c 0820
.org 0x10786e
	strh r0, [r4, #28]	@ 0010786e a083
.org 0x107870
	ldr r0, [pc, #80]	@ 00107870 1448
.org 0x107872
	ldrh r2, [r0, #6]	@ 00107872 c288
.org 0x107874
	lsrs r2, r2, #6	@ 00107874 9209
.org 0x107876
	subs r1, r1, r2	@ 00107876 891a
.org 0x107878
	lsls r1, r1, #5	@ 00107878 4901
.org 0x10787a
	movs r2, #128	@ 0010787a 8022
.org 0x10787c
	lsls r2, r2, #9	@ 0010787c 5202
.org 0x10787e
	adds r1, r1, r2	@ 0010787e 8918
.org 0x107880
	bl 0x1d30	@ 00107880 faf656fa
.org 0x107884
	ldr r0, [pc, #64]	@ 00107884 1048
.org 0x107886
	ldrh r1, [r4, #28]	@ 00107886 a18b
.org 0x107888
	ldrb r2, [r0, #7]	@ 00107888 c279
.org 0x10788a
	subs r1, r1, r2	@ 0010788a 891a
.org 0x10788c
	lsls r1, r1, #5	@ 0010788c 4901
.org 0x10788e
	movs r2, #128	@ 0010788e 8022
.org 0x107890
	lsls r2, r2, #2	@ 00107890 9200
.org 0x107892
	adds r1, r1, r2	@ 00107892 8918
.org 0x107894
	bl 0x2208	@ 00107894 faf6b8fc
.org 0x107898
	ldr r1, [pc, #48]	@ 00107898 0c49
.org 0x10789a
	adds r0, r5, #0	@ 0010789a 281c
.org 0x10789c
	bl 0x1cf00	@ 0010789c 15f730fb
.org 0x1078a0
	adds r1, r5, #0	@ 001078a0 291c
.org 0x1078a2
	adds r1, #37	@ 001078a2 2531
.org 0x1078a4
	movs r0, #31	@ 001078a4 1f20
.org 0x1078a6
	strb r0, [r1, #0]	@ 001078a6 0870
.org 0x1078a8
	ldrb r0, [r5, #13]	@ 001078a8 687b
.org 0x1078aa
	adds r0, #1	@ 001078aa 0130
.org 0x1078ac
	strb r0, [r5, #13]	@ 001078ac 6873
.org 0x1078ae
	adds r0, r5, #0	@ 001078ae 281c
.org 0x1078b0
	bl 0x1cff0	@ 001078b0 15f79efb
.org 0x1078b4
	pop {r4, r5}	@ 001078b4 30bc
.org 0x1078b6
	pop {r0}	@ 001078b6 01bc
.org 0x1078b8
	bx r0	@ 001078b8 0047
