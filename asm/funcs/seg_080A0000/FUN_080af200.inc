@ FUN_080af200  entry 0x080af200  size 94
.thumb
.org 0xaf200
FUN_080af200:
	push {r4, r5, r6, lr}	@ 000af200 70b5
.org 0xaf202
	adds r6, r0, #0	@ 000af202 061c
.org 0xaf204
	lsls r1, r1, #24	@ 000af204 0906
.org 0xaf206
	lsrs r5, r1, #24	@ 000af206 0d0e
.org 0xaf208
	lsls r2, r2, #24	@ 000af208 1206
.org 0xaf20a
	lsrs r4, r2, #24	@ 000af20a 140e
.org 0xaf20c
	ldr r0, [pc, #80]	@ 000af20c 1448
.org 0xaf20e
	ldr r0, [r0, #0]	@ 000af20e 0068
.org 0xaf210
	bl 0x5500	@ 000af210 56f776f9
.org 0xaf214
	adds r3, r0, #0	@ 000af214 031c
.org 0xaf216
	cmp r3, #0	@ 000af216 002b
.org 0xaf218
	beq.n 0xaf256	@ 000af218 1dd0
.org 0xaf21a
	adds r1, r3, #0	@ 000af21a 191c
.org 0xaf21c
	adds r1, #37	@ 000af21c 2531
.org 0xaf21e
	movs r2, #0	@ 000af21e 0022
.org 0xaf220
	movs r0, #24	@ 000af220 1820
.org 0xaf222
	strb r0, [r1, #0]	@ 000af222 0870
.org 0xaf224
	ldr r0, [pc, #60]	@ 000af224 0f48
.org 0xaf226
	movs r1, #83	@ 000af226 5321
.org 0xaf228
	strb r1, [r3, #9]	@ 000af228 5972
.org 0xaf22a
	adds r1, #249	@ 000af22a f931
.org 0xaf22c
	adds r0, r0, r1	@ 000af22c 4018
.org 0xaf22e
	ldr r0, [r0, #0]	@ 000af22e 0068
.org 0xaf230
	ldr r0, [r0, #0]	@ 000af230 0068
.org 0xaf232
	str r0, [r3, #20]	@ 000af232 5861
.org 0xaf234
	movs r0, #0	@ 000af234 0020
.org 0xaf236
	strh r2, [r3, #32]	@ 000af236 1a84
.org 0xaf238
	adds r1, r3, #0	@ 000af238 191c
.org 0xaf23a
	adds r1, #34	@ 000af23a 2231
.org 0xaf23c
	strb r0, [r1, #0]	@ 000af23c 0870
.org 0xaf23e
	ldrb r1, [r3, #11]	@ 000af23e d97a
.org 0xaf240
	movs r0, #16	@ 000af240 1020
.org 0xaf242
	orrs r0, r1	@ 000af242 0843
.org 0xaf244
	strb r0, [r3, #11]	@ 000af244 d872
.org 0xaf246
	ldrb r0, [r3, #28]	@ 000af246 187f
.org 0xaf248
	strb r0, [r3, #29]	@ 000af248 5877
.org 0xaf24a
	ldr r0, [r6, #0]	@ 000af24a 3068
.org 0xaf24c
	ldr r1, [r6, #4]	@ 000af24c 7168
.org 0xaf24e
	str r0, [r3, #84]	@ 000af24e 5865
.org 0xaf250
	str r1, [r3, #88]	@ 000af250 9965
.org 0xaf252
	strb r5, [r3, #16]	@ 000af252 1d74
.org 0xaf254
	strb r4, [r3, #17]	@ 000af254 5c74
.org 0xaf256
	adds r0, r3, #0	@ 000af256 181c
.org 0xaf258
	pop {r4, r5, r6}	@ 000af258 70bc
.org 0xaf25a
	pop {r1}	@ 000af25a 02bc
.org 0xaf25c
	bx r1	@ 000af25c 0847
