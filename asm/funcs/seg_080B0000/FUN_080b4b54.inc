@ FUN_080b4b54  entry 0x080b4b54  size 116
.thumb
.org 0xb4b54
FUN_080b4b54:
	push {r4, r5, lr}	@ 000b4b54 30b5
.org 0xb4b56
	adds r4, r0, #0	@ 000b4b56 041c
.org 0xb4b58
	ldr r5, [r4, #40]	@ 000b4b58 a56a
.org 0xb4b5a
	bl 0x1cc9c	@ 000b4b5a 68f79ff8
.org 0xb4b5e
	ldrb r1, [r4, #10]	@ 000b4b5e a17a
.org 0xb4b60
	movs r0, #1	@ 000b4b60 0120
.org 0xb4b62
	orrs r0, r1	@ 000b4b62 0843
.org 0xb4b64
	movs r1, #2	@ 000b4b64 0221
.org 0xb4b66
	orrs r0, r1	@ 000b4b66 0843
.org 0xb4b68
	strb r0, [r4, #10]	@ 000b4b68 a072
.org 0xb4b6a
	ldr r1, [pc, #92]	@ 000b4b6a 1749
.org 0xb4b6c
	adds r0, r4, #0	@ 000b4b6c 201c
.org 0xb4b6e
	bl 0x1cf00	@ 000b4b6e 68f7c7f9
.org 0xb4b72
	adds r0, r4, #0	@ 000b4b72 201c
.org 0xb4b74
	bl 0x1cff0	@ 000b4b74 68f73cfa
.org 0xb4b78
	ldrb r1, [r4, #11]	@ 000b4b78 e17a
.org 0xb4b7a
	movs r0, #16	@ 000b4b7a 1020
.org 0xb4b7c
	orrs r0, r1	@ 000b4b7c 0843
.org 0xb4b7e
	strb r0, [r4, #11]	@ 000b4b7e e072
.org 0xb4b80
	ldrb r0, [r5, #28]	@ 000b4b80 287f
.org 0xb4b82
	strb r0, [r4, #29]	@ 000b4b82 6077
.org 0xb4b84
	movs r2, #0	@ 000b4b84 0022
.org 0xb4b86
	ldrb r1, [r4, #10]	@ 000b4b86 a17a
.org 0xb4b88
	movs r0, #239	@ 000b4b88 ef20
.org 0xb4b8a
	ands r0, r1	@ 000b4b8a 0840
.org 0xb4b8c
	strb r0, [r4, #10]	@ 000b4b8c a072
.org 0xb4b8e
	movs r3, #1	@ 000b4b8e 0123
.org 0xb4b90
	adds r0, r4, #0	@ 000b4b90 201c
.org 0xb4b92
	adds r0, #76	@ 000b4b92 4c30
.org 0xb4b94
	strb r2, [r0, #0]	@ 000b4b94 0270
.org 0xb4b96
	adds r2, r4, #0	@ 000b4b96 221c
.org 0xb4b98
	adds r2, #74	@ 000b4b98 4a32
.org 0xb4b9a
	ldrb r1, [r2, #0]	@ 000b4b9a 1178
.org 0xb4b9c
	movs r0, #17	@ 000b4b9c 1120
.org 0xb4b9e
	negs r0, r0	@ 000b4b9e 4042
.org 0xb4ba0
	ands r0, r1	@ 000b4ba0 0840
.org 0xb4ba2
	strb r0, [r2, #0]	@ 000b4ba2 1070
.org 0xb4ba4
	adds r1, r4, #0	@ 000b4ba4 211c
.org 0xb4ba6
	adds r1, #37	@ 000b4ba6 2531
.org 0xb4ba8
	movs r0, #23	@ 000b4ba8 1720
.org 0xb4baa
	strb r0, [r1, #0]	@ 000b4baa 0870
.org 0xb4bac
	ldr r1, [pc, #28]	@ 000b4bac 0749
.org 0xb4bae
	ldrb r0, [r4, #9]	@ 000b4bae 607a
.org 0xb4bb0
	lsls r0, r0, #2	@ 000b4bb0 8000
.org 0xb4bb2
	adds r0, r0, r1	@ 000b4bb2 4018
.org 0xb4bb4
	str r3, [r4, #12]	@ 000b4bb4 e360
.org 0xb4bb6
	ldr r0, [r0, #0]	@ 000b4bb6 0068
.org 0xb4bb8
	ldr r0, [r0, #4]	@ 000b4bb8 4068
.org 0xb4bba
	str r0, [r4, #20]	@ 000b4bba 6061
.org 0xb4bbc
	adds r0, r4, #0	@ 000b4bbc 201c
.org 0xb4bbe
	bl 0xb4bd0	@ 000b4bbe 00f007f8
.org 0xb4bc2
	pop {r4, r5}	@ 000b4bc2 30bc
.org 0xb4bc4
	pop {r0}	@ 000b4bc4 01bc
.org 0xb4bc6
	bx r0	@ 000b4bc6 0047
