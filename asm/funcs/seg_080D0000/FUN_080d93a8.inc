@ FUN_080d93a8  entry 0x080d93a8  size 140
.thumb
.org 0xd93a8
FUN_080d93a8:
	push {r4, r5, r6, r7, lr}	@ 000d93a8 f0b5
.org 0xd93aa
	adds r7, r0, #0	@ 000d93aa 071c
.org 0xd93ac
	lsls r1, r1, #24	@ 000d93ac 0906
.org 0xd93ae
	lsrs r6, r1, #24	@ 000d93ae 0e0e
.org 0xd93b0
	lsls r2, r2, #24	@ 000d93b0 1206
.org 0xd93b2
	lsrs r5, r2, #24	@ 000d93b2 150e
.org 0xd93b4
	lsls r3, r3, #24	@ 000d93b4 1b06
.org 0xd93b6
	lsrs r4, r3, #24	@ 000d93b6 1c0e
.org 0xd93b8
	ldr r0, [pc, #76]	@ 000d93b8 1348
.org 0xd93ba
	ldr r0, [r0, #0]	@ 000d93ba 0068
.org 0xd93bc
	bl 0x5500	@ 000d93bc 2cf7a0f8
.org 0xd93c0
	mov ip, r0	@ 000d93c0 8446
.org 0xd93c2
	cmp r0, #0	@ 000d93c2 0028
.org 0xd93c4
	beq.n 0xd9438	@ 000d93c4 38d0
.org 0xd93c6
	mov r1, ip	@ 000d93c6 6146
.org 0xd93c8
	adds r1, #37	@ 000d93c8 2531
.org 0xd93ca
	movs r2, #0	@ 000d93ca 0022
.org 0xd93cc
	movs r0, #1	@ 000d93cc 0120
.org 0xd93ce
	strb r0, [r1, #0]	@ 000d93ce 0870
.org 0xd93d0
	ldr r1, [pc, #56]	@ 000d93d0 0e49
.org 0xd93d2
	movs r0, #29	@ 000d93d2 1d20
.org 0xd93d4
	mov r3, ip	@ 000d93d4 6346
.org 0xd93d6
	strb r0, [r3, #9]	@ 000d93d6 5872
.org 0xd93d8
	ldr r0, [r1, #116]	@ 000d93d8 486f
.org 0xd93da
	ldr r0, [r0, #0]	@ 000d93da 0068
.org 0xd93dc
	str r0, [r3, #20]	@ 000d93dc 5861
.org 0xd93de
	movs r0, #0	@ 000d93de 0020
.org 0xd93e0
	strh r2, [r3, #32]	@ 000d93e0 1a84
.org 0xd93e2
	mov r1, ip	@ 000d93e2 6146
.org 0xd93e4
	adds r1, #34	@ 000d93e4 2231
.org 0xd93e6
	strb r0, [r1, #0]	@ 000d93e6 0870
.org 0xd93e8
	ldr r0, [r7, #0]	@ 000d93e8 3868
.org 0xd93ea
	ldr r1, [r7, #4]	@ 000d93ea 7968
.org 0xd93ec
	mov r2, ip	@ 000d93ec 6246
.org 0xd93ee
	str r0, [r2, #84]	@ 000d93ee 5065
.org 0xd93f0
	str r1, [r2, #88]	@ 000d93f0 9165
.org 0xd93f2
	strb r6, [r2, #16]	@ 000d93f2 1674
.org 0xd93f4
	strb r5, [r2, #17]	@ 000d93f4 5574
.org 0xd93f6
	adds r3, r4, #0	@ 000d93f6 231c
.org 0xd93f8
	cmp r3, #0	@ 000d93f8 002b
.org 0xd93fa
	beq.n 0xd9410	@ 000d93fa 09d0
.org 0xd93fc
	ldrb r0, [r2, #10]	@ 000d93fc 907a
.org 0xd93fe
	movs r1, #16	@ 000d93fe 1021
.org 0xd9400
	orrs r0, r1	@ 000d9400 0843
.org 0xd9402
	strb r0, [r2, #10]	@ 000d9402 9072
.org 0xd9404
	b.n 0xd941c	@ 000d9404 0ae0
.org 0xd9406
	.byte 0x00	@ 000d9406 data
.org 0xd9407
	.byte 0x00	@ 000d9407 data
.org 0xd9408
	.byte 0x9c,0xed,0x02,0x02	@ 000d9408 data
.org 0xd940c
	.byte 0x64,0x6f,0x86,0x08	@ 000d940c data
.org 0xd9410
	mov r0, ip	@ 000d9410 6046
.org 0xd9412
	ldrb r1, [r0, #10]	@ 000d9412 817a
.org 0xd9414
	movs r0, #239	@ 000d9414 ef20
.org 0xd9416
	ands r0, r1	@ 000d9416 0840
.org 0xd9418
	mov r1, ip	@ 000d9418 6146
.org 0xd941a
	strb r0, [r1, #10]	@ 000d941a 8872
.org 0xd941c
	movs r1, #1	@ 000d941c 0121
.org 0xd941e
	ands r1, r3	@ 000d941e 1940
.org 0xd9420
	mov r0, ip	@ 000d9420 6046
.org 0xd9422
	adds r0, #76	@ 000d9422 4c30
.org 0xd9424
	strb r1, [r0, #0]	@ 000d9424 0170
.org 0xd9426
	mov r3, ip	@ 000d9426 6346
.org 0xd9428
	adds r3, #74	@ 000d9428 4a33
.org 0xd942a
	lsls r1, r1, #4	@ 000d942a 0901
.org 0xd942c
	ldrb r2, [r3, #0]	@ 000d942c 1a78
.org 0xd942e
	movs r0, #17	@ 000d942e 1120
.org 0xd9430
	negs r0, r0	@ 000d9430 4042
.org 0xd9432
	ands r0, r2	@ 000d9432 1040
