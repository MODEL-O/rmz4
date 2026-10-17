@ FUN_080ffda8  entry 0x080ffda8  size 156
.thumb
.org 0xffda8
FUN_080ffda8:
	push {r4, r5, r6, r7, lr}	@ 000ffda8 f0b5
.org 0xffdaa
	adds r7, r0, #0	@ 000ffdaa 071c
.org 0xffdac
	bl 0x1cc9c	@ 000ffdac 1cf776ff
.org 0xffdb0
	ldrb r1, [r7, #10]	@ 000ffdb0 b97a
.org 0xffdb2
	movs r0, #1	@ 000ffdb2 0120
.org 0xffdb4
	orrs r0, r1	@ 000ffdb4 0843
.org 0xffdb6
	movs r1, #2	@ 000ffdb6 0221
.org 0xffdb8
	orrs r0, r1	@ 000ffdb8 0843
.org 0xffdba
	strb r0, [r7, #10]	@ 000ffdba b872
.org 0xffdbc
	movs r1, #177	@ 000ffdbc b121
.org 0xffdbe
	lsls r1, r1, #8	@ 000ffdbe 0902
.org 0xffdc0
	adds r0, r7, #0	@ 000ffdc0 381c
.org 0xffdc2
	bl 0x1cf00	@ 000ffdc2 1df79df8
.org 0xffdc6
	adds r0, r7, #0	@ 000ffdc6 381c
.org 0xffdc8
	bl 0x1cff0	@ 000ffdc8 1df712f9
.org 0xffdcc
	movs r5, #0	@ 000ffdcc 0025
.org 0xffdce
	ldrb r1, [r7, #10]	@ 000ffdce b97a
.org 0xffdd0
	movs r0, #239	@ 000ffdd0 ef20
.org 0xffdd2
	ands r0, r1	@ 000ffdd2 0840
.org 0xffdd4
	strb r0, [r7, #10]	@ 000ffdd4 b872
.org 0xffdd6
	movs r6, #1	@ 000ffdd6 0126
.org 0xffdd8
	adds r0, r7, #0	@ 000ffdd8 381c
.org 0xffdda
	adds r0, #76	@ 000ffdda 4c30
.org 0xffddc
	strb r5, [r0, #0]	@ 000ffddc 0570
.org 0xffdde
	adds r2, r7, #0	@ 000ffdde 3a1c
.org 0xffde0
	adds r2, #74	@ 000ffde0 4a32
.org 0xffde2
	ldrb r1, [r2, #0]	@ 000ffde2 1178
.org 0xffde4
	movs r0, #17	@ 000ffde4 1120
.org 0xffde6
	negs r0, r0	@ 000ffde6 4042
.org 0xffde8
	ands r0, r1	@ 000ffde8 0840
.org 0xffdea
	strb r0, [r2, #0]	@ 000ffdea 1070
.org 0xffdec
	ldrb r1, [r7, #10]	@ 000ffdec b97a
.org 0xffdee
	movs r0, #4	@ 000ffdee 0420
.org 0xffdf0
	orrs r0, r1	@ 000ffdf0 0843
.org 0xffdf2
	strb r0, [r7, #10]	@ 000ffdf2 b872
.org 0xffdf4
	adds r4, r7, #0	@ 000ffdf4 3c1c
.org 0xffdf6
	adds r4, #116	@ 000ffdf6 7434
.org 0xffdf8
	ldr r1, [pc, #72]	@ 000ffdf8 1249
.org 0xffdfa
	adds r2, #10	@ 000ffdfa 0a32
.org 0xffdfc
	adds r0, r4, #0	@ 000ffdfc 201c
.org 0xffdfe
	movs r3, #1	@ 000ffdfe 0123
.org 0xffe00
	bl 0x5760	@ 000ffe00 05f7aefc
.org 0xffe04
	str r7, [r4, #44]	@ 000ffe04 e762
.org 0xffe06
	ldr r0, [pc, #64]	@ 000ffe06 1048
.org 0xffe08
	str r0, [r4, #36]	@ 000ffe08 6062
.org 0xffe0a
	ldr r0, [r7, #84]	@ 000ffe0a 786d
.org 0xffe0c
	ldr r1, [r7, #88]	@ 000ffe0c b96d
.org 0xffe0e
	bl 0x8534	@ 000ffe0e 08f791fb
.org 0xffe12
	str r0, [r7, #88]	@ 000ffe12 b865
.org 0xffe14
	adds r1, r7, #0	@ 000ffe14 391c
.org 0xffe16
	adds r1, #180	@ 000ffe16 b431
.org 0xffe18
	ldr r0, [r7, #84]	@ 000ffe18 786d
.org 0xffe1a
	str r0, [r1, #0]	@ 000ffe1a 0860
.org 0xffe1c
	adds r1, #4	@ 000ffe1c 0431
.org 0xffe1e
	ldr r0, [r7, #88]	@ 000ffe1e b86d
.org 0xffe20
	str r0, [r1, #0]	@ 000ffe20 0860
.org 0xffe22
	adds r0, r7, #0	@ 000ffe22 381c
.org 0xffe24
	adds r0, #189	@ 000ffe24 bd30
.org 0xffe26
	strb r5, [r0, #0]	@ 000ffe26 0570
.org 0xffe28
	ldr r1, [pc, #32]	@ 000ffe28 0849
.org 0xffe2a
	ldrb r0, [r7, #9]	@ 000ffe2a 787a
.org 0xffe2c
	lsls r0, r0, #2	@ 000ffe2c 8000
.org 0xffe2e
	adds r0, r0, r1	@ 000ffe2e 4018
.org 0xffe30
	str r6, [r7, #12]	@ 000ffe30 fe60
.org 0xffe32
	ldr r0, [r0, #0]	@ 000ffe32 0068
.org 0xffe34
	ldr r0, [r0, #4]	@ 000ffe34 4068
.org 0xffe36
	str r0, [r7, #20]	@ 000ffe36 7861
.org 0xffe38
	adds r0, r7, #0	@ 000ffe38 381c
.org 0xffe3a
	bl 0xffe50	@ 000ffe3a 00f009f8
.org 0xffe3e
	pop {r4, r5, r6, r7}	@ 000ffe3e f0bc
.org 0xffe40
	pop {r0}	@ 000ffe40 01bc
.org 0xffe42
	bx r0	@ 000ffe42 0047
