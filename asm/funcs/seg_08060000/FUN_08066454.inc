@ FUN_08066454  entry 0x08066454  size 102
.thumb
.org 0x66454
FUN_08066454:
	push {r4, r5, r6, r7, lr}	@ 00066454 f0b5
.org 0x66456
	sub sp, #8	@ 00066456 82b0
.org 0x66458
	adds r0, #192	@ 00066458 c030
.org 0x6645a
	ldr r7, [r0, #0]	@ 0006645a 0768
.org 0x6645c
	ldr r4, [r1, #0]	@ 0006645c 0c68
.org 0x6645e
	ldr r0, [r2, #0]	@ 0006645e 1068
.org 0x66460
	adds r0, r4, r0	@ 00066460 2018
.org 0x66462
	str r0, [sp, #0]	@ 00066462 0090
.org 0x66464
	ldr r1, [r1, #4]	@ 00066464 4968
.org 0x66466
	ldr r0, [r2, #4]	@ 00066466 5068
.org 0x66468
	adds r0, r1, r0	@ 00066468 0818
.org 0x6646a
	str r0, [sp, #4]	@ 0006646a 0190
.org 0x6646c
	ldr r0, [r3, #0]	@ 0006646c 1868
.org 0x6646e
	movs r1, #192	@ 0006646e c021
.org 0x66470
	lsls r1, r1, #4	@ 00066470 0901
.org 0x66472
	adds r0, r0, r1	@ 00066472 4018
.org 0x66474
	asrs r5, r0, #1	@ 00066474 4510
.org 0x66476
	ldr r0, [r3, #4]	@ 00066476 5868
.org 0x66478
	movs r4, #160	@ 00066478 a024
.org 0x6647a
	lsls r4, r4, #6	@ 0006647a a401
.org 0x6647c
	adds r0, r0, r4	@ 0006647c 0019
.org 0x6647e
	asrs r6, r0, #1	@ 0006647e 4610
.org 0x66480
	cmp r7, #0	@ 00066480 002f
.org 0x66482
	beq.n 0x664b0	@ 00066482 15d0
.org 0x66484
	lsls r0, r5, #1	@ 00066484 6800
.org 0x66486
	mov ip, r0	@ 00066486 8446
.org 0x66488
	lsls r3, r6, #1	@ 00066488 7300
.org 0x6648a
	ldr r1, [r7, #84]	@ 0006648a 796d
.org 0x6648c
	ldr r2, [r7, #88]	@ 0006648c ba6d
.org 0x6648e
	ldr r4, [sp, #0]	@ 0006648e 009c
.org 0x66490
	subs r0, r1, r4	@ 00066490 081b
.org 0x66492
	adds r0, r0, r5	@ 00066492 4019
.org 0x66494
	cmp r0, ip	@ 00066494 6045
.org 0x66496
	bhi.n 0x664a6	@ 00066496 06d8
.org 0x66498
	ldr r4, [sp, #4]	@ 00066498 019c
.org 0x6649a
	subs r0, r2, r4	@ 0006649a 101b
.org 0x6649c
	adds r0, r0, r6	@ 0006649c 8019
.org 0x6649e
	cmp r0, r3	@ 0006649e 9842
.org 0x664a0
	bhi.n 0x664a6	@ 000664a0 01d8
.org 0x664a2
	movs r0, #1	@ 000664a2 0120
.org 0x664a4
	b.n 0x664b2	@ 000664a4 05e0
.org 0x664a6
	adds r0, r7, #0	@ 000664a6 381c
.org 0x664a8
	adds r0, #192	@ 000664a8 c030
.org 0x664aa
	ldr r7, [r0, #0]	@ 000664aa 0768
.org 0x664ac
	cmp r7, #0	@ 000664ac 002f
.org 0x664ae
	bne.n 0x6648a	@ 000664ae ecd1
.org 0x664b0
	movs r0, #0	@ 000664b0 0020
.org 0x664b2
	add sp, #8	@ 000664b2 02b0
.org 0x664b4
	pop {r4, r5, r6, r7}	@ 000664b4 f0bc
.org 0x664b6
	pop {r1}	@ 000664b6 02bc
.org 0x664b8
	bx r1	@ 000664b8 0847
