@ FUN_080f0848  entry 0x080f0848  size 130
.thumb
.org 0xf0848
FUN_080f0848:
	push {r4, r5, lr}	@ 000f0848 30b5
.org 0xf084a
	adds r5, r0, #0	@ 000f084a 051c
.org 0xf084c
	ldrb r0, [r5, #13]	@ 000f084c 687b
.org 0xf084e
	cmp r0, #0	@ 000f084e 0028
.org 0xf0850
	bne.n 0xf08be	@ 000f0850 35d1
.org 0xf0852
	ldr r1, [pc, #120]	@ 000f0852 1e49
.org 0xf0854
	adds r1, #98	@ 000f0854 6231
.org 0xf0856
	ldr r0, [pc, #120]	@ 000f0856 1e48
.org 0xf0858
	strh r0, [r1, #0]	@ 000f0858 0880
.org 0xf085a
	ldr r4, [pc, #120]	@ 000f085a 1e4c
.org 0xf085c
	adds r4, #98	@ 000f085c 6234
.org 0xf085e
	movs r0, #8	@ 000f085e 0820
.org 0xf0860
	strh r0, [r4, #0]	@ 000f0860 2080
.org 0xf0862
	ldr r0, [pc, #116]	@ 000f0862 1d48
.org 0xf0864
	ldrh r1, [r1, #0]	@ 000f0864 0988
.org 0xf0866
	ldrh r2, [r0, #6]	@ 000f0866 c288
.org 0xf0868
	lsrs r2, r2, #6	@ 000f0868 9209
.org 0xf086a
	subs r1, r1, r2	@ 000f086a 891a
.org 0xf086c
	lsls r1, r1, #5	@ 000f086c 4901
.org 0xf086e
	movs r2, #128	@ 000f086e 8022
.org 0xf0870
	lsls r2, r2, #9	@ 000f0870 5202
.org 0xf0872
	adds r1, r1, r2	@ 000f0872 8918
.org 0xf0874
	bl 0x1d30	@ 000f0874 11f75cfa
.org 0xf0878
	ldr r0, [pc, #96]	@ 000f0878 1848
.org 0xf087a
	ldrh r1, [r4, #0]	@ 000f087a 2188
.org 0xf087c
	ldrb r2, [r0, #7]	@ 000f087c c279
.org 0xf087e
	subs r1, r1, r2	@ 000f087e 891a
.org 0xf0880
	lsls r1, r1, #5	@ 000f0880 4901
.org 0xf0882
	movs r2, #128	@ 000f0882 8022
.org 0xf0884
	lsls r2, r2, #2	@ 000f0884 9200
.org 0xf0886
	adds r1, r1, r2	@ 000f0886 8918
.org 0xf0888
	bl 0x2208	@ 000f0888 11f7befc
.org 0xf088c
	movs r1, #196	@ 000f088c c421
.org 0xf088e
	lsls r1, r1, #6	@ 000f088e 8901
.org 0xf0890
	adds r0, r5, #0	@ 000f0890 281c
.org 0xf0892
	bl 0x1cf00	@ 000f0892 2cf735fb
.org 0xf0896
	movs r2, #1	@ 000f0896 0122
.org 0xf0898
	ldrb r1, [r5, #10]	@ 000f0898 a97a
.org 0xf089a
	movs r0, #16	@ 000f089a 1020
.org 0xf089c
	orrs r0, r1	@ 000f089c 0843
.org 0xf089e
	strb r0, [r5, #10]	@ 000f089e a872
.org 0xf08a0
	adds r0, r5, #0	@ 000f08a0 281c
.org 0xf08a2
	adds r0, #76	@ 000f08a2 4c30
.org 0xf08a4
	strb r2, [r0, #0]	@ 000f08a4 0270
.org 0xf08a6
	adds r3, r5, #0	@ 000f08a6 2b1c
.org 0xf08a8
	adds r3, #74	@ 000f08a8 4a33
.org 0xf08aa
	movs r2, #16	@ 000f08aa 1022
.org 0xf08ac
	ldrb r1, [r3, #0]	@ 000f08ac 1978
.org 0xf08ae
	movs r0, #17	@ 000f08ae 1120
.org 0xf08b0
	negs r0, r0	@ 000f08b0 4042
.org 0xf08b2
	ands r0, r1	@ 000f08b2 0840
.org 0xf08b4
	orrs r0, r2	@ 000f08b4 1043
.org 0xf08b6
	strb r0, [r3, #0]	@ 000f08b6 1870
.org 0xf08b8
	ldrb r0, [r5, #13]	@ 000f08b8 687b
.org 0xf08ba
	adds r0, #1	@ 000f08ba 0130
.org 0xf08bc
	strb r0, [r5, #13]	@ 000f08bc 6873
.org 0xf08be
	adds r0, r5, #0	@ 000f08be 281c
.org 0xf08c0
	bl 0x1cff0	@ 000f08c0 2cf796fb
.org 0xf08c4
	pop {r4, r5}	@ 000f08c4 30bc
.org 0xf08c6
	pop {r0}	@ 000f08c6 01bc
.org 0xf08c8
	bx r0	@ 000f08c8 0047
