@ FUN_08120b58  entry 0x08120b58  size 162
.thumb
.org 0x120b58
FUN_08120b58:
	push {r4, r5, r6, r7, lr}	@ 00120b58 f0b5
.org 0x120b5a
	mov r7, r8	@ 00120b5a 4746
.org 0x120b5c
	push {r7}	@ 00120b5c 80b4
.org 0x120b5e
	adds r7, r0, #0	@ 00120b5e 071c
.org 0x120b60
	movs r3, #0	@ 00120b60 0023
.org 0x120b62
	ldr r0, [pc, #112]	@ 00120b62 1c48
.org 0x120b64
	adds r2, r7, r0	@ 00120b64 3a18
.org 0x120b66
	movs r4, #255	@ 00120b66 ff24
.org 0x120b68
	mov ip, r2	@ 00120b68 9446
.org 0x120b6a
	adds r0, r2, r3	@ 00120b6a d018
.org 0x120b6c
	ldrb r1, [r0, #0]	@ 00120b6c 0178
.org 0x120b6e
	orrs r1, r4	@ 00120b6e 2143
.org 0x120b70
	strb r1, [r0, #0]	@ 00120b70 0170
.org 0x120b72
	adds r0, r3, #1	@ 00120b72 581c
.org 0x120b74
	lsls r0, r0, #24	@ 00120b74 0006
.org 0x120b76
	lsrs r3, r0, #24	@ 00120b76 030e
.org 0x120b78
	cmp r3, #6	@ 00120b78 062b
.org 0x120b7a
	bls.n 0x120b6a	@ 00120b7a f6d9
.org 0x120b7c
	ldr r0, [pc, #88]	@ 00120b7c 1648
.org 0x120b7e
	adds r1, r7, r0	@ 00120b7e 3918
.org 0x120b80
	movs r0, #0	@ 00120b80 0020
.org 0x120b82
	strb r0, [r1, #14]	@ 00120b82 8873
.org 0x120b84
	strb r0, [r1, #15]	@ 00120b84 c873
.org 0x120b86
	strb r0, [r1, #3]	@ 00120b86 c870
.org 0x120b88
	movs r3, #0	@ 00120b88 0023
.org 0x120b8a
	movs r5, #0	@ 00120b8a 0025
.org 0x120b8c
	movs r4, #0	@ 00120b8c 0024
.org 0x120b8e
	ldr r0, [pc, #76]	@ 00120b8e 1348
.org 0x120b90
	mov r8, r0	@ 00120b90 8046
.org 0x120b92
	movs r6, #1	@ 00120b92 0126
.org 0x120b94
	adds r2, r3, #0	@ 00120b94 1a1c
.org 0x120b96
	adds r2, #76	@ 00120b96 4c32
.org 0x120b98
	asrs r0, r2, #3	@ 00120b98 d010
.org 0x120b9a
	add r0, r8	@ 00120b9a 4044
.org 0x120b9c
	ldrb r1, [r0, #0]	@ 00120b9c 0178
.org 0x120b9e
	movs r0, #7	@ 00120b9e 0720
.org 0x120ba0
	ands r2, r0	@ 00120ba0 0240
.org 0x120ba2
	asrs r1, r2	@ 00120ba2 1141
.org 0x120ba4
	ands r1, r6	@ 00120ba4 3140
.org 0x120ba6
	cmp r1, #0	@ 00120ba6 0029
.org 0x120ba8
	beq.n 0x120bf4	@ 00120ba8 24d0
.org 0x120baa
	ldr r0, [pc, #44]	@ 00120baa 0b48
.org 0x120bac
	adds r2, r7, r0	@ 00120bac 3a18
.org 0x120bae
	ldrb r0, [r2, #13]	@ 00120bae 507b
.org 0x120bb0
	adds r0, r0, r4	@ 00120bb0 0019
.org 0x120bb2
	cmp r5, r0	@ 00120bb2 8542
.org 0x120bb4
	bne.n 0x120be0	@ 00120bb4 14d1
.org 0x120bb6
	mov r0, ip	@ 00120bb6 6046
.org 0x120bb8
	adds r1, r0, r4	@ 00120bb8 0119
.org 0x120bba
	adds r0, r3, #0	@ 00120bba 181c
.org 0x120bbc
	adds r0, #72	@ 00120bbc 4830
.org 0x120bbe
	strb r0, [r1, #0]	@ 00120bbe 0870
.org 0x120bc0
	ldrb r0, [r2, #3]	@ 00120bc0 d078
.org 0x120bc2
	adds r0, #1	@ 00120bc2 0130
.org 0x120bc4
	strb r0, [r2, #3]	@ 00120bc4 d070
.org 0x120bc6
	cmp r4, #5	@ 00120bc6 052c
.org 0x120bc8
	bhi.n 0x120bee	@ 00120bc8 11d8
.org 0x120bca
	adds r0, r4, #1	@ 00120bca 601c
.org 0x120bcc
	lsls r0, r0, #24	@ 00120bcc 0006
.org 0x120bce
	lsrs r4, r0, #24	@ 00120bce 040e
.org 0x120bd0
	b.n 0x120bee	@ 00120bd0 0de0
.org 0x120bd2
	.byte 0x00	@ 00120bd2 data
.org 0x120bd3
	.byte 0x00	@ 00120bd3 data
.org 0x120bd4
	.byte 0xd2,0x0d,0x00,0x00	@ 00120bd4 data
.org 0x120bd8
	.byte 0xcc,0x0d,0x00,0x00	@ 00120bd8 data
.org 0x120bdc
	.byte 0x70,0x0a,0x00,0x02	@ 00120bdc data
.org 0x120be0
	cmp r4, #0	@ 00120be0 002c
.org 0x120be2
	beq.n 0x120bec	@ 00120be2 03d0
.org 0x120be4
	cmp r4, #6	@ 00120be4 062c
.org 0x120be6
	bne.n 0x120bee	@ 00120be6 02d1
.org 0x120be8
	strb r6, [r2, #15]	@ 00120be8 d673
.org 0x120bea
	b.n 0x120bfe	@ 00120bea 08e0
.org 0x120bec
	strb r6, [r2, #14]	@ 00120bec 9673
.org 0x120bee
	adds r0, r5, #1	@ 00120bee 681c
.org 0x120bf0
	lsls r0, r0, #24	@ 00120bf0 0006
.org 0x120bf2
	lsrs r5, r0, #24	@ 00120bf2 050e
.org 0x120bf4
	adds r0, r3, #1	@ 00120bf4 581c
.org 0x120bf6
	lsls r0, r0, #24	@ 00120bf6 0006
.org 0x120bf8
	lsrs r3, r0, #24	@ 00120bf8 030e
