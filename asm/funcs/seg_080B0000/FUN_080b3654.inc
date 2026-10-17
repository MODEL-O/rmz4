@ FUN_080b3654  entry 0x080b3654  size 144
.thumb
.org 0xb3654
FUN_080b3654:
	push {r4, r5, lr}	@ 000b3654 30b5
.org 0xb3656
	adds r4, r0, #0	@ 000b3656 041c
.org 0xb3658
	adds r0, #84	@ 000b3658 5430
.org 0xb365a
	movs r1, #92	@ 000b365a 5c21
.org 0xb365c
	movs r2, #0	@ 000b365c 0022
.org 0xb365e
	movs r3, #0	@ 000b365e 0023
.org 0xb3660
	bl 0x7fa18	@ 000b3660 ccf7daf9
.org 0xb3664
	adds r5, r0, #0	@ 000b3664 051c
.org 0xb3666
	cmp r5, #0	@ 000b3666 002d
.org 0xb3668
	beq.n 0xb36f4	@ 000b3668 44d0
.org 0xb366a
	adds r0, #181	@ 000b366a b530
.org 0xb366c
	ldrb r0, [r0, #0]	@ 000b366c 0078
.org 0xb366e
	cmp r0, #0	@ 000b366e 0028
.org 0xb3670
	bne.n 0xb36f4	@ 000b3670 40d1
.org 0xb3672
	ldr r0, [r5, #84]	@ 000b3672 686d
.org 0xb3674
	ldr r1, [r4, #84]	@ 000b3674 616d
.org 0xb3676
	subs r2, r0, r1	@ 000b3676 421a
.org 0xb3678
	cmp r2, #0	@ 000b3678 002a
.org 0xb367a
	blt.n 0xb3688	@ 000b367a 05db
.org 0xb367c
	ldr r0, [pc, #4]	@ 000b367c 0148
.org 0xb367e
	cmp r2, r0	@ 000b367e 8242
.org 0xb3680
	ble.n 0xb3690	@ 000b3680 06dd
.org 0xb3682
	b.n 0xb36f4	@ 000b3682 37e0
.org 0xb3684
	.byte 0xff,0x1b,0x00,0x00	@ 000b3684 data
.org 0xb3688
	subs r1, r1, r0	@ 000b3688 091a
.org 0xb368a
	ldr r0, [pc, #28]	@ 000b368a 0748
.org 0xb368c
	cmp r1, r0	@ 000b368c 8142
.org 0xb368e
	bgt.n 0xb36f4	@ 000b368e 31dc
.org 0xb3690
	ldr r0, [r4, #88]	@ 000b3690 a06d
.org 0xb3692
	movs r2, #128	@ 000b3692 8022
.org 0xb3694
	lsls r2, r2, #4	@ 000b3694 1201
.org 0xb3696
	adds r1, r0, r2	@ 000b3696 8118
.org 0xb3698
	ldr r0, [r5, #88]	@ 000b3698 a86d
.org 0xb369a
	subs r2, r0, r1	@ 000b369a 421a
.org 0xb369c
	cmp r2, #0	@ 000b369c 002a
.org 0xb369e
	blt.n 0xb36ac	@ 000b369e 05db
.org 0xb36a0
	ldr r0, [pc, #4]	@ 000b36a0 0148
.org 0xb36a2
	cmp r2, r0	@ 000b36a2 8242
.org 0xb36a4
	ble.n 0xb36b4	@ 000b36a4 06dd
.org 0xb36a6
	b.n 0xb36f4	@ 000b36a6 25e0
.org 0xb36a8
	.byte 0xff,0x1b,0x00,0x00	@ 000b36a8 data
.org 0xb36ac
	subs r1, r1, r0	@ 000b36ac 091a
.org 0xb36ae
	ldr r0, [pc, #52]	@ 000b36ae 0d48
.org 0xb36b0
	cmp r1, r0	@ 000b36b0 8142
.org 0xb36b2
	bgt.n 0xb36f4	@ 000b36b2 1fdc
.org 0xb36b4
	ldr r2, [pc, #48]	@ 000b36b4 0c4a
.org 0xb36b6
	ldr r1, [r2, #0]	@ 000b36b6 1168
.org 0xb36b8
	ldr r0, [pc, #48]	@ 000b36b8 0c48
.org 0xb36ba
	muls r0, r1	@ 000b36ba 4843
.org 0xb36bc
	ldr r1, [pc, #48]	@ 000b36bc 0c49
.org 0xb36be
	adds r0, r0, r1	@ 000b36be 4018
.org 0xb36c0
	lsls r0, r0, #1	@ 000b36c0 4000
.org 0xb36c2
	lsrs r1, r0, #1	@ 000b36c2 4108
.org 0xb36c4
	str r1, [r2, #0]	@ 000b36c4 1160
.org 0xb36c6
	lsrs r0, r0, #17	@ 000b36c6 400c
.org 0xb36c8
	movs r1, #12	@ 000b36c8 0c21
.org 0xb36ca
	bl 0x129198	@ 000b36ca 75f065fd
.org 0xb36ce
	lsls r0, r0, #24	@ 000b36ce 0006
.org 0xb36d0
	lsrs r0, r0, #24	@ 000b36d0 000e
.org 0xb36d2
	cmp r0, #3	@ 000b36d2 0328
.org 0xb36d4
	bhi.n 0xb36f4	@ 000b36d4 0ed8
.org 0xb36d6
	str r5, [r4, #44]	@ 000b36d6 e562
.org 0xb36d8
	movs r1, #0	@ 000b36d8 0021
.org 0xb36da
	movs r0, #2	@ 000b36da 0220
.org 0xb36dc
	strb r0, [r4, #13]	@ 000b36dc 6073
.org 0xb36de
	strb r1, [r4, #14]	@ 000b36de a173
.org 0xb36e0
	b.n 0xb36f8	@ 000b36e0 0ae0
.org 0xb36e2
	.byte 0x00	@ 000b36e2 data
.org 0xb36e3
	.byte 0x00	@ 000b36e3 data
