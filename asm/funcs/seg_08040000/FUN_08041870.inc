@ FUN_08041870  entry 0x08041870  size 106
.thumb
.org 0x41870
FUN_08041870:
	push {lr}	@ 00041870 00b5
.org 0x41872
	adds r3, r0, #0	@ 00041872 031c
.org 0x41874
	ldr r1, [r3, #40]	@ 00041874 996a
.org 0x41876
	movs r2, #168	@ 00041876 a822
.org 0x41878
	lsls r2, r2, #1	@ 00041878 5200
.org 0x4187a
	adds r0, r1, r2	@ 0004187a 8818
.org 0x4187c
	ldrb r0, [r0, #0]	@ 0004187c 0078
.org 0x4187e
	cmp r0, #255	@ 0004187e ff28
.org 0x41880
	bne.n 0x418d0	@ 00041880 26d1
.org 0x41882
	ldr r0, [pc, #68]	@ 00041882 1148
.org 0x41884
	adds r2, r1, r0	@ 00041884 0a18
.org 0x41886
	ldrb r0, [r2, #0]	@ 00041886 1078
.org 0x41888
	movs r1, #64	@ 00041888 4021
.org 0x4188a
	orrs r0, r1	@ 0004188a 0843
.org 0x4188c
	strb r0, [r2, #0]	@ 0004188c 1070
.org 0x4188e
	ldrb r1, [r3, #10]	@ 0004188e 997a
.org 0x41890
	movs r0, #254	@ 00041890 fe20
.org 0x41892
	ands r0, r1	@ 00041892 0840
.org 0x41894
	movs r2, #0	@ 00041894 0022
.org 0x41896
	movs r1, #253	@ 00041896 fd21
.org 0x41898
	ands r0, r1	@ 00041898 0840
.org 0x4189a
	strb r0, [r3, #10]	@ 0004189a 9872
.org 0x4189c
	adds r0, r3, #0	@ 0004189c 181c
.org 0x4189e
	adds r0, #140	@ 0004189e 8c30
.org 0x418a0
	str r2, [r0, #0]	@ 000418a0 0260
.org 0x418a2
	adds r0, #4	@ 000418a2 0430
.org 0x418a4
	str r2, [r0, #0]	@ 000418a4 0260
.org 0x418a6
	adds r0, #4	@ 000418a6 0430
.org 0x418a8
	strb r2, [r0, #0]	@ 000418a8 0270
.org 0x418aa
	ldrb r1, [r3, #10]	@ 000418aa 997a
.org 0x418ac
	movs r0, #251	@ 000418ac fb20
.org 0x418ae
	ands r0, r1	@ 000418ae 0840
.org 0x418b0
	strb r0, [r3, #10]	@ 000418b0 9872
.org 0x418b2
	ldr r1, [pc, #24]	@ 000418b2 0649
.org 0x418b4
	ldrb r0, [r3, #9]	@ 000418b4 587a
.org 0x418b6
	lsls r0, r0, #2	@ 000418b6 8000
.org 0x418b8
	adds r0, r0, r1	@ 000418b8 4018
.org 0x418ba
	movs r1, #3	@ 000418ba 0321
.org 0x418bc
	str r1, [r3, #12]	@ 000418bc d960
.org 0x418be
	ldr r0, [r0, #0]	@ 000418be 0068
.org 0x418c0
	ldr r0, [r0, #12]	@ 000418c0 c068
.org 0x418c2
	str r0, [r3, #20]	@ 000418c2 5861
.org 0x418c4
	b.n 0x418e0	@ 000418c4 0ce0
.org 0x418c6
	.byte 0x00	@ 000418c6 data
.org 0x418c7
	.byte 0x00	@ 000418c7 data
.org 0x418c8
	.byte 0x53,0x01,0x00,0x00	@ 000418c8 data
.org 0x418cc
	.byte 0xf8,0x39,0x85,0x08	@ 000418cc data
.org 0x418d0
	ldr r0, [pc, #16]	@ 000418d0 0448
.org 0x418d2
	ldrb r1, [r3, #16]	@ 000418d2 197c
.org 0x418d4
	lsls r1, r1, #2	@ 000418d4 8900
.org 0x418d6
	adds r1, r1, r0	@ 000418d6 0918
.org 0x418d8
	ldr r1, [r1, #0]	@ 000418d8 0968
