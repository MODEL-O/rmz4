@ FUN_08012360  entry 0x08012360  size 86
.thumb
.org 0x12360
FUN_08012360:
	push {r4, r5, r6, r7, lr}	@ 00012360 f0b5
.org 0x12362
	mov r7, r8	@ 00012362 4746
.org 0x12364
	push {r7}	@ 00012364 80b4
.org 0x12366
	adds r7, r0, #0	@ 00012366 071c
.org 0x12368
	ldr r0, [pc, #76]	@ 00012368 1348
.org 0x1236a
	ldr r1, [pc, #80]	@ 0001236a 1449
.org 0x1236c
	adds r0, r0, r1	@ 0001236c 4018
.org 0x1236e
	ldrb r1, [r0, #0]	@ 0001236e 0178
.org 0x12370
	movs r0, #15	@ 00012370 0f20
.org 0x12372
	ands r0, r1	@ 00012372 0840
.org 0x12374
	cmp r0, #3	@ 00012374 0328
.org 0x12376
	bne.n 0x123ac	@ 00012376 19d1
.org 0x12378
	ldr r1, [r7, #92]	@ 00012378 f96d
.org 0x1237a
	lsls r1, r1, #16	@ 0001237a 0904
.org 0x1237c
	ldr r3, [r7, #52]	@ 0001237c 7b6b
.org 0x1237e
	ldr r5, [r7, #60]	@ 0001237e fd6b
.org 0x12380
	subs r5, r3, r5	@ 00012380 5d1b
.org 0x12382
	ldr r4, [r7, #56]	@ 00012382 bc6b
.org 0x12384
	ldr r6, [r7, #64]	@ 00012384 3e6c
.org 0x12386
	subs r6, r4, r6	@ 00012386 a61b
.org 0x12388
	lsrs r1, r1, #20	@ 00012388 090d
.org 0x1238a
	lsls r1, r1, #2	@ 0001238a 8900
.org 0x1238c
	ldr r2, [pc, #48]	@ 0001238c 0c4a
.org 0x1238e
	adds r0, r1, r2	@ 0001238e 8818
.org 0x12390
	mov r8, r0	@ 00012390 8046
.org 0x12392
	ldrh r0, [r7, #16]	@ 00012392 388a
.org 0x12394
	lsrs r0, r0, #8	@ 00012394 000a
.org 0x12396
	adds r3, r3, r0	@ 00012396 1b18
.org 0x12398
	adds r3, r3, r5	@ 00012398 5b19
.org 0x1239a
	mov r0, r8	@ 0001239a 4046
.org 0x1239c
	strh r3, [r0, #0]	@ 0001239c 0380
.org 0x1239e
	adds r2, #2	@ 0001239e 0232
.org 0x123a0
	adds r1, r1, r2	@ 000123a0 8918
.org 0x123a2
	ldrh r0, [r7, #18]	@ 000123a2 788a
.org 0x123a4
	lsrs r0, r0, #8	@ 000123a4 000a
.org 0x123a6
	adds r4, r4, r0	@ 000123a6 2418
.org 0x123a8
	adds r4, r4, r6	@ 000123a8 a419
.org 0x123aa
	strh r4, [r1, #0]	@ 000123aa 0c80
.org 0x123ac
	pop {r3}	@ 000123ac 08bc
.org 0x123ae
	mov r8, r3	@ 000123ae 9846
.org 0x123b0
	pop {r4, r5, r6, r7}	@ 000123b0 f0bc
.org 0x123b2
	pop {r0}	@ 000123b2 01bc
.org 0x123b4
	bx r0	@ 000123b4 0047
