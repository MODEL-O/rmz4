@ FUN_080a2f88  entry 0x080a2f88  size 294
.thumb
.org 0xa2f88
FUN_080a2f88:
	push {r4, r5, r6, lr}	@ 000a2f88 70b5
.org 0xa2f8a
	sub sp, #8	@ 000a2f8a 82b0
.org 0xa2f8c
	adds r4, r0, #0	@ 000a2f8c 041c
.org 0xa2f8e
	ldr r1, [pc, #236]	@ 000a2f8e 3b49
.org 0xa2f90
	mov r0, sp	@ 000a2f90 6846
.org 0xa2f92
	movs r2, #6	@ 000a2f92 0622
.org 0xa2f94
	bl 0x129258	@ 000a2f94 86f060f9
.org 0xa2f98
	ldrb r6, [r4, #17]	@ 000a2f98 667c
.org 0xa2f9a
	ldrb r0, [r4, #10]	@ 000a2f9a a07a
.org 0xa2f9c
	lsrs r5, r0, #4	@ 000a2f9c 0509
.org 0xa2f9e
	movs r0, #1	@ 000a2f9e 0120
.org 0xa2fa0
	ands r5, r0	@ 000a2fa0 0540
.org 0xa2fa2
	ldrb r0, [r4, #15]	@ 000a2fa2 e07b
.org 0xa2fa4
	cmp r0, #0	@ 000a2fa4 0028
.org 0xa2fa6
	bne.n 0xa301a	@ 000a2fa6 38d1
.org 0xa2fa8
	adds r0, r4, #0	@ 000a2fa8 201c
.org 0xa2faa
	adds r0, #116	@ 000a2faa 7430
.org 0xa2fac
	ldr r1, [pc, #208]	@ 000a2fac 3449
.org 0xa2fae
	bl 0x5784	@ 000a2fae 62f7e9fb
.org 0xa2fb2
	ldrb r1, [r4, #10]	@ 000a2fb2 a17a
.org 0xa2fb4
	movs r0, #1	@ 000a2fb4 0120
.org 0xa2fb6
	orrs r0, r1	@ 000a2fb6 0843
.org 0xa2fb8
	strb r0, [r4, #10]	@ 000a2fb8 a072
.org 0xa2fba
	ldr r1, [pc, #200]	@ 000a2fba 3249
.org 0xa2fbc
	adds r0, r4, #0	@ 000a2fbc 201c
.org 0xa2fbe
	bl 0x1cf00	@ 000a2fbe 79f79fff
.org 0xa2fc2
	mov r1, sp	@ 000a2fc2 6946
.org 0xa2fc4
	adds r0, r1, r6	@ 000a2fc4 8819
.org 0xa2fc6
	ldrb r0, [r0, #0]	@ 000a2fc6 0078
.org 0xa2fc8
	movs r1, #160	@ 000a2fc8 a021
.org 0xa2fca
	lsls r1, r1, #1	@ 000a2fca 4900
.org 0xa2fcc
	subs r1, r1, r0	@ 000a2fcc 091a
.org 0xa2fce
	lsls r2, r5, #1	@ 000a2fce 6a00
.org 0xa2fd0
	muls r1, r2	@ 000a2fd0 5143
.org 0xa2fd2
	adds r0, r0, r1	@ 000a2fd2 4018
.org 0xa2fd4
	lsls r0, r0, #24	@ 000a2fd4 0006
.org 0xa2fd6
	lsrs r0, r0, #24	@ 000a2fd6 000e
.org 0xa2fd8
	adds r2, r0, #0	@ 000a2fd8 021c
.org 0xa2fda
	ldr r3, [pc, #172]	@ 000a2fda 2b4b
.org 0xa2fdc
	adds r0, #64	@ 000a2fdc 4030
.org 0xa2fde
	lsls r0, r0, #24	@ 000a2fde 0006
.org 0xa2fe0
	lsrs r0, r0, #23	@ 000a2fe0 c00d
.org 0xa2fe2
	adds r0, r0, r3	@ 000a2fe2 c018
.org 0xa2fe4
	movs r5, #0	@ 000a2fe4 0025
.org 0xa2fe6
	ldrsh r1, [r0, r5]	@ 000a2fe6 415f
.org 0xa2fe8
	lsls r0, r1, #3	@ 000a2fe8 c800
.org 0xa2fea
	adds r0, r0, r1	@ 000a2fea 4018
.org 0xa2fec
	lsls r0, r0, #6	@ 000a2fec 8001
.org 0xa2fee
	cmp r0, #0	@ 000a2fee 0028
.org 0xa2ff0
	bge.n 0xa2ff4	@ 000a2ff0 00da
.org 0xa2ff2
	adds r0, #255	@ 000a2ff2 ff30
.org 0xa2ff4
	asrs r0, r0, #8	@ 000a2ff4 0012
.org 0xa2ff6
	str r0, [r4, #92]	@ 000a2ff6 e065
.org 0xa2ff8
	lsls r0, r2, #1	@ 000a2ff8 5000
.org 0xa2ffa
	adds r0, r0, r3	@ 000a2ffa c018
.org 0xa2ffc
	movs r2, #0	@ 000a2ffc 0022
.org 0xa2ffe
	ldrsh r1, [r0, r2]	@ 000a2ffe 815e
.org 0xa3000
	lsls r0, r1, #3	@ 000a3000 c800
.org 0xa3002
	adds r0, r0, r1	@ 000a3002 4018
.org 0xa3004
	lsls r0, r0, #6	@ 000a3004 8001
.org 0xa3006
	cmp r0, #0	@ 000a3006 0028
.org 0xa3008
	bge.n 0xa300c	@ 000a3008 00da
.org 0xa300a
	adds r0, #255	@ 000a300a ff30
.org 0xa300c
	asrs r0, r0, #8	@ 000a300c 0012
.org 0xa300e
	str r0, [r4, #96]	@ 000a300e 2066
.org 0xa3010
	ldr r0, [r4, #84]	@ 000a3010 606d
.org 0xa3012
	str r0, [r4, #100]	@ 000a3012 6066
.org 0xa3014
	ldrb r0, [r4, #15]	@ 000a3014 e07b
.org 0xa3016
	adds r0, #1	@ 000a3016 0130
.org 0xa3018
	strb r0, [r4, #15]	@ 000a3018 e073
.org 0xa301a
	adds r0, r4, #0	@ 000a301a 201c
.org 0xa301c
	bl 0x1cff0	@ 000a301c 79f7e8ff
.org 0xa3020
	ldr r0, [r4, #84]	@ 000a3020 606d
.org 0xa3022
	ldr r1, [r4, #92]	@ 000a3022 e16d
.org 0xa3024
	adds r0, r0, r1	@ 000a3024 4018
.org 0xa3026
	str r0, [r4, #84]	@ 000a3026 6065
.org 0xa3028
	ldr r0, [r4, #88]	@ 000a3028 a06d
.org 0xa302a
	ldr r1, [r4, #96]	@ 000a302a 216e
.org 0xa302c
	adds r0, r0, r1	@ 000a302c 4018
.org 0xa302e
	str r0, [r4, #88]	@ 000a302e a065
.org 0xa3030
	ldr r0, [pc, #88]	@ 000a3030 1648
.org 0xa3032
	adds r1, r4, #0	@ 000a3032 211c
.org 0xa3034
	adds r1, #84	@ 000a3034 5431
.org 0xa3036
	bl 0x1fb14	@ 000a3036 7cf76dfd
.org 0xa303a
	movs r1, #128	@ 000a303a 8021
.org 0xa303c
	lsls r1, r1, #8	@ 000a303c 0902
.org 0xa303e
	cmp r0, r1	@ 000a303e 8842
.org 0xa3040
	bls.n 0xa3094	@ 000a3040 28d9
.org 0xa3042
	ldrb r1, [r4, #10]	@ 000a3042 a17a
.org 0xa3044
	movs r0, #254	@ 000a3044 fe20
.org 0xa3046
	ands r0, r1	@ 000a3046 0840
.org 0xa3048
	movs r2, #0	@ 000a3048 0022
.org 0xa304a
	movs r1, #253	@ 000a304a fd21
.org 0xa304c
	ands r0, r1	@ 000a304c 0840
.org 0xa304e
	strb r0, [r4, #10]	@ 000a304e a072
.org 0xa3050
	adds r0, r4, #0	@ 000a3050 201c
.org 0xa3052
	adds r0, #140	@ 000a3052 8c30
.org 0xa3054
	str r2, [r0, #0]	@ 000a3054 0260
.org 0xa3056
	adds r0, #4	@ 000a3056 0430
.org 0xa3058
	str r2, [r0, #0]	@ 000a3058 0260
.org 0xa305a
	adds r0, #4	@ 000a305a 0430
.org 0xa305c
	strb r2, [r0, #0]	@ 000a305c 0270
.org 0xa305e
	ldrb r1, [r4, #10]	@ 000a305e a17a
.org 0xa3060
	movs r0, #251	@ 000a3060 fb20
.org 0xa3062
	ands r0, r1	@ 000a3062 0840
.org 0xa3064
	strb r0, [r4, #10]	@ 000a3064 a072
.org 0xa3066
	ldr r1, [pc, #40]	@ 000a3066 0a49
.org 0xa3068
	ldrb r0, [r4, #9]	@ 000a3068 607a
.org 0xa306a
	lsls r0, r0, #2	@ 000a306a 8000
.org 0xa306c
	adds r0, r0, r1	@ 000a306c 4018
.org 0xa306e
	movs r1, #3	@ 000a306e 0321
.org 0xa3070
	str r1, [r4, #12]	@ 000a3070 e160
.org 0xa3072
	ldr r0, [r0, #0]	@ 000a3072 0068
.org 0xa3074
	ldr r0, [r0, #12]	@ 000a3074 c068
.org 0xa3076
	str r0, [r4, #20]	@ 000a3076 6061
.org 0xa3078
	b.n 0xa30c0	@ 000a3078 22e0
.org 0xa307a
	.byte 0x00	@ 000a307a data
.org 0xa307b
	.byte 0x00	@ 000a307b data
.org 0xa307c
	.byte 0x44,0x9d,0x12,0x08	@ 000a307c data
.org 0xa3080
	.byte 0x6c,0x1d,0x86,0x08	@ 000a3080 data
.org 0xa3084
	.byte 0x03,0x84,0x00,0x00	@ 000a3084 data
.org 0xa3088
	.byte 0x0c,0x93,0x12,0x08	@ 000a3088 data
.org 0xa308c
	.byte 0xf8,0xe9,0x02,0x02	@ 000a308c data
.org 0xa3090
	.byte 0x40,0xdb,0x85,0x08	@ 000a3090 data
.org 0xa3094
	ldr r0, [r4, #100]	@ 000a3094 606e
.org 0xa3096
	ldr r1, [r4, #84]	@ 000a3096 616d
.org 0xa3098
	subs r0, r0, r1	@ 000a3098 401a
.org 0xa309a
	movs r5, #180	@ 000a309a b425
.org 0xa309c
	lsls r5, r5, #9	@ 000a309c 6d02
.org 0xa309e
	adds r0, r0, r5	@ 000a309e 4019
.org 0xa30a0
	movs r1, #180	@ 000a30a0 b421
.org 0xa30a2
	lsls r1, r1, #10	@ 000a30a2 8902
.org 0xa30a4
	cmp r0, r1	@ 000a30a4 8842
.org 0xa30a6
	bls.n 0xa30c0	@ 000a30a6 0bd9
.org 0xa30a8
	ldr r1, [pc, #28]	@ 000a30a8 0749
.org 0xa30aa
	ldrb r0, [r4, #9]	@ 000a30aa 607a
.org 0xa30ac
	lsls r0, r0, #2	@ 000a30ac 8000
