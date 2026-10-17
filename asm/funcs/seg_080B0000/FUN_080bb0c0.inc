@ FUN_080bb0c0  entry 0x080bb0c0  size 272
.thumb
.org 0xbb0c0
FUN_080bb0c0:
	push {r4, r5, r6, r7, lr}	@ 000bb0c0 f0b5
.org 0xbb0c2
	mov r7, sl	@ 000bb0c2 5746
.org 0xbb0c4
	mov r6, r9	@ 000bb0c4 4e46
.org 0xbb0c6
	mov r5, r8	@ 000bb0c6 4546
.org 0xbb0c8
	push {r5, r6, r7}	@ 000bb0c8 e0b4
.org 0xbb0ca
	adds r7, r0, #0	@ 000bb0ca 071c
.org 0xbb0cc
	ldr r1, [pc, #256]	@ 000bb0cc 4049
.org 0xbb0ce
	ldrb r0, [r7, #9]	@ 000bb0ce 787a
.org 0xbb0d0
	lsls r0, r0, #2	@ 000bb0d0 8000
.org 0xbb0d2
	adds r0, r0, r1	@ 000bb0d2 4018
.org 0xbb0d4
	movs r1, #1	@ 000bb0d4 0121
.org 0xbb0d6
	str r1, [r7, #12]	@ 000bb0d6 f960
.org 0xbb0d8
	ldr r0, [r0, #0]	@ 000bb0d8 0068
.org 0xbb0da
	ldr r0, [r0, #4]	@ 000bb0da 4068
.org 0xbb0dc
	str r0, [r7, #20]	@ 000bb0dc 7861
.org 0xbb0de
	movs r2, #0	@ 000bb0de 0022
.org 0xbb0e0
	strb r2, [r7, #13]	@ 000bb0e0 7a73
.org 0xbb0e2
	strb r2, [r7, #14]	@ 000bb0e2 ba73
.org 0xbb0e4
	strb r2, [r7, #15]	@ 000bb0e4 fa73
.org 0xbb0e6
	ldrb r0, [r7, #10]	@ 000bb0e6 b87a
.org 0xbb0e8
	orrs r0, r1	@ 000bb0e8 0843
.org 0xbb0ea
	movs r1, #2	@ 000bb0ea 0221
.org 0xbb0ec
	orrs r0, r1	@ 000bb0ec 0843
.org 0xbb0ee
	strb r0, [r7, #10]	@ 000bb0ee b872
.org 0xbb0f0
	ldr r5, [pc, #224]	@ 000bb0f0 384d
.org 0xbb0f2
	ldr r0, [pc, #228]	@ 000bb0f2 3948
.org 0xbb0f4
	mov r9, r0	@ 000bb0f4 8146
.org 0xbb0f6
	adds r0, r5, r0	@ 000bb0f6 2818
.org 0xbb0f8
	ldr r1, [pc, #224]	@ 000bb0f8 3849
.org 0xbb0fa
	mov r8, r1	@ 000bb0fa 8846
.org 0xbb0fc
	movs r4, #182	@ 000bb0fc b624
.org 0xbb0fe
	lsls r4, r4, #1	@ 000bb0fe 6400
.org 0xbb100
	adds r1, r1, r4	@ 000bb100 0919
.org 0xbb102
	ldrh r1, [r1, #0]	@ 000bb102 0988
.org 0xbb104
	ldrh r2, [r0, #6]	@ 000bb104 c288
.org 0xbb106
	lsrs r2, r2, #6	@ 000bb106 9209
.org 0xbb108
	subs r1, r1, r2	@ 000bb108 891a
.org 0xbb10a
	lsls r1, r1, #5	@ 000bb10a 4901
.org 0xbb10c
	movs r2, #128	@ 000bb10c 8022
.org 0xbb10e
	lsls r2, r2, #9	@ 000bb10e 5202
.org 0xbb110
	adds r1, r1, r2	@ 000bb110 8918
.org 0xbb112
	bl 0x1d30	@ 000bb112 46f70dfe
.org 0xbb116
	ldr r0, [pc, #200]	@ 000bb116 3248
.org 0xbb118
	adds r5, r5, r0	@ 000bb118 2d18
.org 0xbb11a
	ldr r6, [pc, #200]	@ 000bb11a 324e
.org 0xbb11c
	adds r4, r6, r4	@ 000bb11c 3419
.org 0xbb11e
	ldrh r1, [r4, #0]	@ 000bb11e 2188
.org 0xbb120
	ldrb r0, [r5, #7]	@ 000bb120 e879
.org 0xbb122
	subs r1, r1, r0	@ 000bb122 091a
.org 0xbb124
	lsls r1, r1, #5	@ 000bb124 4901
.org 0xbb126
	movs r2, #128	@ 000bb126 8022
.org 0xbb128
	lsls r2, r2, #2	@ 000bb128 9200
.org 0xbb12a
	mov sl, r2	@ 000bb12a 9246
.org 0xbb12c
	add r1, sl	@ 000bb12c 5144
.org 0xbb12e
	adds r0, r5, #0	@ 000bb12e 281c
.org 0xbb130
	bl 0x2208	@ 000bb130 47f76af8
.org 0xbb134
	ldr r4, [pc, #176]	@ 000bb134 2c4c
.org 0xbb136
	add r9, r4	@ 000bb136 a144
.org 0xbb138
	movs r5, #229	@ 000bb138 e525
.org 0xbb13a
	lsls r5, r5, #1	@ 000bb13a 6d00
.org 0xbb13c
	add r8, r5	@ 000bb13c a844
.org 0xbb13e
	mov r0, r8	@ 000bb13e 4046
.org 0xbb140
	ldrh r1, [r0, #0]	@ 000bb140 0188
.org 0xbb142
	mov r2, r9	@ 000bb142 4a46
.org 0xbb144
	ldrh r0, [r2, #6]	@ 000bb144 d088
.org 0xbb146
	lsrs r0, r0, #6	@ 000bb146 8009
.org 0xbb148
	subs r1, r1, r0	@ 000bb148 091a
.org 0xbb14a
	lsls r1, r1, #5	@ 000bb14a 4901
.org 0xbb14c
	movs r0, #128	@ 000bb14c 8020
.org 0xbb14e
	lsls r0, r0, #9	@ 000bb14e 4002
.org 0xbb150
	adds r1, r1, r0	@ 000bb150 0918
.org 0xbb152
	mov r0, r9	@ 000bb152 4846
.org 0xbb154
	bl 0x1d30	@ 000bb154 46f7ecfd
.org 0xbb158
	ldr r1, [pc, #132]	@ 000bb158 2149
.org 0xbb15a
	adds r4, r4, r1	@ 000bb15a 6418
.org 0xbb15c
	adds r6, r6, r5	@ 000bb15c 7619
.org 0xbb15e
	ldrh r1, [r6, #0]	@ 000bb15e 3188
.org 0xbb160
	ldrb r0, [r4, #7]	@ 000bb160 e079
.org 0xbb162
	subs r1, r1, r0	@ 000bb162 091a
.org 0xbb164
	lsls r1, r1, #5	@ 000bb164 4901
.org 0xbb166
	add r1, sl	@ 000bb166 5144
.org 0xbb168
	adds r0, r4, #0	@ 000bb168 201c
.org 0xbb16a
	bl 0x2208	@ 000bb16a 47f74df8
.org 0xbb16e
	adds r0, r7, #0	@ 000bb16e 381c
.org 0xbb170
	bl 0x1cc9c	@ 000bb170 61f794fd
.org 0xbb174
	adds r0, r7, #0	@ 000bb174 381c
.org 0xbb176
	adds r0, #34	@ 000bb176 2230
.org 0xbb178
	movs r2, #1	@ 000bb178 0122
.org 0xbb17a
	strb r2, [r0, #0]	@ 000bb17a 0270
.org 0xbb17c
	adds r0, #3	@ 000bb17c 0330
.org 0xbb17e
	strb r2, [r0, #0]	@ 000bb17e 0270
.org 0xbb180
	ldrb r1, [r7, #10]	@ 000bb180 b97a
.org 0xbb182
	movs r0, #239	@ 000bb182 ef20
.org 0xbb184
	ands r0, r1	@ 000bb184 0840
.org 0xbb186
	strb r0, [r7, #10]	@ 000bb186 b872
.org 0xbb188
	adds r0, r7, #0	@ 000bb188 381c
.org 0xbb18a
	adds r0, #76	@ 000bb18a 4c30
.org 0xbb18c
	movs r1, #0	@ 000bb18c 0021
.org 0xbb18e
	strb r1, [r0, #0]	@ 000bb18e 0170
.org 0xbb190
	adds r2, r7, #0	@ 000bb190 3a1c
.org 0xbb192
	adds r2, #74	@ 000bb192 4a32
.org 0xbb194
	ldrb r1, [r2, #0]	@ 000bb194 1178
.org 0xbb196
	movs r0, #17	@ 000bb196 1120
.org 0xbb198
	negs r0, r0	@ 000bb198 4042
.org 0xbb19a
	ands r0, r1	@ 000bb19a 0840
.org 0xbb19c
	strb r0, [r2, #0]	@ 000bb19c 1070
.org 0xbb19e
	ldrb r1, [r7, #10]	@ 000bb19e b97a
.org 0xbb1a0
	movs r0, #4	@ 000bb1a0 0420
.org 0xbb1a2
	orrs r0, r1	@ 000bb1a2 0843
.org 0xbb1a4
	strb r0, [r7, #10]	@ 000bb1a4 b872
.org 0xbb1a6
	adds r4, r7, #0	@ 000bb1a6 3c1c
.org 0xbb1a8
	adds r4, #116	@ 000bb1a8 7434
.org 0xbb1aa
	ldr r1, [pc, #64]	@ 000bb1aa 1049
.org 0xbb1ac
	adds r2, #10	@ 000bb1ac 0a32
.org 0xbb1ae
	adds r0, r4, #0	@ 000bb1ae 201c
.org 0xbb1b0
	movs r3, #64	@ 000bb1b0 4023
.org 0xbb1b2
	bl 0x5760	@ 000bb1b2 4af7d5fa
.org 0xbb1b6
	str r7, [r4, #44]	@ 000bb1b6 e762
.org 0xbb1b8
	movs r2, #0	@ 000bb1b8 0022
.org 0xbb1ba
	str r2, [r4, #36]	@ 000bb1ba 6262
.org 0xbb1bc
	adds r0, r7, #0	@ 000bb1bc 381c
.org 0xbb1be
	bl 0xbb1f0	@ 000bb1be 00f017f8
.org 0xbb1c2
	pop {r3, r4, r5}	@ 000bb1c2 38bc
.org 0xbb1c4
	mov r8, r3	@ 000bb1c4 9846
.org 0xbb1c6
	mov r9, r4	@ 000bb1c6 a146
.org 0xbb1c8
	mov sl, r5	@ 000bb1c8 aa46
.org 0xbb1ca
	pop {r4, r5, r6, r7}	@ 000bb1ca f0bc
.org 0xbb1cc
	pop {r0}	@ 000bb1cc 01bc
.org 0xbb1ce
	bx r0	@ 000bb1ce 0047
