@ FUN_080a5378  entry 0x080a5378  size 186
.thumb
.org 0xa5378
FUN_080a5378:
	push {r4, r5, r6, r7, lr}	@ 000a5378 f0b5
.org 0xa537a
	mov r7, sl	@ 000a537a 5746
.org 0xa537c
	mov r6, r9	@ 000a537c 4e46
.org 0xa537e
	mov r5, r8	@ 000a537e 4546
.org 0xa5380
	push {r5, r6, r7}	@ 000a5380 e0b4
.org 0xa5382
	sub sp, #16	@ 000a5382 84b0
.org 0xa5384
	adds r6, r0, #0	@ 000a5384 061c
.org 0xa5386
	ldrb r0, [r6, #10]	@ 000a5386 b07a
.org 0xa5388
	lsrs r5, r0, #4	@ 000a5388 0509
.org 0xa538a
	movs r2, #1	@ 000a538a 0122
.org 0xa538c
	ands r5, r2	@ 000a538c 1540
.org 0xa538e
	str r5, [sp, #8]	@ 000a538e 0295
.org 0xa5390
	ldr r3, [pc, #160]	@ 000a5390 284b
.org 0xa5392
	ldr r0, [r3, #0]	@ 000a5392 1868
.org 0xa5394
	ldr r1, [pc, #160]	@ 000a5394 2849
.org 0xa5396
	mov r8, r1	@ 000a5396 8846
.org 0xa5398
	mov r1, r8	@ 000a5398 4146
.org 0xa539a
	muls r1, r0	@ 000a539a 4143
.org 0xa539c
	adds r0, r1, #0	@ 000a539c 081c
.org 0xa539e
	ldr r7, [pc, #156]	@ 000a539e 274f
.org 0xa53a0
	adds r0, r0, r7	@ 000a53a0 c019
.org 0xa53a2
	lsls r0, r0, #1	@ 000a53a2 4000
.org 0xa53a4
	lsrs r1, r0, #1	@ 000a53a4 4108
.org 0xa53a6
	str r1, [r3, #0]	@ 000a53a6 1960
.org 0xa53a8
	lsrs r0, r0, #17	@ 000a53a8 400c
.org 0xa53aa
	ands r0, r2	@ 000a53aa 1040
.org 0xa53ac
	adds r4, r0, #5	@ 000a53ac 441d
.org 0xa53ae
	cmp r4, #0	@ 000a53ae 002c
.org 0xa53b0
	beq.n 0xa5422	@ 000a53b0 37d0
.org 0xa53b2
	mov sl, r3	@ 000a53b2 9a46
.org 0xa53b4
	mov r9, r8	@ 000a53b4 c146
.org 0xa53b6
	mov r8, r7	@ 000a53b6 b846
.org 0xa53b8
	movs r7, #15	@ 000a53b8 0f27
.org 0xa53ba
	mov r2, sp	@ 000a53ba 6a46
.org 0xa53bc
	str r2, [sp, #12]	@ 000a53bc 0392
.org 0xa53be
	mov r1, sl	@ 000a53be 5146
.org 0xa53c0
	ldr r0, [r1, #0]	@ 000a53c0 0868
.org 0xa53c2
	mov r2, r9	@ 000a53c2 4a46
.org 0xa53c4
	muls r2, r0	@ 000a53c4 4243
.org 0xa53c6
	adds r0, r2, #0	@ 000a53c6 101c
.org 0xa53c8
	add r0, r8	@ 000a53c8 4044
.org 0xa53ca
	lsls r0, r0, #1	@ 000a53ca 4000
.org 0xa53cc
	lsrs r2, r0, #1	@ 000a53cc 4208
.org 0xa53ce
	lsrs r0, r0, #17	@ 000a53ce 400c
.org 0xa53d0
	ands r0, r7	@ 000a53d0 3840
.org 0xa53d2
	subs r0, #7	@ 000a53d2 0738
.org 0xa53d4
	lsls r0, r0, #8	@ 000a53d4 0002
.org 0xa53d6
	ldr r1, [r6, #84]	@ 000a53d6 716d
.org 0xa53d8
	adds r1, r1, r0	@ 000a53d8 0918
.org 0xa53da
	str r1, [sp, #0]	@ 000a53da 0091
.org 0xa53dc
	mov r0, r9	@ 000a53dc 4846
.org 0xa53de
	muls r0, r2	@ 000a53de 5043
.org 0xa53e0
	add r0, r8	@ 000a53e0 4044
.org 0xa53e2
	lsls r0, r0, #1	@ 000a53e2 4000
.org 0xa53e4
	lsrs r1, r0, #1	@ 000a53e4 4108
.org 0xa53e6
	mov r2, sl	@ 000a53e6 5246
.org 0xa53e8
	str r1, [r2, #0]	@ 000a53e8 1160
.org 0xa53ea
	lsrs r0, r0, #17	@ 000a53ea 400c
.org 0xa53ec
	ands r0, r7	@ 000a53ec 3840
.org 0xa53ee
	lsls r0, r0, #8	@ 000a53ee 0002
.org 0xa53f0
	ldr r1, [pc, #76]	@ 000a53f0 1349
.org 0xa53f2
	adds r0, r0, r1	@ 000a53f2 4018
.org 0xa53f4
	ldr r1, [r6, #88]	@ 000a53f4 b16d
.org 0xa53f6
	adds r1, r1, r0	@ 000a53f6 0918
.org 0xa53f8
	ldr r2, [sp, #12]	@ 000a53f8 039a
.org 0xa53fa
	str r1, [r2, #4]	@ 000a53fa 5160
.org 0xa53fc
	movs r0, #3	@ 000a53fc 0320
.org 0xa53fe
	ands r0, r4	@ 000a53fe 2040
.org 0xa5400
	lsls r1, r0, #3	@ 000a5400 c100
.org 0xa5402
	subs r1, r1, r0	@ 000a5402 091a
.org 0xa5404
	lsls r1, r1, #2	@ 000a5404 8900
.org 0xa5406
	ldr r0, [pc, #60]	@ 000a5406 0f48
.org 0xa5408
	adds r1, r1, r0	@ 000a5408 0918
.org 0xa540a
	ldr r0, [sp, #8]	@ 000a540a 0298
.org 0xa540c
	lsls r3, r0, #4	@ 000a540c 0301
.org 0xa540e
	orrs r3, r5	@ 000a540e 2b43
.org 0xa5410
	lsls r3, r3, #24	@ 000a5410 1b06
.org 0xa5412
	mov r0, sp	@ 000a5412 6846
.org 0xa5414
	movs r2, #0	@ 000a5414 0022
.org 0xa5416
	lsrs r3, r3, #24	@ 000a5416 1b0e
.org 0xa5418
	bl 0xd4c8c	@ 000a5418 2ff038fc
.org 0xa541c
	subs r4, #1	@ 000a541c 013c
.org 0xa541e
	cmp r4, #0	@ 000a541e 002c
.org 0xa5420
	bne.n 0xa53be	@ 000a5420 cdd1
.org 0xa5422
	add sp, #16	@ 000a5422 04b0
.org 0xa5424
	pop {r3, r4, r5}	@ 000a5424 38bc
.org 0xa5426
	mov r8, r3	@ 000a5426 9846
.org 0xa5428
	mov r9, r4	@ 000a5428 a146
.org 0xa542a
	mov sl, r5	@ 000a542a aa46
.org 0xa542c
	pop {r4, r5, r6, r7}	@ 000a542c f0bc
.org 0xa542e
	pop {r0}	@ 000a542e 01bc
.org 0xa5430
	bx r0	@ 000a5430 0047
