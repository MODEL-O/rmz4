@ FUN_0803354c  entry 0x0803354c  size 110
.thumb
.org 0x3354c
FUN_0803354c:
	push {r4, lr}	@ 0003354c 10b5
.org 0x3354e
	adds r4, r0, #0	@ 0003354e 041c
.org 0x33550
	adds r0, #180	@ 00033550 b430
.org 0x33552
	ldrb r0, [r0, #12]	@ 00033552 007b
.org 0x33554
	cmp r0, #0	@ 00033554 0028
.org 0x33556
	bne.n 0x33568	@ 00033556 07d1
.org 0x33558
	ldr r0, [pc, #8]	@ 00033558 0248
.org 0x3355a
	adds r2, r4, r0	@ 0003355a 2218
.org 0x3355c
	ldrb r0, [r2, #0]	@ 0003355c 1078
.org 0x3355e
	movs r1, #16	@ 0003355e 1021
.org 0x33560
	b.n 0x33570	@ 00033560 06e0
.org 0x33562
	.byte 0x00	@ 00033562 data
.org 0x33563
	.byte 0x00	@ 00033563 data
.org 0x33564
	.byte 0x53,0x01,0x00,0x00	@ 00033564 data
.org 0x33568
	ldr r1, [pc, #28]	@ 00033568 0749
.org 0x3356a
	adds r2, r4, r1	@ 0003356a 6218
.org 0x3356c
	ldrb r0, [r2, #0]	@ 0003356c 1078
.org 0x3356e
	movs r1, #32	@ 0003356e 2021
.org 0x33570
	orrs r0, r1	@ 00033570 0843
.org 0x33572
	strb r0, [r2, #0]	@ 00033572 1070
.org 0x33574
	adds r0, r4, #0	@ 00033574 201c
.org 0x33576
	adds r0, #252	@ 00033576 fc30
.org 0x33578
	ldrb r0, [r0, #0]	@ 00033578 0078
.org 0x3357a
	cmp r0, #1	@ 0003357a 0128
.org 0x3357c
	bne.n 0x33590	@ 0003357c 08d1
.org 0x3357e
	ldr r1, [pc, #12]	@ 0003357e 0349
.org 0x33580
	adds r0, r4, #0	@ 00033580 201c
.org 0x33582
	bl 0x1cf00	@ 00033582 e9f7bdfc
.org 0x33586
	b.n 0x335ae	@ 00033586 12e0
.org 0x33588
	.byte 0x53,0x01,0x00,0x00	@ 00033588 data
.org 0x3358c
	.byte 0x03,0x0b,0x00,0x00	@ 0003358c data
.org 0x33590
	ldrb r1, [r4, #30]	@ 00033590 a17f
.org 0x33592
	lsls r1, r1, #8	@ 00033592 0902
.org 0x33594
	adds r0, r4, #0	@ 00033594 201c
.org 0x33596
	adds r0, #112	@ 00033596 7030
.org 0x33598
	ldrb r0, [r0, #0]	@ 00033598 0078
.org 0x3359a
	orrs r0, r1	@ 0003359a 0843
.org 0x3359c
	ldr r1, [pc, #40]	@ 0003359c 0a49
.org 0x3359e
	cmp r0, r1	@ 0003359e 8842
.org 0x335a0
	beq.n 0x335ae	@ 000335a0 05d0
.org 0x335a2
	ldr r1, [pc, #40]	@ 000335a2 0a49
.org 0x335a4
	adds r0, r4, #0	@ 000335a4 201c
.org 0x335a6
	movs r2, #0	@ 000335a6 0022
.org 0x335a8
	movs r3, #2	@ 000335a8 0223
.org 0x335aa
	bl 0x1cfc8	@ 000335aa e9f70dfd
.org 0x335ae
	movs r1, #170	@ 000335ae aa21
.org 0x335b0
	lsls r1, r1, #1	@ 000335b0 4900
.org 0x335b2
	adds r0, r4, r1	@ 000335b2 6018
.org 0x335b4
	ldrb r0, [r0, #0]	@ 000335b4 0078
.org 0x335b6
	cmp r0, #1	@ 000335b6 0128
.org 0x335b8
	bne.n 0x335c2	@ 000335b8 03d1
