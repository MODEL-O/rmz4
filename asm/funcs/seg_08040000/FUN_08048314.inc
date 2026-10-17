@ FUN_08048314  entry 0x08048314  size 208
.thumb
.org 0x48314
FUN_08048314:
	push {r4, r5, r6, r7, lr}	@ 00048314 f0b5
.org 0x48316
	mov r7, sl	@ 00048316 5746
.org 0x48318
	mov r6, r9	@ 00048318 4e46
.org 0x4831a
	mov r5, r8	@ 0004831a 4546
.org 0x4831c
	push {r5, r6, r7}	@ 0004831c e0b4
.org 0x4831e
	sub sp, #12	@ 0004831e 83b0
.org 0x48320
	str r0, [sp, #0]	@ 00048320 0090
.org 0x48322
	str r1, [sp, #4]	@ 00048322 0191
.org 0x48324
	lsls r2, r2, #24	@ 00048324 1206
.org 0x48326
	lsrs r2, r2, #24	@ 00048326 120e
.org 0x48328
	str r2, [sp, #8]	@ 00048328 0292
.org 0x4832a
	ldr r0, [pc, #112]	@ 0004832a 1c48
.org 0x4832c
	ldr r0, [r0, #0]	@ 0004832c 0068
.org 0x4832e
	bl 0x5500	@ 0004832e bdf7e7f8
.org 0x48332
	adds r2, r0, #0	@ 00048332 021c
.org 0x48334
	cmp r2, #0	@ 00048334 002a
.org 0x48336
	beq.n 0x483e4	@ 00048336 55d0
.org 0x48338
	ldr r7, [pc, #100]	@ 00048338 194f
.org 0x4833a
	movs r6, #31	@ 0004833a 1f26
.org 0x4833c
	strb r6, [r2, #9]	@ 0004833c 5672
.org 0x4833e
	ldr r0, [r7, #124]	@ 0004833e f86f
.org 0x48340
	ldr r0, [r0, #0]	@ 00048340 0068
.org 0x48342
	str r0, [r2, #20]	@ 00048342 5061
.org 0x48344
	ldrb r1, [r2, #11]	@ 00048344 d17a
.org 0x48346
	movs r0, #191	@ 00048346 bf20
.org 0x48348
	mov r9, r0	@ 00048348 8146
.org 0x4834a
	ands r0, r1	@ 0004834a 0840
.org 0x4834c
	strb r0, [r2, #11]	@ 0004834c d072
.org 0x4834e
	adds r3, r2, #0	@ 0004834e 131c
.org 0x48350
	adds r3, #37	@ 00048350 2533
.org 0x48352
	movs r1, #16	@ 00048352 1021
.org 0x48354
	mov r8, r1	@ 00048354 8846
.org 0x48356
	mov r0, r8	@ 00048356 4046
.org 0x48358
	strb r0, [r3, #0]	@ 00048358 1870
.org 0x4835a
	ldr r5, [pc, #72]	@ 0004835a 124d
.org 0x4835c
	ldrh r0, [r5, #0]	@ 0004835c 2888
.org 0x4835e
	strh r0, [r2, #32]	@ 0004835e 1084
.org 0x48360
	ldr r4, [pc, #68]	@ 00048360 114c
.org 0x48362
	ldrb r0, [r4, #0]	@ 00048362 2078
.org 0x48364
	movs r1, #34	@ 00048364 2221
.org 0x48366
	adds r1, r1, r2	@ 00048366 8918
.org 0x48368
	mov ip, r1	@ 00048368 8c46
.org 0x4836a
	strb r0, [r1, #0]	@ 0004836a 0870
.org 0x4836c
	ldr r0, [sp, #0]	@ 0004836c 0098
.org 0x4836e
	adds r0, #248	@ 0004836e f830
.org 0x48370
	ldrb r0, [r0, #0]	@ 00048370 0078
.org 0x48372
	adds r1, r7, #0	@ 00048372 391c
.org 0x48374
	cmp r0, #2	@ 00048374 0228
.org 0x48376
	bne.n 0x483ac	@ 00048376 19d1
.org 0x48378
	strb r6, [r2, #9]	@ 00048378 5672
.org 0x4837a
	ldr r0, [r1, #124]	@ 0004837a c86f
.org 0x4837c
	ldr r0, [r0, #0]	@ 0004837c 0068
.org 0x4837e
	str r0, [r2, #20]	@ 0004837e 5061
.org 0x48380
	ldrb r1, [r2, #11]	@ 00048380 d17a
.org 0x48382
	mov r0, r9	@ 00048382 4846
.org 0x48384
	ands r0, r1	@ 00048384 0840
.org 0x48386
	strb r0, [r2, #11]	@ 00048386 d072
.org 0x48388
	mov r0, r8	@ 00048388 4046
.org 0x4838a
	strb r0, [r3, #0]	@ 0004838a 1870
.org 0x4838c
	ldrh r0, [r5, #0]	@ 0004838c 2888
.org 0x4838e
	strh r0, [r2, #32]	@ 0004838e 1084
.org 0x48390
	adds r1, r4, #0	@ 00048390 211c
.org 0x48392
	ldrb r0, [r1, #0]	@ 00048392 0878
.org 0x48394
	mov r3, ip	@ 00048394 6346
.org 0x48396
	strb r0, [r3, #0]	@ 00048396 1870
.org 0x48398
	b.n 0x483ca	@ 00048398 17e0
.org 0x4839a
	.byte 0x00	@ 0004839a data
.org 0x4839b
	.byte 0x00	@ 0004839b data
.org 0x4839c
	.byte 0x88,0xed,0x02,0x02	@ 0004839c data
.org 0x483a0
	.byte 0xf8,0x39,0x85,0x08	@ 000483a0 data
.org 0x483a4
	.byte 0xfc,0x36,0x85,0x08	@ 000483a4 data
.org 0x483a8
	.byte 0x04,0x37,0x85,0x08	@ 000483a8 data
.org 0x483ac
	strb r6, [r2, #9]	@ 000483ac 5672
.org 0x483ae
	ldr r0, [r7, #124]	@ 000483ae f86f
.org 0x483b0
	ldr r0, [r0, #0]	@ 000483b0 0068
.org 0x483b2
	str r0, [r2, #20]	@ 000483b2 5061
.org 0x483b4
	ldrb r1, [r2, #11]	@ 000483b4 d17a
.org 0x483b6
	mov r0, r9	@ 000483b6 4846
.org 0x483b8
	ands r0, r1	@ 000483b8 0840
.org 0x483ba
	strb r0, [r2, #11]	@ 000483ba d072
.org 0x483bc
	mov r0, r8	@ 000483bc 4046
.org 0x483be
	strb r0, [r3, #0]	@ 000483be 1870
.org 0x483c0
	ldrh r0, [r5, #2]	@ 000483c0 6888
.org 0x483c2
	strh r0, [r2, #32]	@ 000483c2 1084
.org 0x483c4
	ldrb r0, [r4, #1]	@ 000483c4 6078
.org 0x483c6
	mov r1, ip	@ 000483c6 6146
.org 0x483c8
	strb r0, [r1, #0]	@ 000483c8 0870
.org 0x483ca
	ldr r3, [sp, #0]	@ 000483ca 009b
.org 0x483cc
	str r3, [r2, #40]	@ 000483cc 9362
.org 0x483ce
	ldr r0, [sp, #4]	@ 000483ce 0198
.org 0x483d0
	str r0, [r2, #44]	@ 000483d0 d062
.org 0x483d2
	ldr r1, [r0, #88]	@ 000483d2 816d
.org 0x483d4
	ldr r0, [r0, #84]	@ 000483d4 406d
.org 0x483d6
	str r0, [r2, #84]	@ 000483d6 5065
.org 0x483d8
	str r1, [r2, #88]	@ 000483d8 9165
.org 0x483da
	movs r0, #1	@ 000483da 0120
.org 0x483dc
	strb r0, [r2, #16]	@ 000483dc 1074
.org 0x483de
	mov r1, sp	@ 000483de 6946
.org 0x483e0
	ldrb r1, [r1, #8]	@ 000483e0 097a
.org 0x483e2
	strb r1, [r2, #17]	@ 000483e2 5174
