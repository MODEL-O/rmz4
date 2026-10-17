@ FUN_08090990  entry 0x08090990  size 148
.thumb
.org 0x90990
FUN_08090990:
	push {r4, r5, r6, r7, lr}	@ 00090990 f0b5
.org 0x90992
	adds r5, r0, #0	@ 00090992 051c
.org 0x90994
	ldr r7, [r5, #40]	@ 00090994 af6a
.org 0x90996
	ldrb r4, [r5, #17]	@ 00090996 6c7c
.org 0x90998
	ldr r1, [pc, #68]	@ 00090998 1149
.org 0x9099a
	ldrb r0, [r5, #9]	@ 0009099a 687a
.org 0x9099c
	lsls r0, r0, #2	@ 0009099c 8000
.org 0x9099e
	adds r0, r0, r1	@ 0009099e 4018
.org 0x909a0
	movs r2, #1	@ 000909a0 0122
.org 0x909a2
	str r2, [r5, #12]	@ 000909a2 ea60
.org 0x909a4
	ldr r0, [r0, #0]	@ 000909a4 0068
.org 0x909a6
	ldr r0, [r0, #4]	@ 000909a6 4068
.org 0x909a8
	str r0, [r5, #20]	@ 000909a8 6861
.org 0x909aa
	ldrb r1, [r5, #10]	@ 000909aa a97a
.org 0x909ac
	movs r0, #1	@ 000909ac 0120
.org 0x909ae
	movs r6, #0	@ 000909ae 0026
.org 0x909b0
	orrs r0, r1	@ 000909b0 0843
.org 0x909b2
	movs r1, #2	@ 000909b2 0221
.org 0x909b4
	orrs r0, r1	@ 000909b4 0843
.org 0x909b6
	strb r0, [r5, #10]	@ 000909b6 a872
.org 0x909b8
	lsls r0, r4, #1	@ 000909b8 6000
.org 0x909ba
	subs r2, r2, r0	@ 000909ba 121a
.org 0x909bc
	lsls r0, r2, #2	@ 000909bc 9000
.org 0x909be
	adds r0, r0, r2	@ 000909be 8018
.org 0x909c0
	lsls r0, r0, #5	@ 000909c0 4001
.org 0x909c2
	str r0, [r5, #92]	@ 000909c2 e865
.org 0x909c4
	movs r0, #48	@ 000909c4 3020
.org 0x909c6
	strb r0, [r5, #18]	@ 000909c6 a874
.org 0x909c8
	adds r0, r5, #0	@ 000909c8 281c
.org 0x909ca
	bl 0x1cc9c	@ 000909ca 8cf767f9
.org 0x909ce
	adds r0, r5, #0	@ 000909ce 281c
.org 0x909d0
	bl 0x1ceec	@ 000909d0 8cf78cfa
.org 0x909d4
	cmp r4, #0	@ 000909d4 002c
.org 0x909d6
	beq.n 0x909e4	@ 000909d6 05d0
.org 0x909d8
	ldrb r0, [r5, #10]	@ 000909d8 a87a
.org 0x909da
	movs r1, #16	@ 000909da 1021
.org 0x909dc
	orrs r0, r1	@ 000909dc 0843
.org 0x909de
	b.n 0x909ea	@ 000909de 04e0
.org 0x909e0
	.byte 0x40,0xdb,0x85,0x08	@ 000909e0 data
.org 0x909e4
	ldrb r1, [r5, #10]	@ 000909e4 a97a
.org 0x909e6
	movs r0, #239	@ 000909e6 ef20
.org 0x909e8
	ands r0, r1	@ 000909e8 0840
.org 0x909ea
	strb r0, [r5, #10]	@ 000909ea a872
.org 0x909ec
	movs r1, #1	@ 000909ec 0121
.org 0x909ee
	ands r1, r4	@ 000909ee 2140
.org 0x909f0
	adds r0, r5, #0	@ 000909f0 281c
.org 0x909f2
	adds r0, #76	@ 000909f2 4c30
.org 0x909f4
	strb r1, [r0, #0]	@ 000909f4 0170
.org 0x909f6
	adds r3, r5, #0	@ 000909f6 2b1c
.org 0x909f8
	adds r3, #74	@ 000909f8 4a33
.org 0x909fa
	lsls r1, r1, #4	@ 000909fa 0901
.org 0x909fc
	ldrb r2, [r3, #0]	@ 000909fc 1a78
.org 0x909fe
	movs r0, #17	@ 000909fe 1120
.org 0x90a00
	negs r0, r0	@ 00090a00 4042
.org 0x90a02
	ands r0, r2	@ 00090a02 1040
.org 0x90a04
	orrs r0, r1	@ 00090a04 0843
.org 0x90a06
	strb r0, [r3, #0]	@ 00090a06 1870
.org 0x90a08
	ldr r1, [pc, #28]	@ 00090a08 0749
.org 0x90a0a
	adds r0, r5, #0	@ 00090a0a 281c
.org 0x90a0c
	bl 0x1cf00	@ 00090a0c 8cf778fa
.org 0x90a10
	ldrb r1, [r5, #11]	@ 00090a10 e97a
.org 0x90a12
	movs r0, #16	@ 00090a12 1020
.org 0x90a14
	orrs r0, r1	@ 00090a14 0843
.org 0x90a16
	strb r0, [r5, #11]	@ 00090a16 e872
.org 0x90a18
	ldrb r0, [r7, #28]	@ 00090a18 387f
.org 0x90a1a
	strb r0, [r5, #29]	@ 00090a1a 6877
.org 0x90a1c
	adds r0, r5, #0	@ 00090a1c 281c
.org 0x90a1e
	bl 0x90a2c	@ 00090a1e 00f005f8
.org 0x90a22
	pop {r4, r5, r6, r7}	@ 00090a22 f0bc
