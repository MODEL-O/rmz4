@ FUN_080c8904  entry 0x080c8904  size 206
.thumb
.org 0xc8904
FUN_080c8904:
	push {r4, r5, r6, r7, lr}	@ 000c8904 f0b5
.org 0xc8906
	adds r4, r0, #0	@ 000c8906 041c
.org 0xc8908
	ldr r6, [r4, #40]	@ 000c8908 a66a
.org 0xc890a
	bl 0x1cc9c	@ 000c890a 54f7c7f9
.org 0xc890e
	ldrb r1, [r4, #10]	@ 000c890e a17a
.org 0xc8910
	movs r0, #254	@ 000c8910 fe20
.org 0xc8912
	ands r0, r1	@ 000c8912 0840
.org 0xc8914
	movs r1, #2	@ 000c8914 0221
.org 0xc8916
	orrs r0, r1	@ 000c8916 0843
.org 0xc8918
	strb r0, [r4, #10]	@ 000c8918 a072
.org 0xc891a
	ldr r2, [pc, #132]	@ 000c891a 214a
.org 0xc891c
	ldr r1, [r2, #0]	@ 000c891c 1168
.org 0xc891e
	ldr r0, [pc, #132]	@ 000c891e 2148
.org 0xc8920
	muls r0, r1	@ 000c8920 4843
.org 0xc8922
	ldr r1, [pc, #132]	@ 000c8922 2149
.org 0xc8924
	adds r0, r0, r1	@ 000c8924 4018
.org 0xc8926
	lsls r0, r0, #1	@ 000c8926 4000
.org 0xc8928
	lsrs r1, r0, #1	@ 000c8928 4108
.org 0xc892a
	str r1, [r2, #0]	@ 000c892a 1160
.org 0xc892c
	lsrs r0, r0, #17	@ 000c892c 400c
.org 0xc892e
	movs r1, #12	@ 000c892e 0c21
.org 0xc8930
	bl 0x129198	@ 000c8930 60f032fc
.org 0xc8934
	adds r1, r0, #0	@ 000c8934 011c
.org 0xc8936
	movs r0, #216	@ 000c8936 d820
.org 0xc8938
	lsls r0, r0, #7	@ 000c8938 c001
.org 0xc893a
	adds r1, r1, r0	@ 000c893a 0918
.org 0xc893c
	lsls r1, r1, #16	@ 000c893c 0904
.org 0xc893e
	lsrs r1, r1, #16	@ 000c893e 090c
.org 0xc8940
	adds r0, r4, #0	@ 000c8940 201c
.org 0xc8942
	bl 0x1cf00	@ 000c8942 54f7ddfa
.org 0xc8946
	adds r0, r4, #0	@ 000c8946 201c
.org 0xc8948
	bl 0x1cff0	@ 000c8948 54f752fb
.org 0xc894c
	movs r2, #0	@ 000c894c 0022
.org 0xc894e
	ldrb r1, [r4, #10]	@ 000c894e a17a
.org 0xc8950
	movs r0, #239	@ 000c8950 ef20
.org 0xc8952
	ands r0, r1	@ 000c8952 0840
.org 0xc8954
	strb r0, [r4, #10]	@ 000c8954 a072
.org 0xc8956
	adds r0, r4, #0	@ 000c8956 201c
.org 0xc8958
	adds r0, #76	@ 000c8958 4c30
.org 0xc895a
	strb r2, [r0, #0]	@ 000c895a 0270
.org 0xc895c
	adds r2, r4, #0	@ 000c895c 221c
.org 0xc895e
	adds r2, #74	@ 000c895e 4a32
.org 0xc8960
	ldrb r1, [r2, #0]	@ 000c8960 1178
.org 0xc8962
	movs r0, #17	@ 000c8962 1120
.org 0xc8964
	negs r0, r0	@ 000c8964 4042
.org 0xc8966
	ands r0, r1	@ 000c8966 0840
.org 0xc8968
	strb r0, [r2, #0]	@ 000c8968 1070
.org 0xc896a
	ldr r7, [pc, #64]	@ 000c896a 104f
.org 0xc896c
	adds r5, r4, #0	@ 000c896c 251c
.org 0xc896e
	adds r5, #188	@ 000c896e bc35
.org 0xc8970
	ldrb r0, [r5, #0]	@ 000c8970 2878
.org 0xc8972
	lsls r0, r0, #2	@ 000c8972 8000
.org 0xc8974
	adds r0, r0, r7	@ 000c8974 c019
.org 0xc8976
	ldr r1, [r6, #84]	@ 000c8976 716d
.org 0xc8978
	ldr r0, [r0, #0]	@ 000c8978 0068
.org 0xc897a
	adds r2, r1, r0	@ 000c897a 0a18
.org 0xc897c
	str r2, [r4, #84]	@ 000c897c 6265
.org 0xc897e
	ldrb r0, [r5, #0]	@ 000c897e 2878
.org 0xc8980
	cmp r0, #2	@ 000c8980 0228
.org 0xc8982
	bls.n 0xc89b8	@ 000c8982 19d9
.org 0xc8984
	ldr r1, [r4, #88]	@ 000c8984 a16d
.org 0xc8986
	adds r0, r2, #0	@ 000c8986 101c
.org 0xc8988
	bl 0x7c7c	@ 000c8988 3ff778f9
.org 0xc898c
	lsls r0, r0, #16	@ 000c898c 0004
.org 0xc898e
	cmp r0, #0	@ 000c898e 0028
.org 0xc8990
	beq.n 0xc89b8	@ 000c8990 12d0
.org 0xc8992
	ldrb r0, [r5, #0]	@ 000c8992 2878
.org 0xc8994
	cmp r0, #3	@ 000c8994 0328
.org 0xc8996
	bne.n 0xc89b0	@ 000c8996 0bd1
.org 0xc8998
	ldr r0, [r6, #84]	@ 000c8998 706d
.org 0xc899a
	ldr r1, [r7, #16]	@ 000c899a 3969
.org 0xc899c
	b.n 0xc89b4	@ 000c899c 0ae0
.org 0xc899e
	.byte 0x00	@ 000c899e data
.org 0xc899f
	.byte 0x00	@ 000c899f data
.org 0xc89a0
	.byte 0x38,0xdc,0x02,0x02	@ 000c89a0 data
.org 0xc89a4
	.byte 0xfd,0x43,0x03,0x00	@ 000c89a4 data
.org 0xc89a8
	.byte 0xc3,0x9e,0x26,0x00	@ 000c89a8 data
.org 0xc89ac
	.byte 0x14,0x61,0x86,0x08	@ 000c89ac data
.org 0xc89b0
	ldr r0, [r6, #84]	@ 000c89b0 706d
.org 0xc89b2
	ldr r1, [r7, #12]	@ 000c89b2 f968
.org 0xc89b4
	adds r0, r0, r1	@ 000c89b4 4018
.org 0xc89b6
	str r0, [r4, #84]	@ 000c89b6 6065
.org 0xc89b8
	ldr r0, [r6, #84]	@ 000c89b8 706d
.org 0xc89ba
	ldr r1, [r6, #88]	@ 000c89ba b16d
.org 0xc89bc
	bl 0x8534	@ 000c89bc 3ff7bafd
.org 0xc89c0
	str r0, [r4, #88]	@ 000c89c0 a065
.org 0xc89c2
	movs r0, #0	@ 000c89c2 0020
.org 0xc89c4
	strb r0, [r4, #18]	@ 000c89c4 a074
.org 0xc89c6
	ldr r1, [pc, #28]	@ 000c89c6 0749
.org 0xc89c8
	ldrb r0, [r4, #9]	@ 000c89c8 607a
.org 0xc89ca
	lsls r0, r0, #2	@ 000c89ca 8000
.org 0xc89cc
	adds r0, r0, r1	@ 000c89cc 4018
.org 0xc89ce
	movs r1, #1	@ 000c89ce 0121
.org 0xc89d0
	str r1, [r4, #12]	@ 000c89d0 e160
