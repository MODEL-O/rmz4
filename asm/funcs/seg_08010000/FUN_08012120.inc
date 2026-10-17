@ FUN_08012120  entry 0x08012120  size 218
.thumb
.org 0x12120
FUN_08012120:
	push {r4, r5, r6, r7, lr}	@ 00012120 f0b5
.org 0x12122
	adds r5, r0, #0	@ 00012122 051c
.org 0x12124
	ldr r0, [r5, #92]	@ 00012124 e86d
.org 0x12126
	lsls r7, r0, #16	@ 00012126 0704
.org 0x12128
	ldrb r6, [r5, #14]	@ 00012128 ae7b
.org 0x1212a
	cmp r6, #0	@ 0001212a 002e
.org 0x1212c
	bne.n 0x12194	@ 0001212c 32d1
.org 0x1212e
	lsrs r2, r7, #20	@ 0001212e 3a0d
.org 0x12130
	lsls r4, r2, #1	@ 00012130 5400
.org 0x12132
	ldr r3, [pc, #152]	@ 00012132 264b
.org 0x12134
	adds r4, r4, r3	@ 00012134 e418
.org 0x12136
	ldr r0, [r5, #100]	@ 00012136 686e
.org 0x12138
	movs r1, #71	@ 00012138 4721
.org 0x1213a
	orrs r0, r1	@ 0001213a 0843
.org 0x1213c
	strh r0, [r4, #0]	@ 0001213c 2080
.org 0x1213e
	lsls r2, r2, #2	@ 0001213e 9200
.org 0x12140
	adds r0, r3, #0	@ 00012140 181c
.org 0x12142
	adds r0, #8	@ 00012142 0830
.org 0x12144
	adds r0, r2, r0	@ 00012144 1018
.org 0x12146
	str r6, [r0, #0]	@ 00012146 0660
.org 0x12148
	movs r1, #8	@ 00012148 0821
.org 0x1214a
	strh r1, [r0, #0]	@ 0001214a 0180
.org 0x1214c
	adds r3, #10	@ 0001214c 0a33
.org 0x1214e
	adds r2, r2, r3	@ 0001214e d218
.org 0x12150
	movs r0, #56	@ 00012150 3820
.org 0x12152
	strh r0, [r2, #0]	@ 00012152 1080
.org 0x12154
	ldr r0, [pc, #120]	@ 00012154 1e48
.org 0x12156
	ldr r0, [r0, #0]	@ 00012156 0068
.org 0x12158
	ldr r1, [pc, #120]	@ 00012158 1e49
.org 0x1215a
	adds r0, r0, r1	@ 0001215a 4018
.org 0x1215c
	ldrh r2, [r4, #0]	@ 0001215c 2288
.org 0x1215e
	movs r1, #248	@ 0001215e f821
.org 0x12160
	lsls r1, r1, #5	@ 00012160 4901
.org 0x12162
	ands r1, r2	@ 00012162 1140
.org 0x12164
	lsls r1, r1, #3	@ 00012164 c900
.org 0x12166
	movs r2, #192	@ 00012166 c022
.org 0x12168
	lsls r2, r2, #19	@ 00012168 d204
.org 0x1216a
	adds r1, r1, r2	@ 0001216a 8918
.org 0x1216c
	movs r2, #128	@ 0001216c 8022
.org 0x1216e
	lsls r2, r2, #2	@ 0001216e 9200
.org 0x12170
	bl 0x128be0	@ 00012170 16f136fd
.org 0x12174
	ldr r1, [pc, #96]	@ 00012174 1849
.org 0x12176
	ldrh r2, [r1, #0]	@ 00012176 0a88
.org 0x12178
	movs r3, #128	@ 00012178 8023
.org 0x1217a
	lsls r3, r3, #7	@ 0001217a db01
.org 0x1217c
	adds r0, r3, #0	@ 0001217c 181c
.org 0x1217e
	orrs r0, r2	@ 0001217e 1043
.org 0x12180
	strh r0, [r1, #0]	@ 00012180 0880
.org 0x12182
	movs r0, #251	@ 00012182 fb20
.org 0x12184
	strb r0, [r1, #13]	@ 00012184 4873
.org 0x12186
	movs r0, #255	@ 00012186 ff20
.org 0x12188
	strh r0, [r1, #6]	@ 00012188 c880
.org 0x1218a
	strh r0, [r1, #10]	@ 0001218a 4881
.org 0x1218c
	strh r6, [r5, #16]	@ 0001218c 2e82
.org 0x1218e
	ldrb r0, [r5, #14]	@ 0001218e a87b
.org 0x12190
	adds r0, #1	@ 00012190 0130
.org 0x12192
	strb r0, [r5, #14]	@ 00012192 a873
.org 0x12194
	ldrh r0, [r5, #16]	@ 00012194 288a
.org 0x12196
	adds r0, #1	@ 00012196 0130
.org 0x12198
	strh r0, [r5, #16]	@ 00012198 2882
.org 0x1219a
	movs r1, #1	@ 0001219a 0121
.org 0x1219c
	ands r0, r1	@ 0001219c 0840
.org 0x1219e
	cmp r0, #0	@ 0001219e 0028
.org 0x121a0
	beq.n 0x121dc	@ 000121a0 1cd0
.org 0x121a2
	ldr r0, [pc, #44]	@ 000121a2 0b48
.org 0x121a4
	ldr r0, [r0, #0]	@ 000121a4 0068
.org 0x121a6
	ldr r1, [pc, #44]	@ 000121a6 0b49
.org 0x121a8
	adds r0, r0, r1	@ 000121a8 4018
.org 0x121aa
	lsrs r1, r7, #20	@ 000121aa 390d
.org 0x121ac
	lsls r1, r1, #1	@ 000121ac 4900
.org 0x121ae
	ldr r2, [pc, #28]	@ 000121ae 074a
.org 0x121b0
	adds r1, r1, r2	@ 000121b0 8918
.org 0x121b2
	ldrh r2, [r1, #0]	@ 000121b2 0a88
.org 0x121b4
	movs r1, #248	@ 000121b4 f821
.org 0x121b6
	lsls r1, r1, #5	@ 000121b6 4901
.org 0x121b8
	ands r1, r2	@ 000121b8 1140
.org 0x121ba
	lsls r1, r1, #3	@ 000121ba c900
.org 0x121bc
	movs r2, #192	@ 000121bc c022
.org 0x121be
	lsls r2, r2, #19	@ 000121be d204
.org 0x121c0
	adds r1, r1, r2	@ 000121c0 8918
.org 0x121c2
	movs r2, #128	@ 000121c2 8022
.org 0x121c4
	lsls r2, r2, #2	@ 000121c4 9200
.org 0x121c6
	bl 0x128be0	@ 000121c6 16f10bfd
.org 0x121ca
	b.n 0x12204	@ 000121ca 1be0
.org 0x121cc
	.byte 0x04,0x0a,0x00,0x02	@ 000121cc data
.org 0x121d0
	.byte 0x1c,0xc1,0xb2,0x08	@ 000121d0 data
.org 0x121d4
	.byte 0x24,0xc1,0xb2,0x08	@ 000121d4 data
.org 0x121d8
	.byte 0x50,0x0a,0x00,0x02	@ 000121d8 data
.org 0x121dc
	ldr r0, [pc, #44]	@ 000121dc 0b48
.org 0x121de
	ldr r0, [r0, #0]	@ 000121de 0068
.org 0x121e0
	ldr r3, [pc, #44]	@ 000121e0 0b4b
.org 0x121e2
	adds r0, r0, r3	@ 000121e2 c018
.org 0x121e4
	lsrs r1, r7, #20	@ 000121e4 390d
.org 0x121e6
	lsls r1, r1, #1	@ 000121e6 4900
.org 0x121e8
	ldr r2, [pc, #40]	@ 000121e8 0a4a
.org 0x121ea
	adds r1, r1, r2	@ 000121ea 8918
.org 0x121ec
	ldrh r2, [r1, #0]	@ 000121ec 0a88
.org 0x121ee
	movs r1, #248	@ 000121ee f821
.org 0x121f0
	lsls r1, r1, #5	@ 000121f0 4901
.org 0x121f2
	ands r1, r2	@ 000121f2 1140
.org 0x121f4
	lsls r1, r1, #3	@ 000121f4 c900
.org 0x121f6
	movs r2, #192	@ 000121f6 c022
.org 0x121f8
	lsls r2, r2, #19	@ 000121f8 d204
