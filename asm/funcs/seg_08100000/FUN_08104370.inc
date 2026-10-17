@ FUN_08104370  entry 0x08104370  size 138
.thumb
.org 0x104370
FUN_08104370:
	push {r4, r5, r6, lr}	@ 00104370 70b5
.org 0x104372
	adds r6, r0, #0	@ 00104372 061c
.org 0x104374
	movs r4, #219	@ 00104374 db24
.org 0x104376
	ldr r1, [pc, #132]	@ 00104376 2149
.org 0x104378
	lsls r2, r4, #1	@ 00104378 6200
.org 0x10437a
	adds r1, r1, r2	@ 0010437a 8918
.org 0x10437c
	ldr r0, [pc, #128]	@ 0010437c 2048
.org 0x10437e
	strh r0, [r1, #0]	@ 0010437e 0880
.org 0x104380
	ldr r5, [pc, #128]	@ 00104380 204d
.org 0x104382
	adds r5, r5, r2	@ 00104382 ad18
.org 0x104384
	movs r0, #10	@ 00104384 0a20
.org 0x104386
	strh r0, [r5, #0]	@ 00104386 2880
.org 0x104388
	lsls r4, r4, #4	@ 00104388 2401
.org 0x10438a
	movs r0, #219	@ 0010438a db20
.org 0x10438c
	lsls r0, r0, #2	@ 0010438c 8000
.org 0x10438e
	adds r4, r4, r0	@ 0010438e 2418
.org 0x104390
	ldr r0, [pc, #116]	@ 00104390 1d48
.org 0x104392
	adds r0, r4, r0	@ 00104392 2018
.org 0x104394
	ldrh r1, [r1, #0]	@ 00104394 0988
.org 0x104396
	ldrh r2, [r0, #6]	@ 00104396 c288
.org 0x104398
	lsrs r2, r2, #6	@ 00104398 9209
.org 0x10439a
	subs r1, r1, r2	@ 0010439a 891a
.org 0x10439c
	lsls r1, r1, #5	@ 0010439c 4901
.org 0x10439e
	movs r2, #128	@ 0010439e 8022
.org 0x1043a0
	lsls r2, r2, #9	@ 001043a0 5202
.org 0x1043a2
	adds r1, r1, r2	@ 001043a2 8918
.org 0x1043a4
	bl 0x1d30	@ 001043a4 fdf6c4fc
.org 0x1043a8
	ldr r0, [pc, #96]	@ 001043a8 1848
.org 0x1043aa
	adds r4, r4, r0	@ 001043aa 2418
.org 0x1043ac
	ldrh r1, [r5, #0]	@ 001043ac 2988
.org 0x1043ae
	ldrb r0, [r4, #7]	@ 001043ae e079
.org 0x1043b0
	subs r1, r1, r0	@ 001043b0 091a
.org 0x1043b2
	lsls r1, r1, #5	@ 001043b2 4901
.org 0x1043b4
	movs r2, #128	@ 001043b4 8022
.org 0x1043b6
	lsls r2, r2, #2	@ 001043b6 9200
.org 0x1043b8
	adds r1, r1, r2	@ 001043b8 8918
.org 0x1043ba
	adds r0, r4, #0	@ 001043ba 201c
.org 0x1043bc
	bl 0x2208	@ 001043bc fdf624ff
.org 0x1043c0
	movs r1, #0	@ 001043c0 0021
.org 0x1043c2
	adds r2, r6, #0	@ 001043c2 321c
.org 0x1043c4
	adds r2, #180	@ 001043c4 b432
.org 0x1043c6
	movs r3, #0	@ 001043c6 0023
.org 0x1043c8
	lsls r0, r1, #2	@ 001043c8 8800
.org 0x1043ca
	adds r0, r2, r0	@ 001043ca 1018
.org 0x1043cc
	str r3, [r0, #0]	@ 001043cc 0360
.org 0x1043ce
	adds r0, r1, #1	@ 001043ce 481c
.org 0x1043d0
	lsls r0, r0, #24	@ 001043d0 0006
.org 0x1043d2
	lsrs r1, r0, #24	@ 001043d2 010e
.org 0x1043d4
	cmp r1, #3	@ 001043d4 0329
.org 0x1043d6
	bls.n 0x1043c8	@ 001043d6 f7d9
.org 0x1043d8
	movs r1, #0	@ 001043d8 0021
.org 0x1043da
	movs r2, #0	@ 001043da 0022
.org 0x1043dc
	lsls r0, r1, #2	@ 001043dc 8800
.org 0x1043de
	adds r0, r0, r6	@ 001043de 8019
.org 0x1043e0
	str r2, [r0, #92]	@ 001043e0 c265
.org 0x1043e2
	adds r0, r1, #1	@ 001043e2 481c
.org 0x1043e4
	lsls r0, r0, #24	@ 001043e4 0006
.org 0x1043e6
	lsrs r1, r0, #24	@ 001043e6 010e
.org 0x1043e8
	cmp r1, #3	@ 001043e8 0329
.org 0x1043ea
	bls.n 0x1043dc	@ 001043ea f7d9
.org 0x1043ec
	movs r0, #0	@ 001043ec 0020
.org 0x1043ee
	strb r0, [r6, #18]	@ 001043ee b074
.org 0x1043f0
	movs r0, #32	@ 001043f0 2020
.org 0x1043f2
	strb r0, [r6, #19]	@ 001043f2 f074
.org 0x1043f4
	pop {r4, r5, r6}	@ 001043f4 70bc
.org 0x1043f6
	pop {r0}	@ 001043f6 01bc
.org 0x1043f8
	bx r0	@ 001043f8 0047
