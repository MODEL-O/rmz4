@ FUN_080f7a48  entry 0x080f7a48  size 102
.thumb
.org 0xf7a48
FUN_080f7a48:
	push {r4, r5, lr}	@ 000f7a48 30b5
.org 0xf7a4a
	adds r4, r0, #0	@ 000f7a4a 041c
.org 0xf7a4c
	bl 0x1cc9c	@ 000f7a4c 25f726f9
.org 0xf7a50
	ldrb r1, [r4, #10]	@ 000f7a50 a17a
.org 0xf7a52
	movs r0, #1	@ 000f7a52 0120
.org 0xf7a54
	movs r5, #0	@ 000f7a54 0025
.org 0xf7a56
	orrs r0, r1	@ 000f7a56 0843
.org 0xf7a58
	movs r1, #2	@ 000f7a58 0221
.org 0xf7a5a
	orrs r0, r1	@ 000f7a5a 0843
.org 0xf7a5c
	strb r0, [r4, #10]	@ 000f7a5c a072
.org 0xf7a5e
	movs r1, #206	@ 000f7a5e ce21
.org 0xf7a60
	lsls r1, r1, #7	@ 000f7a60 c901
.org 0xf7a62
	adds r0, r4, #0	@ 000f7a62 201c
.org 0xf7a64
	bl 0x1cf00	@ 000f7a64 25f74cfa
.org 0xf7a68
	adds r2, r4, #0	@ 000f7a68 221c
.org 0xf7a6a
	adds r2, #73	@ 000f7a6a 4932
.org 0xf7a6c
	ldrb r1, [r2, #0]	@ 000f7a6c 1178
.org 0xf7a6e
	movs r0, #13	@ 000f7a6e 0d20
.org 0xf7a70
	negs r0, r0	@ 000f7a70 4042
.org 0xf7a72
	ands r0, r1	@ 000f7a72 0840
.org 0xf7a74
	movs r1, #4	@ 000f7a74 0421
.org 0xf7a76
	orrs r0, r1	@ 000f7a76 0843
.org 0xf7a78
	strb r0, [r2, #0]	@ 000f7a78 1070
.org 0xf7a7a
	adds r0, r4, #0	@ 000f7a7a 201c
.org 0xf7a7c
	adds r0, #37	@ 000f7a7c 2530
.org 0xf7a7e
	strb r5, [r0, #0]	@ 000f7a7e 0570
.org 0xf7a80
	ldr r1, [pc, #44]	@ 000f7a80 0b49
.org 0xf7a82
	ldrb r0, [r4, #17]	@ 000f7a82 607c
.org 0xf7a84
	adds r0, r0, r1	@ 000f7a84 4018
.org 0xf7a86
	ldrb r0, [r0, #0]	@ 000f7a86 0078
.org 0xf7a88
	lsls r0, r0, #8	@ 000f7a88 0002
.org 0xf7a8a
	str r0, [r4, #92]	@ 000f7a8a e065
.org 0xf7a8c
	ldr r0, [pc, #36]	@ 000f7a8c 0948
.org 0xf7a8e
	str r0, [r4, #96]	@ 000f7a8e 2066
.org 0xf7a90
	ldr r1, [pc, #36]	@ 000f7a90 0949
.org 0xf7a92
	ldrb r0, [r4, #9]	@ 000f7a92 607a
.org 0xf7a94
	lsls r0, r0, #2	@ 000f7a94 8000
.org 0xf7a96
	adds r0, r0, r1	@ 000f7a96 4018
.org 0xf7a98
	movs r1, #1	@ 000f7a98 0121
.org 0xf7a9a
	str r1, [r4, #12]	@ 000f7a9a e160
.org 0xf7a9c
	ldr r0, [r0, #0]	@ 000f7a9c 0068
.org 0xf7a9e
	ldr r0, [r0, #4]	@ 000f7a9e 4068
.org 0xf7aa0
	str r0, [r4, #20]	@ 000f7aa0 6061
.org 0xf7aa2
	adds r0, r4, #0	@ 000f7aa2 201c
.org 0xf7aa4
	bl 0xf762c	@ 000f7aa4 fff7c2fd
.org 0xf7aa8
	pop {r4, r5}	@ 000f7aa8 30bc
.org 0xf7aaa
	pop {r0}	@ 000f7aaa 01bc
.org 0xf7aac
	bx r0	@ 000f7aac 0047
