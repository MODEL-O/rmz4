@ FUN_080a0924  entry 0x080a0924  size 126
.thumb
.org 0xa0924
FUN_080a0924:
	push {r4, r5, r6, lr}	@ 000a0924 70b5
.org 0xa0926
	adds r3, r0, #0	@ 000a0926 031c
.org 0xa0928
	ldr r4, [r3, #44]	@ 000a0928 dc6a
.org 0xa092a
	ldr r0, [r3, #12]	@ 000a092a d868
.org 0xa092c
	ldr r1, [r0, #44]	@ 000a092c c16a
.org 0xa092e
	ldr r0, [r3, #20]	@ 000a092e 5869
.org 0xa0930
	movs r5, #1	@ 000a0930 0125
.org 0xa0932
	ands r0, r5	@ 000a0932 2840
.org 0xa0934
	cmp r0, #0	@ 000a0934 0028
.org 0xa0936
	beq.n 0xa09a6	@ 000a0936 36d0
.org 0xa0938
	ldr r0, [r1, #84]	@ 000a0938 486d
.org 0xa093a
	ldr r2, [r4, #84]	@ 000a093a 626d
.org 0xa093c
	cmp r0, r2	@ 000a093c 9042
.org 0xa093e
	bge.n 0xa0950	@ 000a093e 07da
.org 0xa0940
	adds r1, r4, #0	@ 000a0940 211c
.org 0xa0942
	adds r1, #184	@ 000a0942 b831
.org 0xa0944
	movs r0, #0	@ 000a0944 0020
.org 0xa0946
	strb r0, [r1, #0]	@ 000a0946 0870
.org 0xa0948
	ldr r6, [pc, #0]	@ 000a0948 004e
.org 0xa094a
	b.n 0xa097a	@ 000a094a 16e0
.org 0xa094c
	.byte 0xf0,0xdb,0x02,0x02	@ 000a094c data
.org 0xa0950
	cmp r2, r0	@ 000a0950 8242
.org 0xa0952
	bge.n 0xa0964	@ 000a0952 07da
.org 0xa0954
	adds r0, r4, #0	@ 000a0954 201c
.org 0xa0956
	adds r0, #184	@ 000a0956 b830
.org 0xa0958
	strb r5, [r0, #0]	@ 000a0958 0570
.org 0xa095a
	ldr r6, [pc, #4]	@ 000a095a 014e
.org 0xa095c
	b.n 0xa097a	@ 000a095c 0de0
.org 0xa095e
	.byte 0x00	@ 000a095e data
.org 0xa095f
	.byte 0x00	@ 000a095f data
.org 0xa0960
	.byte 0xf0,0xdb,0x02,0x02	@ 000a0960 data
.org 0xa0964
	movs r5, #0	@ 000a0964 0025
.org 0xa0966
	ldr r0, [pc, #68]	@ 000a0966 1148
.org 0xa0968
	ldr r1, [r0, #0]	@ 000a0968 0168
.org 0xa096a
	ldr r1, [r1, #84]	@ 000a096a 496d
.org 0xa096c
	adds r6, r0, #0	@ 000a096c 061c
.org 0xa096e
	cmp r2, r1	@ 000a096e 8a42
.org 0xa0970
	bge.n 0xa0974	@ 000a0970 00da
.org 0xa0972
	movs r5, #1	@ 000a0972 0125
.org 0xa0974
	adds r0, r4, #0	@ 000a0974 201c
.org 0xa0976
	adds r0, #184	@ 000a0976 b830
.org 0xa0978
	strb r5, [r0, #0]	@ 000a0978 0570
.org 0xa097a
	ldr r2, [r6, #0]	@ 000a097a 3268
.org 0xa097c
	ldr r1, [r3, #20]	@ 000a097c 5969
.org 0xa097e
	movs r0, #128	@ 000a097e 8020
.org 0xa0980
	lsls r0, r0, #2	@ 000a0980 8000
.org 0xa0982
	ands r0, r1	@ 000a0982 0840
.org 0xa0984
	cmp r0, #0	@ 000a0984 0028
.org 0xa0986
	beq.n 0xa09a6	@ 000a0986 0ed0
.org 0xa0988
	movs r0, #128	@ 000a0988 8020
.org 0xa098a
	lsls r0, r0, #10	@ 000a098a 8002
.org 0xa098c
	ands r1, r0	@ 000a098c 0140
.org 0xa098e
	cmp r1, #0	@ 000a098e 0029
.org 0xa0990
	beq.n 0xa09a6	@ 000a0990 09d0
.org 0xa0992
	cmp r2, #0	@ 000a0992 002a
.org 0xa0994
	beq.n 0xa09a6	@ 000a0994 07d0
.org 0xa0996
	adds r0, r2, #0	@ 000a0996 101c
.org 0xa0998
	movs r1, #5	@ 000a0998 0521
.org 0xa099a
	movs r2, #2	@ 000a099a 0222
.org 0xa099c
	bl 0x3a578	@ 000a099c 99f7ecfd
.org 0xa09a0
	adds r1, r4, #0	@ 000a09a0 211c
