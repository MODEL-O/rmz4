@ FUN_080e2aac  entry 0x080e2aac  size 288
.thumb
.org 0xe2aac
FUN_080e2aac:
	push {r4, r5, r6, r7, lr}	@ 000e2aac f0b5
.org 0xe2aae
	mov r7, r8	@ 000e2aae 4746
.org 0xe2ab0
	push {r7}	@ 000e2ab0 80b4
.org 0xe2ab2
	adds r4, r0, #0	@ 000e2ab2 041c
.org 0xe2ab4
	ldr r1, [pc, #48]	@ 000e2ab4 0c49
.org 0xe2ab6
	ldrb r0, [r4, #17]	@ 000e2ab6 607c
.org 0xe2ab8
	subs r0, #2	@ 000e2ab8 0238
.org 0xe2aba
	lsls r0, r0, #1	@ 000e2aba 4000
.org 0xe2abc
	adds r0, r0, r1	@ 000e2abc 4018
.org 0xe2abe
	ldrh r1, [r0, #0]	@ 000e2abe 0188
.org 0xe2ac0
	adds r0, r4, #0	@ 000e2ac0 201c
.org 0xe2ac2
	bl 0x1cf00	@ 000e2ac2 3af71dfa
.org 0xe2ac6
	ldrb r0, [r4, #17]	@ 000e2ac6 607c
.org 0xe2ac8
	cmp r0, #4	@ 000e2ac8 0428
.org 0xe2aca
	bhi.n 0xe2b0e	@ 000e2aca 20d8
.org 0xe2acc
	adds r0, r4, #0	@ 000e2acc 201c
.org 0xe2ace
	adds r0, #117	@ 000e2ace 7530
.org 0xe2ad0
	ldrb r0, [r0, #0]	@ 000e2ad0 0078
.org 0xe2ad2
	cmp r0, #0	@ 000e2ad2 0028
.org 0xe2ad4
	bne.n 0xe2af0	@ 000e2ad4 0cd1
.org 0xe2ad6
	ldr r1, [pc, #20]	@ 000e2ad6 0549
.org 0xe2ad8
	ldrb r0, [r4, #17]	@ 000e2ad8 607c
.org 0xe2ada
	subs r0, #2	@ 000e2ada 0238
.org 0xe2adc
	lsls r0, r0, #3	@ 000e2adc c000
.org 0xe2ade
	adds r0, r0, r1	@ 000e2ade 4018
.org 0xe2ae0
	ldr r1, [r0, #0]	@ 000e2ae0 0168
.org 0xe2ae2
	lsls r1, r1, #8	@ 000e2ae2 0902
.org 0xe2ae4
	b.n 0xe2b08	@ 000e2ae4 10e0
.org 0xe2ae6
	.byte 0x00	@ 000e2ae6 data
.org 0xe2ae7
	.byte 0x00	@ 000e2ae7 data
.org 0xe2ae8
	.byte 0x04,0x8c,0x86,0x08	@ 000e2ae8 data
.org 0xe2aec
	.byte 0xb4,0x8b,0x86,0x08	@ 000e2aec data
.org 0xe2af0
	ldr r0, [pc, #172]	@ 000e2af0 2b48
.org 0xe2af2
	ldrb r1, [r4, #17]	@ 000e2af2 617c
.org 0xe2af4
	subs r1, #2	@ 000e2af4 0239
.org 0xe2af6
	lsls r1, r1, #3	@ 000e2af6 c900
.org 0xe2af8
	adds r1, r1, r0	@ 000e2af8 0918
.org 0xe2afa
	ldr r0, [r1, #0]	@ 000e2afa 0868
.org 0xe2afc
	lsls r0, r0, #16	@ 000e2afc 0004
.org 0xe2afe
	negs r0, r0	@ 000e2afe 4042
.org 0xe2b00
	cmp r0, #0	@ 000e2b00 0028
.org 0xe2b02
	bge.n 0xe2b06	@ 000e2b02 00da
.org 0xe2b04
	adds r0, #255	@ 000e2b04 ff30
.org 0xe2b06
	asrs r1, r0, #8	@ 000e2b06 0112
.org 0xe2b08
	ldr r0, [r4, #84]	@ 000e2b08 606d
.org 0xe2b0a
	adds r0, r0, r1	@ 000e2b0a 4018
.org 0xe2b0c
	str r0, [r4, #84]	@ 000e2b0c 6065
.org 0xe2b0e
	ldr r1, [pc, #144]	@ 000e2b0e 2449
.org 0xe2b10
	ldrb r0, [r4, #17]	@ 000e2b10 607c
.org 0xe2b12
	subs r0, #2	@ 000e2b12 0238
.org 0xe2b14
	lsls r0, r0, #3	@ 000e2b14 c000
.org 0xe2b16
	adds r1, #4	@ 000e2b16 0431
.org 0xe2b18
	adds r0, r0, r1	@ 000e2b18 4018
.org 0xe2b1a
	ldr r1, [r0, #0]	@ 000e2b1a 0168
.org 0xe2b1c
	lsls r1, r1, #8	@ 000e2b1c 0902
.org 0xe2b1e
	ldr r0, [r4, #88]	@ 000e2b1e a06d
.org 0xe2b20
	adds r0, r0, r1	@ 000e2b20 4018
.org 0xe2b22
	str r0, [r4, #88]	@ 000e2b22 a065
.org 0xe2b24
	ldr r0, [pc, #124]	@ 000e2b24 1f48
.org 0xe2b26
	mov r8, r0	@ 000e2b26 8046
.org 0xe2b28
	ldrb r2, [r4, #17]	@ 000e2b28 627c
.org 0xe2b2a
	subs r2, #2	@ 000e2b2a 023a
.org 0xe2b2c
	lsls r2, r2, #3	@ 000e2b2c d200
.org 0xe2b2e
	add r2, r8	@ 000e2b2e 4244
.org 0xe2b30
	ldr r5, [pc, #116]	@ 000e2b30 1d4d
.org 0xe2b32
	ldr r0, [r5, #0]	@ 000e2b32 2868
.org 0xe2b34
	ldr r1, [pc, #116]	@ 000e2b34 1d49
.org 0xe2b36
	mov ip, r1	@ 000e2b36 8c46
.org 0xe2b38
	mov r1, ip	@ 000e2b38 6146
.org 0xe2b3a
	muls r1, r0	@ 000e2b3a 4143
.org 0xe2b3c
	adds r0, r1, #0	@ 000e2b3c 081c
.org 0xe2b3e
	ldr r7, [pc, #112]	@ 000e2b3e 1c4f
.org 0xe2b40
	adds r0, r0, r7	@ 000e2b40 c019
.org 0xe2b42
	lsls r0, r0, #1	@ 000e2b42 4000
.org 0xe2b44
	lsrs r3, r0, #1	@ 000e2b44 4308
.org 0xe2b46
	str r3, [r5, #0]	@ 000e2b46 2b60
.org 0xe2b48
	lsrs r0, r0, #17	@ 000e2b48 400c
.org 0xe2b4a
	movs r1, #255	@ 000e2b4a ff21
.org 0xe2b4c
	ands r0, r1	@ 000e2b4c 0840
.org 0xe2b4e
	movs r6, #128	@ 000e2b4e 8026
.org 0xe2b50
	lsls r6, r6, #1	@ 000e2b50 7600
.org 0xe2b52
	adds r0, r0, r6	@ 000e2b52 8019
.org 0xe2b54
	ldr r1, [r2, #0]	@ 000e2b54 1168
.org 0xe2b56
	muls r0, r1	@ 000e2b56 4843
.org 0xe2b58
	ldrb r2, [r4, #17]	@ 000e2b58 627c
.org 0xe2b5a
	cmp r0, #0	@ 000e2b5a 0028
.org 0xe2b5c
	bge.n 0xe2b60	@ 000e2b5c 00da
.org 0xe2b5e
	adds r0, #255	@ 000e2b5e ff30
.org 0xe2b60
	asrs r0, r0, #8	@ 000e2b60 0012
.org 0xe2b62
	str r0, [r4, #92]	@ 000e2b62 e065
.org 0xe2b64
	subs r2, #2	@ 000e2b64 023a
.org 0xe2b66
	lsls r2, r2, #3	@ 000e2b66 d200
.org 0xe2b68
	mov r0, r8	@ 000e2b68 4046
.org 0xe2b6a
	adds r0, #4	@ 000e2b6a 0430
.org 0xe2b6c
	adds r2, r2, r0	@ 000e2b6c 1218
.org 0xe2b6e
	mov r0, ip	@ 000e2b6e 6046
.org 0xe2b70
	muls r0, r3	@ 000e2b70 5843
.org 0xe2b72
	adds r0, r0, r7	@ 000e2b72 c019
.org 0xe2b74
	lsls r0, r0, #1	@ 000e2b74 4000
.org 0xe2b76
	lsrs r1, r0, #1	@ 000e2b76 4108
.org 0xe2b78
	str r1, [r5, #0]	@ 000e2b78 2960
.org 0xe2b7a
	lsls r0, r0, #6	@ 000e2b7a 8001
.org 0xe2b7c
	lsrs r0, r0, #23	@ 000e2b7c c00d
.org 0xe2b7e
	adds r0, r0, r6	@ 000e2b7e 8019
.org 0xe2b80
	ldr r1, [r2, #0]	@ 000e2b80 1168
.org 0xe2b82
	muls r0, r1	@ 000e2b82 4843
.org 0xe2b84
	cmp r0, #0	@ 000e2b84 0028
.org 0xe2b86
	bge.n 0xe2b8a	@ 000e2b86 00da
.org 0xe2b88
	adds r0, #255	@ 000e2b88 ff30
.org 0xe2b8a
	asrs r0, r0, #8	@ 000e2b8a 0012
.org 0xe2b8c
	str r0, [r4, #96]	@ 000e2b8c 2066
.org 0xe2b8e
	adds r0, r4, #0	@ 000e2b8e 201c
.org 0xe2b90
	adds r0, #117	@ 000e2b90 7530
.org 0xe2b92
	ldrb r2, [r0, #0]	@ 000e2b92 0278
.org 0xe2b94
	cmp r2, #0	@ 000e2b94 002a
.org 0xe2b96
	beq.n 0xe2bb4	@ 000e2b96 0dd0
.org 0xe2b98
	ldrb r1, [r4, #10]	@ 000e2b98 a17a
.org 0xe2b9a
	movs r0, #16	@ 000e2b9a 1020
.org 0xe2b9c
	orrs r0, r1	@ 000e2b9c 0843
.org 0xe2b9e
	b.n 0xe2bba	@ 000e2b9e 0ce0
.org 0xe2ba0
	.byte 0xb4,0x8b,0x86,0x08	@ 000e2ba0 data
.org 0xe2ba4
	.byte 0xdc,0x8b,0x86,0x08	@ 000e2ba4 data
.org 0xe2ba8
	.byte 0x38,0xdc,0x02,0x02	@ 000e2ba8 data
.org 0xe2bac
	.byte 0xfd,0x43,0x03,0x00	@ 000e2bac data
.org 0xe2bb0
	.byte 0xc3,0x9e,0x26,0x00	@ 000e2bb0 data
.org 0xe2bb4
	ldrb r1, [r4, #10]	@ 000e2bb4 a17a
.org 0xe2bb6
	movs r0, #239	@ 000e2bb6 ef20
.org 0xe2bb8
	ands r0, r1	@ 000e2bb8 0840
.org 0xe2bba
	strb r0, [r4, #10]	@ 000e2bba a072
.org 0xe2bbc
	movs r3, #1	@ 000e2bbc 0123
.org 0xe2bbe
	adds r1, r3, #0	@ 000e2bbe 191c
.org 0xe2bc0
	ands r1, r2	@ 000e2bc0 1140
.org 0xe2bc2
	adds r0, r4, #0	@ 000e2bc2 201c
.org 0xe2bc4
	adds r0, #76	@ 000e2bc4 4c30
.org 0xe2bc6
	strb r1, [r0, #0]	@ 000e2bc6 0170
.org 0xe2bc8
	movs r0, #74	@ 000e2bc8 4a20
.org 0xe2bca
	adds r0, r0, r4	@ 000e2bca 0019
