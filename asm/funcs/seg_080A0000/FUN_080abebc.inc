@ FUN_080abebc  entry 0x080abebc  size 576
.thumb
.org 0xabebc
FUN_080abebc:
	.byte 0xf0,0xb5	@ 000abebc (raw)
.org 0xabebe
	.byte 0x57,0x46	@ 000abebe (raw)
.org 0xabec0
	.byte 0x4e,0x46	@ 000abec0 (raw)
.org 0xabec2
	mov r5, r8	@ 000abec2 4546
.org 0xabec4
	push {r5, r6, r7}	@ 000abec4 e0b4
.org 0xabec6
	sub sp, #160	@ 000abec6 a8b0
.org 0xabec8
	ldr r4, [r0, #8]	@ 000abec8 8468
.org 0xabeca
	adds r0, r4, #0	@ 000abeca 201c
.org 0xabecc
	adds r0, #190	@ 000abecc be30
.org 0xabece
	ldrb r3, [r0, #0]	@ 000abece 0378
.org 0xabed0
	ldr r5, [pc, #268]	@ 000abed0 434d
.org 0xabed2
	movs r6, #0	@ 000abed2 0026
.org 0xabed4
	movs r0, #160	@ 000abed4 a020
.org 0xabed6
	strh r0, [r5, #10]	@ 000abed6 6881
.org 0xabed8
	ldr r0, [r4, #84]	@ 000abed8 606d
.org 0xabeda
	movs r1, #240	@ 000abeda f021
.org 0xabedc
	lsls r1, r1, #7	@ 000abedc c901
.org 0xabede
	adds r0, r0, r1	@ 000abede 4018
.org 0xabee0
	ldr r2, [pc, #256]	@ 000abee0 404a
.org 0xabee2
	ldr r1, [r2, #56]	@ 000abee2 916b
.org 0xabee4
	subs r0, r0, r1	@ 000abee4 401a
.org 0xabee6
	str r0, [sp, #128]	@ 000abee6 2090
.org 0xabee8
	ldr r0, [r4, #88]	@ 000abee8 a06d
.org 0xabeea
	movs r1, #160	@ 000abeea a021
.org 0xabeec
	lsls r1, r1, #7	@ 000abeec c901
.org 0xabeee
	adds r0, r0, r1	@ 000abeee 4018
.org 0xabef0
	ldr r1, [r2, #60]	@ 000abef0 d16b
.org 0xabef2
	subs r0, r0, r1	@ 000abef2 401a
.org 0xabef4
	str r0, [sp, #132]	@ 000abef4 2190
.org 0xabef6
	adds r0, r4, #0	@ 000abef6 201c
.org 0xabef8
	adds r0, #189	@ 000abef8 bd30
.org 0xabefa
	ldrb r2, [r0, #0]	@ 000abefa 0278
.org 0xabefc
	adds r0, #3	@ 000abefc 0330
.org 0xabefe
	ldrh r0, [r0, #0]	@ 000abefe 0088
.org 0xabf00
	str r0, [sp, #140]	@ 000abf00 2390
.org 0xabf02
	adds r0, r4, #0	@ 000abf02 201c
.org 0xabf04
	adds r0, #194	@ 000abf04 c230
.org 0xabf06
	ldrh r0, [r0, #0]	@ 000abf06 0088
.org 0xabf08
	str r0, [sp, #144]	@ 000abf08 2490
.org 0xabf0a
	movs r0, #1	@ 000abf0a 0120
.org 0xabf0c
	ands r3, r0	@ 000abf0c 0340
.org 0xabf0e
	cmp r3, #0	@ 000abf0e 002b
.org 0xabf10
	beq.n 0xabff0	@ 000abf10 6ed0
.org 0xabf12
	ldrh r0, [r5, #0]	@ 000abf12 2888
.org 0xabf14
	movs r3, #128	@ 000abf14 8023
.org 0xabf16
	lsls r3, r3, #7	@ 000abf16 db01
.org 0xabf18
	adds r1, r3, #0	@ 000abf18 191c
.org 0xabf1a
	orrs r0, r1	@ 000abf1a 0843
.org 0xabf1c
	strh r0, [r5, #0]	@ 000abf1c 2880
.org 0xabf1e
	movs r0, #253	@ 000abf1e fd20
.org 0xabf20
	strb r0, [r5, #13]	@ 000abf20 6873
.org 0xabf22
	movs r0, #255	@ 000abf22 ff20
.org 0xabf24
	strb r0, [r5, #14]	@ 000abf24 a873
.org 0xabf26
	movs r4, #6	@ 000abf26 0624
.org 0xabf28
	str r4, [sp, #136]	@ 000abf28 2294
.org 0xabf2a
	movs r7, #0	@ 000abf2a 0027
.org 0xabf2c
	adds r0, r2, #0	@ 000abf2c 101c
.org 0xabf2e
	adds r0, #64	@ 000abf2e 4030
.org 0xabf30
	lsls r2, r2, #1	@ 000abf30 5200
.org 0xabf32
	mov sl, r2	@ 000abf32 9246
.org 0xabf34
	add r6, sp, #4	@ 000abf34 01ae
.org 0xabf36
	mov r9, r6	@ 000abf36 b146
.org 0xabf38
	lsls r0, r0, #24	@ 000abf38 0006
.org 0xabf3a
	lsrs r0, r0, #23	@ 000abf3a c00d
.org 0xabf3c
	str r0, [sp, #148]	@ 000abf3c 2590
.org 0xabf3e
	mov r5, sp	@ 000abf3e 6d46
.org 0xabf40
	ldr r0, [pc, #164]	@ 000abf40 2948
.org 0xabf42
	mov r8, r0	@ 000abf42 8046
.org 0xabf44
	lsls r1, r7, #3	@ 000abf44 f900
.org 0xabf46
	mov ip, r1	@ 000abf46 8c46
.org 0xabf48
	mov r2, r8	@ 000abf48 4246
.org 0xabf4a
	ldr r0, [r2, #0]	@ 000abf4a 1068
.org 0xabf4c
	ldr r3, [sp, #140]	@ 000abf4c 239b
.org 0xabf4e
	muls r0, r3	@ 000abf4e 5843
.org 0xabf50
	cmp r0, #0	@ 000abf50 0028
.org 0xabf52
	bge.n 0xabf56	@ 000abf52 00da
.org 0xabf54
	adds r0, #255	@ 000abf54 ff30
.org 0xabf56
	asrs r4, r0, #8	@ 000abf56 0412
.org 0xabf58
	mov r6, r8	@ 000abf58 4646
.org 0xabf5a
	ldr r0, [r6, #4]	@ 000abf5a 7068
.org 0xabf5c
	ldr r1, [sp, #144]	@ 000abf5c 2499
.org 0xabf5e
	muls r0, r1	@ 000abf5e 4843
.org 0xabf60
	cmp r0, #0	@ 000abf60 0028
.org 0xabf62
	bge.n 0xabf66	@ 000abf62 00da
.org 0xabf64
	adds r0, #255	@ 000abf64 ff30
.org 0xabf66
	asrs r3, r0, #8	@ 000abf66 0312
.org 0xabf68
	ldr r2, [sp, #148]	@ 000abf68 259a
.org 0xabf6a
	ldr r6, [pc, #128]	@ 000abf6a 204e
.org 0xabf6c
	adds r0, r2, r6	@ 000abf6c 9019
.org 0xabf6e
	movs r2, #0	@ 000abf6e 0022
.org 0xabf70
	ldrsh r1, [r0, r2]	@ 000abf70 815e
.org 0xabf72
	str r1, [sp, #156]	@ 000abf72 2791
.org 0xabf74
	adds r0, r4, #0	@ 000abf74 201c
.org 0xabf76
	muls r0, r1	@ 000abf76 4843
.org 0xabf78
	cmp r0, #0	@ 000abf78 0028
.org 0xabf7a
	bge.n 0xabf7e	@ 000abf7a 00da
.org 0xabf7c
	adds r0, #255	@ 000abf7c ff30
.org 0xabf7e
	asrs r1, r0, #8	@ 000abf7e 0112
.org 0xabf80
	ldr r0, [pc, #104]	@ 000abf80 1a48
.org 0xabf82
	add r0, sl	@ 000abf82 5044
.org 0xabf84
	movs r6, #0	@ 000abf84 0026
.org 0xabf86
	ldrsh r2, [r0, r6]	@ 000abf86 825f
.org 0xabf88
	adds r0, r3, #0	@ 000abf88 181c
.org 0xabf8a
	muls r0, r2	@ 000abf8a 5043
.org 0xabf8c
	cmp r0, #0	@ 000abf8c 0028
.org 0xabf8e
	bge.n 0xabf92	@ 000abf8e 00da
.org 0xabf90
	adds r0, #255	@ 000abf90 ff30
.org 0xabf92
	asrs r0, r0, #8	@ 000abf92 0012
.org 0xabf94
	subs r0, r1, r0	@ 000abf94 081a
.org 0xabf96
	ldr r1, [sp, #128]	@ 000abf96 2099
.org 0xabf98
	adds r0, r1, r0	@ 000abf98 0818
.org 0xabf9a
	str r0, [r5, #0]	@ 000abf9a 2860
.org 0xabf9c
	mov r1, r9	@ 000abf9c 4946
.org 0xabf9e
	add r1, ip	@ 000abf9e 6144
.org 0xabfa0
	adds r0, r4, #0	@ 000abfa0 201c
.org 0xabfa2
	muls r0, r2	@ 000abfa2 5043
.org 0xabfa4
	cmp r0, #0	@ 000abfa4 0028
.org 0xabfa6
	bge.n 0xabfaa	@ 000abfa6 00da
.org 0xabfa8
	adds r0, #255	@ 000abfa8 ff30
.org 0xabfaa
	asrs r2, r0, #8	@ 000abfaa 0212
.org 0xabfac
	ldr r4, [sp, #156]	@ 000abfac 279c
.org 0xabfae
	adds r0, r3, #0	@ 000abfae 181c
.org 0xabfb0
	muls r0, r4	@ 000abfb0 6043
.org 0xabfb2
	cmp r0, #0	@ 000abfb2 0028
.org 0xabfb4
	bge.n 0xabfb8	@ 000abfb4 00da
.org 0xabfb6
	adds r0, #255	@ 000abfb6 ff30
.org 0xabfb8
	asrs r0, r0, #8	@ 000abfb8 0012
.org 0xabfba
	adds r0, r2, r0	@ 000abfba 1018
.org 0xabfbc
	ldr r6, [sp, #132]	@ 000abfbc 219e
.org 0xabfbe
	adds r0, r6, r0	@ 000abfbe 3018
.org 0xabfc0
	str r0, [r1, #0]	@ 000abfc0 0860
.org 0xabfc2
	ldr r0, [r5, #0]	@ 000abfc2 2868
.org 0xabfc4
	asrs r0, r0, #8	@ 000abfc4 0012
.org 0xabfc6
	str r0, [r5, #0]	@ 000abfc6 2860
.org 0xabfc8
	ldr r0, [r1, #0]	@ 000abfc8 0868
.org 0xabfca
	asrs r0, r0, #8	@ 000abfca 0012
.org 0xabfcc
	str r0, [r1, #0]	@ 000abfcc 0860
.org 0xabfce
	adds r5, #8	@ 000abfce 0835
.org 0xabfd0
	movs r0, #8	@ 000abfd0 0820
.org 0xabfd2
	add r8, r0	@ 000abfd2 8044
.org 0xabfd4
	adds r7, #1	@ 000abfd4 0137
.org 0xabfd6
	ldr r1, [sp, #136]	@ 000abfd6 2299
.org 0xabfd8
	cmp r7, r1	@ 000abfd8 8f42
.org 0xabfda
	blt.n 0xabf44	@ 000abfda b3db
.org 0xabfdc
	b.n 0xac0ba	@ 000abfdc 6de0
.org 0xabfde
	.byte 0x00	@ 000abfde data
.org 0xabfdf
	.byte 0x00	@ 000abfdf data
.org 0xabfe0
	.byte 0x50,0x0a,0x00,0x02	@ 000abfe0 data
.org 0xabfe4
	.byte 0xf8,0xe9,0x02,0x02	@ 000abfe4 data
.org 0xabfe8
	.byte 0xb4,0x2c,0x86,0x08	@ 000abfe8 data
.org 0xabfec
	.byte 0x0c,0x93,0x12,0x08	@ 000abfec data
.org 0xabff0
	ldrh r0, [r5, #0]	@ 000abff0 2888
.org 0xabff2
	movs r3, #128	@ 000abff2 8023
.org 0xabff4
	lsls r3, r3, #7	@ 000abff4 db01
.org 0xabff6
	adds r1, r3, #0	@ 000abff6 191c
.org 0xabff8
	orrs r0, r1	@ 000abff8 0843
.org 0xabffa
	strh r0, [r5, #0]	@ 000abffa 2880
.org 0xabffc
	movs r0, #48	@ 000abffc 3020
.org 0xabffe
	strb r0, [r5, #13]	@ 000abffe 6873
.org 0xac000
	movs r0, #255	@ 000ac000 ff20
.org 0xac002
	strb r0, [r5, #14]	@ 000ac002 a873
.org 0xac004
	movs r4, #4	@ 000ac004 0424
.org 0xac006
	str r4, [sp, #136]	@ 000ac006 2294
.org 0xac008
	movs r7, #0	@ 000ac008 0027
.org 0xac00a
	adds r0, r2, #0	@ 000ac00a 101c
.org 0xac00c
	adds r0, #64	@ 000ac00c 4030
.org 0xac00e
	lsls r2, r2, #1	@ 000ac00e 5200
.org 0xac010
	mov sl, r2	@ 000ac010 9246
.org 0xac012
	add r6, sp, #4	@ 000ac012 01ae
.org 0xac014
	mov r9, r6	@ 000ac014 b146
.org 0xac016
	lsls r0, r0, #24	@ 000ac016 0006
.org 0xac018
	lsrs r0, r0, #23	@ 000ac018 c00d
.org 0xac01a
	str r0, [sp, #152]	@ 000ac01a 2690
.org 0xac01c
	mov r5, sp	@ 000ac01c 6d46
.org 0xac01e
	ldr r0, [pc, #240]	@ 000ac01e 3c48
.org 0xac020
	mov r8, r0	@ 000ac020 8046
.org 0xac022
	lsls r1, r7, #3	@ 000ac022 f900
.org 0xac024
	mov ip, r1	@ 000ac024 8c46
.org 0xac026
	mov r2, r8	@ 000ac026 4246
.org 0xac028
	ldr r0, [r2, #0]	@ 000ac028 1068
.org 0xac02a
	ldr r3, [sp, #140]	@ 000ac02a 239b
.org 0xac02c
	muls r0, r3	@ 000ac02c 5843
.org 0xac02e
	cmp r0, #0	@ 000ac02e 0028
.org 0xac030
	bge.n 0xac034	@ 000ac030 00da
.org 0xac032
	adds r0, #255	@ 000ac032 ff30
.org 0xac034
	asrs r4, r0, #8	@ 000ac034 0412
.org 0xac036
	mov r6, r8	@ 000ac036 4646
.org 0xac038
	ldr r0, [r6, #4]	@ 000ac038 7068
.org 0xac03a
	ldr r1, [sp, #144]	@ 000ac03a 2499
.org 0xac03c
	muls r0, r1	@ 000ac03c 4843
.org 0xac03e
	cmp r0, #0	@ 000ac03e 0028
.org 0xac040
	bge.n 0xac044	@ 000ac040 00da
.org 0xac042
	adds r0, #255	@ 000ac042 ff30
.org 0xac044
	asrs r3, r0, #8	@ 000ac044 0312
.org 0xac046
	ldr r2, [sp, #152]	@ 000ac046 269a
.org 0xac048
	ldr r6, [pc, #200]	@ 000ac048 324e
.org 0xac04a
	adds r0, r2, r6	@ 000ac04a 9019
.org 0xac04c
	movs r2, #0	@ 000ac04c 0022
.org 0xac04e
	ldrsh r1, [r0, r2]	@ 000ac04e 815e
.org 0xac050
	str r1, [sp, #156]	@ 000ac050 2791
.org 0xac052
	adds r0, r4, #0	@ 000ac052 201c
.org 0xac054
	muls r0, r1	@ 000ac054 4843
.org 0xac056
	cmp r0, #0	@ 000ac056 0028
.org 0xac058
	bge.n 0xac05c	@ 000ac058 00da
.org 0xac05a
	adds r0, #255	@ 000ac05a ff30
.org 0xac05c
	asrs r1, r0, #8	@ 000ac05c 0112
.org 0xac05e
	ldr r0, [pc, #180]	@ 000ac05e 2d48
.org 0xac060
	add r0, sl	@ 000ac060 5044
.org 0xac062
	movs r6, #0	@ 000ac062 0026
.org 0xac064
	ldrsh r2, [r0, r6]	@ 000ac064 825f
.org 0xac066
	adds r0, r3, #0	@ 000ac066 181c
.org 0xac068
	muls r0, r2	@ 000ac068 5043
.org 0xac06a
	cmp r0, #0	@ 000ac06a 0028
.org 0xac06c
	bge.n 0xac070	@ 000ac06c 00da
.org 0xac06e
	adds r0, #255	@ 000ac06e ff30
.org 0xac070
	asrs r0, r0, #8	@ 000ac070 0012
.org 0xac072
	subs r0, r1, r0	@ 000ac072 081a
.org 0xac074
	ldr r1, [sp, #128]	@ 000ac074 2099
.org 0xac076
	adds r0, r1, r0	@ 000ac076 0818
.org 0xac078
	str r0, [r5, #0]	@ 000ac078 2860
.org 0xac07a
	mov r1, r9	@ 000ac07a 4946
.org 0xac07c
	add r1, ip	@ 000ac07c 6144
.org 0xac07e
	adds r0, r4, #0	@ 000ac07e 201c
.org 0xac080
	muls r0, r2	@ 000ac080 5043
.org 0xac082
	cmp r0, #0	@ 000ac082 0028
.org 0xac084
	bge.n 0xac088	@ 000ac084 00da
.org 0xac086
	adds r0, #255	@ 000ac086 ff30
.org 0xac088
	asrs r2, r0, #8	@ 000ac088 0212
.org 0xac08a
	ldr r4, [sp, #156]	@ 000ac08a 279c
.org 0xac08c
	adds r0, r3, #0	@ 000ac08c 181c
.org 0xac08e
	muls r0, r4	@ 000ac08e 6043
.org 0xac090
	cmp r0, #0	@ 000ac090 0028
.org 0xac092
	bge.n 0xac096	@ 000ac092 00da
.org 0xac094
	adds r0, #255	@ 000ac094 ff30
.org 0xac096
	asrs r0, r0, #8	@ 000ac096 0012
.org 0xac098
	adds r0, r2, r0	@ 000ac098 1018
.org 0xac09a
	ldr r6, [sp, #132]	@ 000ac09a 219e
.org 0xac09c
	adds r0, r6, r0	@ 000ac09c 3018
.org 0xac09e
	str r0, [r1, #0]	@ 000ac09e 0860
.org 0xac0a0
	ldr r0, [r5, #0]	@ 000ac0a0 2868
.org 0xac0a2
	asrs r0, r0, #8	@ 000ac0a2 0012
.org 0xac0a4
	str r0, [r5, #0]	@ 000ac0a4 2860
.org 0xac0a6
	ldr r0, [r1, #0]	@ 000ac0a6 0868
.org 0xac0a8
	asrs r0, r0, #8	@ 000ac0a8 0012
.org 0xac0aa
	str r0, [r1, #0]	@ 000ac0aa 0860
.org 0xac0ac
	adds r5, #8	@ 000ac0ac 0835
.org 0xac0ae
	movs r0, #8	@ 000ac0ae 0820
.org 0xac0b0
	add r8, r0	@ 000ac0b0 8044
.org 0xac0b2
	adds r7, #1	@ 000ac0b2 0137
.org 0xac0b4
	ldr r1, [sp, #136]	@ 000ac0b4 2299
.org 0xac0b6
	cmp r7, r1	@ 000ac0b6 8f42
.org 0xac0b8
	blt.n 0xac022	@ 000ac0b8 b3db
.org 0xac0ba
	movs r5, #160	@ 000ac0ba a025
.org 0xac0bc
	lsls r5, r5, #1	@ 000ac0bc 6d00
.org 0xac0be
	adds r0, r5, #0	@ 000ac0be 281c
.org 0xac0c0
	bl 0xa70	@ 000ac0c0 54f7d6fc
.org 0xac0c4
	adds r4, r0, #0	@ 000ac0c4 041c
.org 0xac0c6
	cmp r4, #0	@ 000ac0c6 002c
.org 0xac0c8
	beq.n 0xac0fe	@ 000ac0c8 19d0
.org 0xac0ca
	movs r0, #0	@ 000ac0ca 0020
.org 0xac0cc
	adds r1, r4, #0	@ 000ac0cc 211c
.org 0xac0ce
	adds r2, r5, #0	@ 000ac0ce 2a1c
.org 0xac0d0
	bl 0xab4	@ 000ac0d0 54f7f0fc
.org 0xac0d4
	adds r0, r4, #0	@ 000ac0d4 201c
.org 0xac0d6
	mov r1, sp	@ 000ac0d6 6946
.org 0xac0d8
	ldr r2, [sp, #136]	@ 000ac0d8 229a
.org 0xac0da
	movs r3, #0	@ 000ac0da 0023
.org 0xac0dc
	bl 0xac340	@ 000ac0dc 00f030f9
.org 0xac0e0
	ldr r2, [pc, #52]	@ 000ac0e0 0d4a
.org 0xac0e2
	movs r3, #186	@ 000ac0e2 ba23
.org 0xac0e4
	lsls r3, r3, #1	@ 000ac0e4 5b00
.org 0xac0e6
	adds r0, r2, r3	@ 000ac0e6 d018
.org 0xac0e8
	str r4, [r0, #0]	@ 000ac0e8 0460
.org 0xac0ea
	movs r4, #188	@ 000ac0ea bc24
.org 0xac0ec
	lsls r4, r4, #1	@ 000ac0ec 6400
.org 0xac0ee
	adds r1, r2, r4	@ 000ac0ee 1119
.org 0xac0f0
	ldr r0, [pc, #40]	@ 000ac0f0 0a48
.org 0xac0f2
	str r0, [r1, #0]	@ 000ac0f2 0860
.org 0xac0f4
	movs r6, #190	@ 000ac0f4 be26
.org 0xac0f6
	lsls r6, r6, #1	@ 000ac0f6 7600
.org 0xac0f8
	adds r1, r2, r6	@ 000ac0f8 9119
.org 0xac0fa
	ldr r0, [pc, #36]	@ 000ac0fa 0948
