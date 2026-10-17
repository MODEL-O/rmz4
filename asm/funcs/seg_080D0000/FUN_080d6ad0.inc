@ FUN_080d6ad0  entry 0x080d6ad0  size 242
.thumb
.org 0xd6ad0
FUN_080d6ad0:
	push {r4, r5, r6, r7, lr}	@ 000d6ad0 f0b5
.org 0xd6ad2
	mov r7, r9	@ 000d6ad2 4f46
.org 0xd6ad4
	mov r6, r8	@ 000d6ad4 4646
.org 0xd6ad6
	push {r6, r7}	@ 000d6ad6 c0b4
.org 0xd6ad8
	adds r7, r0, #0	@ 000d6ad8 071c
.org 0xd6ada
	ldr r0, [r7, #40]	@ 000d6ada b86a
.org 0xd6adc
	mov r8, r0	@ 000d6adc 8046
.org 0xd6ade
	adds r0, r7, #0	@ 000d6ade 381c
.org 0xd6ae0
	bl 0x1cc9c	@ 000d6ae0 46f7dcf8
.org 0xd6ae4
	ldrb r1, [r7, #10]	@ 000d6ae4 b97a
.org 0xd6ae6
	movs r0, #1	@ 000d6ae6 0120
.org 0xd6ae8
	movs r4, #0	@ 000d6ae8 0024
.org 0xd6aea
	orrs r0, r1	@ 000d6aea 0843
.org 0xd6aec
	movs r1, #2	@ 000d6aec 0221
.org 0xd6aee
	orrs r0, r1	@ 000d6aee 0843
.org 0xd6af0
	strb r0, [r7, #10]	@ 000d6af0 b872
.org 0xd6af2
	ldr r1, [pc, #44]	@ 000d6af2 0b49
.org 0xd6af4
	ldrb r0, [r7, #17]	@ 000d6af4 787c
.org 0xd6af6
	lsls r0, r0, #1	@ 000d6af6 4000
.org 0xd6af8
	adds r0, r0, r1	@ 000d6af8 4018
.org 0xd6afa
	ldrh r1, [r0, #0]	@ 000d6afa 0188
.org 0xd6afc
	adds r0, r7, #0	@ 000d6afc 381c
.org 0xd6afe
	bl 0x1cf00	@ 000d6afe 46f7fff9
.org 0xd6b02
	adds r0, r7, #0	@ 000d6b02 381c
.org 0xd6b04
	bl 0x1cff0	@ 000d6b04 46f774fa
.org 0xd6b08
	mov r1, r8	@ 000d6b08 4146
.org 0xd6b0a
	ldrb r0, [r1, #10]	@ 000d6b0a 887a
.org 0xd6b0c
	lsrs r2, r0, #4	@ 000d6b0c 0209
.org 0xd6b0e
	movs r0, #1	@ 000d6b0e 0120
.org 0xd6b10
	ands r2, r0	@ 000d6b10 0240
.org 0xd6b12
	cmp r2, #0	@ 000d6b12 002a
.org 0xd6b14
	beq.n 0xd6b24	@ 000d6b14 06d0
.org 0xd6b16
	ldrb r0, [r7, #10]	@ 000d6b16 b87a
.org 0xd6b18
	movs r1, #16	@ 000d6b18 1021
.org 0xd6b1a
	orrs r0, r1	@ 000d6b1a 0843
.org 0xd6b1c
	b.n 0xd6b2a	@ 000d6b1c 05e0
.org 0xd6b1e
	.byte 0x00	@ 000d6b1e data
.org 0xd6b1f
	.byte 0x00	@ 000d6b1f data
.org 0xd6b20
	.byte 0x5c,0x7f,0x86,0x08	@ 000d6b20 data
.org 0xd6b24
	ldrb r1, [r7, #10]	@ 000d6b24 b97a
.org 0xd6b26
	movs r0, #239	@ 000d6b26 ef20
.org 0xd6b28
	ands r0, r1	@ 000d6b28 0840
.org 0xd6b2a
	strb r0, [r7, #10]	@ 000d6b2a b872
.org 0xd6b2c
	movs r4, #1	@ 000d6b2c 0124
.org 0xd6b2e
	mov r9, r4	@ 000d6b2e a146
.org 0xd6b30
	mov r1, r9	@ 000d6b30 4946
.org 0xd6b32
	ands r1, r2	@ 000d6b32 1140
.org 0xd6b34
	adds r0, r7, #0	@ 000d6b34 381c
.org 0xd6b36
	adds r0, #76	@ 000d6b36 4c30
.org 0xd6b38
	strb r1, [r0, #0]	@ 000d6b38 0170
.org 0xd6b3a
	adds r3, r7, #0	@ 000d6b3a 3b1c
.org 0xd6b3c
	adds r3, #74	@ 000d6b3c 4a33
.org 0xd6b3e
	lsls r1, r1, #4	@ 000d6b3e 0901
.org 0xd6b40
	ldrb r2, [r3, #0]	@ 000d6b40 1a78
.org 0xd6b42
	movs r0, #17	@ 000d6b42 1120
.org 0xd6b44
	negs r0, r0	@ 000d6b44 4042
.org 0xd6b46
	ands r0, r2	@ 000d6b46 1040
.org 0xd6b48
	orrs r0, r1	@ 000d6b48 0843
.org 0xd6b4a
	strb r0, [r3, #0]	@ 000d6b4a 1870
.org 0xd6b4c
	ldrb r0, [r7, #17]	@ 000d6b4c 787c
.org 0xd6b4e
	movs r1, #4	@ 000d6b4e 0421
.org 0xd6b50
	subs r1, r1, r0	@ 000d6b50 091a
.org 0xd6b52
	lsls r1, r1, #8	@ 000d6b52 0902
.org 0xd6b54
	ldr r0, [pc, #112]	@ 000d6b54 1c48
.org 0xd6b56
	mov ip, r0	@ 000d6b56 8446
.org 0xd6b58
	ldr r0, [r0, #0]	@ 000d6b58 0068
.org 0xd6b5a
	ldr r5, [pc, #112]	@ 000d6b5a 1c4d
.org 0xd6b5c
	muls r0, r5	@ 000d6b5c 6843
.org 0xd6b5e
	ldr r2, [pc, #112]	@ 000d6b5e 1c4a
.org 0xd6b60
	adds r0, r0, r2	@ 000d6b60 8018
.org 0xd6b62
	lsls r0, r0, #1	@ 000d6b62 4000
.org 0xd6b64
	lsrs r4, r0, #1	@ 000d6b64 4408
.org 0xd6b66
	lsrs r0, r0, #17	@ 000d6b66 400c
.org 0xd6b68
	movs r3, #127	@ 000d6b68 7f23
.org 0xd6b6a
	ands r0, r3	@ 000d6b6a 1840
.org 0xd6b6c
	adds r6, r1, r0	@ 000d6b6c 0e18
.org 0xd6b6e
	str r6, [r7, #92]	@ 000d6b6e fe65
.org 0xd6b70
	ldrb r1, [r7, #17]	@ 000d6b70 797c
.org 0xd6b72
	adds r1, #2	@ 000d6b72 0231
.org 0xd6b74
	lsls r1, r1, #8	@ 000d6b74 0902
.org 0xd6b76
	adds r0, r4, #0	@ 000d6b76 201c
.org 0xd6b78
	muls r0, r5	@ 000d6b78 6843
.org 0xd6b7a
	adds r0, r0, r2	@ 000d6b7a 8018
.org 0xd6b7c
	lsls r0, r0, #1	@ 000d6b7c 4000
.org 0xd6b7e
	lsrs r2, r0, #1	@ 000d6b7e 4208
.org 0xd6b80
	mov r4, ip	@ 000d6b80 6446
.org 0xd6b82
	str r2, [r4, #0]	@ 000d6b82 2260
.org 0xd6b84
	lsrs r0, r0, #17	@ 000d6b84 400c
.org 0xd6b86
	ands r0, r3	@ 000d6b86 1840
.org 0xd6b88
	adds r1, r1, r0	@ 000d6b88 0918
.org 0xd6b8a
	negs r1, r1	@ 000d6b8a 4942
.org 0xd6b8c
	str r1, [r7, #96]	@ 000d6b8c 3966
.org 0xd6b8e
	ldr r0, [pc, #68]	@ 000d6b8e 1148
.org 0xd6b90
	ldr r0, [r0, #0]	@ 000d6b90 0068
.org 0xd6b92
	mov r2, r8	@ 000d6b92 4246
.org 0xd6b94
	ldr r1, [r2, #84]	@ 000d6b94 516d
.org 0xd6b96
	ldr r0, [r0, #84]	@ 000d6b96 406d
.org 0xd6b98
	cmp r1, r0	@ 000d6b98 8142
.org 0xd6b9a
	ble.n 0xd6ba0	@ 000d6b9a 01dd
.org 0xd6b9c
	negs r0, r6	@ 000d6b9c 7042
.org 0xd6b9e
	str r0, [r7, #92]	@ 000d6b9e f865
.org 0xd6ba0
	ldrb r0, [r7, #17]	@ 000d6ba0 787c
.org 0xd6ba2
	strb r0, [r7, #18]	@ 000d6ba2 b874
.org 0xd6ba4
	ldr r1, [pc, #48]	@ 000d6ba4 0c49
.org 0xd6ba6
	ldrb r0, [r7, #9]	@ 000d6ba6 787a
.org 0xd6ba8
	lsls r0, r0, #2	@ 000d6ba8 8000
.org 0xd6baa
	adds r0, r0, r1	@ 000d6baa 4018
.org 0xd6bac
	mov r4, r9	@ 000d6bac 4c46
.org 0xd6bae
	str r4, [r7, #12]	@ 000d6bae fc60
.org 0xd6bb0
	ldr r0, [r0, #0]	@ 000d6bb0 0068
.org 0xd6bb2
	ldr r0, [r0, #4]	@ 000d6bb2 4068
.org 0xd6bb4
	str r0, [r7, #20]	@ 000d6bb4 7861
.org 0xd6bb6
	adds r0, r7, #0	@ 000d6bb6 381c
.org 0xd6bb8
	bl 0xd68fc	@ 000d6bb8 fff7a0fe
.org 0xd6bbc
	pop {r3, r4}	@ 000d6bbc 18bc
.org 0xd6bbe
	mov r8, r3	@ 000d6bbe 9846
.org 0xd6bc0
	mov r9, r4	@ 000d6bc0 a146
