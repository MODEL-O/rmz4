@ FUN_0811984c  entry 0x0811984c  size 200
.thumb
.org 0x11984c
FUN_0811984c:
	push {r4, r5, r6, r7, lr}	@ 0011984c f0b5
.org 0x11984e
	adds r5, r0, #0	@ 0011984e 051c
.org 0x119850
	ldr r0, [pc, #20]	@ 00119850 0548
.org 0x119852
	adds r4, r5, r0	@ 00119852 2c18
.org 0x119854
	ldr r1, [pc, #20]	@ 00119854 0549
.org 0x119856
	adds r6, r5, r1	@ 00119856 6e18
.org 0x119858
	ldrb r0, [r6, #0]	@ 00119858 3078
.org 0x11985a
	cmp r0, #0	@ 0011985a 0028
.org 0x11985c
	bne.n 0x119870	@ 0011985c 08d1
.org 0x11985e
	strb r0, [r4, #1]	@ 0011985e 6070
.org 0x119860
	ldrb r0, [r6, #0]	@ 00119860 3078
.org 0x119862
	adds r0, #1	@ 00119862 0130
.org 0x119864
	strb r0, [r6, #0]	@ 00119864 3070
.org 0x119866
	b.n 0x119936	@ 00119866 66e0
.org 0x119868
	.byte 0xcc,0x0d,0x00,0x00	@ 00119868 data
.org 0x11986c
	.byte 0xf7,0x0d,0x00,0x00	@ 0011986c data
.org 0x119870
	ldr r1, [pc, #84]	@ 00119870 1549
.org 0x119872
	adds r0, r5, r1	@ 00119872 6818
.org 0x119874
	movs r7, #1	@ 00119874 0127
.org 0x119876
	strb r7, [r0, #0]	@ 00119876 0770
.org 0x119878
	ldr r0, [pc, #80]	@ 00119878 1448
.org 0x11987a
	ldrb r1, [r0, #4]	@ 0011987a 0179
.org 0x11987c
	movs r0, #32	@ 0011987c 2020
.org 0x11987e
	ands r0, r1	@ 0011987e 0840
.org 0x119880
	lsls r0, r0, #24	@ 00119880 0006
.org 0x119882
	lsrs r1, r0, #24	@ 00119882 010e
.org 0x119884
	cmp r1, #0	@ 00119884 0029
.org 0x119886
	beq.n 0x1198f8	@ 00119886 37d0
.org 0x119888
	ldr r0, [pc, #68]	@ 00119888 1148
.org 0x11988a
	adds r0, #210	@ 0011988a d230
.org 0x11988c
	ldrh r0, [r0, #0]	@ 0011988c 0088
.org 0x11988e
	ldr r1, [pc, #68]	@ 0011988e 1149
.org 0x119890
	adds r0, r0, r1	@ 00119890 4018
.org 0x119892
	movs r1, #1	@ 00119892 0121
.org 0x119894
	movs r2, #16	@ 00119894 1022
.org 0x119896
	bl 0x10d85c	@ 00119896 f3f7e1ff
.org 0x11989a
	ldr r0, [pc, #60]	@ 0011989a 0f48
.org 0x11989c
	ldrh r1, [r0, #4]	@ 0011989c 8188
.org 0x11989e
	adds r4, r7, #0	@ 0011989e 3c1c
.org 0x1198a0
	ands r4, r1	@ 001198a0 0c40
.org 0x1198a2
	cmp r4, #0	@ 001198a2 002c
.org 0x1198a4
	beq.n 0x1198e4	@ 001198a4 1ed0
.org 0x1198a6
	movs r0, #2	@ 001198a6 0220
.org 0x1198a8
	bl 0x2b10	@ 001198a8 e9f632f9
.org 0x1198ac
	ldr r2, [pc, #44]	@ 001198ac 0b4a
.org 0x1198ae
	ldrh r1, [r2, #8]	@ 001198ae 1189
.org 0x1198b0
	ldr r0, [pc, #44]	@ 001198b0 0b48
.org 0x1198b2
	ands r0, r1	@ 001198b2 0840
.org 0x1198b4
	movs r3, #0	@ 001198b4 0023
.org 0x1198b6
	movs r1, #32	@ 001198b6 2021
.org 0x1198b8
	orrs r0, r1	@ 001198b8 0843
.org 0x1198ba
	strh r0, [r2, #8]	@ 001198ba 1081
.org 0x1198bc
	movs r0, #3	@ 001198bc 0320
.org 0x1198be
	strb r0, [r5, #1]	@ 001198be 6870
.org 0x1198c0
	strb r0, [r5, #2]	@ 001198c0 a870
.org 0x1198c2
	strb r3, [r5, #3]	@ 001198c2 eb70
.org 0x1198c4
	strb r3, [r6, #0]	@ 001198c4 3370
.org 0x1198c6
	b.n 0x119936	@ 001198c6 36e0
.org 0x1198c8
	.byte 0x04,0x0e,0x00,0x00	@ 001198c8 data
.org 0x1198cc
	.byte 0xb0,0xe8,0x02,0x02	@ 001198cc data
.org 0x1198d0
	.byte 0xf8,0xcf,0x86,0x08	@ 001198d0 data
.org 0x1198d4
	.byte 0x5f,0x0e,0x01,0x09	@ 001198d4 data
.org 0x1198d8
	.byte 0x60,0x07,0x00,0x02	@ 001198d8 data
.org 0x1198dc
	.byte 0x10,0xe9,0x02,0x02	@ 001198dc data
.org 0x1198e0
	.byte 0xfe,0xff,0x00,0x00	@ 001198e0 data
.org 0x1198e4
	movs r0, #2	@ 001198e4 0220
.org 0x1198e6
	ands r0, r1	@ 001198e6 0840
.org 0x1198e8
	cmp r0, #0	@ 001198e8 0028
.org 0x1198ea
	beq.n 0x119936	@ 001198ea 24d0
.org 0x1198ec
	movs r0, #3	@ 001198ec 0320
.org 0x1198ee
	bl 0x2b10	@ 001198ee e9f60ff9
.org 0x1198f2
	strb r4, [r5, #3]	@ 001198f2 ec70
.org 0x1198f4
	strb r4, [r6, #0]	@ 001198f4 3470
.org 0x1198f6
	b.n 0x119918	@ 001198f6 0fe0
.org 0x1198f8
	ldrb r0, [r4, #1]	@ 001198f8 6078
.org 0x1198fa
	cmp r0, #0	@ 001198fa 0028
.org 0x1198fc
	bne.n 0x11990c	@ 001198fc 06d1
.org 0x1198fe
	movs r0, #4	@ 001198fe 0420
.org 0x119900
	bl 0x2b10	@ 00119900 e9f606f9
.org 0x119904
	ldrb r0, [r4, #1]	@ 00119904 6078
.org 0x119906
	adds r0, #1	@ 00119906 0130
.org 0x119908
	strb r0, [r4, #1]	@ 00119908 6070
.org 0x11990a
	b.n 0x119936	@ 0011990a 14e0
.org 0x11990c
	ldr r0, [pc, #16]	@ 0011990c 0448
.org 0x11990e
	ldrh r0, [r0, #4]	@ 0011990e 8088
.org 0x119910
	cmp r0, #0	@ 00119910 0028
.org 0x119912
	beq.n 0x119924	@ 00119912 07d0
