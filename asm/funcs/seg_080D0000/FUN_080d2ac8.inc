@ FUN_080d2ac8  entry 0x080d2ac8  size 276
.thumb
.org 0xd2ac8
FUN_080d2ac8:
	push {r4, r5, r6, r7, lr}	@ 000d2ac8 f0b5
.org 0xd2aca
	mov r7, r9	@ 000d2aca 4f46
.org 0xd2acc
	mov r6, r8	@ 000d2acc 4646
.org 0xd2ace
	push {r6, r7}	@ 000d2ace c0b4
.org 0xd2ad0
	adds r7, r0, #0	@ 000d2ad0 071c
.org 0xd2ad2
	bl 0x1cdbc	@ 000d2ad2 4af773f9
.org 0xd2ad6
	ldrb r0, [r7, #10]	@ 000d2ad6 b87a
.org 0xd2ad8
	movs r4, #1	@ 000d2ad8 0124
.org 0xd2ada
	movs r5, #0	@ 000d2ada 0025
.org 0xd2adc
	orrs r0, r4	@ 000d2adc 2043
.org 0xd2ade
	movs r1, #2	@ 000d2ade 0221
.org 0xd2ae0
	orrs r0, r1	@ 000d2ae0 0843
.org 0xd2ae2
	strb r0, [r7, #10]	@ 000d2ae2 b872
.org 0xd2ae4
	movs r1, #176	@ 000d2ae4 b021
.org 0xd2ae6
	lsls r1, r1, #4	@ 000d2ae6 0901
.org 0xd2ae8
	adds r0, r7, #0	@ 000d2ae8 381c
.org 0xd2aea
	bl 0x1cf00	@ 000d2aea 4af709fa
.org 0xd2aee
	adds r0, r7, #0	@ 000d2aee 381c
.org 0xd2af0
	bl 0x1cff0	@ 000d2af0 4af77efa
.org 0xd2af4
	ldr r2, [pc, #32]	@ 000d2af4 084a
.org 0xd2af6
	ldr r1, [r2, #0]	@ 000d2af6 1168
.org 0xd2af8
	ldr r0, [pc, #32]	@ 000d2af8 0848
.org 0xd2afa
	muls r0, r1	@ 000d2afa 4843
.org 0xd2afc
	ldr r1, [pc, #32]	@ 000d2afc 0849
.org 0xd2afe
	adds r0, r0, r1	@ 000d2afe 4018
.org 0xd2b00
	lsls r0, r0, #1	@ 000d2b00 4000
.org 0xd2b02
	lsrs r1, r0, #1	@ 000d2b02 4108
.org 0xd2b04
	str r1, [r2, #0]	@ 000d2b04 1160
.org 0xd2b06
	lsrs r2, r0, #17	@ 000d2b06 420c
.org 0xd2b08
	ands r2, r4	@ 000d2b08 2240
.org 0xd2b0a
	cmp r2, #0	@ 000d2b0a 002a
.org 0xd2b0c
	beq.n 0xd2b24	@ 000d2b0c 0ad0
.org 0xd2b0e
	ldrb r0, [r7, #10]	@ 000d2b0e b87a
.org 0xd2b10
	movs r1, #16	@ 000d2b10 1021
.org 0xd2b12
	orrs r0, r1	@ 000d2b12 0843
.org 0xd2b14
	b.n 0xd2b2a	@ 000d2b14 09e0
.org 0xd2b16
	.byte 0x00	@ 000d2b16 data
.org 0xd2b17
	.byte 0x00	@ 000d2b17 data
.org 0xd2b18
	.byte 0x38,0xdc,0x02,0x02	@ 000d2b18 data
.org 0xd2b1c
	.byte 0xfd,0x43,0x03,0x00	@ 000d2b1c data
.org 0xd2b20
	.byte 0xc3,0x9e,0x26,0x00	@ 000d2b20 data
.org 0xd2b24
	ldrb r1, [r7, #10]	@ 000d2b24 b97a
.org 0xd2b26
	movs r0, #239	@ 000d2b26 ef20
.org 0xd2b28
	ands r0, r1	@ 000d2b28 0840
.org 0xd2b2a
	strb r0, [r7, #10]	@ 000d2b2a b872
.org 0xd2b2c
	movs r4, #1	@ 000d2b2c 0124
.org 0xd2b2e
	mov r9, r4	@ 000d2b2e a146
.org 0xd2b30
	mov r1, r9	@ 000d2b30 4946
.org 0xd2b32
	ands r1, r2	@ 000d2b32 1140
.org 0xd2b34
	adds r0, r7, #0	@ 000d2b34 381c
.org 0xd2b36
	adds r0, #76	@ 000d2b36 4c30
.org 0xd2b38
	strb r1, [r0, #0]	@ 000d2b38 0170
.org 0xd2b3a
	adds r3, r7, #0	@ 000d2b3a 3b1c
.org 0xd2b3c
	adds r3, #74	@ 000d2b3c 4a33
.org 0xd2b3e
	lsls r1, r1, #4	@ 000d2b3e 0901
.org 0xd2b40
	ldrb r2, [r3, #0]	@ 000d2b40 1a78
.org 0xd2b42
	movs r0, #17	@ 000d2b42 1120
.org 0xd2b44
	negs r0, r0	@ 000d2b44 4042
.org 0xd2b46
	ands r0, r2	@ 000d2b46 1040
.org 0xd2b48
	orrs r0, r1	@ 000d2b48 0843
.org 0xd2b4a
	strb r0, [r3, #0]	@ 000d2b4a 1870
.org 0xd2b4c
	adds r2, r7, #0	@ 000d2b4c 3a1c
.org 0xd2b4e
	adds r2, #73	@ 000d2b4e 4932
.org 0xd2b50
	ldrb r1, [r2, #0]	@ 000d2b50 1178
.org 0xd2b52
	movs r0, #13	@ 000d2b52 0d20
.org 0xd2b54
	negs r0, r0	@ 000d2b54 4042
.org 0xd2b56
	ands r0, r1	@ 000d2b56 0840
.org 0xd2b58
	strb r0, [r2, #0]	@ 000d2b58 1070
.org 0xd2b5a
	ldr r0, [pc, #144]	@ 000d2b5a 2448
.org 0xd2b5c
	mov r8, r0	@ 000d2b5c 8046
.org 0xd2b5e
	ldr r0, [r0, #0]	@ 000d2b5e 0068
.org 0xd2b60
	ldr r5, [pc, #140]	@ 000d2b60 234d
.org 0xd2b62
	adds r1, r0, #0	@ 000d2b62 011c
.org 0xd2b64
	muls r1, r5	@ 000d2b64 6943
.org 0xd2b66
	ldr r3, [pc, #140]	@ 000d2b66 234b
.org 0xd2b68
	adds r1, r1, r3	@ 000d2b68 c918
.org 0xd2b6a
	lsls r1, r1, #1	@ 000d2b6a 4900
.org 0xd2b6c
	lsrs r2, r1, #1	@ 000d2b6c 4a08
.org 0xd2b6e
	lsrs r1, r1, #17	@ 000d2b6e 490c
.org 0xd2b70
	movs r0, #127	@ 000d2b70 7f20
.org 0xd2b72
	ands r1, r0	@ 000d2b72 0140
.org 0xd2b74
	adds r4, #255	@ 000d2b74 ff34
.org 0xd2b76
	adds r0, r4, #0	@ 000d2b76 201c
.org 0xd2b78
	adds r1, r1, r0	@ 000d2b78 0918
.org 0xd2b7a
	ldrb r4, [r7, #17]	@ 000d2b7a 7c7c
.org 0xd2b7c
	lsls r4, r4, #6	@ 000d2b7c a401
.org 0xd2b7e
	adds r0, r2, #0	@ 000d2b7e 101c
.org 0xd2b80
	muls r0, r5	@ 000d2b80 6843
.org 0xd2b82
	adds r0, r0, r3	@ 000d2b82 c018
.org 0xd2b84
	lsls r0, r0, #1	@ 000d2b84 4000
.org 0xd2b86
	lsrs r6, r0, #1	@ 000d2b86 4608
.org 0xd2b88
	lsrs r0, r0, #17	@ 000d2b88 400c
.org 0xd2b8a
	movs r2, #63	@ 000d2b8a 3f22
.org 0xd2b8c
	ands r0, r2	@ 000d2b8c 1040
.org 0xd2b8e
	adds r4, r4, r0	@ 000d2b8e 2418
.org 0xd2b90
	lsls r4, r4, #24	@ 000d2b90 2406
.org 0xd2b92
	lsrs r4, r4, #24	@ 000d2b92 240e
.org 0xd2b94
	adds r0, r7, #0	@ 000d2b94 381c
.org 0xd2b96
	adds r0, #80	@ 000d2b96 5030
.org 0xd2b98
	strh r1, [r0, #0]	@ 000d2b98 0180
.org 0xd2b9a
	lsrs r1, r1, #1	@ 000d2b9a 4908
.org 0xd2b9c
	adds r0, #2	@ 000d2b9c 0230
.org 0xd2b9e
	strh r1, [r0, #0]	@ 000d2b9e 0180
.org 0xd2ba0
	subs r0, #46	@ 000d2ba0 2e38
.org 0xd2ba2
	strb r4, [r0, #0]	@ 000d2ba2 0470
.org 0xd2ba4
	adds r0, r6, #0	@ 000d2ba4 301c
.org 0xd2ba6
	muls r0, r5	@ 000d2ba6 6843
.org 0xd2ba8
	adds r0, r0, r3	@ 000d2ba8 c018
.org 0xd2baa
	lsls r0, r0, #1	@ 000d2baa 4000
.org 0xd2bac
	lsrs r1, r0, #1	@ 000d2bac 4108
.org 0xd2bae
	mov r2, r8	@ 000d2bae 4246
.org 0xd2bb0
	str r1, [r2, #0]	@ 000d2bb0 1160
.org 0xd2bb2
	lsrs r0, r0, #17	@ 000d2bb2 400c
.org 0xd2bb4
	movs r1, #20	@ 000d2bb4 1421
.org 0xd2bb6
	bl 0x129198	@ 000d2bb6 56f0effa
.org 0xd2bba
	strb r0, [r7, #18]	@ 000d2bba b874
.org 0xd2bbc
	strb r4, [r7, #19]	@ 000d2bbc fc74
.org 0xd2bbe
	movs r0, #128	@ 000d2bbe 8020
.org 0xd2bc0
	str r0, [r7, #100]	@ 000d2bc0 7866
.org 0xd2bc2
	movs r0, #16	@ 000d2bc2 1020
.org 0xd2bc4
	str r0, [r7, #104]	@ 000d2bc4 b866
.org 0xd2bc6
	ldr r1, [pc, #48]	@ 000d2bc6 0c49
.org 0xd2bc8
	ldrb r0, [r7, #9]	@ 000d2bc8 787a
.org 0xd2bca
	lsls r0, r0, #2	@ 000d2bca 8000
.org 0xd2bcc
	adds r0, r0, r1	@ 000d2bcc 4018
.org 0xd2bce
	mov r4, r9	@ 000d2bce 4c46
.org 0xd2bd0
	str r4, [r7, #12]	@ 000d2bd0 fc60
.org 0xd2bd2
	ldr r0, [r0, #0]	@ 000d2bd2 0068
.org 0xd2bd4
	ldr r0, [r0, #4]	@ 000d2bd4 4068
.org 0xd2bd6
	str r0, [r7, #20]	@ 000d2bd6 7861
.org 0xd2bd8
	adds r0, r7, #0	@ 000d2bd8 381c
.org 0xd2bda
	bl 0xd2a30	@ 000d2bda fff729ff
