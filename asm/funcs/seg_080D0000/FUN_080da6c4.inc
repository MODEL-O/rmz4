@ FUN_080da6c4  entry 0x080da6c4  size 116
.thumb
.org 0xda6c4
FUN_080da6c4:
	push {r4, r5, lr}	@ 000da6c4 30b5
.org 0xda6c6
	adds r5, r0, #0	@ 000da6c6 051c
.org 0xda6c8
	ldr r2, [r5, #40]	@ 000da6c8 aa6a
.org 0xda6ca
	ldrb r4, [r5, #17]	@ 000da6ca 6c7c
.org 0xda6cc
	ldr r1, [pc, #56]	@ 000da6cc 0e49
.org 0xda6ce
	ldrb r0, [r5, #9]	@ 000da6ce 687a
.org 0xda6d0
	lsls r0, r0, #2	@ 000da6d0 8000
.org 0xda6d2
	adds r0, r0, r1	@ 000da6d2 4018
.org 0xda6d4
	movs r1, #1	@ 000da6d4 0121
.org 0xda6d6
	str r1, [r5, #12]	@ 000da6d6 e960
.org 0xda6d8
	ldr r0, [r0, #0]	@ 000da6d8 0068
.org 0xda6da
	ldr r0, [r0, #4]	@ 000da6da 4068
.org 0xda6dc
	str r0, [r5, #20]	@ 000da6dc 6861
.org 0xda6de
	ldrb r1, [r5, #10]	@ 000da6de a97a
.org 0xda6e0
	movs r0, #254	@ 000da6e0 fe20
.org 0xda6e2
	ands r0, r1	@ 000da6e2 0840
.org 0xda6e4
	movs r1, #2	@ 000da6e4 0221
.org 0xda6e6
	orrs r0, r1	@ 000da6e6 0843
.org 0xda6e8
	strb r0, [r5, #10]	@ 000da6e8 a872
.org 0xda6ea
	adds r2, #188	@ 000da6ea bc32
.org 0xda6ec
	ldr r0, [r2, #0]	@ 000da6ec 1068
.org 0xda6ee
	ldr r1, [pc, #28]	@ 000da6ee 0749
.org 0xda6f0
	adds r0, r0, r1	@ 000da6f0 4018
.org 0xda6f2
	str r0, [r5, #88]	@ 000da6f2 a865
.org 0xda6f4
	strb r4, [r5, #18]	@ 000da6f4 ac74
.org 0xda6f6
	adds r0, r5, #0	@ 000da6f6 281c
.org 0xda6f8
	bl 0x1cc9c	@ 000da6f8 42f7d0fa
.org 0xda6fc
	cmp r4, #0	@ 000da6fc 002c
.org 0xda6fe
	beq.n 0xda710	@ 000da6fe 07d0
.org 0xda700
	ldrb r0, [r5, #10]	@ 000da700 a87a
.org 0xda702
	movs r1, #16	@ 000da702 1021
.org 0xda704
	orrs r0, r1	@ 000da704 0843
.org 0xda706
	b.n 0xda716	@ 000da706 06e0
.org 0xda708
	.byte 0x64,0x6f,0x86,0x08	@ 000da708 data
.org 0xda70c
	.byte 0xff,0x3f,0x01,0x00	@ 000da70c data
.org 0xda710
	ldrb r1, [r5, #10]	@ 000da710 a97a
.org 0xda712
	movs r0, #239	@ 000da712 ef20
.org 0xda714
	ands r0, r1	@ 000da714 0840
.org 0xda716
	strb r0, [r5, #10]	@ 000da716 a872
.org 0xda718
	movs r1, #1	@ 000da718 0121
.org 0xda71a
	ands r1, r4	@ 000da71a 2140
.org 0xda71c
	adds r0, r5, #0	@ 000da71c 281c
.org 0xda71e
	adds r0, #76	@ 000da71e 4c30
.org 0xda720
	strb r1, [r0, #0]	@ 000da720 0170
.org 0xda722
	adds r3, r5, #0	@ 000da722 2b1c
.org 0xda724
	adds r3, #74	@ 000da724 4a33
.org 0xda726
	lsls r1, r1, #4	@ 000da726 0901
.org 0xda728
	ldrb r2, [r3, #0]	@ 000da728 1a78
.org 0xda72a
	movs r0, #17	@ 000da72a 1120
.org 0xda72c
	negs r0, r0	@ 000da72c 4042
.org 0xda72e
	ands r0, r2	@ 000da72e 1040
.org 0xda730
	orrs r0, r1	@ 000da730 0843
.org 0xda732
	strb r0, [r3, #0]	@ 000da732 1870
.org 0xda734
	adds r0, r5, #0	@ 000da734 281c
.org 0xda736
	bl 0xda7cc	@ 000da736 00f049f8
