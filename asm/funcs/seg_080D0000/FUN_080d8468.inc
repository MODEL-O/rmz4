@ FUN_080d8468  entry 0x080d8468  size 250
.thumb
.org 0xd8468
FUN_080d8468:
	push {r4, r5, r6, r7, lr}	@ 000d8468 f0b5
.org 0xd846a
	mov r7, r8	@ 000d846a 4746
.org 0xd846c
	push {r7}	@ 000d846c 80b4
.org 0xd846e
	sub sp, #12	@ 000d846e 83b0
.org 0xd8470
	adds r6, r0, #0	@ 000d8470 061c
.org 0xd8472
	ldr r1, [pc, #140]	@ 000d8472 2349
.org 0xd8474
	mov r0, sp	@ 000d8474 6846
.org 0xd8476
	movs r2, #2	@ 000d8476 0222
.org 0xd8478
	bl 0x129258	@ 000d8478 50f0eefe
.org 0xd847c
	ldr r0, [pc, #132]	@ 000d847c 2148
.org 0xd847e
	ldr r1, [r0, #4]	@ 000d847e 4168
.org 0xd8480
	ldr r0, [r0, #0]	@ 000d8480 0068
.org 0xd8482
	str r0, [sp, #4]	@ 000d8482 0190
.org 0xd8484
	str r1, [sp, #8]	@ 000d8484 0291
.org 0xd8486
	ldrb r5, [r6, #16]	@ 000d8486 357c
.org 0xd8488
	ldrb r0, [r6, #17]	@ 000d8488 707c
.org 0xd848a
	movs r1, #1	@ 000d848a 0121
.org 0xd848c
	movs r3, #1	@ 000d848c 0123
.org 0xd848e
	adds r4, r3, #0	@ 000d848e 1c1c
.org 0xd8490
	ands r4, r0	@ 000d8490 0440
.org 0xd8492
	lsrs r7, r0, #1	@ 000d8492 4708
.org 0xd8494
	ands r7, r1	@ 000d8494 0f40
.org 0xd8496
	ldr r2, [pc, #112]	@ 000d8496 1c4a
.org 0xd8498
	ldrb r0, [r6, #9]	@ 000d8498 707a
.org 0xd849a
	lsls r0, r0, #2	@ 000d849a 8000
.org 0xd849c
	adds r0, r0, r2	@ 000d849c 8018
.org 0xd849e
	str r3, [r6, #12]	@ 000d849e f360
.org 0xd84a0
	ldr r0, [r0, #0]	@ 000d84a0 0068
.org 0xd84a2
	ldr r0, [r0, #4]	@ 000d84a2 4068
.org 0xd84a4
	str r0, [r6, #20]	@ 000d84a4 7061
.org 0xd84a6
	ldrb r0, [r6, #10]	@ 000d84a6 b07a
.org 0xd84a8
	movs r2, #0	@ 000d84a8 0022
.org 0xd84aa
	mov r8, r2	@ 000d84aa 9046
.org 0xd84ac
	orrs r1, r0	@ 000d84ac 0143
.org 0xd84ae
	movs r0, #2	@ 000d84ae 0220
.org 0xd84b0
	orrs r1, r0	@ 000d84b0 0143
.org 0xd84b2
	strb r1, [r6, #10]	@ 000d84b2 b172
.org 0xd84b4
	adds r0, r4, r5	@ 000d84b4 6019
.org 0xd84b6
	ands r0, r3	@ 000d84b6 1840
.org 0xd84b8
	lsls r0, r0, #1	@ 000d84b8 4000
.org 0xd84ba
	subs r0, #1	@ 000d84ba 0138
.org 0xd84bc
	lsls r0, r0, #6	@ 000d84bc 8001
.org 0xd84be
	str r0, [r6, #92]	@ 000d84be f065
.org 0xd84c0
	adds r1, r7, #1	@ 000d84c0 791c
.org 0xd84c2
	ands r1, r3	@ 000d84c2 1940
.org 0xd84c4
	lsls r0, r1, #1	@ 000d84c4 4800
.org 0xd84c6
	adds r0, r0, r1	@ 000d84c6 4018
.org 0xd84c8
	lsls r0, r0, #8	@ 000d84c8 0002
.org 0xd84ca
	negs r0, r0	@ 000d84ca 4042
.org 0xd84cc
	str r0, [r6, #96]	@ 000d84cc 3066
.org 0xd84ce
	movs r0, #60	@ 000d84ce 3c20
.org 0xd84d0
	strb r0, [r6, #18]	@ 000d84d0 b074
.org 0xd84d2
	strb r3, [r6, #19]	@ 000d84d2 f374
.org 0xd84d4
	adds r0, r6, #0	@ 000d84d4 301c
.org 0xd84d6
	bl 0x1cc9c	@ 000d84d6 44f7e1fb
.org 0xd84da
	lsls r0, r5, #2	@ 000d84da a800
.org 0xd84dc
	add r1, sp, #4	@ 000d84dc 01a9
.org 0xd84de
	adds r0, r0, r1	@ 000d84de 4018
.org 0xd84e0
	ldrh r1, [r0, #0]	@ 000d84e0 0188
.org 0xd84e2
	adds r0, r6, #0	@ 000d84e2 301c
.org 0xd84e4
	bl 0x1cf00	@ 000d84e4 44f70cfd
.org 0xd84e8
	mov r1, sp	@ 000d84e8 6946
.org 0xd84ea
	adds r0, r1, r5	@ 000d84ea 4819
.org 0xd84ec
	ldrb r0, [r0, #0]	@ 000d84ec 0078
.org 0xd84ee
	adds r1, r6, #0	@ 000d84ee 311c
.org 0xd84f0
	adds r1, #37	@ 000d84f0 2531
.org 0xd84f2
	strb r0, [r1, #0]	@ 000d84f2 0870
.org 0xd84f4
	cmp r4, #0	@ 000d84f4 002c
.org 0xd84f6
	beq.n 0xd850c	@ 000d84f6 09d0
.org 0xd84f8
	ldrb r0, [r6, #10]	@ 000d84f8 b07a
.org 0xd84fa
	movs r1, #16	@ 000d84fa 1021
.org 0xd84fc
	orrs r0, r1	@ 000d84fc 0843
.org 0xd84fe
	b.n 0xd8512	@ 000d84fe 08e0
.org 0xd8500
	.byte 0x60,0xa2,0x12,0x08	@ 000d8500 data
.org 0xd8504
	.byte 0x64,0xa2,0x12,0x08	@ 000d8504 data
.org 0xd8508
	.byte 0x64,0x6f,0x86,0x08	@ 000d8508 data
.org 0xd850c
	ldrb r1, [r6, #10]	@ 000d850c b17a
.org 0xd850e
	movs r0, #239	@ 000d850e ef20
.org 0xd8510
	ands r0, r1	@ 000d8510 0840
.org 0xd8512
	strb r0, [r6, #10]	@ 000d8512 b072
.org 0xd8514
	adds r1, r4, #0	@ 000d8514 211c
.org 0xd8516
	adds r0, r6, #0	@ 000d8516 301c
.org 0xd8518
	adds r0, #76	@ 000d8518 4c30
.org 0xd851a
	strb r1, [r0, #0]	@ 000d851a 0170
.org 0xd851c
	adds r2, r6, #0	@ 000d851c 321c
.org 0xd851e
	adds r2, #74	@ 000d851e 4a32
.org 0xd8520
	lsls r1, r1, #4	@ 000d8520 0901
.org 0xd8522
	ldrb r3, [r2, #0]	@ 000d8522 1378
.org 0xd8524
	movs r0, #17	@ 000d8524 1120
.org 0xd8526
	negs r0, r0	@ 000d8526 4042
.org 0xd8528
	ands r0, r3	@ 000d8528 1840
.org 0xd852a
	orrs r0, r1	@ 000d852a 0843
.org 0xd852c
	strb r0, [r2, #0]	@ 000d852c 1070
.org 0xd852e
	adds r3, r7, #0	@ 000d852e 3b1c
.org 0xd8530
	adds r4, r2, #0	@ 000d8530 141c
.org 0xd8532
	cmp r3, #0	@ 000d8532 002b
.org 0xd8534
	beq.n 0xd853e	@ 000d8534 03d0
.org 0xd8536
	ldrb r0, [r6, #10]	@ 000d8536 b07a
.org 0xd8538
	movs r1, #32	@ 000d8538 2021
.org 0xd853a
	orrs r0, r1	@ 000d853a 0843
.org 0xd853c
	b.n 0xd8544	@ 000d853c 02e0
.org 0xd853e
	ldrb r1, [r6, #10]	@ 000d853e b17a
.org 0xd8540
	movs r0, #223	@ 000d8540 df20
.org 0xd8542
	ands r0, r1	@ 000d8542 0840
.org 0xd8544
	strb r0, [r6, #10]	@ 000d8544 b072
.org 0xd8546
	adds r0, r3, #0	@ 000d8546 181c
.org 0xd8548
	adds r2, r6, #0	@ 000d8548 321c
.org 0xd854a
	adds r2, #77	@ 000d854a 4d32
.org 0xd854c
	strb r0, [r2, #0]	@ 000d854c 1070
.org 0xd854e
	lsls r0, r0, #5	@ 000d854e 4001
.org 0xd8550
	ldrb r2, [r4, #0]	@ 000d8550 2278
.org 0xd8552
	movs r1, #33	@ 000d8552 2121
.org 0xd8554
	negs r1, r1	@ 000d8554 4942
.org 0xd8556
	ands r1, r2	@ 000d8556 1140
.org 0xd8558
	orrs r1, r0	@ 000d8558 0143
.org 0xd855a
	strb r1, [r4, #0]	@ 000d855a 2170
.org 0xd855c
	adds r0, r6, #0	@ 000d855c 301c
.org 0xd855e
	bl 0xd8710	@ 000d855e 00f0d7f8
