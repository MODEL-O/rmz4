@ FUN_080c9a74  entry 0x080c9a74  size 168
.thumb
.org 0xc9a74
FUN_080c9a74:
	push {r4, r5, r6, lr}	@ 000c9a74 70b5
.org 0xc9a76
	adds r4, r0, #0	@ 000c9a76 041c
.org 0xc9a78
	adds r0, #180	@ 000c9a78 b430
.org 0xc9a7a
	ldrb r2, [r0, #0]	@ 000c9a7a 0278
.org 0xc9a7c
	ldr r1, [pc, #156]	@ 000c9a7c 2749
.org 0xc9a7e
	ldrb r0, [r4, #9]	@ 000c9a7e 607a
.org 0xc9a80
	lsls r0, r0, #2	@ 000c9a80 8000
.org 0xc9a82
	adds r0, r0, r1	@ 000c9a82 4018
.org 0xc9a84
	movs r1, #1	@ 000c9a84 0121
.org 0xc9a86
	str r1, [r4, #12]	@ 000c9a86 e160
.org 0xc9a88
	ldr r0, [r0, #0]	@ 000c9a88 0068
.org 0xc9a8a
	ldr r0, [r0, #4]	@ 000c9a8a 4068
.org 0xc9a8c
	str r0, [r4, #20]	@ 000c9a8c 6061
.org 0xc9a8e
	ldrb r1, [r4, #10]	@ 000c9a8e a17a
.org 0xc9a90
	movs r0, #1	@ 000c9a90 0120
.org 0xc9a92
	orrs r0, r1	@ 000c9a92 0843
.org 0xc9a94
	movs r1, #2	@ 000c9a94 0221
.org 0xc9a96
	orrs r0, r1	@ 000c9a96 0843
.org 0xc9a98
	strb r0, [r4, #10]	@ 000c9a98 a072
.org 0xc9a9a
	ldr r3, [pc, #132]	@ 000c9a9a 214b
.org 0xc9a9c
	adds r0, r2, #0	@ 000c9a9c 101c
.org 0xc9a9e
	adds r0, #64	@ 000c9a9e 4030
.org 0xc9aa0
	lsls r0, r0, #24	@ 000c9aa0 0006
.org 0xc9aa2
	lsrs r0, r0, #23	@ 000c9aa2 c00d
.org 0xc9aa4
	adds r0, r0, r3	@ 000c9aa4 c018
.org 0xc9aa6
	movs r1, #0	@ 000c9aa6 0021
.org 0xc9aa8
	ldrsh r0, [r0, r1]	@ 000c9aa8 405e
.org 0xc9aaa
	lsrs r1, r0, #31	@ 000c9aaa c10f
.org 0xc9aac
	adds r0, r0, r1	@ 000c9aac 4018
.org 0xc9aae
	asrs r0, r0, #1	@ 000c9aae 4010
.org 0xc9ab0
	str r0, [r4, #92]	@ 000c9ab0 e065
.org 0xc9ab2
	lsls r2, r2, #1	@ 000c9ab2 5200
.org 0xc9ab4
	adds r2, r2, r3	@ 000c9ab4 d218
.org 0xc9ab6
	movs r1, #0	@ 000c9ab6 0021
.org 0xc9ab8
	ldrsh r0, [r2, r1]	@ 000c9ab8 505e
.org 0xc9aba
	lsrs r1, r0, #31	@ 000c9aba c10f
.org 0xc9abc
	adds r0, r0, r1	@ 000c9abc 4018
.org 0xc9abe
	asrs r0, r0, #1	@ 000c9abe 4010
.org 0xc9ac0
	str r0, [r4, #96]	@ 000c9ac0 2066
.org 0xc9ac2
	movs r0, #24	@ 000c9ac2 1820
.org 0xc9ac4
	strb r0, [r4, #18]	@ 000c9ac4 a074
.org 0xc9ac6
	adds r0, r4, #0	@ 000c9ac6 201c
.org 0xc9ac8
	bl 0x1cc9c	@ 000c9ac8 53f7e8f8
.org 0xc9acc
	movs r6, #0	@ 000c9acc 0026
.org 0xc9ace
	ldrb r1, [r4, #10]	@ 000c9ace a17a
.org 0xc9ad0
	movs r0, #239	@ 000c9ad0 ef20
.org 0xc9ad2
	ands r0, r1	@ 000c9ad2 0840
.org 0xc9ad4
	strb r0, [r4, #10]	@ 000c9ad4 a072
.org 0xc9ad6
	adds r0, r4, #0	@ 000c9ad6 201c
.org 0xc9ad8
	adds r0, #76	@ 000c9ad8 4c30
.org 0xc9ada
	strb r6, [r0, #0]	@ 000c9ada 0670
.org 0xc9adc
	adds r2, r4, #0	@ 000c9adc 221c
.org 0xc9ade
	adds r2, #74	@ 000c9ade 4a32
.org 0xc9ae0
	ldrb r1, [r2, #0]	@ 000c9ae0 1178
.org 0xc9ae2
	movs r0, #17	@ 000c9ae2 1120
.org 0xc9ae4
	negs r0, r0	@ 000c9ae4 4042
.org 0xc9ae6
	ands r0, r1	@ 000c9ae6 0840
.org 0xc9ae8
	strb r0, [r2, #0]	@ 000c9ae8 1070
.org 0xc9aea
	adds r0, r4, #0	@ 000c9aea 201c
.org 0xc9aec
	movs r1, #1	@ 000c9aec 0121
.org 0xc9aee
	bl 0x1cf00	@ 000c9aee 53f707fa
.org 0xc9af2
	ldrb r1, [r4, #10]	@ 000c9af2 a17a
.org 0xc9af4
	movs r0, #4	@ 000c9af4 0420
.org 0xc9af6
	orrs r0, r1	@ 000c9af6 0843
.org 0xc9af8
	strb r0, [r4, #10]	@ 000c9af8 a072
.org 0xc9afa
	adds r5, r4, #0	@ 000c9afa 251c
.org 0xc9afc
	adds r5, #116	@ 000c9afc 7435
.org 0xc9afe
	ldr r1, [pc, #36]	@ 000c9afe 0949
.org 0xc9b00
	adds r2, r4, #0	@ 000c9b00 221c
.org 0xc9b02
	adds r2, #84	@ 000c9b02 5432
.org 0xc9b04
	adds r0, r5, #0	@ 000c9b04 281c
.org 0xc9b06
	movs r3, #64	@ 000c9b06 4023
.org 0xc9b08
	bl 0x5760	@ 000c9b08 3bf72afe
.org 0xc9b0c
	str r4, [r5, #44]	@ 000c9b0c ec62
.org 0xc9b0e
	str r6, [r5, #36]	@ 000c9b0e 6e62
.org 0xc9b10
	adds r0, r4, #0	@ 000c9b10 201c
.org 0xc9b12
	bl 0xc9b28	@ 000c9b12 00f009f8
.org 0xc9b16
	pop {r4, r5, r6}	@ 000c9b16 70bc
.org 0xc9b18
	pop {r0}	@ 000c9b18 01bc
.org 0xc9b1a
	bx r0	@ 000c9b1a 0047
