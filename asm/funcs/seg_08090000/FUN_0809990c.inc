@ FUN_0809990c  entry 0x0809990c  size 286
.thumb
.org 0x9990c
FUN_0809990c:
	push {r4, r5, lr}	@ 0009990c 30b5
.org 0x9990e
	sub sp, #8	@ 0009990e 82b0
.org 0x99910
	adds r5, r0, #0	@ 00099910 051c
.org 0x99912
	ldrb r4, [r5, #14]	@ 00099912 ac7b
.org 0x99914
	cmp r4, #0	@ 00099914 002c
.org 0x99916
	bne.n 0x9992c	@ 00099916 09d1
.org 0x99918
	ldr r1, [pc, #32]	@ 00099918 0849
.org 0x9991a
	bl 0x1cf00	@ 0009991a 83f7f1fa
.org 0x9991e
	ldr r0, [pc, #32]	@ 0009991e 0848
.org 0x99920
	bl 0x2b10	@ 00099920 69f7f6f8
.org 0x99924
	strb r4, [r5, #15]	@ 00099924 ec73
.org 0x99926
	ldrb r0, [r5, #14]	@ 00099926 a87b
.org 0x99928
	adds r0, #1	@ 00099928 0130
.org 0x9992a
	strb r0, [r5, #14]	@ 0009992a a873
.org 0x9992c
	ldrb r0, [r5, #15]	@ 0009992c e87b
.org 0x9992e
	cmp r0, #1	@ 0009992e 0128
.org 0x99930
	beq.n 0x99984	@ 00099930 28d0
.org 0x99932
	cmp r0, #1	@ 00099932 0128
.org 0x99934
	bgt.n 0x99944	@ 00099934 06dc
.org 0x99936
	cmp r0, #0	@ 00099936 0028
.org 0x99938
	beq.n 0x9994e	@ 00099938 09d0
.org 0x9993a
	b.n 0x99a48	@ 0009993a 85e0
.org 0x9993c
	.byte 0x01,0x69,0x00,0x00	@ 0009993c data
.org 0x99940
	.byte 0x33,0x01,0x00,0x00	@ 00099940 data
.org 0x99944
	cmp r0, #2	@ 00099944 0228
.org 0x99946
	beq.n 0x999f4	@ 00099946 55d0
.org 0x99948
	cmp r0, #3	@ 00099948 0328
.org 0x9994a
	beq.n 0x99a38	@ 0009994a 75d0
.org 0x9994c
	b.n 0x99a48	@ 0009994c 7ce0
.org 0x9994e
	adds r0, r5, #0	@ 0009994e 281c
.org 0x99950
	adds r0, #115	@ 00099950 7330
.org 0x99952
	ldrb r0, [r0, #0]	@ 00099952 0078
.org 0x99954
	cmp r0, #3	@ 00099954 0328
.org 0x99956
	bne.n 0x99a48	@ 00099956 77d1
.org 0x99958
	ldr r1, [pc, #32]	@ 00099958 0849
.org 0x9995a
	adds r0, r5, #0	@ 0009995a 281c
.org 0x9995c
	bl 0x1cf00	@ 0009995c 83f7d0fa
.org 0x99960
	adds r0, r5, #0	@ 00099960 281c
.org 0x99962
	adds r0, #116	@ 00099962 7430
.org 0x99964
	ldr r1, [pc, #24]	@ 00099964 0649
.org 0x99966
	bl 0x5784	@ 00099966 6bf70dff
.org 0x9996a
	ldr r1, [r5, #104]	@ 0009996a a96e
.org 0x9996c
	lsls r0, r1, #1	@ 0009996c 4800
.org 0x9996e
	adds r0, r0, r1	@ 0009996e 4018
.org 0x99970
	lsls r0, r0, #3	@ 00099970 c000
.org 0x99972
	adds r0, r0, r1	@ 00099972 4018
.org 0x99974
	negs r0, r0	@ 00099974 4042
.org 0x99976
	str r0, [r5, #96]	@ 00099976 2866
.org 0x99978
	b.n 0x99a26	@ 00099978 55e0
.org 0x9997a
	.byte 0x00	@ 0009997a data
.org 0x9997b
	.byte 0x00	@ 0009997b data
.org 0x9997c
	.byte 0x02,0x69,0x00,0x00	@ 0009997c data
.org 0x99980
	.byte 0x94,0x0d,0x86,0x08	@ 00099980 data
.org 0x99984
	ldr r0, [r5, #88]	@ 00099984 a86d
.org 0x99986
	ldr r1, [r5, #96]	@ 00099986 296e
.org 0x99988
	adds r0, r0, r1	@ 00099988 4018
.org 0x9998a
	str r0, [r5, #88]	@ 0009998a a865
.org 0x9998c
	ldr r0, [r5, #104]	@ 0009998c a86e
.org 0x9998e
	adds r1, r1, r0	@ 0009998e 0918
.org 0x99990
	str r1, [r5, #96]	@ 00099990 2966
.org 0x99992
	cmp r1, #0	@ 00099992 0029
.org 0x99994
	blt.n 0x99a48	@ 00099994 58db
.org 0x99996
	ldr r1, [pc, #76]	@ 00099996 1349
.org 0x99998
	adds r0, r5, #0	@ 00099998 281c
.org 0x9999a
	bl 0x1cf00	@ 0009999a 83f7b1fa
.org 0x9999e
	adds r0, r5, #0	@ 0009999e 281c
.org 0x999a0
	adds r0, #116	@ 000999a0 7430
.org 0x999a2
	ldr r1, [pc, #68]	@ 000999a2 1149
.org 0x999a4
	bl 0x5784	@ 000999a4 6bf7eefe
.org 0x999a8
	ldr r0, [r5, #84]	@ 000999a8 686d
.org 0x999aa
	ldr r1, [pc, #64]	@ 000999aa 1049
.org 0x999ac
	adds r0, r0, r1	@ 000999ac 4018
.org 0x999ae
	str r0, [sp, #0]	@ 000999ae 0090
.org 0x999b0
	ldr r0, [r5, #88]	@ 000999b0 a86d
.org 0x999b2
	ldr r4, [pc, #60]	@ 000999b2 0f4c
.org 0x999b4
	adds r0, r0, r4	@ 000999b4 0019
.org 0x999b6
	str r0, [sp, #4]	@ 000999b6 0190
.org 0x999b8
	mov r0, sp	@ 000999b8 6846
.org 0x999ba
	movs r1, #0	@ 000999ba 0021
.org 0x999bc
	movs r2, #0	@ 000999bc 0022
.org 0x999be
	bl 0xc60d4	@ 000999be 2cf089fb
.org 0x999c2
	ldr r0, [r5, #84]	@ 000999c2 686d
.org 0x999c4
	movs r1, #128	@ 000999c4 8021
.org 0x999c6
	lsls r1, r1, #5	@ 000999c6 4901
.org 0x999c8
	adds r0, r0, r1	@ 000999c8 4018
.org 0x999ca
	str r0, [sp, #0]	@ 000999ca 0090
.org 0x999cc
	ldr r0, [r5, #88]	@ 000999cc a86d
.org 0x999ce
	adds r0, r0, r4	@ 000999ce 0019
.org 0x999d0
	str r0, [sp, #4]	@ 000999d0 0190
.org 0x999d2
	mov r0, sp	@ 000999d2 6846
.org 0x999d4
	movs r1, #0	@ 000999d4 0021
.org 0x999d6
	movs r2, #1	@ 000999d6 0122
.org 0x999d8
	bl 0xc60d4	@ 000999d8 2cf07cfb
.org 0x999dc
	movs r0, #45	@ 000999dc 2d20
.org 0x999de
	bl 0x2b10	@ 000999de 69f797f8
.org 0x999e2
	b.n 0x99a26	@ 000999e2 20e0
.org 0x999e4
	.byte 0x04,0x69,0x00,0x00	@ 000999e4 data
.org 0x999e8
	.byte 0x94,0x0d,0x86,0x08	@ 000999e8 data
.org 0x999ec
	.byte 0x00,0xf0,0xff,0xff	@ 000999ec data
.org 0x999f0
	.byte 0x00,0xf1,0xff,0xff	@ 000999f0 data
.org 0x999f4
	ldr r2, [r5, #88]	@ 000999f4 aa6d
.org 0x999f6
	ldr r0, [r5, #96]	@ 000999f6 286e
.org 0x999f8
	adds r2, r2, r0	@ 000999f8 1218
.org 0x999fa
	str r2, [r5, #88]	@ 000999fa aa65
.org 0x999fc
	ldr r1, [r5, #104]	@ 000999fc a96e
.org 0x999fe
	adds r0, r0, r1	@ 000999fe 4018
.org 0x99a00
	str r0, [r5, #96]	@ 00099a00 2866
.org 0x99a02
	adds r4, r5, #0	@ 00099a02 2c1c
.org 0x99a04
	adds r4, #184	@ 00099a04 b834
.org 0x99a06
	ldr r0, [r4, #0]	@ 00099a06 2068
.org 0x99a08
	cmp r2, r0	@ 00099a08 8242
.org 0x99a0a
	ble.n 0x99a48	@ 00099a0a 1ddd
.org 0x99a0c
	ldr r1, [pc, #32]	@ 00099a0c 0849
.org 0x99a0e
	adds r0, r5, #0	@ 00099a0e 281c
.org 0x99a10
	bl 0x1cf00	@ 00099a10 83f776fa
.org 0x99a14
	adds r0, r5, #0	@ 00099a14 281c
.org 0x99a16
	adds r0, #116	@ 00099a16 7430
.org 0x99a18
	ldr r1, [pc, #24]	@ 00099a18 0649
.org 0x99a1a
	bl 0x5784	@ 00099a1a 6bf7b3fe
.org 0x99a1e
	ldr r0, [r4, #0]	@ 00099a1e 2068
.org 0x99a20
	str r0, [r5, #88]	@ 00099a20 a865
.org 0x99a22
	movs r0, #16	@ 00099a22 1020
.org 0x99a24
	strb r0, [r5, #18]	@ 00099a24 a874
.org 0x99a26
	ldrb r0, [r5, #15]	@ 00099a26 e87b
.org 0x99a28
	adds r0, #1	@ 00099a28 0130
