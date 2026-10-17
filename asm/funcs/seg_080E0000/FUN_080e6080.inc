@ FUN_080e6080  entry 0x080e6080  size 330
.thumb
.org 0xe6080
FUN_080e6080:
	push {r4, r5, r6, lr}	@ 000e6080 70b5
.org 0xe6082
	sub sp, #8	@ 000e6082 82b0
.org 0xe6084
	adds r6, r0, #0	@ 000e6084 061c
.org 0xe6086
	ldrb r0, [r6, #17]	@ 000e6086 707c
.org 0xe6088
	cmp r0, #0	@ 000e6088 0028
.org 0xe608a
	bne.n 0xe613c	@ 000e608a 57d1
.org 0xe608c
	ldr r1, [r6, #88]	@ 000e608c b16d
.org 0xe608e
	ldr r0, [r6, #96]	@ 000e608e 306e
.org 0xe6090
	adds r1, r1, r0	@ 000e6090 0918
.org 0xe6092
	str r1, [r6, #88]	@ 000e6092 b165
.org 0xe6094
	adds r0, #64	@ 000e6094 4030
.org 0xe6096
	str r0, [r6, #96]	@ 000e6096 3066
.org 0xe6098
	ldr r0, [r6, #84]	@ 000e6098 706d
.org 0xe609a
	movs r2, #192	@ 000e609a c022
.org 0xe609c
	lsls r2, r2, #6	@ 000e609c 9201
.org 0xe609e
	adds r1, r1, r2	@ 000e609e 8918
.org 0xe60a0
	bl 0x7c7c	@ 000e60a0 21f7ecfd
.org 0xe60a4
	lsls r0, r0, #16	@ 000e60a4 0004
.org 0xe60a6
	lsrs r0, r0, #16	@ 000e60a6 000c
.org 0xe60a8
	adds r5, r6, #0	@ 000e60a8 351c
.org 0xe60aa
	adds r5, #84	@ 000e60aa 5435
.org 0xe60ac
	cmp r0, #15	@ 000e60ac 0f28
.org 0xe60ae
	beq.n 0xe6104	@ 000e60ae 29d0
.org 0xe60b0
	cmp r0, #0	@ 000e60b0 0028
.org 0xe60b2
	beq.n 0xe6104	@ 000e60b2 27d0
.org 0xe60b4
	ldr r0, [r6, #84]	@ 000e60b4 706d
.org 0xe60b6
	str r0, [sp, #0]	@ 000e60b6 0090
.org 0xe60b8
	ldr r0, [r6, #88]	@ 000e60b8 b06d
.org 0xe60ba
	movs r1, #152	@ 000e60ba 9821
.org 0xe60bc
	lsls r1, r1, #6	@ 000e60bc 8901
.org 0xe60be
	adds r0, r0, r1	@ 000e60be 4018
.org 0xe60c0
	str r0, [sp, #4]	@ 000e60c0 0190
.org 0xe60c2
	movs r0, #1	@ 000e60c2 0120
.org 0xe60c4
	mov r1, sp	@ 000e60c4 6946
.org 0xe60c6
	bl 0xd0c88	@ 000e60c6 eaf7dffd
.org 0xe60ca
	movs r0, #42	@ 000e60ca 2a20
.org 0xe60cc
	bl 0x2b10	@ 000e60cc 1cf720fd
.org 0xe60d0
	movs r1, #129	@ 000e60d0 8121
.org 0xe60d2
	lsls r1, r1, #1	@ 000e60d2 4900
.org 0xe60d4
	ldrb r2, [r6, #10]	@ 000e60d4 b27a
.org 0xe60d6
	lsrs r2, r2, #4	@ 000e60d6 1209
.org 0xe60d8
	movs r4, #1	@ 000e60d8 0124
.org 0xe60da
	ands r2, r4	@ 000e60da 2240
.org 0xe60dc
	adds r0, r5, #0	@ 000e60dc 281c
.org 0xe60de
	bl 0xe5d34	@ 000e60de fff729fe
.org 0xe60e2
	movs r1, #130	@ 000e60e2 8221
.org 0xe60e4
	lsls r1, r1, #1	@ 000e60e4 4900
.org 0xe60e6
	ldrb r2, [r6, #10]	@ 000e60e6 b27a
.org 0xe60e8
	lsrs r2, r2, #4	@ 000e60e8 1209
.org 0xe60ea
	ands r2, r4	@ 000e60ea 2240
.org 0xe60ec
	adds r0, r5, #0	@ 000e60ec 281c
.org 0xe60ee
	bl 0xe5d34	@ 000e60ee fff721fe
.org 0xe60f2
	ldr r1, [pc, #64]	@ 000e60f2 1049
.org 0xe60f4
	ldrb r0, [r6, #9]	@ 000e60f4 707a
.org 0xe60f6
	lsls r0, r0, #2	@ 000e60f6 8000
.org 0xe60f8
	adds r0, r0, r1	@ 000e60f8 4018
.org 0xe60fa
	movs r1, #2	@ 000e60fa 0221
.org 0xe60fc
	str r1, [r6, #12]	@ 000e60fc f160
.org 0xe60fe
	ldr r0, [r0, #0]	@ 000e60fe 0068
.org 0xe6100
	ldr r0, [r0, #8]	@ 000e6100 8068
.org 0xe6102
	str r0, [r6, #20]	@ 000e6102 7061
.org 0xe6104
	ldr r0, [pc, #48]	@ 000e6104 0c48
.org 0xe6106
	adds r1, r5, #0	@ 000e6106 291c
.org 0xe6108
	bl 0x1fb14	@ 000e6108 39f704fd
.org 0xe610c
	movs r1, #128	@ 000e610c 8021
.org 0xe610e
	lsls r1, r1, #7	@ 000e610e c901
.org 0xe6110
	cmp r0, r1	@ 000e6110 8842
.org 0xe6112
	bls.n 0xe61cc	@ 000e6112 5bd9
.org 0xe6114
	ldrb r1, [r6, #10]	@ 000e6114 b17a
.org 0xe6116
	movs r0, #254	@ 000e6116 fe20
.org 0xe6118
	ands r0, r1	@ 000e6118 0840
.org 0xe611a
	movs r1, #253	@ 000e611a fd21
.org 0xe611c
	ands r0, r1	@ 000e611c 0840
.org 0xe611e
	strb r0, [r6, #10]	@ 000e611e b072
.org 0xe6120
	ldr r1, [pc, #16]	@ 000e6120 0449
.org 0xe6122
	ldrb r0, [r6, #9]	@ 000e6122 707a
.org 0xe6124
	lsls r0, r0, #2	@ 000e6124 8000
.org 0xe6126
	adds r0, r0, r1	@ 000e6126 4018
.org 0xe6128
	movs r1, #3	@ 000e6128 0321
.org 0xe612a
	str r1, [r6, #12]	@ 000e612a f160
.org 0xe612c
	ldr r0, [r0, #0]	@ 000e612c 0068
.org 0xe612e
	ldr r0, [r0, #12]	@ 000e612e c068
.org 0xe6130
	b.n 0xe61ca	@ 000e6130 4be0
.org 0xe6132
	.byte 0x00	@ 000e6132 data
.org 0xe6133
	.byte 0x00	@ 000e6133 data
.org 0xe6134
	.byte 0x64,0x6f,0x86,0x08	@ 000e6134 data
.org 0xe6138
	.byte 0xf8,0xe9,0x02,0x02	@ 000e6138 data
.org 0xe613c
	ldr r0, [r6, #84]	@ 000e613c 706d
.org 0xe613e
	ldr r1, [r6, #88]	@ 000e613e b16d
.org 0xe6140
	bl 0x7c7c	@ 000e6140 21f79cfd
.org 0xe6144
	lsls r0, r0, #16	@ 000e6144 0004
.org 0xe6146
	cmp r0, #0	@ 000e6146 0028
.org 0xe6148
	bne.n 0xe6170	@ 000e6148 12d1
.org 0xe614a
	ldr r1, [r6, #88]	@ 000e614a b16d
.org 0xe614c
	ldr r0, [r6, #96]	@ 000e614c 306e
.org 0xe614e
	adds r1, r1, r0	@ 000e614e 0918
.org 0xe6150
	str r1, [r6, #88]	@ 000e6150 b165
.org 0xe6152
	adds r0, #64	@ 000e6152 4030
.org 0xe6154
	str r0, [r6, #96]	@ 000e6154 3066
.org 0xe6156
	ldr r0, [r6, #84]	@ 000e6156 706d
.org 0xe6158
	movs r2, #192	@ 000e6158 c022
.org 0xe615a
	lsls r2, r2, #6	@ 000e615a 9201
.org 0xe615c
	adds r1, r1, r2	@ 000e615c 8918
.org 0xe615e
	bl 0x7c7c	@ 000e615e 21f78dfd
.org 0xe6162
	lsls r0, r0, #16	@ 000e6162 0004
.org 0xe6164
	lsrs r0, r0, #16	@ 000e6164 000c
.org 0xe6166
	cmp r0, #15	@ 000e6166 0f28
.org 0xe6168
	beq.n 0xe61cc	@ 000e6168 30d0
.org 0xe616a
	cmp r0, #0	@ 000e616a 0028
.org 0xe616c
	beq.n 0xe61cc	@ 000e616c 2ed0
.org 0xe616e
	b.n 0xe6198	@ 000e616e 13e0
.org 0xe6170
	adds r0, r6, #0	@ 000e6170 301c
.org 0xe6172
	bl 0xe6258	@ 000e6172 00f071f8
.org 0xe6176
	lsls r0, r0, #24	@ 000e6176 0006
.org 0xe6178
	cmp r0, #0	@ 000e6178 0028
.org 0xe617a
	beq.n 0xe61cc	@ 000e617a 27d0
.org 0xe617c
	ldr r0, [r6, #84]	@ 000e617c 706d
.org 0xe617e
	str r0, [sp, #0]	@ 000e617e 0090
.org 0xe6180
	ldr r0, [r6, #88]	@ 000e6180 b06d
.org 0xe6182
	movs r1, #240	@ 000e6182 f021
.org 0xe6184
	lsls r1, r1, #4	@ 000e6184 0901
.org 0xe6186
	adds r0, r0, r1	@ 000e6186 4018
.org 0xe6188
	str r0, [sp, #4]	@ 000e6188 0190
.org 0xe618a
	movs r0, #1	@ 000e618a 0120
.org 0xe618c
	mov r1, sp	@ 000e618c 6946
.org 0xe618e
	bl 0xd0c88	@ 000e618e eaf77bfd
.org 0xe6192
	movs r0, #42	@ 000e6192 2a20
.org 0xe6194
	bl 0x2b10	@ 000e6194 1cf7bcfc
.org 0xe6198
	adds r5, r6, #0	@ 000e6198 351c
.org 0xe619a
	adds r5, #84	@ 000e619a 5435
.org 0xe619c
	ldr r1, [pc, #52]	@ 000e619c 0d49
.org 0xe619e
	ldrb r2, [r6, #10]	@ 000e619e b27a
.org 0xe61a0
	lsrs r2, r2, #4	@ 000e61a0 1209
.org 0xe61a2
	movs r4, #1	@ 000e61a2 0124
.org 0xe61a4
	ands r2, r4	@ 000e61a4 2240
.org 0xe61a6
	adds r0, r5, #0	@ 000e61a6 281c
.org 0xe61a8
	bl 0xe5d34	@ 000e61a8 fff7c4fd
.org 0xe61ac
	ldr r1, [pc, #40]	@ 000e61ac 0a49
.org 0xe61ae
	ldrb r2, [r6, #10]	@ 000e61ae b27a
.org 0xe61b0
	lsrs r2, r2, #4	@ 000e61b0 1209
.org 0xe61b2
	ands r2, r4	@ 000e61b2 2240
.org 0xe61b4
	adds r0, r5, #0	@ 000e61b4 281c
.org 0xe61b6
	bl 0xe5d34	@ 000e61b6 fff7bdfd
.org 0xe61ba
	ldr r1, [pc, #32]	@ 000e61ba 0849
.org 0xe61bc
	ldrb r0, [r6, #9]	@ 000e61bc 707a
.org 0xe61be
	lsls r0, r0, #2	@ 000e61be 8000
.org 0xe61c0
	adds r0, r0, r1	@ 000e61c0 4018
.org 0xe61c2
	movs r1, #2	@ 000e61c2 0221
.org 0xe61c4
	str r1, [r6, #12]	@ 000e61c4 f160
.org 0xe61c6
	ldr r0, [r0, #0]	@ 000e61c6 0068
.org 0xe61c8
	ldr r0, [r0, #8]	@ 000e61c8 8068
