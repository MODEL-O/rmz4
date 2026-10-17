@ FUN_08046c38  entry 0x08046c38  size 78
.thumb
.org 0x46c38
FUN_08046c38:
	push {r4, r5, lr}	@ 00046c38 30b5
.org 0x46c3a
	adds r4, r0, #0	@ 00046c3a 041c
.org 0x46c3c
	ldr r1, [pc, #72]	@ 00046c3c 1249
.org 0x46c3e
	ldrb r0, [r4, #9]	@ 00046c3e 607a
.org 0x46c40
	lsls r0, r0, #2	@ 00046c40 8000
.org 0x46c42
	adds r0, r0, r1	@ 00046c42 4018
.org 0x46c44
	movs r1, #1	@ 00046c44 0121
.org 0x46c46
	str r1, [r4, #12]	@ 00046c46 e160
.org 0x46c48
	ldr r0, [r0, #0]	@ 00046c48 0068
.org 0x46c4a
	ldr r0, [r0, #4]	@ 00046c4a 4068
.org 0x46c4c
	str r0, [r4, #20]	@ 00046c4c 6061
.org 0x46c4e
	adds r0, r4, #0	@ 00046c4e 201c
.org 0x46c50
	bl 0x1cd28	@ 00046c50 d6f76af8
.org 0x46c54
	adds r0, r4, #0	@ 00046c54 201c
.org 0x46c56
	bl 0x1ceec	@ 00046c56 d6f749f9
.org 0x46c5a
	ldrb r1, [r4, #10]	@ 00046c5a a17a
.org 0x46c5c
	movs r0, #254	@ 00046c5c fe20
.org 0x46c5e
	ands r0, r1	@ 00046c5e 0840
.org 0x46c60
	movs r5, #0	@ 00046c60 0025
.org 0x46c62
	movs r1, #2	@ 00046c62 0221
.org 0x46c64
	orrs r0, r1	@ 00046c64 0843
.org 0x46c66
	strb r0, [r4, #10]	@ 00046c66 a072
.org 0x46c68
	ldr r1, [pc, #32]	@ 00046c68 0849
.org 0x46c6a
	adds r0, r4, #0	@ 00046c6a 201c
.org 0x46c6c
	bl 0x1cf00	@ 00046c6c d6f748f9
.org 0x46c70
	movs r0, #8	@ 00046c70 0820
.org 0x46c72
	strb r0, [r4, #18]	@ 00046c72 a074
.org 0x46c74
	adds r0, r4, #0	@ 00046c74 201c
.org 0x46c76
	adds r0, #189	@ 00046c76 bd30
.org 0x46c78
	strb r5, [r0, #0]	@ 00046c78 0570
.org 0x46c7a
	adds r0, r4, #0	@ 00046c7a 201c
.org 0x46c7c
	bl 0x46c90	@ 00046c7c 00f008f8
.org 0x46c80
	pop {r4, r5}	@ 00046c80 30bc
.org 0x46c82
	pop {r0}	@ 00046c82 01bc
.org 0x46c84
	bx r0	@ 00046c84 0047
