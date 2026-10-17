@ FUN_080e4b6c  entry 0x080e4b6c  size 196
.thumb
.org 0xe4b6c
FUN_080e4b6c:
	push {r4, r5, r6, lr}	@ 000e4b6c 70b5
.org 0xe4b6e
	adds r6, r0, #0	@ 000e4b6e 061c
.org 0xe4b70
	ldrb r0, [r6, #17]	@ 000e4b70 707c
.org 0xe4b72
	cmp r0, #0	@ 000e4b72 0028
.org 0xe4b74
	bne.n 0xe4bb8	@ 000e4b74 20d1
.org 0xe4b76
	adds r5, r6, #0	@ 000e4b76 351c
.org 0xe4b78
	adds r5, #84	@ 000e4b78 5435
.org 0xe4b7a
	movs r2, #128	@ 000e4b7a 8022
.org 0xe4b7c
	lsls r2, r2, #2	@ 000e4b7c 9200
.org 0xe4b7e
	ldrb r3, [r6, #10]	@ 000e4b7e b37a
.org 0xe4b80
	lsrs r3, r3, #4	@ 000e4b80 1b09
.org 0xe4b82
	movs r4, #1	@ 000e4b82 0124
.org 0xe4b84
	ands r3, r4	@ 000e4b84 2340
.org 0xe4b86
	movs r0, #0	@ 000e4b86 0020
.org 0xe4b88
	adds r1, r5, #0	@ 000e4b88 291c
.org 0xe4b8a
	bl 0xd0dc4	@ 000e4b8a ecf71bf9
.org 0xe4b8e
	ldrb r2, [r6, #10]	@ 000e4b8e b27a
.org 0xe4b90
	lsrs r2, r2, #4	@ 000e4b90 1209
.org 0xe4b92
	ands r2, r4	@ 000e4b92 2240
.org 0xe4b94
	adds r0, r5, #0	@ 000e4b94 281c
.org 0xe4b96
	movs r1, #1	@ 000e4b96 0121
.org 0xe4b98
	bl 0xe4a54	@ 000e4b98 fff75cff
.org 0xe4b9c
	ldrb r2, [r6, #10]	@ 000e4b9c b27a
.org 0xe4b9e
	lsrs r2, r2, #4	@ 000e4b9e 1209
.org 0xe4ba0
	ands r2, r4	@ 000e4ba0 2240
.org 0xe4ba2
	adds r0, r5, #0	@ 000e4ba2 281c
.org 0xe4ba4
	movs r1, #2	@ 000e4ba4 0221
.org 0xe4ba6
	bl 0xe4a54	@ 000e4ba6 fff755ff
.org 0xe4baa
	ldrb r2, [r6, #10]	@ 000e4baa b27a
.org 0xe4bac
	lsrs r2, r2, #4	@ 000e4bac 1209
.org 0xe4bae
	ands r2, r4	@ 000e4bae 2240
.org 0xe4bb0
	adds r0, r5, #0	@ 000e4bb0 281c
.org 0xe4bb2
	movs r1, #3	@ 000e4bb2 0321
.org 0xe4bb4
	bl 0xe4a54	@ 000e4bb4 fff74eff
.org 0xe4bb8
	ldrb r0, [r6, #17]	@ 000e4bb8 707c
.org 0xe4bba
	cmp r0, #1	@ 000e4bba 0128
.org 0xe4bbc
	bhi.n 0xe4bc6	@ 000e4bbc 03d8
.org 0xe4bbe
	adds r1, r6, #0	@ 000e4bbe 311c
.org 0xe4bc0
	adds r1, #37	@ 000e4bc0 2531
.org 0xe4bc2
	movs r0, #24	@ 000e4bc2 1820
.org 0xe4bc4
	strb r0, [r1, #0]	@ 000e4bc4 0870
.org 0xe4bc6
	ldr r1, [pc, #104]	@ 000e4bc6 1a49
.org 0xe4bc8
	ldrb r0, [r6, #17]	@ 000e4bc8 707c
.org 0xe4bca
	lsls r0, r0, #2	@ 000e4bca 8000
.org 0xe4bcc
	adds r0, r0, r1	@ 000e4bcc 4018
.org 0xe4bce
	ldr r0, [r0, #0]	@ 000e4bce 0068
.org 0xe4bd0
	str r0, [r6, #92]	@ 000e4bd0 f065
.org 0xe4bd2
	ldr r1, [pc, #96]	@ 000e4bd2 1849
.org 0xe4bd4
	str r1, [r6, #96]	@ 000e4bd4 3166
.org 0xe4bd6
	ldrb r0, [r6, #17]	@ 000e4bd6 707c
.org 0xe4bd8
	adds r2, r0, #0	@ 000e4bd8 021c
.org 0xe4bda
	cmp r0, #1	@ 000e4bda 0128
.org 0xe4bdc
	bhi.n 0xe4be2	@ 000e4bdc 01d8
.org 0xe4bde
	lsls r0, r1, #1	@ 000e4bde 4800
.org 0xe4be0
	str r0, [r6, #96]	@ 000e4be0 3066
.org 0xe4be2
	ldrb r1, [r6, #10]	@ 000e4be2 b17a
.org 0xe4be4
	movs r0, #16	@ 000e4be4 1020
.org 0xe4be6
	ands r0, r1	@ 000e4be6 0840
.org 0xe4be8
	cmp r0, #0	@ 000e4be8 0028
.org 0xe4bea
	bne.n 0xe4bfc	@ 000e4bea 07d1
.org 0xe4bec
	ldr r0, [r6, #92]	@ 000e4bec f06d
.org 0xe4bee
	lsls r0, r0, #8	@ 000e4bee 0002
.org 0xe4bf0
	negs r0, r0	@ 000e4bf0 4042
.org 0xe4bf2
	cmp r0, #0	@ 000e4bf2 0028
.org 0xe4bf4
	bge.n 0xe4bf8	@ 000e4bf4 00da
.org 0xe4bf6
	adds r0, #255	@ 000e4bf6 ff30
.org 0xe4bf8
	asrs r0, r0, #8	@ 000e4bf8 0012
.org 0xe4bfa
	str r0, [r6, #92]	@ 000e4bfa f065
.org 0xe4bfc
	ldr r1, [pc, #56]	@ 000e4bfc 0e49
.org 0xe4bfe
	lsls r0, r2, #1	@ 000e4bfe 5000
.org 0xe4c00
	adds r0, r0, r1	@ 000e4c00 4018
.org 0xe4c02
	ldrh r1, [r0, #0]	@ 000e4c02 0188
.org 0xe4c04
	adds r0, r6, #0	@ 000e4c04 301c
.org 0xe4c06
	bl 0x1cf00	@ 000e4c06 38f77bf9
.org 0xe4c0a
	ldr r2, [pc, #48]	@ 000e4c0a 0c4a
.org 0xe4c0c
	ldr r1, [r2, #0]	@ 000e4c0c 1168
.org 0xe4c0e
	ldr r0, [pc, #48]	@ 000e4c0e 0c48
.org 0xe4c10
	muls r0, r1	@ 000e4c10 4843
.org 0xe4c12
	ldr r1, [pc, #48]	@ 000e4c12 0c49
.org 0xe4c14
	adds r0, r0, r1	@ 000e4c14 4018
.org 0xe4c16
	lsls r0, r0, #1	@ 000e4c16 4000
.org 0xe4c18
	lsrs r1, r0, #1	@ 000e4c18 4108
.org 0xe4c1a
	str r1, [r2, #0]	@ 000e4c1a 1160
.org 0xe4c1c
	lsrs r0, r0, #17	@ 000e4c1c 400c
.org 0xe4c1e
	movs r1, #31	@ 000e4c1e 1f21
.org 0xe4c20
	ands r0, r1	@ 000e4c20 0840
.org 0xe4c22
	adds r0, #20	@ 000e4c22 1430
.org 0xe4c24
	movs r1, #0	@ 000e4c24 0021
.org 0xe4c26
	strb r0, [r6, #18]	@ 000e4c26 b074
.org 0xe4c28
	strb r1, [r6, #13]	@ 000e4c28 7173
.org 0xe4c2a
	pop {r4, r5, r6}	@ 000e4c2a 70bc
.org 0xe4c2c
	pop {r0}	@ 000e4c2c 01bc
.org 0xe4c2e
	bx r0	@ 000e4c2e 0047
