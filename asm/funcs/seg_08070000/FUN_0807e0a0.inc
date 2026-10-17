@ FUN_0807e0a0  entry 0x0807e0a0  size 236
.thumb
.org 0x7e0a0
FUN_0807e0a0:
	push {r4, r5, r6, lr}	@ 0007e0a0 70b5
.org 0x7e0a2
	sub sp, #8	@ 0007e0a2 82b0
.org 0x7e0a4
	adds r5, r0, #0	@ 0007e0a4 051c
.org 0x7e0a6
	ldrb r0, [r5, #15]	@ 0007e0a6 e87b
.org 0x7e0a8
	cmp r0, #0	@ 0007e0a8 0028
.org 0x7e0aa
	bne.n 0x7e0c8	@ 0007e0aa 0dd1
.org 0x7e0ac
	ldr r0, [pc, #220]	@ 0007e0ac 3748
.org 0x7e0ae
	bl 0x2b10	@ 0007e0ae 84f72ffd
.org 0x7e0b2
	adds r0, r5, #0	@ 0007e0b2 281c
.org 0x7e0b4
	movs r1, #27	@ 0007e0b4 1b21
.org 0x7e0b6
	bl 0x7e8c8	@ 0007e0b6 00f007fc
.org 0x7e0ba
	movs r0, #64	@ 0007e0ba 4020
.org 0x7e0bc
	strb r0, [r5, #18]	@ 0007e0bc a874
.org 0x7e0be
	movs r0, #1	@ 0007e0be 0120
.org 0x7e0c0
	strb r0, [r5, #19]	@ 0007e0c0 e874
.org 0x7e0c2
	ldrb r0, [r5, #15]	@ 0007e0c2 e87b
.org 0x7e0c4
	adds r0, #1	@ 0007e0c4 0130
.org 0x7e0c6
	strb r0, [r5, #15]	@ 0007e0c6 e873
.org 0x7e0c8
	adds r4, r5, #0	@ 0007e0c8 2c1c
.org 0x7e0ca
	adds r4, #188	@ 0007e0ca bc34
.org 0x7e0cc
	ldrb r0, [r4, #0]	@ 0007e0cc 2078
.org 0x7e0ce
	cmp r0, #0	@ 0007e0ce 0028
.org 0x7e0d0
	beq.n 0x7e0d8	@ 0007e0d0 02d0
.org 0x7e0d2
	adds r0, r5, #0	@ 0007e0d2 281c
.org 0x7e0d4
	bl 0x1cff0	@ 0007e0d4 9ef78cff
.org 0x7e0d8
	adds r0, r5, #0	@ 0007e0d8 281c
.org 0x7e0da
	adds r0, #116	@ 0007e0da 7430
.org 0x7e0dc
	ldr r3, [pc, #176]	@ 0007e0dc 2c4b
.org 0x7e0de
	ldr r2, [pc, #180]	@ 0007e0de 2d4a
.org 0x7e0e0
	ldrb r1, [r4, #0]	@ 0007e0e0 2178
.org 0x7e0e2
	lsls r1, r1, #1	@ 0007e0e2 4900
.org 0x7e0e4
	adds r1, r1, r2	@ 0007e0e4 8918
.org 0x7e0e6
	ldrh r2, [r1, #0]	@ 0007e0e6 0a88
.org 0x7e0e8
	lsls r2, r2, #2	@ 0007e0e8 9200
.org 0x7e0ea
	adds r2, r2, r3	@ 0007e0ea d218
.org 0x7e0ec
	adds r1, r5, #0	@ 0007e0ec 291c
.org 0x7e0ee
	adds r1, #113	@ 0007e0ee 7131
.org 0x7e0f0
	ldrb r1, [r1, #0]	@ 0007e0f0 0978
.org 0x7e0f2
	lsls r1, r1, #24	@ 0007e0f2 0906
.org 0x7e0f4
	asrs r1, r1, #24	@ 0007e0f4 0916
.org 0x7e0f6
	ldr r2, [r2, #0]	@ 0007e0f6 1268
.org 0x7e0f8
	lsls r1, r1, #2	@ 0007e0f8 8900
.org 0x7e0fa
	adds r1, r1, r2	@ 0007e0fa 8918
.org 0x7e0fc
	ldr r1, [r1, #0]	@ 0007e0fc 0968
.org 0x7e0fe
	bl 0x5784	@ 0007e0fe 87f741fb
.org 0x7e102
	ldrb r0, [r5, #18]	@ 0007e102 a87c
.org 0x7e104
	cmp r0, #0	@ 0007e104 0028
.org 0x7e106
	beq.n 0x7e10c	@ 0007e106 01d0
.org 0x7e108
	subs r0, #1	@ 0007e108 0138
.org 0x7e10a
	strb r0, [r5, #18]	@ 0007e10a a874
.org 0x7e10c
	ldrb r0, [r5, #19]	@ 0007e10c e87c
.org 0x7e10e
	ldrb r1, [r5, #18]	@ 0007e10e a97c
.org 0x7e110
	cmp r0, #0	@ 0007e110 0028
.org 0x7e112
	beq.n 0x7e178	@ 0007e112 31d0
.org 0x7e114
	cmp r1, #32	@ 0007e114 2029
.org 0x7e116
	bhi.n 0x7e178	@ 0007e116 2fd8
.org 0x7e118
	adds r6, r5, #0	@ 0007e118 2e1c
.org 0x7e11a
	adds r6, #216	@ 0007e11a d836
.org 0x7e11c
	ldr r0, [r6, #0]	@ 0007e11c 3068
.org 0x7e11e
	cmp r0, #0	@ 0007e11e 0028
.org 0x7e120
	bne.n 0x7e172	@ 0007e120 27d1
.org 0x7e122
	ldr r0, [pc, #116]	@ 0007e122 1d48
.org 0x7e124
	ldr r1, [pc, #116]	@ 0007e124 1d49
.org 0x7e126
	movs r4, #184	@ 0007e126 b824
.org 0x7e128
	lsls r4, r4, #1	@ 0007e128 6400
.org 0x7e12a
	adds r1, r1, r4	@ 0007e12a 0919
.org 0x7e12c
	ldrh r1, [r1, #0]	@ 0007e12c 0988
.org 0x7e12e
	ldrh r2, [r0, #6]	@ 0007e12e c288
.org 0x7e130
	lsrs r2, r2, #6	@ 0007e130 9209
.org 0x7e132
	subs r1, r1, r2	@ 0007e132 891a
.org 0x7e134
	lsls r1, r1, #5	@ 0007e134 4901
.org 0x7e136
	movs r2, #128	@ 0007e136 8022
.org 0x7e138
	lsls r2, r2, #9	@ 0007e138 5202
.org 0x7e13a
	adds r1, r1, r2	@ 0007e13a 8918
.org 0x7e13c
	bl 0x1d30	@ 0007e13c 83f7f8fd
.org 0x7e140
	ldr r0, [pc, #92]	@ 0007e140 1748
.org 0x7e142
	ldr r1, [pc, #96]	@ 0007e142 1849
.org 0x7e144
	adds r1, r1, r4	@ 0007e144 0919
.org 0x7e146
	ldrh r1, [r1, #0]	@ 0007e146 0988
.org 0x7e148
	ldrb r2, [r0, #7]	@ 0007e148 c279
.org 0x7e14a
	subs r1, r1, r2	@ 0007e14a 891a
.org 0x7e14c
	lsls r1, r1, #5	@ 0007e14c 4901
.org 0x7e14e
	movs r2, #128	@ 0007e14e 8022
.org 0x7e150
	lsls r2, r2, #2	@ 0007e150 9200
.org 0x7e152
	adds r1, r1, r2	@ 0007e152 8918
.org 0x7e154
	bl 0x2208	@ 0007e154 84f758f8
.org 0x7e158
	ldr r0, [r5, #84]	@ 0007e158 686d
.org 0x7e15a
	str r0, [sp, #0]	@ 0007e15a 0090
.org 0x7e15c
	ldr r0, [r5, #88]	@ 0007e15c a86d
.org 0x7e15e
	ldr r1, [pc, #72]	@ 0007e15e 1249
.org 0x7e160
	adds r0, r0, r1	@ 0007e160 4018
.org 0x7e162
	str r0, [sp, #4]	@ 0007e162 0190
.org 0x7e164
	adds r0, r5, #0	@ 0007e164 281c
.org 0x7e166
	mov r1, sp	@ 0007e166 6946
.org 0x7e168
	movs r2, #1	@ 0007e168 0122
.org 0x7e16a
	movs r3, #0	@ 0007e16a 0023
.org 0x7e16c
	bl 0xcfa40	@ 0007e16c 51f068fc
.org 0x7e170
	str r0, [r6, #0]	@ 0007e170 3060
.org 0x7e172
	movs r0, #0	@ 0007e172 0020
.org 0x7e174
	strb r0, [r5, #19]	@ 0007e174 e874
.org 0x7e176
	ldrb r1, [r5, #18]	@ 0007e176 a97c
.org 0x7e178
	cmp r1, #0	@ 0007e178 0029
.org 0x7e17a
	bne.n 0x7e184	@ 0007e17a 03d1
.org 0x7e17c
	ldrb r0, [r5, #14]	@ 0007e17c a87b
.org 0x7e17e
	adds r0, #1	@ 0007e17e 0130
.org 0x7e180
	strb r0, [r5, #14]	@ 0007e180 a873
.org 0x7e182
	strb r1, [r5, #15]	@ 0007e182 e973
.org 0x7e184
	add sp, #8	@ 0007e184 02b0
.org 0x7e186
	pop {r4, r5, r6}	@ 0007e186 70bc
.org 0x7e188
	pop {r0}	@ 0007e188 01bc
.org 0x7e18a
	bx r0	@ 0007e18a 0047
