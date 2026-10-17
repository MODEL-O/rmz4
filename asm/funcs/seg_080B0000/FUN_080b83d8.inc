@ FUN_080b83d8  entry 0x080b83d8  size 148
.thumb
.org 0xb83d8
FUN_080b83d8:
	push {r4, r5, r6, r7, lr}	@ 000b83d8 f0b5
.org 0xb83da
	mov r7, r8	@ 000b83da 4746
.org 0xb83dc
	push {r7}	@ 000b83dc 80b4
.org 0xb83de
	adds r7, r0, #0	@ 000b83de 071c
.org 0xb83e0
	ldr r4, [r7, #40]	@ 000b83e0 bc6a
.org 0xb83e2
	ldrb r0, [r7, #14]	@ 000b83e2 b87b
.org 0xb83e4
	cmp r0, #0	@ 000b83e4 0028
.org 0xb83e6
	bne.n 0xb83f8	@ 000b83e6 07d1
.org 0xb83e8
	movs r0, #89	@ 000b83e8 5920
.org 0xb83ea
	bl 0x2b10	@ 000b83ea 4af791fb
.org 0xb83ee
	movs r0, #39	@ 000b83ee 2720
.org 0xb83f0
	strb r0, [r7, #19]	@ 000b83f0 f874
.org 0xb83f2
	ldrb r0, [r7, #14]	@ 000b83f2 b87b
.org 0xb83f4
	adds r0, #1	@ 000b83f4 0130
.org 0xb83f6
	strb r0, [r7, #14]	@ 000b83f6 b873
.org 0xb83f8
	adds r0, r7, #0	@ 000b83f8 381c
.org 0xb83fa
	bl 0x1cff0	@ 000b83fa 64f7f9fd
.org 0xb83fe
	adds r5, r4, #0	@ 000b83fe 251c
.org 0xb8400
	adds r5, #180	@ 000b8400 b435
.org 0xb8402
	ldr r0, [r7, #84]	@ 000b8402 786d
.org 0xb8404
	mov r8, r0	@ 000b8404 8046
.org 0xb8406
	movs r1, #128	@ 000b8406 8021
.org 0xb8408
	lsls r1, r1, #2	@ 000b8408 8900
.org 0xb840a
	add r1, r8	@ 000b840a 4144
.org 0xb840c
	ldr r0, [r5, #0]	@ 000b840c 2868
.org 0xb840e
	subs r0, r0, r1	@ 000b840e 401a
.org 0xb8410
	ldrb r1, [r7, #19]	@ 000b8410 f97c
.org 0xb8412
	bl 0x128fb8	@ 000b8412 70f0d1fd
.org 0xb8416
	adds r6, r0, #0	@ 000b8416 061c
.org 0xb8418
	str r6, [r7, #92]	@ 000b8418 fe65
.org 0xb841a
	ldr r4, [r7, #88]	@ 000b841a bc6d
.org 0xb841c
	ldr r2, [pc, #76]	@ 000b841c 134a
.org 0xb841e
	adds r1, r4, r2	@ 000b841e a118
.org 0xb8420
	ldr r0, [r5, #4]	@ 000b8420 6868
.org 0xb8422
	subs r0, r0, r1	@ 000b8422 401a
.org 0xb8424
	ldrb r1, [r7, #19]	@ 000b8424 f97c
.org 0xb8426
	bl 0x128fb8	@ 000b8426 70f0c7fd
.org 0xb842a
	str r0, [r7, #96]	@ 000b842a 3866
.org 0xb842c
	add r6, r8	@ 000b842c 4644
.org 0xb842e
	str r6, [r7, #84]	@ 000b842e 7e65
.org 0xb8430
	adds r4, r4, r0	@ 000b8430 2418
.org 0xb8432
	str r4, [r7, #88]	@ 000b8432 bc65
.org 0xb8434
	ldrb r0, [r7, #19]	@ 000b8434 f87c
.org 0xb8436
	negs r0, r0	@ 000b8436 4042
.org 0xb8438
	adds r1, r7, #0	@ 000b8438 391c
.org 0xb843a
	adds r1, #36	@ 000b843a 2431
.org 0xb843c
	strb r0, [r1, #0]	@ 000b843c 0870
.org 0xb843e
	ldrb r0, [r7, #19]	@ 000b843e f87c
.org 0xb8440
	subs r0, #1	@ 000b8440 0138
.org 0xb8442
	strb r0, [r7, #19]	@ 000b8442 f874
.org 0xb8444
	lsls r0, r0, #24	@ 000b8444 0006
.org 0xb8446
	lsrs r1, r0, #24	@ 000b8446 010e
.org 0xb8448
	cmp r1, #0	@ 000b8448 0029
.org 0xb844a
	bne.n 0xb8462	@ 000b844a 0ad1
.org 0xb844c
	ldr r0, [r5, #0]	@ 000b844c 2868
.org 0xb844e
	ldr r2, [pc, #32]	@ 000b844e 084a
.org 0xb8450
	adds r0, r0, r2	@ 000b8450 8018
.org 0xb8452
	str r0, [r7, #84]	@ 000b8452 7865
.org 0xb8454
	ldr r0, [r5, #4]	@ 000b8454 6868
.org 0xb8456
	movs r2, #160	@ 000b8456 a022
.org 0xb8458
	lsls r2, r2, #6	@ 000b8458 9201
.org 0xb845a
	adds r0, r0, r2	@ 000b845a 8018
.org 0xb845c
	str r0, [r7, #88]	@ 000b845c b865
.org 0xb845e
	strb r1, [r7, #13]	@ 000b845e 7973
.org 0xb8460
	strb r1, [r7, #14]	@ 000b8460 b973
.org 0xb8462
	pop {r3}	@ 000b8462 08bc
.org 0xb8464
	mov r8, r3	@ 000b8464 9846
.org 0xb8466
	pop {r4, r5, r6, r7}	@ 000b8466 f0bc
.org 0xb8468
	pop {r0}	@ 000b8468 01bc
.org 0xb846a
	bx r0	@ 000b846a 0047
