@ FUN_080292f4  entry 0x080292f4  size 128
.thumb
.org 0x292f4
FUN_080292f4:
	push {r4, r5, r6, lr}	@ 000292f4 70b5
.org 0x292f6
	mov r6, sl	@ 000292f6 5646
.org 0x292f8
	mov r5, r9	@ 000292f8 4d46
.org 0x292fa
	mov r4, r8	@ 000292fa 4446
.org 0x292fc
	push {r4, r5, r6}	@ 000292fc 70b4
.org 0x292fe
	ldr r5, [pc, #116]	@ 000292fe 1d4d
.org 0x29300
	ldr r0, [pc, #116]	@ 00029300 1d48
.org 0x29302
	mov sl, r0	@ 00029302 8246
.org 0x29304
	ldrh r1, [r0, #0]	@ 00029304 0188
.org 0x29306
	ldrh r0, [r5, #6]	@ 00029306 e888
.org 0x29308
	lsrs r0, r0, #6	@ 00029308 8009
.org 0x2930a
	subs r1, r1, r0	@ 0002930a 091a
.org 0x2930c
	lsls r1, r1, #5	@ 0002930c 4901
.org 0x2930e
	movs r0, #128	@ 0002930e 8020
.org 0x29310
	lsls r0, r0, #9	@ 00029310 4002
.org 0x29312
	mov r9, r0	@ 00029312 8146
.org 0x29314
	add r1, r9	@ 00029314 4944
.org 0x29316
	adds r0, r5, #0	@ 00029316 281c
.org 0x29318
	bl 0x1d30	@ 00029318 d8f70afd
.org 0x2931c
	ldr r4, [pc, #92]	@ 0002931c 174c
.org 0x2931e
	ldr r0, [pc, #96]	@ 0002931e 1848
.org 0x29320
	mov r8, r0	@ 00029320 8046
.org 0x29322
	ldrh r1, [r0, #0]	@ 00029322 0188
.org 0x29324
	ldrb r0, [r4, #7]	@ 00029324 e079
.org 0x29326
	subs r1, r1, r0	@ 00029326 091a
.org 0x29328
	lsls r1, r1, #5	@ 00029328 4901
.org 0x2932a
	movs r6, #128	@ 0002932a 8026
.org 0x2932c
	lsls r6, r6, #2	@ 0002932c b600
.org 0x2932e
	adds r1, r1, r6	@ 0002932e 8919
.org 0x29330
	adds r0, r4, #0	@ 00029330 201c
.org 0x29332
	bl 0x2208	@ 00029332 d8f769ff
.org 0x29336
	adds r5, #40	@ 00029336 2835
.org 0x29338
	mov r0, sl	@ 00029338 5046
.org 0x2933a
	ldrh r1, [r0, #4]	@ 0002933a 8188
.org 0x2933c
	ldrh r0, [r5, #6]	@ 0002933c e888
.org 0x2933e
	lsrs r0, r0, #6	@ 0002933e 8009
.org 0x29340
	subs r1, r1, r0	@ 00029340 091a
.org 0x29342
	lsls r1, r1, #5	@ 00029342 4901
.org 0x29344
	add r1, r9	@ 00029344 4944
.org 0x29346
	adds r0, r5, #0	@ 00029346 281c
.org 0x29348
	bl 0x1d30	@ 00029348 d8f7f2fc
.org 0x2934c
	adds r4, #40	@ 0002934c 2834
.org 0x2934e
	mov r0, r8	@ 0002934e 4046
.org 0x29350
	ldrh r1, [r0, #4]	@ 00029350 8188
.org 0x29352
	ldrb r0, [r4, #7]	@ 00029352 e079
.org 0x29354
	subs r1, r1, r0	@ 00029354 091a
.org 0x29356
	lsls r1, r1, #5	@ 00029356 4901
.org 0x29358
	adds r1, r1, r6	@ 00029358 8919
.org 0x2935a
	adds r0, r4, #0	@ 0002935a 201c
.org 0x2935c
	bl 0x2208	@ 0002935c d8f754ff
.org 0x29360
	bl 0x2ada8	@ 00029360 01f022fd
.org 0x29364
	movs r0, #0	@ 00029364 0020
.org 0x29366
	pop {r3, r4, r5}	@ 00029366 38bc
.org 0x29368
	mov r8, r3	@ 00029368 9846
.org 0x2936a
	mov r9, r4	@ 0002936a a146
.org 0x2936c
	mov sl, r5	@ 0002936c aa46
.org 0x2936e
	pop {r4, r5, r6}	@ 0002936e 70bc
.org 0x29370
	pop {r1}	@ 00029370 02bc
.org 0x29372
	bx r1	@ 00029372 0847
