@ FUN_08055068  entry 0x08055068  size 252
.thumb
.org 0x55068
FUN_08055068:
	push {r4, r5, r6, r7, lr}	@ 00055068 f0b5
.org 0x5506a
	adds r5, r0, #0	@ 0005506a 051c
.org 0x5506c
	adds r7, r1, #0	@ 0005506c 0f1c
.org 0x5506e
	adds r0, r5, #0	@ 0005506e 281c
.org 0x55070
	adds r0, #182	@ 00055070 b630
.org 0x55072
	ldrb r1, [r0, #0]	@ 00055072 0178
.org 0x55074
	movs r0, #4	@ 00055074 0420
.org 0x55076
	ands r0, r1	@ 00055076 0840
.org 0x55078
	cmp r0, #0	@ 00055078 0028
.org 0x5507a
	bne.n 0x550f6	@ 0005507a 3cd1
.org 0x5507c
	ldr r0, [r5, #92]	@ 0005507c e86d
.org 0x5507e
	ldr r1, [r5, #100]	@ 0005507e 696e
.org 0x55080
	adds r0, r0, r1	@ 00055080 4018
.org 0x55082
	str r0, [r5, #92]	@ 00055082 e865
.org 0x55084
	cmp r1, #0	@ 00055084 0029
.org 0x55086
	bge.n 0x55094	@ 00055086 05da
.org 0x55088
	ldr r2, [pc, #4]	@ 00055088 014a
.org 0x5508a
	cmp r0, r2	@ 0005508a 9042
.org 0x5508c
	bge.n 0x5509e	@ 0005508c 07da
.org 0x5508e
	b.n 0x5509c	@ 0005508e 05e0
.org 0x55090
	.byte 0x00,0xfe,0xff,0xff	@ 00055090 data
.org 0x55094
	movs r2, #128	@ 00055094 8022
.org 0x55096
	lsls r2, r2, #2	@ 00055096 9200
.org 0x55098
	cmp r0, r2	@ 00055098 9042
.org 0x5509a
	ble.n 0x5509e	@ 0005509a 00dd
.org 0x5509c
	str r2, [r5, #92]	@ 0005509c ea65
.org 0x5509e
	negs r4, r1	@ 0005509e 4c42
.org 0x550a0
	ldr r6, [r5, #92]	@ 000550a0 ee6d
.org 0x550a2
	adds r0, r6, #0	@ 000550a2 301c
.org 0x550a4
	adds r1, r4, #0	@ 000550a4 211c
.org 0x550a6
	bl 0x128fb8	@ 000550a6 d3f087ff
.org 0x550aa
	negs r0, r0	@ 000550aa 4042
.org 0x550ac
	lsls r1, r6, #1	@ 000550ac 7100
.org 0x550ae
	adds r2, r0, #1	@ 000550ae 421c
.org 0x550b0
	muls r2, r4	@ 000550b0 6243
.org 0x550b2
	adds r1, r1, r2	@ 000550b2 8918
.org 0x550b4
	muls r0, r1	@ 000550b4 4843
.org 0x550b6
	asrs r4, r0, #1	@ 000550b6 4410
.org 0x550b8
	ldr r2, [r5, #84]	@ 000550b8 6a6d
.org 0x550ba
	adds r0, r2, r4	@ 000550ba 1019
.org 0x550bc
	adds r1, r5, #0	@ 000550bc 291c
.org 0x550be
	adds r1, #192	@ 000550be c031
.org 0x550c0
	ldr r1, [r1, #0]	@ 000550c0 0968
.org 0x550c2
	subs r0, r0, r1	@ 000550c2 401a
.org 0x550c4
	movs r1, #240	@ 000550c4 f021
.org 0x550c6
	lsls r1, r1, #7	@ 000550c6 c901
.org 0x550c8
	adds r0, r0, r1	@ 000550c8 4018
.org 0x550ca
	movs r1, #240	@ 000550ca f021
.org 0x550cc
	lsls r1, r1, #8	@ 000550cc 0902
.org 0x550ce
	cmp r0, r1	@ 000550ce 8842
.org 0x550d0
	bhi.n 0x550e2	@ 000550d0 07d8
.org 0x550d2
	cmp r4, #0	@ 000550d2 002c
.org 0x550d4
	bge.n 0x550d8	@ 000550d4 00da
.org 0x550d6
	negs r4, r4	@ 000550d6 6442
.org 0x550d8
	subs r0, r2, r7	@ 000550d8 d01b
.org 0x550da
	adds r0, r0, r4	@ 000550da 0019
.org 0x550dc
	lsls r1, r4, #1	@ 000550dc 6100
.org 0x550de
	cmp r0, r1	@ 000550de 8842
.org 0x550e0
	bhi.n 0x550f0	@ 000550e0 06d8
.org 0x550e2
	adds r2, r5, #0	@ 000550e2 2a1c
.org 0x550e4
	adds r2, #182	@ 000550e4 b632
.org 0x550e6
	ldrb r1, [r2, #0]	@ 000550e6 1178
.org 0x550e8
	movs r0, #4	@ 000550e8 0420
.org 0x550ea
	orrs r0, r1	@ 000550ea 0843
.org 0x550ec
	strb r0, [r2, #0]	@ 000550ec 1070
.org 0x550ee
	b.n 0x5506e	@ 000550ee bee7
.org 0x550f0
	adds r0, r2, r6	@ 000550f0 9019
.org 0x550f2
	str r0, [r5, #84]	@ 000550f2 6865
.org 0x550f4
	b.n 0x55164	@ 000550f4 36e0
.org 0x550f6
	ldr r0, [r5, #92]	@ 000550f6 e86d
.org 0x550f8
	ldr r3, [r5, #100]	@ 000550f8 6b6e
.org 0x550fa
	subs r0, r0, r3	@ 000550fa c01a
.org 0x550fc
	str r0, [r5, #92]	@ 000550fc e865
.org 0x550fe
	ldr r1, [r5, #84]	@ 000550fe 696d
.org 0x55100
	adds r1, r1, r0	@ 00055100 0918
.org 0x55102
	str r1, [r5, #84]	@ 00055102 6965
.org 0x55104
	adds r0, r5, #0	@ 00055104 281c
.org 0x55106
	adds r0, #192	@ 00055106 c030
.org 0x55108
	ldr r0, [r0, #0]	@ 00055108 0068
.org 0x5510a
	ldr r4, [pc, #12]	@ 0005510a 034c
.org 0x5510c
	adds r2, r0, r4	@ 0005510c 0219
.org 0x5510e
	cmp r1, r2	@ 0005510e 9142
.org 0x55110
	bge.n 0x5511c	@ 00055110 04da
.org 0x55112
	str r2, [r5, #84]	@ 00055112 6a65
.org 0x55114
	movs r0, #0	@ 00055114 0020
.org 0x55116
	b.n 0x55166	@ 00055116 26e0
.org 0x55118
	.byte 0x00,0x88,0xff,0xff	@ 00055118 data
.org 0x5511c
	movs r2, #240	@ 0005511c f022
.org 0x5511e
	lsls r2, r2, #7	@ 0005511e d201
.org 0x55120
	adds r0, r0, r2	@ 00055120 8018
.org 0x55122
	cmp r1, r0	@ 00055122 8142
.org 0x55124
	ble.n 0x5512c	@ 00055124 02dd
.org 0x55126
	str r0, [r5, #84]	@ 00055126 6865
.org 0x55128
	movs r0, #0	@ 00055128 0020
.org 0x5512a
	b.n 0x55166	@ 0005512a 1ce0
.org 0x5512c
	cmp r3, #0	@ 0005512c 002b
.org 0x5512e
	bge.n 0x55140	@ 0005512e 07da
.org 0x55130
	cmp r7, #0	@ 00055130 002f
.org 0x55132
	beq.n 0x55138	@ 00055132 01d0
.org 0x55134
	cmp r1, r7	@ 00055134 b942
.org 0x55136
	ble.n 0x55148	@ 00055136 07dd
.org 0x55138
	ldr r0, [r5, #92]	@ 00055138 e86d
.org 0x5513a
	cmp r0, #0	@ 0005513a 0028
.org 0x5513c
	ble.n 0x5515a	@ 0005513c 0ddd
.org 0x5513e
	b.n 0x55156	@ 0005513e 0ae0
.org 0x55140
	cmp r7, #0	@ 00055140 002f
.org 0x55142
	beq.n 0x55150	@ 00055142 05d0
.org 0x55144
	cmp r1, r7	@ 00055144 b942
.org 0x55146
	blt.n 0x55150	@ 00055146 03db
.org 0x55148
	str r7, [r5, #84]	@ 00055148 6f65
.org 0x5514a
	movs r0, #0	@ 0005514a 0020
.org 0x5514c
	str r0, [r5, #92]	@ 0005514c e865
.org 0x5514e
	b.n 0x55166	@ 0005514e 0ae0
.org 0x55150
	ldr r0, [r5, #92]	@ 00055150 e86d
.org 0x55152
	cmp r0, #0	@ 00055152 0028
.org 0x55154
	bge.n 0x5515a	@ 00055154 01da
.org 0x55156
	movs r0, #0	@ 00055156 0020
.org 0x55158
	str r0, [r5, #92]	@ 00055158 e865
.org 0x5515a
	ldr r0, [r5, #92]	@ 0005515a e86d
.org 0x5515c
	cmp r0, #0	@ 0005515c 0028
.org 0x5515e
	bne.n 0x55164	@ 0005515e 01d1
.org 0x55160
	movs r0, #0	@ 00055160 0020
.org 0x55162
	b.n 0x55166	@ 00055162 00e0
