@ FUN_08037414  entry 0x08037414  size 98
.thumb
.org 0x37414
FUN_08037414:
	push {r4, r5, r6, lr}	@ 00037414 70b5
.org 0x37416
	adds r5, r0, #0	@ 00037416 051c
.org 0x37418
	movs r0, #129	@ 00037418 8120
.org 0x3741a
	lsls r0, r0, #1	@ 0003741a 4000
.org 0x3741c
	adds r6, r5, r0	@ 0003741c 2e18
.org 0x3741e
	ldrb r0, [r6, #0]	@ 0003741e 3078
.org 0x37420
	cmp r0, #0	@ 00037420 0028
.org 0x37422
	bne.n 0x37440	@ 00037422 0dd1
.org 0x37424
	ldr r1, [pc, #80]	@ 00037424 1449
.org 0x37426
	adds r0, r5, #0	@ 00037426 281c
.org 0x37428
	bl 0x1cf00	@ 00037428 e5f76afd
.org 0x3742c
	adds r0, r5, #0	@ 0003742c 281c
.org 0x3742e
	bl 0x40bb4	@ 0003742e 09f0c1fb
.org 0x37432
	ldr r0, [pc, #72]	@ 00037432 1248
.org 0x37434
	adds r1, r5, r0	@ 00037434 2918
.org 0x37436
	movs r0, #24	@ 00037436 1820
.org 0x37438
	strb r0, [r1, #0]	@ 00037438 0870
.org 0x3743a
	ldrb r0, [r6, #0]	@ 0003743a 3078
.org 0x3743c
	adds r0, #1	@ 0003743c 0130
.org 0x3743e
	strb r0, [r6, #0]	@ 0003743e 3070
.org 0x37440
	ldr r4, [pc, #52]	@ 00037440 0d4c
.org 0x37442
	adds r0, r5, #0	@ 00037442 281c
.org 0x37444
	adds r1, r4, #0	@ 00037444 211c
.org 0x37446
	bl 0x3a3b0	@ 00037446 02f0b3ff
.org 0x3744a
	adds r0, r5, #0	@ 0003744a 281c
.org 0x3744c
	adds r1, r4, #0	@ 0003744c 211c
.org 0x3744e
	bl 0x3a3f0	@ 0003744e 02f0cfff
.org 0x37452
	ldr r0, [pc, #40]	@ 00037452 0a48
.org 0x37454
	adds r1, r5, r0	@ 00037454 2918
.org 0x37456
	ldrb r0, [r1, #0]	@ 00037456 0878
.org 0x37458
	subs r0, #1	@ 00037458 0138
.org 0x3745a
	strb r0, [r1, #0]	@ 0003745a 0870
.org 0x3745c
	lsls r0, r0, #24	@ 0003745c 0006
.org 0x3745e
	lsrs r0, r0, #24	@ 0003745e 000e
.org 0x37460
	cmp r0, #255	@ 00037460 ff28
.org 0x37462
	bne.n 0x37470	@ 00037462 05d1
.org 0x37464
	ldr r0, [pc, #24]	@ 00037464 0648
.org 0x37466
	adds r1, r5, r0	@ 00037466 2918
.org 0x37468
	movs r0, #3	@ 00037468 0320
.org 0x3746a
	strb r0, [r1, #0]	@ 0003746a 0870
.org 0x3746c
	movs r0, #0	@ 0003746c 0020
.org 0x3746e
	strb r0, [r6, #0]	@ 0003746e 3070
.org 0x37470
	pop {r4, r5, r6}	@ 00037470 70bc
.org 0x37472
	pop {r0}	@ 00037472 01bc
.org 0x37474
	bx r0	@ 00037474 0047
