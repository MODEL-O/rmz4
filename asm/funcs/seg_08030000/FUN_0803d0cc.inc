@ FUN_0803d0cc  entry 0x0803d0cc  size 164
.thumb
.org 0x3d0cc
FUN_0803d0cc:
	push {r4, r5, r6, lr}	@ 0003d0cc 70b5
.org 0x3d0ce
	sub sp, #8	@ 0003d0ce 82b0
.org 0x3d0d0
	adds r4, r0, #0	@ 0003d0d0 041c
.org 0x3d0d2
	adds r6, r4, #0	@ 0003d0d2 261c
.org 0x3d0d4
	adds r6, #180	@ 0003d0d4 b436
.org 0x3d0d6
	ldr r5, [r6, #0]	@ 0003d0d6 3568
.org 0x3d0d8
	bl 0x1cff0	@ 0003d0d8 dff78aff
.org 0x3d0dc
	ldrb r1, [r5, #30]	@ 0003d0dc a97f
.org 0x3d0de
	lsls r1, r1, #8	@ 0003d0de 0902
.org 0x3d0e0
	adds r0, r5, #0	@ 0003d0e0 281c
.org 0x3d0e2
	adds r0, #112	@ 0003d0e2 7030
.org 0x3d0e4
	ldrb r0, [r0, #0]	@ 0003d0e4 0078
.org 0x3d0e6
	orrs r0, r1	@ 0003d0e6 0843
.org 0x3d0e8
	ldr r1, [pc, #84]	@ 0003d0e8 1549
.org 0x3d0ea
	cmp r0, r1	@ 0003d0ea 8842
.org 0x3d0ec
	bne.n 0x3d106	@ 0003d0ec 0bd1
.org 0x3d0ee
	adds r1, r5, #0	@ 0003d0ee 291c
.org 0x3d0f0
	adds r1, #113	@ 0003d0f0 7131
.org 0x3d0f2
	adds r3, r4, #0	@ 0003d0f2 231c
.org 0x3d0f4
	adds r3, #113	@ 0003d0f4 7133
.org 0x3d0f6
	ldrb r0, [r3, #0]	@ 0003d0f6 1878
.org 0x3d0f8
	ldrb r1, [r1, #0]	@ 0003d0f8 0978
.org 0x3d0fa
	lsls r1, r1, #24	@ 0003d0fa 0906
.org 0x3d0fc
	asrs r1, r1, #24	@ 0003d0fc 0916
.org 0x3d0fe
	lsls r5, r0, #24	@ 0003d0fe 0506
.org 0x3d100
	asrs r0, r5, #24	@ 0003d100 2816
.org 0x3d102
	cmp r1, r0	@ 0003d102 8142
.org 0x3d104
	beq.n 0x3d148	@ 0003d104 20d0
.org 0x3d106
	ldrb r1, [r4, #10]	@ 0003d106 a17a
.org 0x3d108
	movs r0, #254	@ 0003d108 fe20
.org 0x3d10a
	ands r0, r1	@ 0003d10a 0840
.org 0x3d10c
	movs r2, #0	@ 0003d10c 0022
.org 0x3d10e
	movs r1, #253	@ 0003d10e fd21
.org 0x3d110
	ands r0, r1	@ 0003d110 0840
.org 0x3d112
	strb r0, [r4, #10]	@ 0003d112 a072
.org 0x3d114
	adds r0, r4, #0	@ 0003d114 201c
.org 0x3d116
	adds r0, #140	@ 0003d116 8c30
.org 0x3d118
	str r2, [r0, #0]	@ 0003d118 0260
.org 0x3d11a
	adds r0, #4	@ 0003d11a 0430
.org 0x3d11c
	str r2, [r0, #0]	@ 0003d11c 0260
.org 0x3d11e
	adds r0, #4	@ 0003d11e 0430
.org 0x3d120
	strb r2, [r0, #0]	@ 0003d120 0270
.org 0x3d122
	ldrb r1, [r4, #10]	@ 0003d122 a17a
.org 0x3d124
	movs r0, #251	@ 0003d124 fb20
.org 0x3d126
	ands r0, r1	@ 0003d126 0840
.org 0x3d128
	strb r0, [r4, #10]	@ 0003d128 a072
.org 0x3d12a
	ldr r1, [pc, #24]	@ 0003d12a 0649
.org 0x3d12c
	ldrb r0, [r4, #9]	@ 0003d12c 607a
.org 0x3d12e
	lsls r0, r0, #2	@ 0003d12e 8000
.org 0x3d130
	adds r0, r0, r1	@ 0003d130 4018
.org 0x3d132
	movs r1, #3	@ 0003d132 0321
.org 0x3d134
	str r1, [r4, #12]	@ 0003d134 e160
.org 0x3d136
	ldr r0, [r0, #0]	@ 0003d136 0068
.org 0x3d138
	ldr r0, [r0, #12]	@ 0003d138 c068
.org 0x3d13a
	str r0, [r4, #20]	@ 0003d13a 6061
.org 0x3d13c
	b.n 0x3d172	@ 0003d13c 19e0
.org 0x3d13e
	.byte 0x00	@ 0003d13e data
.org 0x3d13f
	.byte 0x00	@ 0003d13f data
.org 0x3d140
	.byte 0x01,0x1a,0x00,0x00	@ 0003d140 data
.org 0x3d144
	.byte 0xf8,0x39,0x85,0x08	@ 0003d144 data
.org 0x3d148
	adds r0, r4, #0	@ 0003d148 201c
.org 0x3d14a
	adds r0, #116	@ 0003d14a 7430
.org 0x3d14c
	ldr r2, [pc, #44]	@ 0003d14c 0b4a
.org 0x3d14e
	ldrb r1, [r4, #16]	@ 0003d14e 217c
.org 0x3d150
	lsls r1, r1, #2	@ 0003d150 8900
.org 0x3d152
	adds r1, r1, r2	@ 0003d152 8918
.org 0x3d154
	movs r2, #0	@ 0003d154 0022
.org 0x3d156
	ldrsb r2, [r3, r2]	@ 0003d156 9a56
.org 0x3d158
	ldr r1, [r1, #0]	@ 0003d158 0968
.org 0x3d15a
	lsls r2, r2, #2	@ 0003d15a 9200
.org 0x3d15c
	adds r2, r2, r1	@ 0003d15c 5218
.org 0x3d15e
	ldr r1, [r2, #0]	@ 0003d15e 1168
.org 0x3d160
	ldrb r2, [r6, #13]	@ 0003d160 727b
.org 0x3d162
	ldrb r3, [r6, #12]	@ 0003d162 337b
.org 0x3d164
	ldrb r4, [r6, #14]	@ 0003d164 b47b
.org 0x3d166
	str r4, [sp, #0]	@ 0003d166 0094
.org 0x3d168
	asrs r4, r5, #25	@ 0003d168 6c16
.org 0x3d16a
	adds r4, #1	@ 0003d16a 0134
.org 0x3d16c
	str r4, [sp, #4]	@ 0003d16c 0194
.org 0x3d16e
	bl 0x5794	@ 0003d16e c8f711fb
