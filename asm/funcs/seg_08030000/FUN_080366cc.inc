@ FUN_080366cc  entry 0x080366cc  size 102
.thumb
.org 0x366cc
FUN_080366cc:
	push {r4, lr}	@ 000366cc 10b5
.org 0x366ce
	adds r4, r0, #0	@ 000366ce 041c
.org 0x366d0
	adds r1, r4, #0	@ 000366d0 211c
.org 0x366d2
	adds r1, #180	@ 000366d2 b431
.org 0x366d4
	ldrb r0, [r1, #12]	@ 000366d4 087b
.org 0x366d6
	cmp r0, #4	@ 000366d6 0428
.org 0x366d8
	beq.n 0x36714	@ 000366d8 1cd0
.org 0x366da
	ldrb r0, [r1, #13]	@ 000366da 487b
.org 0x366dc
	cmp r0, #4	@ 000366dc 0428
.org 0x366de
	beq.n 0x36714	@ 000366de 19d0
.org 0x366e0
	ldrb r0, [r4, #14]	@ 000366e0 a07b
.org 0x366e2
	cmp r0, #1	@ 000366e2 0128
.org 0x366e4
	bne.n 0x366f8	@ 000366e4 08d1
.org 0x366e6
	ldr r1, [pc, #12]	@ 000366e6 0349
.org 0x366e8
	adds r0, r4, #0	@ 000366e8 201c
.org 0x366ea
	movs r2, #2	@ 000366ea 0222
.org 0x366ec
	movs r3, #1	@ 000366ec 0123
.org 0x366ee
	bl 0x1cfc8	@ 000366ee e6f76bfc
.org 0x366f2
	b.n 0x36704	@ 000366f2 07e0
.org 0x366f4
	.byte 0x03,0x04,0x00,0x00	@ 000366f4 data
.org 0x366f8
	ldr r1, [pc, #20]	@ 000366f8 0549
.org 0x366fa
	adds r0, r4, #0	@ 000366fa 201c
.org 0x366fc
	movs r2, #2	@ 000366fc 0222
.org 0x366fe
	movs r3, #1	@ 000366fe 0123
.org 0x36700
	bl 0x1cfc8	@ 00036700 e6f762fc
.org 0x36704
	movs r0, #128	@ 00036704 8020
.org 0x36706
	lsls r0, r0, #1	@ 00036706 4000
.org 0x36708
	adds r1, r4, r0	@ 00036708 2118
.org 0x3670a
	movs r0, #0	@ 0003670a 0020
.org 0x3670c
	strb r0, [r1, #0]	@ 0003670c 0870
.org 0x3670e
	b.n 0x36734	@ 0003670e 11e0
.org 0x36710
	.byte 0x04,0x04,0x00,0x00	@ 00036710 data
.org 0x36714
	ldr r0, [pc, #36]	@ 00036714 0948
.org 0x36716
	adds r2, r4, r0	@ 00036716 2218
.org 0x36718
	ldrb r0, [r2, #0]	@ 00036718 1078
.org 0x3671a
	movs r1, #4	@ 0003671a 0421
.org 0x3671c
	orrs r0, r1	@ 0003671c 0843
.org 0x3671e
	strb r0, [r2, #0]	@ 0003671e 1070
.org 0x36720
	ldr r1, [pc, #28]	@ 00036720 0749
.org 0x36722
	ldr r2, [pc, #32]	@ 00036722 084a
.org 0x36724
	adds r0, r4, r2	@ 00036724 a018
.org 0x36726
	ldrb r0, [r0, #0]	@ 00036726 0078
.org 0x36728
	lsls r0, r0, #2	@ 00036728 8000
.org 0x3672a
	adds r0, r0, r1	@ 0003672a 4018
.org 0x3672c
	ldr r1, [r0, #0]	@ 0003672c 0168
.org 0x3672e
	adds r0, r4, #0	@ 0003672e 201c
.org 0x36730
	bl 0x128f80	@ 00036730 f2f026fc
