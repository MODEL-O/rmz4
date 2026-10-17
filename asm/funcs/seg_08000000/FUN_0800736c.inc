@ FUN_0800736c  entry 0x0800736c  size 148
.thumb
.org 0x736c
FUN_0800736c:
	push {r4, r5, r6, r7, lr}	@ 0000736c f0b5
.org 0x736e
	mov r7, r8	@ 0000736e 4746
.org 0x7370
	push {r7}	@ 00007370 80b4
.org 0x7372
	adds r6, r2, #0	@ 00007372 161c
.org 0x7374
	ldr r4, [pc, #136]	@ 00007374 224c
.org 0x7376
	movs r3, #232	@ 00007376 e823
.org 0x7378
	lsls r3, r3, #1	@ 00007378 5b00
.org 0x737a
	adds r2, r4, r3	@ 0000737a e218
.org 0x737c
	ldrb r2, [r2, #0]	@ 0000737c 1278
.org 0x737e
	movs r3, #127	@ 0000737e 7f23
.org 0x7380
	ands r3, r2	@ 00007380 1340
.org 0x7382
	ldr r5, [pc, #128]	@ 00007382 204d
.org 0x7384
	ldr r7, [pc, #128]	@ 00007384 204f
.org 0x7386
	adds r2, r4, r7	@ 00007386 e219
.org 0x7388
	ldrb r2, [r2, #0]	@ 00007388 1278
.org 0x738a
	lsrs r2, r2, #4	@ 0000738a 1209
.org 0x738c
	lsls r2, r2, #2	@ 0000738c 9200
.org 0x738e
	lsls r3, r3, #3	@ 0000738e db00
.org 0x7390
	adds r2, r2, r3	@ 00007390 d218
.org 0x7392
	adds r2, r2, r5	@ 00007392 5219
.org 0x7394
	ldr r2, [r2, #0]	@ 00007394 1268
.org 0x7396
	ldr r3, [pc, #116]	@ 00007396 1d4b
.org 0x7398
	adds r7, r4, r3	@ 00007398 e718
.org 0x739a
	mov r8, r7	@ 0000739a b846
.org 0x739c
	ldr r2, [r2, #12]	@ 0000739c d268
.org 0x739e
	ldrb r3, [r2, #2]	@ 0000739e 9378
.org 0x73a0
	lsls r2, r3, #4	@ 000073a0 1a01
.org 0x73a2
	subs r3, r2, r3	@ 000073a2 d31a
.org 0x73a4
	movs r4, #6	@ 000073a4 0624
.org 0x73a6
	ldrsh r2, [r6, r4]	@ 000073a6 325f
.org 0x73a8
	adds r1, r1, r2	@ 000073a8 8918
.org 0x73aa
	muls r1, r3	@ 000073aa 5943
.org 0x73ac
	adds r1, r1, r0	@ 000073ac 0918
.org 0x73ae
	lsls r1, r1, #1	@ 000073ae 4900
.org 0x73b0
	adds r7, r1, r7	@ 000073b0 cf19
.org 0x73b2
	movs r1, #2	@ 000073b2 0221
.org 0x73b4
	ldrsh r0, [r6, r1]	@ 000073b4 705e
.org 0x73b6
	adds r0, r0, r2	@ 000073b6 8018
.org 0x73b8
	muls r0, r3	@ 000073b8 5843
.org 0x73ba
	movs r4, #0	@ 000073ba 0024
.org 0x73bc
	ldrsh r1, [r6, r4]	@ 000073bc 315f
.org 0x73be
	adds r0, r0, r1	@ 000073be 4018
.org 0x73c0
	lsls r0, r0, #1	@ 000073c0 4000
.org 0x73c2
	add r8, r0	@ 000073c2 8044
.org 0x73c4
	movs r4, #0	@ 000073c4 0024
.org 0x73c6
	cmp r4, r2	@ 000073c6 9442
.org 0x73c8
	bge.n 0x73ea	@ 000073c8 0fda
.org 0x73ca
	lsls r5, r3, #1	@ 000073ca 5d00
.org 0x73cc
	subs r7, r7, r5	@ 000073cc 7f1b
.org 0x73ce
	mov r0, r8	@ 000073ce 4046
.org 0x73d0
	subs r0, r0, r5	@ 000073d0 401b
.org 0x73d2
	mov r8, r0	@ 000073d2 8046
.org 0x73d4
	movs r1, #4	@ 000073d4 0421
.org 0x73d6
	ldrsh r2, [r6, r1]	@ 000073d6 725e
.org 0x73d8
	lsls r2, r2, #1	@ 000073d8 5200
.org 0x73da
	adds r1, r7, #0	@ 000073da 391c
.org 0x73dc
	bl 0xb30	@ 000073dc f9f7a8fb
.org 0x73e0
	adds r4, #1	@ 000073e0 0134
.org 0x73e2
	movs r3, #6	@ 000073e2 0623
.org 0x73e4
	ldrsh r0, [r6, r3]	@ 000073e4 f05e
.org 0x73e6
	cmp r4, r0	@ 000073e6 8442
.org 0x73e8
	blt.n 0x73cc	@ 000073e8 f0db
.org 0x73ea
	ldr r0, [pc, #20]	@ 000073ea 0548
.org 0x73ec
	movs r4, #176	@ 000073ec b024
.org 0x73ee
	lsls r4, r4, #10	@ 000073ee a402
.org 0x73f0
	adds r0, r0, r4	@ 000073f0 0019
.org 0x73f2
	movs r1, #1	@ 000073f2 0121
.org 0x73f4
	strh r1, [r0, #0]	@ 000073f4 0180
.org 0x73f6
	pop {r3}	@ 000073f6 08bc
.org 0x73f8
	mov r8, r3	@ 000073f8 9846
.org 0x73fa
	pop {r4, r5, r6, r7}	@ 000073fa f0bc
.org 0x73fc
	pop {r0}	@ 000073fc 01bc
.org 0x73fe
	bx r0	@ 000073fe 0047
