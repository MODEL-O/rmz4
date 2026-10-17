@ FUN_0810056c  entry 0x0810056c  size 210
.thumb
.org 0x10056c
FUN_0810056c:
	push {r4, r5, lr}	@ 0010056c 30b5
.org 0x10056e
	adds r5, r0, #0	@ 0010056e 051c
.org 0x100570
	ldrb r0, [r5, #14]	@ 00100570 a87b
.org 0x100572
	cmp r0, #0	@ 00100572 0028
.org 0x100574
	bne.n 0x1005b2	@ 00100574 1dd1
.org 0x100576
	adds r4, r5, #0	@ 00100576 2c1c
.org 0x100578
	adds r4, #180	@ 00100578 b434
.org 0x10057a
	ldr r0, [pc, #108]	@ 0010057a 1b48
.org 0x10057c
	adds r1, r0, #0	@ 0010057c 011c
.org 0x10057e
	ldrb r2, [r4, #0]	@ 0010057e 2278
.org 0x100580
	adds r1, r1, r2	@ 00100580 8918
.org 0x100582
	lsls r1, r1, #16	@ 00100582 0904
.org 0x100584
	lsrs r1, r1, #16	@ 00100584 090c
.org 0x100586
	adds r0, r5, #0	@ 00100586 281c
.org 0x100588
	bl 0x1cf00	@ 00100588 1cf7bafc
.org 0x10058c
	movs r0, #52	@ 0010058c 3420
.org 0x10058e
	strb r0, [r5, #18]	@ 0010058e a874
.org 0x100590
	adds r0, r5, #0	@ 00100590 281c
.org 0x100592
	adds r0, #116	@ 00100592 7430
.org 0x100594
	ldrb r2, [r4, #0]	@ 00100594 2278
.org 0x100596
	lsls r1, r2, #5	@ 00100596 5101
.org 0x100598
	adds r1, r1, r2	@ 00100598 8918
.org 0x10059a
	lsls r1, r1, #3	@ 0010059a c900
.org 0x10059c
	ldr r2, [pc, #76]	@ 0010059c 134a
.org 0x10059e
	adds r1, r1, r2	@ 0010059e 8918
.org 0x1005a0
	bl 0x5784	@ 001005a0 05f7f0f8
.org 0x1005a4
	movs r0, #177	@ 001005a4 b120
.org 0x1005a6
	lsls r0, r0, #1	@ 001005a6 4000
.org 0x1005a8
	bl 0x2b10	@ 001005a8 02f7b2fa
.org 0x1005ac
	ldrb r0, [r5, #14]	@ 001005ac a87b
.org 0x1005ae
	adds r0, #1	@ 001005ae 0130
.org 0x1005b0
	strb r0, [r5, #14]	@ 001005b0 a873
.org 0x1005b2
	adds r0, r5, #0	@ 001005b2 281c
.org 0x1005b4
	adds r0, #115	@ 001005b4 7330
.org 0x1005b6
	ldrb r0, [r0, #0]	@ 001005b6 0078
.org 0x1005b8
	cmp r0, #3	@ 001005b8 0328
.org 0x1005ba
	beq.n 0x1005c8	@ 001005ba 05d0
.org 0x1005bc
	adds r0, r5, #0	@ 001005bc 281c
.org 0x1005be
	bl 0x100510	@ 001005be fff7a7ff
.org 0x1005c2
	lsls r0, r0, #24	@ 001005c2 0006
.org 0x1005c4
	cmp r0, #0	@ 001005c4 0028
.org 0x1005c6
	beq.n 0x100646	@ 001005c6 3ed0
.org 0x1005c8
	ldrb r0, [r5, #14]	@ 001005c8 a87b
.org 0x1005ca
	cmp r0, #1	@ 001005ca 0128
.org 0x1005cc
	bne.n 0x1005f4	@ 001005cc 12d1
.org 0x1005ce
	adds r0, r5, #0	@ 001005ce 281c
.org 0x1005d0
	adds r0, #180	@ 001005d0 b430
.org 0x1005d2
	ldr r2, [pc, #28]	@ 001005d2 074a
.org 0x1005d4
	adds r1, r2, #0	@ 001005d4 111c
.org 0x1005d6
	ldrb r0, [r0, #0]	@ 001005d6 0078
.org 0x1005d8
	adds r1, r1, r0	@ 001005d8 0918
.org 0x1005da
	lsls r1, r1, #16	@ 001005da 0904
.org 0x1005dc
	lsrs r1, r1, #16	@ 001005dc 090c
.org 0x1005de
	adds r0, r5, #0	@ 001005de 281c
.org 0x1005e0
	bl 0x1cf00	@ 001005e0 1cf78efc
.org 0x1005e4
	b.n 0x10063c	@ 001005e4 2ae0
.org 0x1005e6
	.byte 0x00	@ 001005e6 data
.org 0x1005e7
	.byte 0x00	@ 001005e7 data
.org 0x1005e8
	.byte 0x04,0xbe,0x00,0x00	@ 001005e8 data
.org 0x1005ec
	.byte 0x38,0xb7,0x86,0x08	@ 001005ec data
.org 0x1005f0
	.byte 0x06,0xbe,0x00,0x00	@ 001005f0 data
.org 0x1005f4
	cmp r0, #2	@ 001005f4 0228
.org 0x1005f6
	beq.n 0x100600	@ 001005f6 03d0
.org 0x1005f8
	movs r0, #0	@ 001005f8 0020
.org 0x1005fa
	strb r0, [r5, #19]	@ 001005fa e874
.org 0x1005fc
	strb r0, [r5, #13]	@ 001005fc 6873
.org 0x1005fe
	b.n 0x100644	@ 001005fe 21e0
.org 0x100600
	adds r4, r5, #0	@ 00100600 2c1c
.org 0x100602
	adds r4, #180	@ 00100602 b434
.org 0x100604
	ldr r0, [pc, #68]	@ 00100604 1148
.org 0x100606
	adds r1, r0, #0	@ 00100606 011c
.org 0x100608
	ldrb r2, [r4, #0]	@ 00100608 2278
.org 0x10060a
	adds r1, r1, r2	@ 0010060a 8918
.org 0x10060c
	lsls r1, r1, #16	@ 0010060c 0904
.org 0x10060e
	lsrs r1, r1, #16	@ 0010060e 090c
.org 0x100610
	adds r0, r5, #0	@ 00100610 281c
.org 0x100612
	bl 0x1cf00	@ 00100612 1cf775fc
.org 0x100616
	ldrb r0, [r4, #0]	@ 00100616 2078
.org 0x100618
	adds r0, #1	@ 00100618 0130
.org 0x10061a
	movs r1, #1	@ 0010061a 0121
.org 0x10061c
	ands r0, r1	@ 0010061c 0840
.org 0x10061e
	strb r0, [r4, #0]	@ 0010061e 2070
.org 0x100620
	adds r0, r5, #0	@ 00100620 281c
.org 0x100622
	adds r0, #116	@ 00100622 7430
.org 0x100624
	ldrb r2, [r4, #0]	@ 00100624 2278
.org 0x100626
	lsls r1, r2, #5	@ 00100626 5101
.org 0x100628
	adds r1, r1, r2	@ 00100628 8918
.org 0x10062a
	lsls r1, r1, #3	@ 0010062a c900
.org 0x10062c
	ldr r2, [pc, #32]	@ 0010062c 084a
.org 0x10062e
	adds r1, r1, r2	@ 0010062e 8918
.org 0x100630
	bl 0x5784	@ 00100630 05f7a8f8
.org 0x100634
	movs r0, #174	@ 00100634 ae20
.org 0x100636
	lsls r0, r0, #1	@ 00100636 4000
.org 0x100638
	bl 0x2b10	@ 00100638 02f76afa
.org 0x10063c
	movs r0, #255	@ 0010063c ff20
