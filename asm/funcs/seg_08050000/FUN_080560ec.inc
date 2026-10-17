@ FUN_080560ec  entry 0x080560ec  size 310
.thumb
.org 0x560ec
FUN_080560ec:
	push {r4, r5, r6, r7, lr}	@ 000560ec f0b5
.org 0x560ee
	mov r7, r8	@ 000560ee 4746
.org 0x560f0
	push {r7}	@ 000560f0 80b4
.org 0x560f2
	adds r5, r0, #0	@ 000560f2 051c
.org 0x560f4
	ldr r0, [pc, #264]	@ 000560f4 4248
.org 0x560f6
	ldr r0, [r0, #0]	@ 000560f6 0068
.org 0x560f8
	mov r8, r0	@ 000560f8 8046
.org 0x560fa
	ldrb r0, [r5, #15]	@ 000560fa e87b
.org 0x560fc
	cmp r0, #0	@ 000560fc 0028
.org 0x560fe
	bne.n 0x56162	@ 000560fe 30d1
.org 0x56100
	movs r0, #250	@ 00056100 fa20
.org 0x56102
	bl 0x2b10	@ 00056102 acf705fd
.org 0x56106
	ldr r1, [pc, #252]	@ 00056106 3f49
.org 0x56108
	adds r0, r5, #0	@ 00056108 281c
.org 0x5610a
	bl 0x1cf00	@ 0005610a c6f7f9fe
.org 0x5610e
	adds r0, r5, #0	@ 0005610e 281c
.org 0x56110
	bl 0x5977c	@ 00056110 03f034fb
.org 0x56114
	adds r4, r0, #0	@ 00056114 041c
.org 0x56116
	ldr r1, [pc, #240]	@ 00056116 3c49
.org 0x56118
	lsls r0, r4, #1	@ 00056118 6000
.org 0x5611a
	adds r0, r0, r1	@ 0005611a 4018
.org 0x5611c
	ldrh r4, [r0, #0]	@ 0005611c 0488
.org 0x5611e
	adds r0, r5, #0	@ 0005611e 281c
.org 0x56120
	adds r0, #194	@ 00056120 c230
.org 0x56122
	strh r4, [r0, #0]	@ 00056122 0480
.org 0x56124
	adds r0, r5, #0	@ 00056124 281c
.org 0x56126
	bl 0x598f4	@ 00056126 03f0e5fb
.org 0x5612a
	adds r1, r0, #0	@ 0005612a 011c
.org 0x5612c
	ldr r2, [pc, #220]	@ 0005612c 374a
.org 0x5612e
	adds r0, #64	@ 0005612e 4030
.org 0x56130
	lsls r0, r0, #24	@ 00056130 0006
.org 0x56132
	lsrs r0, r0, #23	@ 00056132 c00d
.org 0x56134
	adds r0, r0, r2	@ 00056134 8018
.org 0x56136
	movs r3, #0	@ 00056136 0023
.org 0x56138
	ldrsh r0, [r0, r3]	@ 00056138 c05e
.org 0x5613a
	muls r0, r4	@ 0005613a 6043
.org 0x5613c
	cmp r0, #0	@ 0005613c 0028
.org 0x5613e
	bge.n 0x56142	@ 0005613e 00da
.org 0x56140
	adds r0, #255	@ 00056140 ff30
.org 0x56142
	asrs r0, r0, #8	@ 00056142 0012
.org 0x56144
	str r0, [r5, #92]	@ 00056144 e865
.org 0x56146
	lsls r0, r1, #24	@ 00056146 0806
.org 0x56148
	lsrs r0, r0, #23	@ 00056148 c00d
.org 0x5614a
	adds r0, r0, r2	@ 0005614a 8018
.org 0x5614c
	movs r1, #0	@ 0005614c 0021
.org 0x5614e
	ldrsh r0, [r0, r1]	@ 0005614e 405e
.org 0x56150
	muls r0, r4	@ 00056150 6043
.org 0x56152
	cmp r0, #0	@ 00056152 0028
.org 0x56154
	bge.n 0x56158	@ 00056154 00da
.org 0x56156
	adds r0, #255	@ 00056156 ff30
.org 0x56158
	asrs r0, r0, #8	@ 00056158 0012
.org 0x5615a
	str r0, [r5, #96]	@ 0005615a 2866
.org 0x5615c
	ldrb r0, [r5, #15]	@ 0005615c e87b
.org 0x5615e
	adds r0, #1	@ 0005615e 0130
.org 0x56160
	strb r0, [r5, #15]	@ 00056160 e873
.org 0x56162
	adds r0, r5, #0	@ 00056162 281c
.org 0x56164
	bl 0x1cff0	@ 00056164 c6f744ff
.org 0x56168
	adds r6, r5, #0	@ 00056168 2e1c
.org 0x5616a
	adds r6, #116	@ 0005616a 7436
.org 0x5616c
	ldr r2, [pc, #160]	@ 0005616c 284a
.org 0x5616e
	ldrb r0, [r5, #30]	@ 0005616e a87f
.org 0x56170
	lsls r0, r0, #8	@ 00056170 0002
.org 0x56172
	adds r1, r5, #0	@ 00056172 291c
.org 0x56174
	adds r1, #112	@ 00056174 7031
.org 0x56176
	ldrb r1, [r1, #0]	@ 00056176 0978
.org 0x56178
	orrs r0, r1	@ 00056178 0843
.org 0x5617a
	ldr r3, [pc, #152]	@ 0005617a 264b
.org 0x5617c
	adds r0, r0, r3	@ 0005617c c018
.org 0x5617e
	lsls r0, r0, #2	@ 0005617e 8000
.org 0x56180
	adds r0, r0, r2	@ 00056180 8018
.org 0x56182
	adds r1, r5, #0	@ 00056182 291c
.org 0x56184
	adds r1, #113	@ 00056184 7131
.org 0x56186
	ldrb r1, [r1, #0]	@ 00056186 0978
.org 0x56188
	lsls r1, r1, #24	@ 00056188 0906
.org 0x5618a
	asrs r1, r1, #24	@ 0005618a 0916
.org 0x5618c
	ldr r0, [r0, #0]	@ 0005618c 0068
.org 0x5618e
	lsls r1, r1, #2	@ 0005618e 8900
.org 0x56190
	adds r1, r1, r0	@ 00056190 0918
.org 0x56192
	ldr r0, [r1, #0]	@ 00056192 0868
.org 0x56194
	ldrb r0, [r0, #0]	@ 00056194 0078
.org 0x56196
	lsls r1, r0, #1	@ 00056196 4100
.org 0x56198
	adds r1, r1, r0	@ 00056198 0918
.org 0x5619a
	lsls r1, r1, #3	@ 0005619a c900
.org 0x5619c
	ldr r7, [pc, #120]	@ 0005619c 1e4f
.org 0x5619e
	adds r1, r1, r7	@ 0005619e c919
.org 0x561a0
	adds r0, r6, #0	@ 000561a0 301c
.org 0x561a2
	bl 0x5784	@ 000561a2 aff7effa
.org 0x561a6
	ldr r4, [r5, #84]	@ 000561a6 6c6d
.org 0x561a8
	ldr r0, [r5, #92]	@ 000561a8 e86d
.org 0x561aa
	adds r4, r4, r0	@ 000561aa 2418
.org 0x561ac
	str r4, [r5, #84]	@ 000561ac 6c65
.org 0x561ae
	adds r1, r5, #0	@ 000561ae 291c
.org 0x561b0
	adds r1, #188	@ 000561b0 bc31
.org 0x561b2
	ldr r4, [r1, #0]	@ 000561b2 0c68
.org 0x561b4
	ldr r0, [r5, #96]	@ 000561b4 286e
.org 0x561b6
	adds r4, r4, r0	@ 000561b6 2418
.org 0x561b8
	str r4, [r1, #0]	@ 000561b8 0c60
.org 0x561ba
	ldr r1, [pc, #80]	@ 000561ba 1449
.org 0x561bc
	adds r0, r5, #0	@ 000561bc 281c
.org 0x561be
	adds r0, #181	@ 000561be b530
.org 0x561c0
	ldrb r0, [r0, #0]	@ 000561c0 0078
.org 0x561c2
	lsls r0, r0, #1	@ 000561c2 4000
.org 0x561c4
	adds r0, r0, r1	@ 000561c4 4018
.org 0x561c6
	movs r1, #0	@ 000561c6 0021
.org 0x561c8
	ldrsh r0, [r0, r1]	@ 000561c8 405e
.org 0x561ca
	lsls r0, r0, #1	@ 000561ca 4000
.org 0x561cc
	adds r0, r4, r0	@ 000561cc 2018
.org 0x561ce
	str r0, [r5, #88]	@ 000561ce a865
.org 0x561d0
	mov r2, r8	@ 000561d0 4246
.org 0x561d2
	cmp r2, #0	@ 000561d2 002a
.org 0x561d4
	beq.n 0x5621c	@ 000561d4 22d0
.org 0x561d6
	adds r0, r5, #0	@ 000561d6 281c
.org 0x561d8
	adds r0, #140	@ 000561d8 8c30
.org 0x561da
	ldr r0, [r0, #0]	@ 000561da 0068
.org 0x561dc
	movs r1, #128	@ 000561dc 8021
.org 0x561de
	lsls r1, r1, #4	@ 000561de 0901
.org 0x561e0
	ands r0, r1	@ 000561e0 0840
.org 0x561e2
	cmp r0, #0	@ 000561e2 0028
.org 0x561e4
	beq.n 0x5621c	@ 000561e4 1ad0
.org 0x561e6
	movs r4, #0	@ 000561e6 0024
.org 0x561e8
	str r4, [r2, #96]	@ 000561e8 1466
.org 0x561ea
	movs r3, #180	@ 000561ea b423
.org 0x561ec
	lsls r3, r3, #1	@ 000561ec 5b00
.org 0x561ee
	adds r1, r7, r3	@ 000561ee f918
.org 0x561f0
	adds r0, r6, #0	@ 000561f0 301c
.org 0x561f2
	bl 0x5784	@ 000561f2 aff7c7fa
.org 0x561f6
	movs r0, #5	@ 000561f6 0520
.org 0x561f8
	strb r0, [r5, #14]	@ 000561f8 a873
.org 0x561fa
	strb r4, [r5, #15]	@ 000561fa ec73
.org 0x561fc
	b.n 0x56236	@ 000561fc 1be0
.org 0x561fe
	.byte 0x00	@ 000561fe data
.org 0x561ff
	.byte 0x00	@ 000561ff data
.org 0x56200
	.byte 0xf0,0xdb,0x02,0x02	@ 00056200 data
.org 0x56204
	.byte 0x0b,0xa0,0x00,0x00	@ 00056204 data
.org 0x56208
	.byte 0xb4,0x87,0x85,0x08	@ 00056208 data
.org 0x5620c
	.byte 0x0c,0x93,0x12,0x08	@ 0005620c data
.org 0x56210
	.byte 0x1c,0x87,0x85,0x08	@ 00056210 data
.org 0x56214
	.byte 0x00,0x60,0xff,0xff	@ 00056214 data
.org 0x56218
	.byte 0xcc,0x84,0x85,0x08	@ 00056218 data
.org 0x5621c
	ldr r0, [r5, #88]	@ 0005621c a86d
.org 0x5621e
	ldr r2, [pc, #32]	@ 0005621e 084a
.org 0x56220
	adds r1, r0, r2	@ 00056220 8118
