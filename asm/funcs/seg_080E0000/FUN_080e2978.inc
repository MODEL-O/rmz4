@ FUN_080e2978  entry 0x080e2978  size 72
.thumb
.org 0xe2978
FUN_080e2978:
	push {r4, lr}	@ 000e2978 10b5
.org 0xe297a
	adds r4, r0, #0	@ 000e297a 041c
.org 0xe297c
	bl 0x1cc9c	@ 000e297c 3af78ef9
.org 0xe2980
	ldrb r1, [r4, #10]	@ 000e2980 a17a
.org 0xe2982
	movs r0, #1	@ 000e2982 0120
.org 0xe2984
	orrs r0, r1	@ 000e2984 0843
.org 0xe2986
	movs r1, #2	@ 000e2986 0221
.org 0xe2988
	orrs r0, r1	@ 000e2988 0843
.org 0xe298a
	strb r0, [r4, #10]	@ 000e298a a072
.org 0xe298c
	ldr r1, [pc, #48]	@ 000e298c 0c49
.org 0xe298e
	ldrb r0, [r4, #9]	@ 000e298e 607a
.org 0xe2990
	lsls r0, r0, #2	@ 000e2990 8000
.org 0xe2992
	adds r0, r0, r1	@ 000e2992 4018
.org 0xe2994
	movs r1, #1	@ 000e2994 0121
.org 0xe2996
	str r1, [r4, #12]	@ 000e2996 e160
.org 0xe2998
	ldr r0, [r0, #0]	@ 000e2998 0068
.org 0xe299a
	ldr r0, [r0, #4]	@ 000e299a 4068
.org 0xe299c
	str r0, [r4, #20]	@ 000e299c 6061
.org 0xe299e
	adds r0, r4, #0	@ 000e299e 201c
.org 0xe29a0
	adds r0, #116	@ 000e29a0 7430
.org 0xe29a2
	strb r1, [r0, #0]	@ 000e29a2 0170
.org 0xe29a4
	ldr r1, [pc, #28]	@ 000e29a4 0749
.org 0xe29a6
	ldrb r0, [r4, #16]	@ 000e29a6 207c
.org 0xe29a8
	lsls r0, r0, #2	@ 000e29a8 8000
.org 0xe29aa
	adds r0, r0, r1	@ 000e29aa 4018
.org 0xe29ac
	ldr r1, [r0, #0]	@ 000e29ac 0168
.org 0xe29ae
	adds r0, r4, #0	@ 000e29ae 201c
.org 0xe29b0
	bl 0x128f80	@ 000e29b0 46f0e6fa
.org 0xe29b4
	adds r0, r4, #0	@ 000e29b4 201c
.org 0xe29b6
	bl 0xe29c8	@ 000e29b6 00f007f8
.org 0xe29ba
	pop {r4}	@ 000e29ba 10bc
.org 0xe29bc
	pop {r0}	@ 000e29bc 01bc
.org 0xe29be
	bx r0	@ 000e29be 0047
