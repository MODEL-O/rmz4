@ FUN_0801c430  entry 0x0801c430  size 80
.thumb
.org 0x1c430
FUN_0801c430:
	push {r4, r5, r6, lr}	@ 0001c430 70b5
.org 0x1c432
	adds r5, r0, #0	@ 0001c432 051c
.org 0x1c434
	ldrb r6, [r5, #14]	@ 0001c434 ae7b
.org 0x1c436
	cmp r6, #0	@ 0001c436 002e
.org 0x1c438
	bne.n 0x1c47a	@ 0001c438 1fd1
.org 0x1c43a
	ldr r0, [r5, #92]	@ 0001c43a e86d
.org 0x1c43c
	lsls r0, r0, #16	@ 0001c43c 0004
.org 0x1c43e
	lsrs r0, r0, #20	@ 0001c43e 000d
.org 0x1c440
	lsls r3, r0, #1	@ 0001c440 4300
.org 0x1c442
	ldr r4, [pc, #60]	@ 0001c442 0f4c
.org 0x1c444
	adds r3, r3, r4	@ 0001c444 1b19
.org 0x1c446
	ldr r1, [r5, #100]	@ 0001c446 696e
.org 0x1c448
	movs r2, #71	@ 0001c448 4722
.org 0x1c44a
	orrs r1, r2	@ 0001c44a 1143
.org 0x1c44c
	strh r1, [r3, #0]	@ 0001c44c 1980
.org 0x1c44e
	lsls r0, r0, #2	@ 0001c44e 8000
.org 0x1c450
	adds r4, #8	@ 0001c450 0834
.org 0x1c452
	adds r0, r0, r4	@ 0001c452 0019
.org 0x1c454
	str r6, [r0, #0]	@ 0001c454 0660
.org 0x1c456
	ldr r0, [pc, #44]	@ 0001c456 0b48
.org 0x1c458
	ldr r0, [r0, #0]	@ 0001c458 0068
.org 0x1c45a
	ldr r2, [pc, #44]	@ 0001c45a 0b4a
.org 0x1c45c
	adds r0, r0, r2	@ 0001c45c 8018
.org 0x1c45e
	movs r2, #248	@ 0001c45e f822
.org 0x1c460
	lsls r2, r2, #5	@ 0001c460 5201
.org 0x1c462
	ands r1, r2	@ 0001c462 1140
.org 0x1c464
	lsls r1, r1, #3	@ 0001c464 c900
.org 0x1c466
	movs r2, #192	@ 0001c466 c022
.org 0x1c468
	lsls r2, r2, #19	@ 0001c468 d204
.org 0x1c46a
	adds r1, r1, r2	@ 0001c46a 8918
.org 0x1c46c
	movs r2, #128	@ 0001c46c 8022
.org 0x1c46e
	lsls r2, r2, #2	@ 0001c46e 9200
.org 0x1c470
	bl 0x128be0	@ 0001c470 0cf1b6fb
.org 0x1c474
	ldrb r0, [r5, #14]	@ 0001c474 a87b
.org 0x1c476
	adds r0, #1	@ 0001c476 0130
.org 0x1c478
	strb r0, [r5, #14]	@ 0001c478 a873
.org 0x1c47a
	pop {r4, r5, r6}	@ 0001c47a 70bc
.org 0x1c47c
	pop {r0}	@ 0001c47c 01bc
.org 0x1c47e
	bx r0	@ 0001c47e 0047
