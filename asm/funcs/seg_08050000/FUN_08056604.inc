@ FUN_08056604  entry 0x08056604  size 152
.thumb
.org 0x56604
FUN_08056604:
	push {r4, lr}	@ 00056604 10b5
.org 0x56606
	adds r4, r0, #0	@ 00056606 041c
.org 0x56608
	ldrb r0, [r4, #15]	@ 00056608 e07b
.org 0x5660a
	cmp r0, #0	@ 0005660a 0028
.org 0x5660c
	bne.n 0x5662c	@ 0005660c 0ed1
.org 0x5660e
	ldr r1, [pc, #116]	@ 0005660e 1d49
.org 0x56610
	adds r0, r4, #0	@ 00056610 201c
.org 0x56612
	bl 0x1cf00	@ 00056612 c6f775fc
.org 0x56616
	adds r0, r4, #0	@ 00056616 201c
.org 0x56618
	bl 0x5977c	@ 00056618 03f0b0f8
.org 0x5661c
	adds r1, r0, #0	@ 0005661c 011c
.org 0x5661e
	ldr r0, [pc, #104]	@ 0005661e 1a48
.org 0x56620
	adds r0, r1, r0	@ 00056620 0818
.org 0x56622
	ldrb r1, [r0, #0]	@ 00056622 0178
.org 0x56624
	strb r1, [r4, #18]	@ 00056624 a174
.org 0x56626
	ldrb r0, [r4, #15]	@ 00056626 e07b
.org 0x56628
	adds r0, #1	@ 00056628 0130
.org 0x5662a
	strb r0, [r4, #15]	@ 0005662a e073
.org 0x5662c
	adds r0, r4, #0	@ 0005662c 201c
.org 0x5662e
	bl 0x1cff0	@ 0005662e c6f7dffc
.org 0x56632
	adds r0, r4, #0	@ 00056632 201c
.org 0x56634
	adds r0, #116	@ 00056634 7430
.org 0x56636
	ldr r3, [pc, #84]	@ 00056636 154b
.org 0x56638
	ldrb r1, [r4, #30]	@ 00056638 a17f
.org 0x5663a
	lsls r1, r1, #8	@ 0005663a 0902
.org 0x5663c
	adds r2, r4, #0	@ 0005663c 221c
.org 0x5663e
	adds r2, #112	@ 0005663e 7032
.org 0x56640
	ldrb r2, [r2, #0]	@ 00056640 1278
.org 0x56642
	orrs r1, r2	@ 00056642 1143
.org 0x56644
	ldr r2, [pc, #72]	@ 00056644 124a
.org 0x56646
	adds r1, r1, r2	@ 00056646 8918
.org 0x56648
	lsls r1, r1, #2	@ 00056648 8900
.org 0x5664a
	adds r1, r1, r3	@ 0005664a c918
.org 0x5664c
	adds r2, r4, #0	@ 0005664c 221c
.org 0x5664e
	adds r2, #113	@ 0005664e 7132
.org 0x56650
	ldrb r2, [r2, #0]	@ 00056650 1278
.org 0x56652
	lsls r2, r2, #24	@ 00056652 1206
.org 0x56654
	asrs r2, r2, #24	@ 00056654 1216
.org 0x56656
	ldr r1, [r1, #0]	@ 00056656 0968
.org 0x56658
	lsls r2, r2, #2	@ 00056658 9200
.org 0x5665a
	adds r2, r2, r1	@ 0005665a 5218
.org 0x5665c
	ldr r1, [r2, #0]	@ 0005665c 1168
.org 0x5665e
	ldrb r2, [r1, #0]	@ 0005665e 0a78
.org 0x56660
	lsls r1, r2, #1	@ 00056660 5100
.org 0x56662
	adds r1, r1, r2	@ 00056662 8918
.org 0x56664
	lsls r1, r1, #3	@ 00056664 c900
.org 0x56666
	ldr r2, [pc, #44]	@ 00056666 0b4a
.org 0x56668
	adds r1, r1, r2	@ 00056668 8918
.org 0x5666a
	bl 0x5784	@ 0005666a aff78bf8
.org 0x5666e
	adds r0, r4, #0	@ 0005666e 201c
.org 0x56670
	bl 0x597ac	@ 00056670 03f09cf8
.org 0x56674
	cmp r0, #0	@ 00056674 0028
.org 0x56676
	beq.n 0x56698	@ 00056676 0fd0
.org 0x56678
	movs r1, #0	@ 00056678 0021
.org 0x5667a
	movs r0, #4	@ 0005667a 0420
.org 0x5667c
	strb r0, [r4, #13]	@ 0005667c 6073
.org 0x5667e
	strb r1, [r4, #14]	@ 0005667e a173
.org 0x56680
	strb r1, [r4, #15]	@ 00056680 e173
.org 0x56682
	b.n 0x566aa	@ 00056682 12e0
.org 0x56684
	.byte 0x06,0xa0,0x00,0x00	@ 00056684 data
.org 0x56688
	.byte 0xba,0x87,0x85,0x08	@ 00056688 data
.org 0x5668c
	.byte 0x1c,0x87,0x85,0x08	@ 0005668c data
.org 0x56690
	.byte 0x00,0x60,0xff,0xff	@ 00056690 data
.org 0x56694
	.byte 0xcc,0x84,0x85,0x08	@ 00056694 data
.org 0x56698
	ldrb r0, [r4, #18]	@ 00056698 a07c
.org 0x5669a
	subs r0, #1	@ 0005669a 0138
