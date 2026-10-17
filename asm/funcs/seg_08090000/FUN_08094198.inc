@ FUN_08094198  entry 0x08094198  size 272
.thumb
.org 0x94198
FUN_08094198:
	push {r4, r5, r6, r7, lr}	@ 00094198 f0b5
.org 0x9419a
	sub sp, #8	@ 0009419a 82b0
.org 0x9419c
	adds r7, r0, #0	@ 0009419c 071c
.org 0x9419e
	ldrb r0, [r7, #16]	@ 0009419e 387c
.org 0x941a0
	ldrb r4, [r7, #17]	@ 000941a0 7c7c
.org 0x941a2
	ldrb r6, [r7, #15]	@ 000941a2 fe7b
.org 0x941a4
	cmp r6, #0	@ 000941a4 002e
.org 0x941a6
	bne.n 0x94206	@ 000941a6 2ed1
.org 0x941a8
	cmp r0, #2	@ 000941a8 0228
.org 0x941aa
	bne.n 0x941de	@ 000941aa 18d1
.org 0x941ac
	ldr r0, [pc, #248]	@ 000941ac 3e48
.org 0x941ae
	ldr r1, [pc, #252]	@ 000941ae 3f49
.org 0x941b0
	lsls r4, r4, #2	@ 000941b0 a400
.org 0x941b2
	adds r4, r4, r1	@ 000941b2 6418
.org 0x941b4
	ldr r1, [r4, #0]	@ 000941b4 2168
.org 0x941b6
	asrs r3, r1, #3	@ 000941b6 cb10
.org 0x941b8
	adds r0, #4	@ 000941b8 0430
.org 0x941ba
	adds r3, r3, r0	@ 000941ba 1b18
.org 0x941bc
	movs r5, #7	@ 000941bc 0725
.org 0x941be
	ands r1, r5	@ 000941be 2940
.org 0x941c0
	movs r2, #1	@ 000941c0 0122
.org 0x941c2
	adds r0, r2, #0	@ 000941c2 101c
.org 0x941c4
	lsls r0, r1	@ 000941c4 8840
.org 0x941c6
	ldrb r1, [r3, #0]	@ 000941c6 1978
.org 0x941c8
	orrs r0, r1	@ 000941c8 0843
.org 0x941ca
	strb r0, [r3, #0]	@ 000941ca 1870
.org 0x941cc
	ldr r3, [pc, #224]	@ 000941cc 384b
.org 0x941ce
	ldr r0, [r4, #0]	@ 000941ce 2068
.org 0x941d0
	asrs r1, r0, #3	@ 000941d0 c110
.org 0x941d2
	adds r1, r1, r3	@ 000941d2 c918
.org 0x941d4
	ands r0, r5	@ 000941d4 2840
.org 0x941d6
	lsls r2, r0	@ 000941d6 8240
.org 0x941d8
	ldrb r0, [r1, #0]	@ 000941d8 0878
.org 0x941da
	orrs r2, r0	@ 000941da 0243
.org 0x941dc
	strb r2, [r1, #0]	@ 000941dc 0a70
.org 0x941de
	adds r0, r7, #0	@ 000941de 381c
.org 0x941e0
	adds r0, #140	@ 000941e0 8c30
.org 0x941e2
	str r6, [r0, #0]	@ 000941e2 0660
.org 0x941e4
	adds r0, #4	@ 000941e4 0430
.org 0x941e6
	str r6, [r0, #0]	@ 000941e6 0660
.org 0x941e8
	adds r0, #4	@ 000941e8 0430
.org 0x941ea
	strb r6, [r0, #0]	@ 000941ea 0670
.org 0x941ec
	ldrb r1, [r7, #10]	@ 000941ec b97a
.org 0x941ee
	movs r0, #251	@ 000941ee fb20
.org 0x941f0
	ands r0, r1	@ 000941f0 0840
.org 0x941f2
	strb r0, [r7, #10]	@ 000941f2 b872
.org 0x941f4
	ldr r1, [pc, #188]	@ 000941f4 2f49
.org 0x941f6
	adds r0, r7, #0	@ 000941f6 381c
.org 0x941f8
	bl 0x1cf00	@ 000941f8 88f782fe
.org 0x941fc
	movs r0, #8	@ 000941fc 0820
.org 0x941fe
	strb r0, [r7, #18]	@ 000941fe b874
.org 0x94200
	ldrb r0, [r7, #15]	@ 00094200 f87b
.org 0x94202
	adds r0, #1	@ 00094202 0130
.org 0x94204
	strb r0, [r7, #15]	@ 00094204 f873
.org 0x94206
	adds r0, r7, #0	@ 00094206 381c
.org 0x94208
	bl 0x1cff0	@ 00094208 88f7f2fe
.org 0x9420c
	ldrb r0, [r7, #18]	@ 0009420c b87c
.org 0x9420e
	subs r0, #1	@ 0009420e 0138
.org 0x94210
	strb r0, [r7, #18]	@ 00094210 b874
.org 0x94212
	lsls r0, r0, #24	@ 00094212 0006
.org 0x94214
	cmp r0, #0	@ 00094214 0028
.org 0x94216
	bne.n 0x942a0	@ 00094216 43d1
.org 0x94218
	movs r0, #42	@ 00094218 2a20
.org 0x9421a
	bl 0x2b10	@ 0009421a 6ef779fc
.org 0x9421e
	ldrb r1, [r7, #10]	@ 0009421e b97a
.org 0x94220
	movs r0, #254	@ 00094220 fe20
.org 0x94222
	ands r0, r1	@ 00094222 0840
.org 0x94224
	strb r0, [r7, #10]	@ 00094224 b872
.org 0x94226
	ldr r6, [pc, #144]	@ 00094226 244e
.org 0x94228
	ldr r0, [r6, #0]	@ 00094228 3068
.org 0x9422a
	ldr r5, [pc, #144]	@ 0009422a 244d
.org 0x9422c
	muls r0, r5	@ 0009422c 6843
.org 0x9422e
	ldr r2, [pc, #144]	@ 0009422e 244a
.org 0x94230
	adds r0, r0, r2	@ 00094230 8018
.org 0x94232
	lsls r0, r0, #1	@ 00094232 4000
.org 0x94234
	lsrs r4, r0, #1	@ 00094234 4408
.org 0x94236
	lsrs r0, r0, #17	@ 00094236 400c
.org 0x94238
	movs r3, #7	@ 00094238 0723
.org 0x9423a
	ands r0, r3	@ 0009423a 1840
.org 0x9423c
	subs r0, #3	@ 0009423c 0338
.org 0x9423e
	lsls r0, r0, #8	@ 0009423e 0002
.org 0x94240
	ldr r1, [r7, #84]	@ 00094240 796d
.org 0x94242
	adds r1, r1, r0	@ 00094242 0918
.org 0x94244
	str r1, [sp, #0]	@ 00094244 0091
.org 0x94246
	adds r0, r4, #0	@ 00094246 201c
.org 0x94248
	muls r0, r5	@ 00094248 6843
.org 0x9424a
	adds r0, r0, r2	@ 0009424a 8018
.org 0x9424c
	lsls r0, r0, #1	@ 0009424c 4000
.org 0x9424e
	lsrs r1, r0, #1	@ 0009424e 4108
.org 0x94250
	str r1, [r6, #0]	@ 00094250 3160
.org 0x94252
	lsrs r0, r0, #17	@ 00094252 400c
.org 0x94254
	ands r0, r3	@ 00094254 1840
.org 0x94256
	lsls r0, r0, #8	@ 00094256 0002
.org 0x94258
	ldr r1, [pc, #104]	@ 00094258 1a49
.org 0x9425a
	adds r0, r0, r1	@ 0009425a 4018
.org 0x9425c
	ldr r1, [r7, #88]	@ 0009425c b96d
.org 0x9425e
	adds r1, r1, r0	@ 0009425e 0918
.org 0x94260
	str r1, [sp, #4]	@ 00094260 0191
.org 0x94262
	movs r0, #1	@ 00094262 0120
.org 0x94264
	mov r1, sp	@ 00094264 6946
.org 0x94266
	bl 0xd0c88	@ 00094266 3cf00ffd
.org 0x9426a
	adds r0, r7, #0	@ 0009426a 381c
.org 0x9426c
	bl 0x94df0	@ 0009426c 00f0c0fd
.org 0x94270
	adds r0, r7, #0	@ 00094270 381c
.org 0x94272
	bl 0x94f00	@ 00094272 00f045fe
.org 0x94276
	ldr r2, [pc, #80]	@ 00094276 144a
.org 0x94278
	ldrh r1, [r2, #12]	@ 00094278 9189
.org 0x9427a
	ldr r0, [pc, #80]	@ 0009427a 1448
.org 0x9427c
	cmp r1, r0	@ 0009427c 8142
.org 0x9427e
	bhi.n 0x94284	@ 0009427e 01d8
.org 0x94280
	adds r0, r1, #1	@ 00094280 481c
.org 0x94282
	strh r0, [r2, #12]	@ 00094282 9081
.org 0x94284
	adds r1, r7, #0	@ 00094284 391c
.org 0x94286
	adds r1, #84	@ 00094286 5431
.org 0x94288
	adds r0, r7, #0	@ 00094288 381c
.org 0x9428a
	bl 0x2abe0	@ 0009428a 96f7a9fc
.org 0x9428e
	ldr r1, [pc, #64]	@ 0009428e 1049
.org 0x94290
	ldrb r0, [r7, #9]	@ 00094290 787a
.org 0x94292
	lsls r0, r0, #2	@ 00094292 8000
.org 0x94294
	adds r0, r0, r1	@ 00094294 4018
.org 0x94296
	movs r1, #4	@ 00094296 0421
.org 0x94298
	str r1, [r7, #12]	@ 00094298 f960
.org 0x9429a
	ldr r0, [r0, #0]	@ 0009429a 0068
.org 0x9429c
	ldr r0, [r0, #16]	@ 0009429c 0069
.org 0x9429e
	str r0, [r7, #20]	@ 0009429e 7861
.org 0x942a0
	add sp, #8	@ 000942a0 02b0
.org 0x942a2
	pop {r4, r5, r6, r7}	@ 000942a2 f0bc
.org 0x942a4
	pop {r0}	@ 000942a4 01bc
.org 0x942a6
	bx r0	@ 000942a6 0047
