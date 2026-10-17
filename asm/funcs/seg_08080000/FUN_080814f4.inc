@ FUN_080814f4  entry 0x080814f4  size 126
.thumb
.org 0x814f4
FUN_080814f4:
	push {r4, r5, lr}	@ 000814f4 30b5
.org 0x814f6
	adds r5, r0, #0	@ 000814f6 051c
.org 0x814f8
	ldrb r0, [r5, #15]	@ 000814f8 e87b
.org 0x814fa
	cmp r0, #0	@ 000814fa 0028
.org 0x814fc
	bne.n 0x81560	@ 000814fc 30d1
.org 0x814fe
	ldrb r0, [r5, #10]	@ 000814fe a87a
.org 0x81500
	movs r1, #254	@ 00081500 fe21
.org 0x81502
	ands r1, r0	@ 00081502 0140
.org 0x81504
	strb r1, [r5, #10]	@ 00081504 a972
.org 0x81506
	ldrb r0, [r5, #13]	@ 00081506 687b
.org 0x81508
	cmp r0, #0	@ 00081508 0028
.org 0x8150a
	beq.n 0x81550	@ 0008150a 21d0
.org 0x8150c
	adds r0, r5, #0	@ 0008150c 281c
.org 0x8150e
	adds r0, #116	@ 0008150e 7430
.org 0x81510
	ldr r4, [pc, #52]	@ 00081510 0d4c
.org 0x81512
	adds r1, r5, #0	@ 00081512 291c
.org 0x81514
	adds r1, #181	@ 00081514 b531
.org 0x81516
	ldrb r3, [r1, #0]	@ 00081516 0b78
.org 0x81518
	lsls r3, r3, #2	@ 00081518 9b00
.org 0x8151a
	ldrb r1, [r5, #30]	@ 0008151a a97f
.org 0x8151c
	lsls r1, r1, #8	@ 0008151c 0902
.org 0x8151e
	adds r2, r5, #0	@ 0008151e 2a1c
.org 0x81520
	adds r2, #112	@ 00081520 7032
.org 0x81522
	ldrb r2, [r2, #0]	@ 00081522 1278
.org 0x81524
	orrs r1, r2	@ 00081524 1143
.org 0x81526
	ldr r2, [pc, #36]	@ 00081526 094a
.org 0x81528
	adds r1, r1, r2	@ 00081528 8918
.org 0x8152a
	lsls r1, r1, #3	@ 0008152a c900
.org 0x8152c
	adds r3, r3, r1	@ 0008152c 5b18
.org 0x8152e
	adds r3, r3, r4	@ 0008152e 1b19
.org 0x81530
	adds r1, r5, #0	@ 00081530 291c
.org 0x81532
	adds r1, #113	@ 00081532 7131
.org 0x81534
	ldrb r1, [r1, #0]	@ 00081534 0978
.org 0x81536
	lsls r1, r1, #24	@ 00081536 0906
.org 0x81538
	asrs r1, r1, #24	@ 00081538 0916
.org 0x8153a
	ldr r2, [r3, #0]	@ 0008153a 1a68
.org 0x8153c
	lsls r1, r1, #2	@ 0008153c 8900
.org 0x8153e
	adds r1, r1, r2	@ 0008153e 8918
.org 0x81540
	ldr r1, [r1, #0]	@ 00081540 0968
.org 0x81542
	bl 0x5784	@ 00081542 84f71ff9
.org 0x81546
	b.n 0x8155a	@ 00081546 08e0
.org 0x81548
	.byte 0x1c,0xe7,0x85,0x08	@ 00081548 data
.org 0x8154c
	.byte 0x00,0xe9,0xff,0xff	@ 0008154c data
.org 0x81550
	adds r0, r5, #0	@ 00081550 281c
.org 0x81552
	adds r0, #116	@ 00081552 7430
.org 0x81554
	ldr r1, [pc, #36]	@ 00081554 0949
.org 0x81556
	bl 0x5784	@ 00081556 84f715f9
.org 0x8155a
	ldrb r0, [r5, #15]	@ 0008155a e87b
.org 0x8155c
	adds r0, #1	@ 0008155c 0130
.org 0x8155e
	strb r0, [r5, #15]	@ 0008155e e873
.org 0x81560
	adds r0, r5, #0	@ 00081560 281c
.org 0x81562
	bl 0x81c94	@ 00081562 00f097fb
.org 0x81566
	cmp r0, #0	@ 00081566 0028
.org 0x81568
	beq.n 0x81574	@ 00081568 04d0
.org 0x8156a
	movs r1, #0	@ 0008156a 0021
.org 0x8156c
	movs r0, #1	@ 0008156c 0120
.org 0x8156e
	strb r0, [r5, #13]	@ 0008156e 6873
.org 0x81570
	strb r1, [r5, #14]	@ 00081570 a973
