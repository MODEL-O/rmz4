@ FUN_08112b74  entry 0x08112b74  size 198
.thumb
.org 0x112b74
FUN_08112b74:
	push {r4, r5, r6, r7, lr}	@ 00112b74 f0b5
.org 0x112b76
	mov r7, r8	@ 00112b76 4746
.org 0x112b78
	push {r7}	@ 00112b78 80b4
.org 0x112b7a
	adds r5, r0, #0	@ 00112b7a 051c
.org 0x112b7c
	ldr r0, [pc, #112]	@ 00112b7c 1c48
.org 0x112b7e
	adds r7, r5, r0	@ 00112b7e 2f18
.org 0x112b80
	movs r3, #0	@ 00112b80 0023
.org 0x112b82
	strh r3, [r7, #2]	@ 00112b82 7b80
.org 0x112b84
	ldr r0, [pc, #108]	@ 00112b84 1b48
.org 0x112b86
	ldr r1, [pc, #112]	@ 00112b86 1c49
.org 0x112b88
	adds r2, r0, r1	@ 00112b88 4218
.org 0x112b8a
	adds r1, #4	@ 00112b8a 0431
.org 0x112b8c
	adds r0, r0, r1	@ 00112b8c 4018
.org 0x112b8e
	ldr r1, [pc, #108]	@ 00112b8e 1b49
.org 0x112b90
	str r1, [r0, #0]	@ 00112b90 0160
.org 0x112b92
	str r1, [r2, #0]	@ 00112b92 1160
.org 0x112b94
	ldr r1, [pc, #104]	@ 00112b94 1a49
.org 0x112b96
	adds r0, r5, r1	@ 00112b96 6818
.org 0x112b98
	movs r1, #1	@ 00112b98 0121
.org 0x112b9a
	mov r8, r1	@ 00112b9a 8846
.org 0x112b9c
	mov r1, r8	@ 00112b9c 4146
.org 0x112b9e
	strh r1, [r0, #0]	@ 00112b9e 0180
.org 0x112ba0
	strh r3, [r7, #0]	@ 00112ba0 3b80
.org 0x112ba2
	ldr r0, [pc, #96]	@ 00112ba2 1848
.org 0x112ba4
	adds r4, r5, r0	@ 00112ba4 2c18
.org 0x112ba6
	adds r0, r4, #0	@ 00112ba6 201c
.org 0x112ba8
	bl 0x1e8d8	@ 00112ba8 0bf796fe
.org 0x112bac
	movs r1, #198	@ 00112bac c621
.org 0x112bae
	lsls r1, r1, #7	@ 00112bae c901
.org 0x112bb0
	adds r0, r5, r1	@ 00112bb0 6818
.org 0x112bb2
	bl 0x1e944	@ 00112bb2 0bf7c7fe
.org 0x112bb6
	ldr r1, [pc, #80]	@ 00112bb6 1449
.org 0x112bb8
	adds r0, r5, r1	@ 00112bb8 6818
.org 0x112bba
	bl 0x108e04	@ 00112bba f6f723f9
.org 0x112bbe
	ldr r1, [pc, #76]	@ 00112bbe 1349
.org 0x112bc0
	adds r0, r5, r1	@ 00112bc0 6818
.org 0x112bc2
	bl 0x108f48	@ 00112bc2 f6f7c1f9
.org 0x112bc6
	ldr r0, [pc, #72]	@ 00112bc6 1248
.org 0x112bc8
	adds r6, r5, r0	@ 00112bc8 2e18
.org 0x112bca
	adds r0, r6, #0	@ 00112bca 301c
.org 0x112bcc
	bl 0x38034	@ 00112bcc 25f732fa
.org 0x112bd0
	ldr r0, [pc, #64]	@ 00112bd0 1048
.org 0x112bd2
	ldr r1, [pc, #68]	@ 00112bd2 1149
.org 0x112bd4
	adds r0, r0, r1	@ 00112bd4 4018
.org 0x112bd6
	ldrb r0, [r0, #0]	@ 00112bd6 0078
.org 0x112bd8
	cmp r0, #2	@ 00112bd8 0228
.org 0x112bda
	bne.n 0x112c1c	@ 00112bda 1fd1
.org 0x112bdc
	mov r0, r8	@ 00112bdc 4046
.org 0x112bde
	strh r0, [r7, #2]	@ 00112bde 7880
.org 0x112be0
	ldrb r1, [r4, #0]	@ 00112be0 2178
.org 0x112be2
	movs r0, #1	@ 00112be2 0120
.org 0x112be4
	orrs r0, r1	@ 00112be4 0843
.org 0x112be6
	strb r0, [r4, #0]	@ 00112be6 2070
.org 0x112be8
	adds r0, r6, #0	@ 00112be8 301c
.org 0x112bea
	bl 0x380ec	@ 00112bea 25f77ffa
.org 0x112bee
	b.n 0x112c48	@ 00112bee 2be0
.org 0x112bf0
	.byte 0x5c,0x62,0x00,0x00	@ 00112bf0 data
.org 0x112bf4
	.byte 0x10,0xf6,0x02,0x02	@ 00112bf4 data
.org 0x112bf8
	.byte 0xa8,0x63,0x00,0x00	@ 00112bf8 data
.org 0x112bfc
	.byte 0x00,0x66,0x03,0x02	@ 00112bfc data
.org 0x112c00
	.byte 0x60,0x62,0x00,0x00	@ 00112c00 data
.org 0x112c04
	.byte 0x70,0x62,0x00,0x00	@ 00112c04 data
.org 0x112c08
	.byte 0xb8,0x62,0x00,0x00	@ 00112c08 data
.org 0x112c0c
	.byte 0xf0,0x62,0x00,0x00	@ 00112c0c data
.org 0x112c10
	.byte 0x48,0x63,0x00,0x00	@ 00112c10 data
.org 0x112c14
	.byte 0xb0,0xf3,0x02,0x02	@ 00112c14 data
.org 0x112c18
	.byte 0x55,0x02,0x00,0x00	@ 00112c18 data
.org 0x112c1c
	cmp r0, #3	@ 00112c1c 0328
.org 0x112c1e
	bne.n 0x112c32	@ 00112c1e 08d1
.org 0x112c20
	movs r0, #2	@ 00112c20 0220
.org 0x112c22
	strh r0, [r7, #2]	@ 00112c22 7880
.org 0x112c24
	ldrb r1, [r4, #0]	@ 00112c24 2178
.org 0x112c26
	orrs r0, r1	@ 00112c26 0843
.org 0x112c28
	strb r0, [r4, #0]	@ 00112c28 2070
.org 0x112c2a
	adds r0, r6, #0	@ 00112c2a 301c
.org 0x112c2c
	bl 0x380f4	@ 00112c2c 25f762fa
.org 0x112c30
	b.n 0x112c48	@ 00112c30 0ae0
.org 0x112c32
	cmp r0, #0	@ 00112c32 0028
.org 0x112c34
	bne.n 0x112c48	@ 00112c34 08d1
.org 0x112c36
	movs r0, #3	@ 00112c36 0320
.org 0x112c38
	strh r0, [r7, #2]	@ 00112c38 7880
