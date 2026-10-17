@ FUN_08014038  entry 0x08014038  size 526
.thumb
.org 0x14038
FUN_08014038:
	push {r4, r5, r6, r7, lr}	@ 00014038 f0b5
.org 0x1403a
	adds r6, r0, #0	@ 0001403a 061c
.org 0x1403c
	movs r4, #159	@ 0001403c 9f24
.org 0x1403e
	movs r0, #160	@ 0001403e a020
.org 0x14040
	lsls r0, r0, #2	@ 00014040 8000
.org 0x14042
	bl 0xa70	@ 00014042 ecf715fd
.org 0x14046
	mov ip, r0	@ 00014046 8446
.org 0x14048
	cmp r0, #0	@ 00014048 0028
.org 0x1404a
	bne.n 0x1404e	@ 0001404a 00d1
.org 0x1404c
	b.n 0x14240	@ 0001404c f8e0
.org 0x1404e
	ldr r2, [pc, #504]	@ 0001404e 7e4a
.org 0x14050
	movs r1, #186	@ 00014050 ba21
.org 0x14052
	lsls r1, r1, #1	@ 00014052 4900
.org 0x14054
	adds r0, r2, r1	@ 00014054 5018
.org 0x14056
	mov r5, ip	@ 00014056 6546
.org 0x14058
	str r5, [r0, #0]	@ 00014058 0560
.org 0x1405a
	movs r0, #188	@ 0001405a bc20
.org 0x1405c
	lsls r0, r0, #1	@ 0001405c 4000
.org 0x1405e
	adds r1, r2, r0	@ 0001405e 1118
.org 0x14060
	ldr r0, [pc, #488]	@ 00014060 7a48
.org 0x14062
	str r0, [r1, #0]	@ 00014062 0860
.org 0x14064
	movs r5, #190	@ 00014064 be25
.org 0x14066
	lsls r5, r5, #1	@ 00014066 6d00
.org 0x14068
	adds r1, r2, r5	@ 00014068 5119
.org 0x1406a
	ldr r0, [pc, #484]	@ 0001406a 7948
.org 0x1406c
	str r0, [r1, #0]	@ 0001406c 0860
.org 0x1406e
	ldr r0, [r6, #52]	@ 0001406e 706b
.org 0x14070
	adds r0, #32	@ 00014070 2030
.org 0x14072
	lsls r0, r0, #16	@ 00014072 0004
.org 0x14074
	lsrs r5, r0, #16	@ 00014074 050c
.org 0x14076
	ldr r0, [r6, #56]	@ 00014076 b06b
.org 0x14078
	ldr r1, [pc, #472]	@ 00014078 7649
.org 0x1407a
	adds r0, r0, r1	@ 0001407a 4018
.org 0x1407c
	lsls r3, r0, #16	@ 0001407c 0304
.org 0x1407e
	asrs r0, r3, #16	@ 0001407e 1814
.org 0x14080
	adds r0, #159	@ 00014080 9f30
.org 0x14082
	cmp r0, #159	@ 00014082 9f28
.org 0x14084
	ble.n 0x140a2	@ 00014084 0ddd
.org 0x14086
	movs r2, #159	@ 00014086 9f22
.org 0x14088
	lsls r2, r2, #2	@ 00014088 9200
.org 0x1408a
	add r2, ip	@ 0001408a 6244
.org 0x1408c
	asrs r1, r3, #16	@ 0001408c 1914
.org 0x1408e
	adds r0, r3, #0	@ 0001408e 181c
.org 0x14090
	orrs r0, r5	@ 00014090 2843
.org 0x14092
	str r0, [r2, #0]	@ 00014092 1060
.org 0x14094
	subs r2, #4	@ 00014094 043a
.org 0x14096
	subs r4, #1	@ 00014096 013c
.org 0x14098
	adds r1, r1, r4	@ 00014098 0919
.org 0x1409a
	cmp r1, #159	@ 0001409a 9f29
.org 0x1409c
	ble.n 0x140a2	@ 0001409c 01dd
.org 0x1409e
	cmp r4, #0	@ 0001409e 002c
.org 0x140a0
	bge.n 0x1408c	@ 000140a0 f4da
.org 0x140a2
	ldr r0, [r6, #56]	@ 000140a2 b06b
.org 0x140a4
	ldr r5, [pc, #432]	@ 000140a4 6c4d
.org 0x140a6
	adds r0, r0, r5	@ 000140a6 4019
.org 0x140a8
	lsls r0, r0, #16	@ 000140a8 0004
.org 0x140aa
	lsrs r7, r0, #16	@ 000140aa 070c
.org 0x140ac
	asrs r1, r0, #16	@ 000140ac 0114
.org 0x140ae
	adds r0, r1, r4	@ 000140ae 0819
.org 0x140b0
	cmp r0, #63	@ 000140b0 3f28
.org 0x140b2
	ble.n 0x140de	@ 000140b2 14dd
.org 0x140b4
	cmp r4, #0	@ 000140b4 002c
.org 0x140b6
	blt.n 0x140de	@ 000140b6 12db
.org 0x140b8
	adds r3, r1, #0	@ 000140b8 0b1c
.org 0x140ba
	lsls r0, r4, #16	@ 000140ba 2004
.org 0x140bc
	movs r1, #240	@ 000140bc f021
.org 0x140be
	lsls r1, r1, #14	@ 000140be 8903
.org 0x140c0
	subs r1, r1, r0	@ 000140c0 091a
.org 0x140c2
	lsls r0, r4, #2	@ 000140c2 a000
.org 0x140c4
	mov r5, ip	@ 000140c4 6546
.org 0x140c6
	adds r2, r0, r5	@ 000140c6 4219
.org 0x140c8
	movs r5, #128	@ 000140c8 8025
.org 0x140ca
	lsls r5, r5, #9	@ 000140ca 6d02
.org 0x140cc
	str r1, [r2, #0]	@ 000140cc 1160
.org 0x140ce
	adds r1, r1, r5	@ 000140ce 4919
.org 0x140d0
	subs r2, #4	@ 000140d0 043a
.org 0x140d2
	subs r4, #1	@ 000140d2 013c
.org 0x140d4
	adds r0, r3, r4	@ 000140d4 1819
.org 0x140d6
	cmp r0, #63	@ 000140d6 3f28
.org 0x140d8
	ble.n 0x140de	@ 000140d8 01dd
.org 0x140da
	cmp r4, #0	@ 000140da 002c
.org 0x140dc
	bge.n 0x140cc	@ 000140dc f6da
.org 0x140de
	ldrh r0, [r6, #16]	@ 000140de 308a
.org 0x140e0
	lsrs r0, r0, #5	@ 000140e0 4009
.org 0x140e2
	ldr r1, [r6, #76]	@ 000140e2 f16c
.org 0x140e4
	asrs r1, r1, #6	@ 000140e4 8911
.org 0x140e6
	adds r0, r0, r1	@ 000140e6 4018
.org 0x140e8
	lsls r0, r0, #16	@ 000140e8 0004
.org 0x140ea
	lsrs r5, r0, #16	@ 000140ea 050c
.org 0x140ec
	lsls r3, r7, #16	@ 000140ec 3b04
.org 0x140ee
	asrs r0, r3, #16	@ 000140ee 1814
.org 0x140f0
	adds r0, r0, r4	@ 000140f0 0019
.org 0x140f2
	adds r7, r3, #0	@ 000140f2 1f1c
.org 0x140f4
	cmp r0, #43	@ 000140f4 2b28
.org 0x140f6
	ble.n 0x14118	@ 000140f6 0fdd
.org 0x140f8
	cmp r4, #0	@ 000140f8 002c
.org 0x140fa
	blt.n 0x14118	@ 000140fa 0ddb
.org 0x140fc
	lsls r0, r4, #2	@ 000140fc a000
.org 0x140fe
	mov r1, ip	@ 000140fe 6146
.org 0x14100
	adds r2, r0, r1	@ 00014100 4218
.org 0x14102
	asrs r1, r3, #16	@ 00014102 1914
.org 0x14104
	adds r0, r3, #0	@ 00014104 181c
.org 0x14106
	orrs r0, r5	@ 00014106 2843
.org 0x14108
	str r0, [r2, #0]	@ 00014108 1060
.org 0x1410a
	subs r2, #4	@ 0001410a 043a
.org 0x1410c
	subs r4, #1	@ 0001410c 013c
.org 0x1410e
	adds r1, r1, r4	@ 0001410e 0919
.org 0x14110
	cmp r1, #43	@ 00014110 2b29
.org 0x14112
	ble.n 0x14118	@ 00014112 01dd
.org 0x14114
	cmp r4, #0	@ 00014114 002c
.org 0x14116
	bge.n 0x14102	@ 00014116 f4da
.org 0x14118
	ldrh r0, [r6, #16]	@ 00014118 308a
.org 0x1411a
	lsrs r0, r0, #4	@ 0001411a 0009
.org 0x1411c
	ldr r1, [r6, #76]	@ 0001411c f16c
.org 0x1411e
	asrs r1, r1, #5	@ 0001411e 4911
.org 0x14120
	adds r0, r0, r1	@ 00014120 4018
.org 0x14122
	lsls r0, r0, #16	@ 00014122 0004
.org 0x14124
	lsrs r5, r0, #16	@ 00014124 050c
.org 0x14126
	adds r3, r7, #0	@ 00014126 3b1c
.org 0x14128
	asrs r0, r7, #16	@ 00014128 3814
.org 0x1412a
	adds r0, r0, r4	@ 0001412a 0019
.org 0x1412c
	cmp r0, #34	@ 0001412c 2228
.org 0x1412e
	ble.n 0x14150	@ 0001412e 0fdd
.org 0x14130
	cmp r4, #0	@ 00014130 002c
.org 0x14132
	blt.n 0x14150	@ 00014132 0ddb
.org 0x14134
	lsls r0, r4, #2	@ 00014134 a000
.org 0x14136
	mov r1, ip	@ 00014136 6146
.org 0x14138
	adds r2, r0, r1	@ 00014138 4218
.org 0x1413a
	asrs r1, r3, #16	@ 0001413a 1914
.org 0x1413c
	adds r0, r3, #0	@ 0001413c 181c
.org 0x1413e
	orrs r0, r5	@ 0001413e 2843
.org 0x14140
	str r0, [r2, #0]	@ 00014140 1060
.org 0x14142
	subs r2, #4	@ 00014142 043a
.org 0x14144
	subs r4, #1	@ 00014144 013c
.org 0x14146
	adds r1, r1, r4	@ 00014146 0919
.org 0x14148
	cmp r1, #34	@ 00014148 2229
.org 0x1414a
	ble.n 0x14150	@ 0001414a 01dd
.org 0x1414c
	cmp r4, #0	@ 0001414c 002c
.org 0x1414e
	bge.n 0x1413a	@ 0001414e f4da
.org 0x14150
	ldrh r0, [r6, #16]	@ 00014150 308a
.org 0x14152
	lsrs r0, r0, #3	@ 00014152 c008
.org 0x14154
	ldr r1, [r6, #76]	@ 00014154 f16c
.org 0x14156
	asrs r1, r1, #4	@ 00014156 0911
.org 0x14158
	adds r0, r0, r1	@ 00014158 4018
.org 0x1415a
	lsls r0, r0, #16	@ 0001415a 0004
.org 0x1415c
	lsrs r5, r0, #16	@ 0001415c 050c
.org 0x1415e
	adds r3, r7, #0	@ 0001415e 3b1c
.org 0x14160
	asrs r0, r7, #16	@ 00014160 3814
.org 0x14162
	adds r0, r0, r4	@ 00014162 0019
.org 0x14164
	cmp r0, #20	@ 00014164 1428
.org 0x14166
	ble.n 0x14188	@ 00014166 0fdd
.org 0x14168
	cmp r4, #0	@ 00014168 002c
.org 0x1416a
	blt.n 0x14188	@ 0001416a 0ddb
.org 0x1416c
	lsls r0, r4, #2	@ 0001416c a000
.org 0x1416e
	mov r1, ip	@ 0001416e 6146
.org 0x14170
	adds r2, r0, r1	@ 00014170 4218
.org 0x14172
	asrs r1, r3, #16	@ 00014172 1914
.org 0x14174
	adds r0, r3, #0	@ 00014174 181c
.org 0x14176
	orrs r0, r5	@ 00014176 2843
.org 0x14178
	str r0, [r2, #0]	@ 00014178 1060
.org 0x1417a
	subs r2, #4	@ 0001417a 043a
.org 0x1417c
	subs r4, #1	@ 0001417c 013c
.org 0x1417e
	adds r1, r1, r4	@ 0001417e 0919
.org 0x14180
	cmp r1, #20	@ 00014180 1429
.org 0x14182
	ble.n 0x14188	@ 00014182 01dd
.org 0x14184
	cmp r4, #0	@ 00014184 002c
.org 0x14186
	bge.n 0x14172	@ 00014186 f4da
.org 0x14188
	ldrh r0, [r6, #16]	@ 00014188 308a
.org 0x1418a
	lsrs r0, r0, #2	@ 0001418a 8008
.org 0x1418c
	ldr r1, [r6, #76]	@ 0001418c f16c
.org 0x1418e
	asrs r1, r1, #3	@ 0001418e c910
.org 0x14190
	adds r0, r0, r1	@ 00014190 4018
.org 0x14192
	lsls r0, r0, #16	@ 00014192 0004
.org 0x14194
	lsrs r5, r0, #16	@ 00014194 050c
.org 0x14196
	adds r3, r7, #0	@ 00014196 3b1c
.org 0x14198
	asrs r0, r7, #16	@ 00014198 3814
.org 0x1419a
	adds r0, r0, r4	@ 0001419a 0019
.org 0x1419c
	cmp r0, #10	@ 0001419c 0a28
.org 0x1419e
	ble.n 0x141c0	@ 0001419e 0fdd
.org 0x141a0
	cmp r4, #0	@ 000141a0 002c
.org 0x141a2
	blt.n 0x141c0	@ 000141a2 0ddb
.org 0x141a4
	lsls r0, r4, #2	@ 000141a4 a000
.org 0x141a6
	mov r1, ip	@ 000141a6 6146
.org 0x141a8
	adds r2, r0, r1	@ 000141a8 4218
.org 0x141aa
	asrs r1, r3, #16	@ 000141aa 1914
.org 0x141ac
	adds r0, r3, #0	@ 000141ac 181c
.org 0x141ae
	orrs r0, r5	@ 000141ae 2843
.org 0x141b0
	str r0, [r2, #0]	@ 000141b0 1060
.org 0x141b2
	subs r2, #4	@ 000141b2 043a
.org 0x141b4
	subs r4, #1	@ 000141b4 013c
.org 0x141b6
	adds r1, r1, r4	@ 000141b6 0919
.org 0x141b8
	cmp r1, #10	@ 000141b8 0a29
.org 0x141ba
	ble.n 0x141c0	@ 000141ba 01dd
.org 0x141bc
	cmp r4, #0	@ 000141bc 002c
.org 0x141be
	bge.n 0x141aa	@ 000141be f4da
.org 0x141c0
	ldrh r0, [r6, #16]	@ 000141c0 308a
.org 0x141c2
	lsrs r0, r0, #1	@ 000141c2 4008
.org 0x141c4
	ldr r1, [r6, #76]	@ 000141c4 f16c
.org 0x141c6
	asrs r1, r1, #2	@ 000141c6 8910
.org 0x141c8
	adds r0, r0, r1	@ 000141c8 4018
.org 0x141ca
	lsls r0, r0, #16	@ 000141ca 0004
.org 0x141cc
	lsrs r5, r0, #16	@ 000141cc 050c
.org 0x141ce
	adds r3, r7, #0	@ 000141ce 3b1c
.org 0x141d0
	asrs r0, r7, #16	@ 000141d0 3814
.org 0x141d2
	adds r0, r0, r4	@ 000141d2 0019
.org 0x141d4
	cmp r0, #4	@ 000141d4 0428
.org 0x141d6
	ble.n 0x141fa	@ 000141d6 10dd
.org 0x141d8
	cmp r4, #0	@ 000141d8 002c
.org 0x141da
	blt.n 0x141fa	@ 000141da 0edb
.org 0x141dc
	adds r6, r5, #0	@ 000141dc 2e1c
.org 0x141de
	lsls r0, r4, #2	@ 000141de a000
.org 0x141e0
	mov r1, ip	@ 000141e0 6146
.org 0x141e2
	adds r2, r0, r1	@ 000141e2 4218
.org 0x141e4
	asrs r1, r3, #16	@ 000141e4 1914
.org 0x141e6
	adds r0, r3, #0	@ 000141e6 181c
.org 0x141e8
	orrs r0, r6	@ 000141e8 3043
.org 0x141ea
	str r0, [r2, #0]	@ 000141ea 1060
.org 0x141ec
	subs r2, #4	@ 000141ec 043a
.org 0x141ee
	subs r4, #1	@ 000141ee 013c
.org 0x141f0
	adds r1, r1, r4	@ 000141f0 0919
.org 0x141f2
	cmp r1, #4	@ 000141f2 0429
.org 0x141f4
	ble.n 0x141fa	@ 000141f4 01dd
.org 0x141f6
	cmp r4, #0	@ 000141f6 002c
.org 0x141f8
	bge.n 0x141e4	@ 000141f8 f4da
.org 0x141fa
	adds r3, r7, #0	@ 000141fa 3b1c
.org 0x141fc
	asrs r0, r3, #16	@ 000141fc 1814
.org 0x141fe
	adds r0, r0, r4	@ 000141fe 0019
.org 0x14200
	cmp r0, #0	@ 00014200 0028
.org 0x14202
	blt.n 0x14224	@ 00014202 0fdb
.org 0x14204
	cmp r4, #0	@ 00014204 002c
.org 0x14206
	blt.n 0x14240	@ 00014206 1bdb
.org 0x14208
	lsls r0, r4, #2	@ 00014208 a000
.org 0x1420a
	mov r1, ip	@ 0001420a 6146
.org 0x1420c
	adds r2, r0, r1	@ 0001420c 4218
.org 0x1420e
	asrs r1, r3, #16	@ 0001420e 1914
.org 0x14210
	adds r0, r3, #0	@ 00014210 181c
.org 0x14212
	orrs r0, r5	@ 00014212 2843
.org 0x14214
	str r0, [r2, #0]	@ 00014214 1060
.org 0x14216
	subs r2, #4	@ 00014216 043a
.org 0x14218
	subs r4, #1	@ 00014218 013c
.org 0x1421a
	adds r1, r1, r4	@ 0001421a 0919
.org 0x1421c
	cmp r1, #0	@ 0001421c 0029
.org 0x1421e
	blt.n 0x14224	@ 0001421e 01db
.org 0x14220
	cmp r4, #0	@ 00014220 002c
.org 0x14222
	bge.n 0x1420e	@ 00014222 f4da
.org 0x14224
	cmp r4, #0	@ 00014224 002c
.org 0x14226
	blt.n 0x14240	@ 00014226 0bdb
.org 0x14228
	lsls r0, r4, #16	@ 00014228 2004
.org 0x1422a
	negs r1, r0	@ 0001422a 4142
.org 0x1422c
	lsls r0, r4, #2	@ 0001422c a000
.org 0x1422e
	add r0, ip	@ 0001422e 6044
.org 0x14230
	movs r2, #128	@ 00014230 8022
.org 0x14232
	lsls r2, r2, #9	@ 00014232 5202
.org 0x14234
	str r1, [r0, #0]	@ 00014234 0160
.org 0x14236
	adds r1, r1, r2	@ 00014236 8918
.org 0x14238
	subs r0, #4	@ 00014238 0438
.org 0x1423a
	subs r4, #1	@ 0001423a 013c
.org 0x1423c
	cmp r4, #0	@ 0001423c 002c
.org 0x1423e
	bge.n 0x14234	@ 0001423e f9da
.org 0x14240
	pop {r4, r5, r6, r7}	@ 00014240 f0bc
.org 0x14242
	pop {r0}	@ 00014242 01bc
.org 0x14244
	bx r0	@ 00014244 0047
