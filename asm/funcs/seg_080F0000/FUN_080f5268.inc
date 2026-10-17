@ FUN_080f5268  entry 0x080f5268  size 144
.thumb
.org 0xf5268
FUN_080f5268:
	push {r4, r5, r6, lr}	@ 000f5268 70b5
.org 0xf526a
	adds r4, r0, #0	@ 000f526a 041c
.org 0xf526c
	ldr r0, [r4, #20]	@ 000f526c 6069
.org 0xf526e
	movs r6, #1	@ 000f526e 0126
.org 0xf5270
	ands r0, r6	@ 000f5270 3040
.org 0xf5272
	cmp r0, #0	@ 000f5272 0028
.org 0xf5274
	beq.n 0xf52f2	@ 000f5274 3dd0
.org 0xf5276
	movs r0, #83	@ 000f5276 5320
.org 0xf5278
	bl 0x6984	@ 000f5278 11f784fb
.org 0xf527c
	ldr r0, [r4, #20]	@ 000f527c 6069
.org 0xf527e
	movs r1, #128	@ 000f527e 8021
.org 0xf5280
	lsls r1, r1, #10	@ 000f5280 8902
.org 0xf5282
	ands r0, r1	@ 000f5282 0840
.org 0xf5284
	cmp r0, #0	@ 000f5284 0028
.org 0xf5286
	beq.n 0xf52f2	@ 000f5286 34d0
.org 0xf5288
	ldr r2, [pc, #108]	@ 000f5288 1b4a
.org 0xf528a
	ldr r0, [r2, #0]	@ 000f528a 1068
.org 0xf528c
	cmp r0, #0	@ 000f528c 0028
.org 0xf528e
	beq.n 0xf52f2	@ 000f528e 30d0
.org 0xf5290
	ldr r5, [r4, #44]	@ 000f5290 e56a
.org 0xf5292
	ldrb r0, [r0, #10]	@ 000f5292 807a
.org 0xf5294
	lsrs r0, r0, #4	@ 000f5294 0009
.org 0xf5296
	movs r1, #1	@ 000f5296 0121
.org 0xf5298
	ands r0, r1	@ 000f5298 0840
.org 0xf529a
	adds r1, r5, #0	@ 000f529a 291c
.org 0xf529c
	adds r1, #180	@ 000f529c b431
.org 0xf529e
	movs r4, #0	@ 000f529e 0024
.org 0xf52a0
	strb r0, [r1, #0]	@ 000f52a0 0870
.org 0xf52a2
	ldr r0, [r2, #0]	@ 000f52a2 1068
.org 0xf52a4
	movs r1, #8	@ 000f52a4 0821
.org 0xf52a6
	movs r2, #0	@ 000f52a6 0022
.org 0xf52a8
	bl 0x3a578	@ 000f52a8 45f766f9
.org 0xf52ac
	ldr r1, [pc, #76]	@ 000f52ac 1349
.org 0xf52ae
	ldrb r0, [r5, #9]	@ 000f52ae 687a
.org 0xf52b0
	lsls r0, r0, #2	@ 000f52b0 8000
.org 0xf52b2
	adds r0, r0, r1	@ 000f52b2 4018
.org 0xf52b4
	movs r1, #2	@ 000f52b4 0221
.org 0xf52b6
	str r1, [r5, #12]	@ 000f52b6 e960
.org 0xf52b8
	ldr r0, [r0, #0]	@ 000f52b8 0068
.org 0xf52ba
	ldr r0, [r0, #8]	@ 000f52ba 8068
.org 0xf52bc
	str r0, [r5, #20]	@ 000f52bc 6861
.org 0xf52be
	ldrb r0, [r5, #16]	@ 000f52be 287c
.org 0xf52c0
	adds r0, #3	@ 000f52c0 0330
.org 0xf52c2
	strb r0, [r5, #16]	@ 000f52c2 2874
.org 0xf52c4
	adds r0, r5, #0	@ 000f52c4 281c
.org 0xf52c6
	adds r0, #140	@ 000f52c6 8c30
.org 0xf52c8
	str r4, [r0, #0]	@ 000f52c8 0460
.org 0xf52ca
	adds r0, #4	@ 000f52ca 0430
.org 0xf52cc
	str r4, [r0, #0]	@ 000f52cc 0460
.org 0xf52ce
	adds r0, #4	@ 000f52ce 0430
.org 0xf52d0
	strb r4, [r0, #0]	@ 000f52d0 0470
.org 0xf52d2
	ldrb r1, [r5, #10]	@ 000f52d2 a97a
.org 0xf52d4
	movs r0, #251	@ 000f52d4 fb20
.org 0xf52d6
	ands r0, r1	@ 000f52d6 0840
.org 0xf52d8
	strb r0, [r5, #10]	@ 000f52d8 a872
.org 0xf52da
	ldr r2, [pc, #36]	@ 000f52da 094a
.org 0xf52dc
	ldr r0, [pc, #36]	@ 000f52dc 0948
.org 0xf52de
	adds r2, r2, r0	@ 000f52de 1218
.org 0xf52e0
	adds r0, r6, #0	@ 000f52e0 301c
.org 0xf52e2
	ldrb r1, [r5, #17]	@ 000f52e2 697c
.org 0xf52e4
	lsls r0, r1	@ 000f52e4 8840
.org 0xf52e6
	ldrb r1, [r2, #0]	@ 000f52e6 1178
.org 0xf52e8
	orrs r0, r1	@ 000f52e8 0843
.org 0xf52ea
	strb r0, [r2, #0]	@ 000f52ea 1070
.org 0xf52ec
	adds r0, r5, #0	@ 000f52ec 281c
.org 0xf52ee
	bl 0xf3f1c	@ 000f52ee fef715fe
.org 0xf52f2
	pop {r4, r5, r6}	@ 000f52f2 70bc
.org 0xf52f4
	pop {r0}	@ 000f52f4 01bc
.org 0xf52f6
	bx r0	@ 000f52f6 0047
