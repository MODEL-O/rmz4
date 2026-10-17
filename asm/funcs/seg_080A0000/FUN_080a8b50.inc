@ FUN_080a8b50  entry 0x080a8b50  size 108
.thumb
.org 0xa8b50
FUN_080a8b50:
	push {r4, r5, lr}	@ 000a8b50 30b5
.org 0xa8b52
	adds r4, r0, #0	@ 000a8b52 041c
.org 0xa8b54
	bl 0x1cc9c	@ 000a8b54 74f7a2f8
.org 0xa8b58
	ldrb r1, [r4, #10]	@ 000a8b58 a17a
.org 0xa8b5a
	movs r0, #1	@ 000a8b5a 0120
.org 0xa8b5c
	orrs r0, r1	@ 000a8b5c 0843
.org 0xa8b5e
	movs r1, #2	@ 000a8b5e 0221
.org 0xa8b60
	orrs r0, r1	@ 000a8b60 0843
.org 0xa8b62
	strb r0, [r4, #10]	@ 000a8b62 a072
.org 0xa8b64
	adds r0, r4, #0	@ 000a8b64 201c
.org 0xa8b66
	adds r0, #34	@ 000a8b66 2230
.org 0xa8b68
	movs r5, #1	@ 000a8b68 0125
.org 0xa8b6a
	strb r5, [r0, #0]	@ 000a8b6a 0570
.org 0xa8b6c
	ldr r1, [pc, #76]	@ 000a8b6c 1349
.org 0xa8b6e
	adds r0, r4, #0	@ 000a8b6e 201c
.org 0xa8b70
	bl 0x1cf00	@ 000a8b70 74f7c6f9
.org 0xa8b74
	adds r0, r4, #0	@ 000a8b74 201c
.org 0xa8b76
	bl 0x1cff0	@ 000a8b76 74f73bfa
.org 0xa8b7a
	movs r2, #0	@ 000a8b7a 0022
.org 0xa8b7c
	ldrb r1, [r4, #10]	@ 000a8b7c a17a
.org 0xa8b7e
	movs r0, #239	@ 000a8b7e ef20
.org 0xa8b80
	ands r0, r1	@ 000a8b80 0840
.org 0xa8b82
	strb r0, [r4, #10]	@ 000a8b82 a072
.org 0xa8b84
	adds r0, r4, #0	@ 000a8b84 201c
.org 0xa8b86
	adds r0, #76	@ 000a8b86 4c30
.org 0xa8b88
	strb r2, [r0, #0]	@ 000a8b88 0270
.org 0xa8b8a
	adds r2, r4, #0	@ 000a8b8a 221c
.org 0xa8b8c
	adds r2, #74	@ 000a8b8c 4a32
.org 0xa8b8e
	ldrb r1, [r2, #0]	@ 000a8b8e 1178
.org 0xa8b90
	movs r0, #17	@ 000a8b90 1120
.org 0xa8b92
	negs r0, r0	@ 000a8b92 4042
.org 0xa8b94
	ands r0, r1	@ 000a8b94 0840
.org 0xa8b96
	strb r0, [r2, #0]	@ 000a8b96 1070
.org 0xa8b98
	adds r1, r4, #0	@ 000a8b98 211c
.org 0xa8b9a
	adds r1, #37	@ 000a8b9a 2531
.org 0xa8b9c
	movs r0, #23	@ 000a8b9c 1720
.org 0xa8b9e
	strb r0, [r1, #0]	@ 000a8b9e 0870
.org 0xa8ba0
	ldr r1, [pc, #28]	@ 000a8ba0 0749
.org 0xa8ba2
	ldrb r0, [r4, #9]	@ 000a8ba2 607a
.org 0xa8ba4
	lsls r0, r0, #2	@ 000a8ba4 8000
.org 0xa8ba6
	adds r0, r0, r1	@ 000a8ba6 4018
.org 0xa8ba8
	str r5, [r4, #12]	@ 000a8ba8 e560
.org 0xa8baa
	ldr r0, [r0, #0]	@ 000a8baa 0068
.org 0xa8bac
	ldr r0, [r0, #4]	@ 000a8bac 4068
.org 0xa8bae
	str r0, [r4, #20]	@ 000a8bae 6061
.org 0xa8bb0
	adds r0, r4, #0	@ 000a8bb0 201c
.org 0xa8bb2
	bl 0xa896c	@ 000a8bb2 fff7dbfe
.org 0xa8bb6
	pop {r4, r5}	@ 000a8bb6 30bc
.org 0xa8bb8
	pop {r0}	@ 000a8bb8 01bc
.org 0xa8bba
	bx r0	@ 000a8bba 0047
