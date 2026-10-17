@ FUN_0803cf18  entry 0x0803cf18  size 406
.thumb
.org 0x3cf18
FUN_0803cf18:
	push {r4, r5, r6, r7, lr}	@ 0003cf18 f0b5
.org 0x3cf1a
	mov r7, r8	@ 0003cf1a 4746
.org 0x3cf1c
	push {r7}	@ 0003cf1c 80b4
.org 0x3cf1e
	sub sp, #8	@ 0003cf1e 82b0
.org 0x3cf20
	adds r5, r0, #0	@ 0003cf20 051c
.org 0x3cf22
	adds r4, r5, #0	@ 0003cf22 2c1c
.org 0x3cf24
	adds r4, #180	@ 0003cf24 b434
.org 0x3cf26
	ldr r0, [r4, #0]	@ 0003cf26 2068
.org 0x3cf28
	mov r8, r0	@ 0003cf28 8046
.org 0x3cf2a
	ldrb r2, [r5, #14]	@ 0003cf2a aa7b
.org 0x3cf2c
	cmp r2, #0	@ 0003cf2c 002a
.org 0x3cf2e
	bne.n 0x3cffc	@ 0003cf2e 65d1
.org 0x3cf30
	ldrb r0, [r0, #30]	@ 0003cf30 807f
.org 0x3cf32
	lsls r0, r0, #8	@ 0003cf32 0002
.org 0x3cf34
	mov r1, r8	@ 0003cf34 4146
.org 0x3cf36
	adds r1, #112	@ 0003cf36 7031
.org 0x3cf38
	ldrb r1, [r1, #0]	@ 0003cf38 0978
.org 0x3cf3a
	orrs r1, r0	@ 0003cf3a 0143
.org 0x3cf3c
	movs r0, #208	@ 0003cf3c d020
.org 0x3cf3e
	lsls r0, r0, #5	@ 0003cf3e 4001
.org 0x3cf40
	adds r7, r5, #0	@ 0003cf40 2f1c
.org 0x3cf42
	adds r7, #113	@ 0003cf42 7137
.org 0x3cf44
	cmp r1, r0	@ 0003cf44 8142
.org 0x3cf46
	beq.n 0x3cf90	@ 0003cf46 23d0
.org 0x3cf48
	mov r0, r8	@ 0003cf48 4046
.org 0x3cf4a
	adds r0, #113	@ 0003cf4a 7130
.org 0x3cf4c
	movs r1, #0	@ 0003cf4c 0021
.org 0x3cf4e
	ldrsb r1, [r0, r1]	@ 0003cf4e 4156
.org 0x3cf50
	movs r0, #0	@ 0003cf50 0020
.org 0x3cf52
	ldrsb r0, [r7, r0]	@ 0003cf52 3856
.org 0x3cf54
	cmp r1, r0	@ 0003cf54 8142
.org 0x3cf56
	beq.n 0x3cf90	@ 0003cf56 1bd0
.org 0x3cf58
	ldrb r1, [r5, #10]	@ 0003cf58 a97a
.org 0x3cf5a
	movs r0, #254	@ 0003cf5a fe20
.org 0x3cf5c
	ands r0, r1	@ 0003cf5c 0840
.org 0x3cf5e
	movs r1, #253	@ 0003cf5e fd21
.org 0x3cf60
	ands r0, r1	@ 0003cf60 0840
.org 0x3cf62
	strb r0, [r5, #10]	@ 0003cf62 a872
.org 0x3cf64
	adds r0, r5, #0	@ 0003cf64 281c
.org 0x3cf66
	adds r0, #140	@ 0003cf66 8c30
.org 0x3cf68
	str r2, [r0, #0]	@ 0003cf68 0260
.org 0x3cf6a
	adds r0, #4	@ 0003cf6a 0430
.org 0x3cf6c
	str r2, [r0, #0]	@ 0003cf6c 0260
.org 0x3cf6e
	adds r0, #4	@ 0003cf6e 0430
.org 0x3cf70
	strb r2, [r0, #0]	@ 0003cf70 0270
.org 0x3cf72
	ldrb r1, [r5, #10]	@ 0003cf72 a97a
.org 0x3cf74
	movs r0, #251	@ 0003cf74 fb20
.org 0x3cf76
	ands r0, r1	@ 0003cf76 0840
.org 0x3cf78
	strb r0, [r5, #10]	@ 0003cf78 a872
.org 0x3cf7a
	ldr r1, [pc, #16]	@ 0003cf7a 0449
.org 0x3cf7c
	ldrb r0, [r5, #9]	@ 0003cf7c 687a
.org 0x3cf7e
	lsls r0, r0, #2	@ 0003cf7e 8000
.org 0x3cf80
	adds r0, r0, r1	@ 0003cf80 4018
.org 0x3cf82
	movs r1, #3	@ 0003cf82 0321
.org 0x3cf84
	str r1, [r5, #12]	@ 0003cf84 e960
.org 0x3cf86
	ldr r0, [r0, #0]	@ 0003cf86 0068
.org 0x3cf88
	ldr r0, [r0, #12]	@ 0003cf88 c068
.org 0x3cf8a
	b.n 0x3d0b2	@ 0003cf8a 92e0
.org 0x3cf8c
	.byte 0xf8,0x39,0x85,0x08	@ 0003cf8c data
.org 0x3cf90
	adds r0, r5, #0	@ 0003cf90 281c
.org 0x3cf92
	bl 0x1cff0	@ 0003cf92 e0f72df8
.org 0x3cf96
	adds r0, r5, #0	@ 0003cf96 281c
.org 0x3cf98
	adds r0, #116	@ 0003cf98 7430
.org 0x3cf9a
	ldr r2, [pc, #88]	@ 0003cf9a 164a
.org 0x3cf9c
	ldrb r1, [r5, #16]	@ 0003cf9c 297c
.org 0x3cf9e
	lsls r1, r1, #2	@ 0003cf9e 8900
.org 0x3cfa0
	adds r1, r1, r2	@ 0003cfa0 8918
.org 0x3cfa2
	movs r2, #0	@ 0003cfa2 0022
.org 0x3cfa4
	ldrsb r2, [r7, r2]	@ 0003cfa4 ba56
.org 0x3cfa6
	ldr r1, [r1, #0]	@ 0003cfa6 0968
.org 0x3cfa8
	lsls r2, r2, #2	@ 0003cfa8 9200
.org 0x3cfaa
	adds r2, r2, r1	@ 0003cfaa 5218
.org 0x3cfac
	ldr r1, [r2, #0]	@ 0003cfac 1168
.org 0x3cfae
	adds r6, r5, #0	@ 0003cfae 2e1c
.org 0x3cfb0
	adds r6, #180	@ 0003cfb0 b436
.org 0x3cfb2
	ldrb r2, [r6, #13]	@ 0003cfb2 727b
.org 0x3cfb4
	ldrb r3, [r6, #12]	@ 0003cfb4 337b
.org 0x3cfb6
	ldrb r4, [r6, #14]	@ 0003cfb6 b47b
.org 0x3cfb8
	str r4, [sp, #0]	@ 0003cfb8 0094
.org 0x3cfba
	ldrb r4, [r7, #0]	@ 0003cfba 3c78
.org 0x3cfbc
	lsls r4, r4, #24	@ 0003cfbc 2406
.org 0x3cfbe
	asrs r4, r4, #25	@ 0003cfbe 6416
.org 0x3cfc0
	adds r4, #1	@ 0003cfc0 0134
.org 0x3cfc2
	str r4, [sp, #4]	@ 0003cfc2 0194
.org 0x3cfc4
	bl 0x5794	@ 0003cfc4 c8f7e6fb
.org 0x3cfc8
	adds r0, r5, #0	@ 0003cfc8 281c
.org 0x3cfca
	adds r0, #115	@ 0003cfca 7330
.org 0x3cfcc
	ldrb r0, [r0, #0]	@ 0003cfcc 0078
.org 0x3cfce
	cmp r0, #3	@ 0003cfce 0328
.org 0x3cfd0
	bne.n 0x3d0b4	@ 0003cfd0 70d1
.org 0x3cfd2
	movs r1, #0	@ 0003cfd2 0021
.org 0x3cfd4
	movs r0, #1	@ 0003cfd4 0120
.org 0x3cfd6
	strb r0, [r5, #14]	@ 0003cfd6 a873
.org 0x3cfd8
	strb r1, [r5, #15]	@ 0003cfd8 e973
.org 0x3cfda
	movs r0, #10	@ 0003cfda 0a20
.org 0x3cfdc
	strb r0, [r6, #13]	@ 0003cfdc 7073
.org 0x3cfde
	mov r0, r8	@ 0003cfde 4046
.org 0x3cfe0
	bl 0x3a4e8	@ 0003cfe0 fdf782fa
.org 0x3cfe4
	ldrb r1, [r6, #13]	@ 0003cfe4 717b
.org 0x3cfe6
	adds r0, r0, r1	@ 0003cfe6 4018
.org 0x3cfe8
	strb r0, [r6, #13]	@ 0003cfe8 7073
.org 0x3cfea
	ldr r0, [pc, #12]	@ 0003cfea 0348
.org 0x3cfec
	ldrb r0, [r0, #0]	@ 0003cfec 0078
.org 0x3cfee
	strb r0, [r6, #12]	@ 0003cfee 3073
.org 0x3cff0
	b.n 0x3d0b4	@ 0003cff0 60e0
.org 0x3cff2
	.byte 0x00	@ 0003cff2 data
.org 0x3cff3
	.byte 0x00	@ 0003cff3 data
.org 0x3cff4
	.byte 0x10,0x50,0x85,0x08	@ 0003cff4 data
.org 0x3cff8
	.byte 0xb0,0x3e,0x85,0x08	@ 0003cff8 data
.org 0x3cffc
	cmp r2, #1	@ 0003cffc 012a
.org 0x3cffe
	bne.n 0x3d074	@ 0003cffe 39d1
.org 0x3d000
	ldrb r0, [r5, #15]	@ 0003d000 e87b
.org 0x3d002
	cmp r0, #0	@ 0003d002 0028
.org 0x3d004
	bne.n 0x3d01a	@ 0003d004 09d1
.org 0x3d006
	movs r1, #212	@ 0003d006 d421
.org 0x3d008
	lsls r1, r1, #7	@ 0003d008 c901
.org 0x3d00a
	adds r0, r5, #0	@ 0003d00a 281c
.org 0x3d00c
	movs r2, #4	@ 0003d00c 0422
.org 0x3d00e
	movs r3, #2	@ 0003d00e 0223
.org 0x3d010
	bl 0x1cfc8	@ 0003d010 dff7daff
.org 0x3d014
	ldrb r0, [r5, #15]	@ 0003d014 e87b
.org 0x3d016
	adds r0, #1	@ 0003d016 0130
.org 0x3d018
	strb r0, [r5, #15]	@ 0003d018 e873
.org 0x3d01a
	adds r0, r5, #0	@ 0003d01a 281c
.org 0x3d01c
	bl 0x1cff0	@ 0003d01c dff7e8ff
.org 0x3d020
	adds r0, r5, #0	@ 0003d020 281c
.org 0x3d022
	adds r0, #116	@ 0003d022 7430
.org 0x3d024
	ldr r2, [pc, #72]	@ 0003d024 124a
.org 0x3d026
	adds r1, r5, #0	@ 0003d026 291c
.org 0x3d028
	adds r1, #113	@ 0003d028 7131
.org 0x3d02a
	ldrb r1, [r1, #0]	@ 0003d02a 0978
.org 0x3d02c
	lsls r1, r1, #24	@ 0003d02c 0906
.org 0x3d02e
	asrs r1, r1, #24	@ 0003d02e 0916
.org 0x3d030
	ldr r2, [r2, #20]	@ 0003d030 5269
.org 0x3d032
	lsls r1, r1, #2	@ 0003d032 8900
.org 0x3d034
	adds r1, r1, r2	@ 0003d034 8918
.org 0x3d036
	ldr r1, [r1, #0]	@ 0003d036 0968
.org 0x3d038
	ldrb r2, [r4, #13]	@ 0003d038 627b
.org 0x3d03a
	ldrb r3, [r4, #12]	@ 0003d03a 237b
.org 0x3d03c
	ldrb r4, [r4, #14]	@ 0003d03c a47b
.org 0x3d03e
	str r4, [sp, #0]	@ 0003d03e 0094
.org 0x3d040
	movs r4, #1	@ 0003d040 0124
.org 0x3d042
	negs r4, r4	@ 0003d042 6442
.org 0x3d044
	str r4, [sp, #4]	@ 0003d044 0194
.org 0x3d046
	bl 0x5794	@ 0003d046 c8f7a5fb
.org 0x3d04a
	mov r1, r8	@ 0003d04a 4146
.org 0x3d04c
	ldrb r0, [r1, #30]	@ 0003d04c 887f
.org 0x3d04e
	lsls r0, r0, #8	@ 0003d04e 0002
.org 0x3d050
	adds r1, #112	@ 0003d050 7031
.org 0x3d052
	ldrb r1, [r1, #0]	@ 0003d052 0978
.org 0x3d054
	orrs r1, r0	@ 0003d054 0143
.org 0x3d056
	movs r0, #200	@ 0003d056 c820
.org 0x3d058
	lsls r0, r0, #5	@ 0003d058 4001
.org 0x3d05a
	cmp r1, r0	@ 0003d05a 8142
.org 0x3d05c
	beq.n 0x3d0b4	@ 0003d05c 2ad0
.org 0x3d05e
	movs r0, #208	@ 0003d05e d020
.org 0x3d060
	lsls r0, r0, #5	@ 0003d060 4001
.org 0x3d062
	cmp r1, r0	@ 0003d062 8142
.org 0x3d064
	beq.n 0x3d0b4	@ 0003d064 26d0
.org 0x3d066
	movs r1, #0	@ 0003d066 0021
.org 0x3d068
	movs r0, #2	@ 0003d068 0220
.org 0x3d06a
	strb r0, [r5, #14]	@ 0003d06a a873
.org 0x3d06c
	strb r1, [r5, #15]	@ 0003d06c e973
.org 0x3d06e
	b.n 0x3d0b4	@ 0003d06e 21e0
.org 0x3d070
	.byte 0x10,0x50,0x85,0x08	@ 0003d070 data
.org 0x3d074
	ldrb r0, [r5, #15]	@ 0003d074 e87b
.org 0x3d076
	cmp r0, #0	@ 0003d076 0028
.org 0x3d078
	bne.n 0x3d088	@ 0003d078 06d1
.org 0x3d07a
	ldr r1, [pc, #68]	@ 0003d07a 1149
.org 0x3d07c
	adds r0, r5, #0	@ 0003d07c 281c
.org 0x3d07e
	bl 0x1cf00	@ 0003d07e dff73fff
.org 0x3d082
	ldrb r0, [r5, #15]	@ 0003d082 e87b
.org 0x3d084
	adds r0, #1	@ 0003d084 0130
.org 0x3d086
	strb r0, [r5, #15]	@ 0003d086 e873
.org 0x3d088
	adds r0, r5, #0	@ 0003d088 281c
.org 0x3d08a
	bl 0x1cff0	@ 0003d08a dff7b1ff
.org 0x3d08e
	adds r0, r5, #0	@ 0003d08e 281c
.org 0x3d090
	adds r0, #116	@ 0003d090 7430
.org 0x3d092
	ldr r1, [pc, #48]	@ 0003d092 0c49
.org 0x3d094
	bl 0x5784	@ 0003d094 c8f776fb
.org 0x3d098
	adds r0, r5, #0	@ 0003d098 281c
.org 0x3d09a
	adds r0, #115	@ 0003d09a 7330
.org 0x3d09c
	ldrb r0, [r0, #0]	@ 0003d09c 0078
.org 0x3d09e
	cmp r0, #3	@ 0003d09e 0328
.org 0x3d0a0
	bne.n 0x3d0b4	@ 0003d0a0 08d1
.org 0x3d0a2
	ldr r1, [pc, #36]	@ 0003d0a2 0949
.org 0x3d0a4
	ldrb r0, [r5, #9]	@ 0003d0a4 687a
.org 0x3d0a6
	lsls r0, r0, #2	@ 0003d0a6 8000
.org 0x3d0a8
	adds r0, r0, r1	@ 0003d0a8 4018
.org 0x3d0aa
	movs r1, #2	@ 0003d0aa 0221
.org 0x3d0ac
	str r1, [r5, #12]	@ 0003d0ac e960
