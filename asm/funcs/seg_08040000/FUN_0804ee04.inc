@ FUN_0804ee04  entry 0x0804ee04  size 988
.thumb
.org 0x4ee04
FUN_0804ee04:
	push {r4, r5, r6, r7, lr}	@ 0004ee04 f0b5
.org 0x4ee06
	mov r7, r8	@ 0004ee06 4746
.org 0x4ee08
	push {r7}	@ 0004ee08 80b4
.org 0x4ee0a
	adds r7, r0, #0	@ 0004ee0a 071c
.org 0x4ee0c
	ldr r0, [r7, #40]	@ 0004ee0c b86a
.org 0x4ee0e
	mov r8, r0	@ 0004ee0e 8046
.org 0x4ee10
	adds r0, r7, #0	@ 0004ee10 381c
.org 0x4ee12
	bl 0x1cff0	@ 0004ee12 cef7edf8
.org 0x4ee16
	ldrb r0, [r7, #14]	@ 0004ee16 b87b
.org 0x4ee18
	cmp r0, #0	@ 0004ee18 0028
.org 0x4ee1a
	beq.n 0x4ee1e	@ 0004ee1a 00d0
.org 0x4ee1c
	b.n 0x4ef16	@ 0004ee1c 7be0
.org 0x4ee1e
	ldr r2, [pc, #28]	@ 0004ee1e 074a
.org 0x4ee20
	ldr r0, [r2, #36]	@ 0004ee20 506a
.org 0x4ee22
	movs r1, #214	@ 0004ee22 d621
.org 0x4ee24
	lsls r1, r1, #8	@ 0004ee24 0902
.org 0x4ee26
	adds r4, r0, r1	@ 0004ee26 4418
.org 0x4ee28
	ldr r1, [r7, #84]	@ 0004ee28 796d
.org 0x4ee2a
	ldr r0, [pc, #20]	@ 0004ee2a 0548
.org 0x4ee2c
	adds r3, r1, r0	@ 0004ee2c 0b18
.org 0x4ee2e
	cmp r3, #0	@ 0004ee2e 002b
.org 0x4ee30
	blt.n 0x4ee48	@ 0004ee30 0adb
.org 0x4ee32
	ldr r0, [pc, #16]	@ 0004ee32 0448
.org 0x4ee34
	cmp r3, r0	@ 0004ee34 8342
.org 0x4ee36
	ble.n 0x4ee56	@ 0004ee36 0edd
.org 0x4ee38
	b.n 0x4efa0	@ 0004ee38 b2e0
.org 0x4ee3a
	.byte 0x00	@ 0004ee3a data
.org 0x4ee3b
	.byte 0x00	@ 0004ee3b data
.org 0x4ee3c
	.byte 0xdc,0x03,0x03,0x02	@ 0004ee3c data
.org 0x4ee40
	.byte 0x00,0x4c,0xfe,0xff	@ 0004ee40 data
.org 0x4ee44
	.byte 0xff,0x0b,0x00,0x00	@ 0004ee44 data
.org 0x4ee48
	movs r0, #218	@ 0004ee48 da20
.org 0x4ee4a
	lsls r0, r0, #9	@ 0004ee4a 4002
.org 0x4ee4c
	subs r0, r0, r1	@ 0004ee4c 401a
.org 0x4ee4e
	ldr r1, [pc, #24]	@ 0004ee4e 0649
.org 0x4ee50
	cmp r0, r1	@ 0004ee50 8842
.org 0x4ee52
	ble.n 0x4ee56	@ 0004ee52 00dd
.org 0x4ee54
	b.n 0x4efa0	@ 0004ee54 a4e0
.org 0x4ee56
	ldr r0, [r7, #88]	@ 0004ee56 b86d
.org 0x4ee58
	subs r1, r0, r4	@ 0004ee58 011b
.org 0x4ee5a
	cmp r1, #0	@ 0004ee5a 0029
.org 0x4ee5c
	blt.n 0x4ee70	@ 0004ee5c 08db
.org 0x4ee5e
	ldr r0, [pc, #12]	@ 0004ee5e 0348
.org 0x4ee60
	cmp r1, r0	@ 0004ee60 8142
.org 0x4ee62
	ble.n 0x4ee7a	@ 0004ee62 0add
.org 0x4ee64
	b.n 0x4efa0	@ 0004ee64 9ce0
.org 0x4ee66
	.byte 0x00	@ 0004ee66 data
.org 0x4ee67
	.byte 0x00	@ 0004ee67 data
.org 0x4ee68
	.byte 0xff,0x0b,0x00,0x00	@ 0004ee68 data
.org 0x4ee6c
	.byte 0xff,0x03,0x00,0x00	@ 0004ee6c data
.org 0x4ee70
	subs r1, r4, r0	@ 0004ee70 211a
.org 0x4ee72
	ldr r0, [pc, #48]	@ 0004ee72 0c48
.org 0x4ee74
	cmp r1, r0	@ 0004ee74 8142
.org 0x4ee76
	ble.n 0x4ee7a	@ 0004ee76 00dd
.org 0x4ee78
	b.n 0x4efa0	@ 0004ee78 92e0
.org 0x4ee7a
	adds r0, r2, #0	@ 0004ee7a 101c
.org 0x4ee7c
	adds r0, #45	@ 0004ee7c 2d30
.org 0x4ee7e
	movs r1, #2	@ 0004ee7e 0221
.org 0x4ee80
	strb r1, [r0, #0]	@ 0004ee80 0170
.org 0x4ee82
	ldrb r0, [r7, #19]	@ 0004ee82 f87c
.org 0x4ee84
	cmp r0, #0	@ 0004ee84 0028
.org 0x4ee86
	beq.n 0x4eeac	@ 0004ee86 11d0
.org 0x4ee88
	adds r0, r7, #0	@ 0004ee88 381c
.org 0x4ee8a
	adds r0, #189	@ 0004ee8a bd30
.org 0x4ee8c
	strb r1, [r0, #0]	@ 0004ee8c 0170
.org 0x4ee8e
	ldr r0, [r2, #8]	@ 0004ee8e 9068
.org 0x4ee90
	adds r0, #2	@ 0004ee90 0230
.org 0x4ee92
	str r0, [r2, #8]	@ 0004ee92 9060
.org 0x4ee94
	adds r1, r2, #0	@ 0004ee94 111c
.org 0x4ee96
	adds r1, #46	@ 0004ee96 2e31
.org 0x4ee98
	movs r0, #0	@ 0004ee98 0020
.org 0x4ee9a
	strb r0, [r1, #0]	@ 0004ee9a 0870
.org 0x4ee9c
	ldr r0, [pc, #8]	@ 0004ee9c 0248
.org 0x4ee9e
	bl 0x2b10	@ 0004ee9e b3f737fe
.org 0x4eea2
	b.n 0x4eede	@ 0004eea2 1ce0
.org 0x4eea4
	.byte 0xff,0x03,0x00,0x00	@ 0004eea4 data
.org 0x4eea8
	.byte 0xa3,0x01,0x00,0x00	@ 0004eea8 data
.org 0x4eeac
	adds r3, r2, #0	@ 0004eeac 131c
.org 0x4eeae
	adds r3, #46	@ 0004eeae 2e33
.org 0x4eeb0
	ldrb r0, [r3, #0]	@ 0004eeb0 1878
.org 0x4eeb2
	adds r0, #5	@ 0004eeb2 0530
.org 0x4eeb4
	adds r1, r7, #0	@ 0004eeb4 391c
.org 0x4eeb6
	adds r1, #189	@ 0004eeb6 bd31
.org 0x4eeb8
	strb r0, [r1, #0]	@ 0004eeb8 0870
.org 0x4eeba
	ldr r0, [r2, #8]	@ 0004eeba 9068
.org 0x4eebc
	adds r0, #5	@ 0004eebc 0530
.org 0x4eebe
	ldrb r1, [r3, #0]	@ 0004eebe 1978
.org 0x4eec0
	adds r0, r0, r1	@ 0004eec0 4018
.org 0x4eec2
	str r0, [r2, #8]	@ 0004eec2 9060
.org 0x4eec4
	ldrb r0, [r3, #0]	@ 0004eec4 1878
.org 0x4eec6
	adds r0, #1	@ 0004eec6 0130
.org 0x4eec8
	strb r0, [r3, #0]	@ 0004eec8 1870
.org 0x4eeca
	lsls r0, r0, #24	@ 0004eeca 0006
.org 0x4eecc
	lsrs r0, r0, #24	@ 0004eecc 000e
.org 0x4eece
	cmp r0, #5	@ 0004eece 0528
.org 0x4eed0
	bls.n 0x4eed6	@ 0004eed0 01d9
.org 0x4eed2
	movs r0, #5	@ 0004eed2 0520
.org 0x4eed4
	strb r0, [r3, #0]	@ 0004eed4 1870
.org 0x4eed6
	movs r0, #210	@ 0004eed6 d220
.org 0x4eed8
	lsls r0, r0, #1	@ 0004eed8 4000
.org 0x4eeda
	bl 0x2b10	@ 0004eeda b3f719fe
.org 0x4eede
	adds r6, r7, #0	@ 0004eede 3e1c
.org 0x4eee0
	adds r6, #140	@ 0004eee0 8c36
.org 0x4eee2
	movs r1, #0	@ 0004eee2 0021
.org 0x4eee4
	str r1, [r6, #0]	@ 0004eee4 3160
.org 0x4eee6
	adds r5, r7, #0	@ 0004eee6 3d1c
.org 0x4eee8
	adds r5, #144	@ 0004eee8 9035
.org 0x4eeea
	str r1, [r5, #0]	@ 0004eeea 2960
.org 0x4eeec
	adds r4, r7, #0	@ 0004eeec 3c1c
.org 0x4eeee
	adds r4, #148	@ 0004eeee 9434
.org 0x4eef0
	strb r1, [r4, #0]	@ 0004eef0 2170
.org 0x4eef2
	ldrb r3, [r7, #10]	@ 0004eef2 bb7a
.org 0x4eef4
	movs r2, #251	@ 0004eef4 fb22
.org 0x4eef6
	adds r0, r2, #0	@ 0004eef6 101c
.org 0x4eef8
	ands r0, r3	@ 0004eef8 1840
.org 0x4eefa
	strb r0, [r7, #10]	@ 0004eefa b872
.org 0x4eefc
	str r1, [r7, #92]	@ 0004eefc f965
.org 0x4eefe
	movs r0, #60	@ 0004eefe 3c20
.org 0x4ef00
	strb r0, [r7, #18]	@ 0004ef00 b874
.org 0x4ef02
	str r1, [r6, #0]	@ 0004ef02 3160
.org 0x4ef04
	str r1, [r5, #0]	@ 0004ef04 2960
.org 0x4ef06
	strb r1, [r4, #0]	@ 0004ef06 2170
.org 0x4ef08
	ldrb r0, [r7, #10]	@ 0004ef08 b87a
.org 0x4ef0a
	ands r2, r0	@ 0004ef0a 0240
.org 0x4ef0c
	strb r2, [r7, #10]	@ 0004ef0c ba72
.org 0x4ef0e
	ldrb r0, [r7, #14]	@ 0004ef0e b87b
.org 0x4ef10
	adds r0, #1	@ 0004ef10 0130
.org 0x4ef12
	strb r0, [r7, #14]	@ 0004ef12 b873
.org 0x4ef14
	b.n 0x4efa0	@ 0004ef14 44e0
.org 0x4ef16
	ldr r0, [r7, #96]	@ 0004ef16 386e
.org 0x4ef18
	adds r0, #64	@ 0004ef18 4030
.org 0x4ef1a
	str r0, [r7, #96]	@ 0004ef1a 3866
.org 0x4ef1c
	movs r1, #224	@ 0004ef1c e021
.org 0x4ef1e
	lsls r1, r1, #3	@ 0004ef1e c900
.org 0x4ef20
	cmp r0, r1	@ 0004ef20 8842
.org 0x4ef22
	ble.n 0x4ef26	@ 0004ef22 00dd
.org 0x4ef24
	str r1, [r7, #96]	@ 0004ef24 3966
.org 0x4ef26
	ldr r0, [r7, #88]	@ 0004ef26 b86d
.org 0x4ef28
	ldr r1, [r7, #96]	@ 0004ef28 396e
.org 0x4ef2a
	adds r0, r0, r1	@ 0004ef2a 4018
.org 0x4ef2c
	str r0, [r7, #88]	@ 0004ef2c b865
.org 0x4ef2e
	ldrb r1, [r7, #18]	@ 0004ef2e b97c
.org 0x4ef30
	adds r0, r1, #0	@ 0004ef30 081c
.org 0x4ef32
	adds r0, #255	@ 0004ef32 ff30
.org 0x4ef34
	strb r0, [r7, #18]	@ 0004ef34 b874
.org 0x4ef36
	movs r0, #1	@ 0004ef36 0120
.org 0x4ef38
	ands r0, r1	@ 0004ef38 0840
.org 0x4ef3a
	cmp r0, #0	@ 0004ef3a 0028
.org 0x4ef3c
	beq.n 0x4ef48	@ 0004ef3c 04d0
.org 0x4ef3e
	ldrb r1, [r7, #10]	@ 0004ef3e b97a
.org 0x4ef40
	movs r0, #254	@ 0004ef40 fe20
.org 0x4ef42
	ands r0, r1	@ 0004ef42 0840
.org 0x4ef44
	strb r0, [r7, #10]	@ 0004ef44 b872
.org 0x4ef46
	b.n 0x4ef68	@ 0004ef46 0fe0
.org 0x4ef48
	ldrb r0, [r7, #10]	@ 0004ef48 b87a
.org 0x4ef4a
	movs r1, #1	@ 0004ef4a 0121
.org 0x4ef4c
	orrs r0, r1	@ 0004ef4c 0843
.org 0x4ef4e
	strb r0, [r7, #10]	@ 0004ef4e b872
.org 0x4ef50
	adds r0, r7, #0	@ 0004ef50 381c
.org 0x4ef52
	adds r0, #189	@ 0004ef52 bd30
.org 0x4ef54
	ldrb r0, [r0, #0]	@ 0004ef54 0078
.org 0x4ef56
	movs r1, #23	@ 0004ef56 1721
.org 0x4ef58
	movs r2, #2	@ 0004ef58 0222
.org 0x4ef5a
	bl 0x10dae0	@ 0004ef5a bef0c1fd
.org 0x4ef5e
	ldr r0, [pc, #56]	@ 0004ef5e 0e48
.org 0x4ef60
	movs r1, #24	@ 0004ef60 1821
.org 0x4ef62
	movs r2, #2	@ 0004ef62 0222
.org 0x4ef64
	bl 0x10da2c	@ 0004ef64 bef062fd
.org 0x4ef68
	ldr r0, [r7, #84]	@ 0004ef68 786d
.org 0x4ef6a
	ldr r1, [r7, #88]	@ 0004ef6a b96d
.org 0x4ef6c
	movs r2, #128	@ 0004ef6c 8022
.org 0x4ef6e
	lsls r2, r2, #4	@ 0004ef6e 1201
.org 0x4ef70
	adds r1, r1, r2	@ 0004ef70 8918
.org 0x4ef72
	bl 0x7020	@ 0004ef72 b8f755f8
.org 0x4ef76
	lsls r0, r0, #16	@ 0004ef76 0004
.org 0x4ef78
	cmp r0, #0	@ 0004ef78 0028
.org 0x4ef7a
	bne.n 0x4ef7e	@ 0004ef7a 00d1
.org 0x4ef7c
	b.n 0x4f21c	@ 0004ef7c 4ee1
.org 0x4ef7e
	ldr r1, [pc, #28]	@ 0004ef7e 0749
.org 0x4ef80
	ldrb r0, [r7, #9]	@ 0004ef80 787a
.org 0x4ef82
	lsls r0, r0, #2	@ 0004ef82 8000
.org 0x4ef84
	adds r0, r0, r1	@ 0004ef84 4018
.org 0x4ef86
	movs r1, #2	@ 0004ef86 0221
.org 0x4ef88
	str r1, [r7, #12]	@ 0004ef88 f960
.org 0x4ef8a
	ldr r0, [r0, #0]	@ 0004ef8a 0068
.org 0x4ef8c
	ldr r0, [r0, #8]	@ 0004ef8c 8068
.org 0x4ef8e
	str r0, [r7, #20]	@ 0004ef8e 7861
.org 0x4ef90
	adds r0, r7, #0	@ 0004ef90 381c
.org 0x4ef92
	bl 0x4f238	@ 0004ef92 00f051f9
.org 0x4ef96
	b.n 0x4f21c	@ 0004ef96 41e1
.org 0x4ef98
	.byte 0x90,0x95,0x12,0x08	@ 0004ef98 data
.org 0x4ef9c
	.byte 0xf8,0x39,0x85,0x08	@ 0004ef9c data
.org 0x4efa0
	ldrb r5, [r7, #13]	@ 0004efa0 7d7b
.org 0x4efa2
	cmp r5, #0	@ 0004efa2 002d
.org 0x4efa4
	bne.n 0x4f090	@ 0004efa4 74d1
.org 0x4efa6
	ldrb r0, [r7, #18]	@ 0004efa6 b87c
.org 0x4efa8
	subs r0, #1	@ 0004efa8 0138
.org 0x4efaa
	strb r0, [r7, #18]	@ 0004efaa b874
.org 0x4efac
	lsls r0, r0, #24	@ 0004efac 0006
.org 0x4efae
	lsrs r0, r0, #24	@ 0004efae 000e
.org 0x4efb0
	cmp r0, #255	@ 0004efb0 ff28
.org 0x4efb2
	beq.n 0x4efb6	@ 0004efb2 00d0
.org 0x4efb4
	b.n 0x4f21c	@ 0004efb4 32e1
.org 0x4efb6
	adds r4, r7, #0	@ 0004efb6 3c1c
.org 0x4efb8
	adds r4, #84	@ 0004efb8 5434
.org 0x4efba
	mov r0, r8	@ 0004efba 4046
.org 0x4efbc
	adds r1, r4, #0	@ 0004efbc 211c
.org 0x4efbe
	bl 0x41318	@ 0004efbe f2f7abf9
.org 0x4efc2
	lsls r0, r0, #24	@ 0004efc2 0006
.org 0x4efc4
	lsrs r2, r0, #24	@ 0004efc4 020e
.org 0x4efc6
	adds r6, r4, #0	@ 0004efc6 261c
.org 0x4efc8
	cmp r2, #0	@ 0004efc8 002a
.org 0x4efca
	beq.n 0x4f008	@ 0004efca 1dd0
.org 0x4efcc
	ldrb r1, [r7, #10]	@ 0004efcc b97a
.org 0x4efce
	movs r0, #254	@ 0004efce fe20
.org 0x4efd0
	ands r0, r1	@ 0004efd0 0840
.org 0x4efd2
	movs r1, #253	@ 0004efd2 fd21
.org 0x4efd4
	ands r0, r1	@ 0004efd4 0840
.org 0x4efd6
	strb r0, [r7, #10]	@ 0004efd6 b872
.org 0x4efd8
	adds r0, r7, #0	@ 0004efd8 381c
.org 0x4efda
	adds r0, #140	@ 0004efda 8c30
.org 0x4efdc
	str r5, [r0, #0]	@ 0004efdc 0560
.org 0x4efde
	adds r0, #4	@ 0004efde 0430
.org 0x4efe0
	str r5, [r0, #0]	@ 0004efe0 0560
.org 0x4efe2
	adds r0, #4	@ 0004efe2 0430
.org 0x4efe4
	strb r5, [r0, #0]	@ 0004efe4 0570
.org 0x4efe6
	ldrb r1, [r7, #10]	@ 0004efe6 b97a
.org 0x4efe8
	movs r0, #251	@ 0004efe8 fb20
.org 0x4efea
	ands r0, r1	@ 0004efea 0840
.org 0x4efec
	strb r0, [r7, #10]	@ 0004efec b872
.org 0x4efee
	ldr r1, [pc, #20]	@ 0004efee 0549
.org 0x4eff0
	ldrb r0, [r7, #9]	@ 0004eff0 787a
.org 0x4eff2
	lsls r0, r0, #2	@ 0004eff2 8000
.org 0x4eff4
	adds r0, r0, r1	@ 0004eff4 4018
.org 0x4eff6
	movs r1, #3	@ 0004eff6 0321
.org 0x4eff8
	str r1, [r7, #12]	@ 0004eff8 f960
.org 0x4effa
	ldr r0, [r0, #0]	@ 0004effa 0068
.org 0x4effc
	ldr r0, [r0, #12]	@ 0004effc c068
.org 0x4effe
	str r0, [r7, #20]	@ 0004effe 7861
.org 0x4f000
	b.n 0x4f21c	@ 0004f000 0ce1
.org 0x4f002
	.byte 0x00	@ 0004f002 data
.org 0x4f003
	.byte 0x00	@ 0004f003 data
.org 0x4f004
	.byte 0xf8,0x39,0x85,0x08	@ 0004f004 data
.org 0x4f008
	ldr r1, [r7, #84]	@ 0004f008 796d
.org 0x4f00a
	mov r3, r8	@ 0004f00a 4346
.org 0x4f00c
	ldr r0, [r3, #84]	@ 0004f00c 586d
.org 0x4f00e
	cmp r1, r0	@ 0004f00e 8142
.org 0x4f010
	ble.n 0x4f03c	@ 0004f010 14dd
.org 0x4f012
	movs r0, #160	@ 0004f012 a020
.org 0x4f014
	lsls r0, r0, #2	@ 0004f014 8000
.org 0x4f016
	str r0, [r7, #92]	@ 0004f016 f865
.org 0x4f018
	movs r2, #1	@ 0004f018 0122
.org 0x4f01a
	ldrb r0, [r7, #10]	@ 0004f01a b87a
.org 0x4f01c
	movs r1, #16	@ 0004f01c 1021
.org 0x4f01e
	orrs r0, r1	@ 0004f01e 0843
.org 0x4f020
	strb r0, [r7, #10]	@ 0004f020 b872
.org 0x4f022
	adds r0, r7, #0	@ 0004f022 381c
.org 0x4f024
	adds r0, #76	@ 0004f024 4c30
.org 0x4f026
	strb r2, [r0, #0]	@ 0004f026 0270
.org 0x4f028
	adds r3, r7, #0	@ 0004f028 3b1c
.org 0x4f02a
	adds r3, #74	@ 0004f02a 4a33
.org 0x4f02c
	movs r2, #16	@ 0004f02c 1022
.org 0x4f02e
	ldrb r1, [r3, #0]	@ 0004f02e 1978
.org 0x4f030
	movs r0, #17	@ 0004f030 1120
.org 0x4f032
	negs r0, r0	@ 0004f032 4042
.org 0x4f034
	ands r0, r1	@ 0004f034 0840
.org 0x4f036
	orrs r0, r2	@ 0004f036 1043
.org 0x4f038
	strb r0, [r3, #0]	@ 0004f038 1870
.org 0x4f03a
	b.n 0x4f05c	@ 0004f03a 0fe0
.org 0x4f03c
	ldr r0, [pc, #164]	@ 0004f03c 2948
.org 0x4f03e
	str r0, [r7, #92]	@ 0004f03e f865
.org 0x4f040
	ldrb r1, [r7, #10]	@ 0004f040 b97a
.org 0x4f042
	movs r0, #239	@ 0004f042 ef20
.org 0x4f044
	ands r0, r1	@ 0004f044 0840
.org 0x4f046
	strb r0, [r7, #10]	@ 0004f046 b872
.org 0x4f048
	adds r0, r7, #0	@ 0004f048 381c
.org 0x4f04a
	adds r0, #76	@ 0004f04a 4c30
.org 0x4f04c
	strb r2, [r0, #0]	@ 0004f04c 0270
.org 0x4f04e
	adds r2, r7, #0	@ 0004f04e 3a1c
.org 0x4f050
	adds r2, #74	@ 0004f050 4a32
.org 0x4f052
	ldrb r1, [r2, #0]	@ 0004f052 1178
.org 0x4f054
	movs r0, #17	@ 0004f054 1120
.org 0x4f056
	negs r0, r0	@ 0004f056 4042
.org 0x4f058
	ands r0, r1	@ 0004f058 0840
.org 0x4f05a
	strb r0, [r2, #0]	@ 0004f05a 1070
.org 0x4f05c
	ldr r0, [pc, #136]	@ 0004f05c 2248
.org 0x4f05e
	str r0, [r7, #96]	@ 0004f05e 3866
.org 0x4f060
	ldrb r1, [r7, #10]	@ 0004f060 b97a
.org 0x4f062
	movs r0, #4	@ 0004f062 0420
.org 0x4f064
	orrs r0, r1	@ 0004f064 0843
.org 0x4f066
	strb r0, [r7, #10]	@ 0004f066 b872
.org 0x4f068
	adds r4, r7, #0	@ 0004f068 3c1c
.org 0x4f06a
	adds r4, #116	@ 0004f06a 7434
.org 0x4f06c
	ldr r1, [pc, #124]	@ 0004f06c 1f49
.org 0x4f06e
	adds r0, r4, #0	@ 0004f06e 201c
.org 0x4f070
	adds r2, r6, #0	@ 0004f070 321c
.org 0x4f072
	movs r3, #8	@ 0004f072 0823
.org 0x4f074
	bl 0x5760	@ 0004f074 b6f774fb
.org 0x4f078
	str r7, [r4, #44]	@ 0004f078 e762
.org 0x4f07a
	ldr r0, [pc, #116]	@ 0004f07a 1d48
.org 0x4f07c
	str r0, [r4, #36]	@ 0004f07c 6062
.org 0x4f07e
	ldrb r1, [r7, #10]	@ 0004f07e b97a
.org 0x4f080
	movs r0, #1	@ 0004f080 0120
.org 0x4f082
	orrs r0, r1	@ 0004f082 0843
.org 0x4f084
	strb r0, [r7, #10]	@ 0004f084 b872
.org 0x4f086
	mov r0, r8	@ 0004f086 4046
.org 0x4f088
	bl 0x3aa4c	@ 0004f088 ebf7e0fc
.org 0x4f08c
	movs r0, #1	@ 0004f08c 0120
.org 0x4f08e
	strb r0, [r7, #13]	@ 0004f08e 7873
.org 0x4f090
	ldr r1, [r7, #84]	@ 0004f090 796d
.org 0x4f092
	ldr r0, [r7, #92]	@ 0004f092 f86d
.org 0x4f094
	adds r2, r1, r0	@ 0004f094 0a18
.org 0x4f096
	str r2, [r7, #84]	@ 0004f096 7a65
.org 0x4f098
	ldrb r1, [r7, #10]	@ 0004f098 b97a
.org 0x4f09a
	movs r4, #16	@ 0004f09a 1024
.org 0x4f09c
	movs r0, #16	@ 0004f09c 1020
.org 0x4f09e
	ands r0, r1	@ 0004f09e 0840
.org 0x4f0a0
	cmp r0, #0	@ 0004f0a0 0028
.org 0x4f0a2
	beq.n 0x4f0f4	@ 0004f0a2 27d0
.org 0x4f0a4
	movs r1, #128	@ 0004f0a4 8021
.org 0x4f0a6
	lsls r1, r1, #4	@ 0004f0a6 0901
.org 0x4f0a8
	adds r0, r2, r1	@ 0004f0a8 5018
.org 0x4f0aa
	ldr r1, [r7, #88]	@ 0004f0aa b96d
.org 0x4f0ac
	bl 0x4f360	@ 0004f0ac 00f058f9
.org 0x4f0b0
	lsls r0, r0, #16	@ 0004f0b0 0004
.org 0x4f0b2
	cmp r0, #0	@ 0004f0b2 0028
.org 0x4f0b4
	beq.n 0x4f158	@ 0004f0b4 50d0
.org 0x4f0b6
	ldr r0, [r7, #84]	@ 0004f0b6 786d
.org 0x4f0b8
	movs r2, #128	@ 0004f0b8 8022
.org 0x4f0ba
	lsls r2, r2, #4	@ 0004f0ba 1201
.org 0x4f0bc
	adds r0, r0, r2	@ 0004f0bc 8018
.org 0x4f0be
	ldr r1, [r7, #88]	@ 0004f0be b96d
.org 0x4f0c0
	bl 0x816c	@ 0004f0c0 b9f754f8
.org 0x4f0c4
	ldr r1, [r7, #84]	@ 0004f0c4 796d
.org 0x4f0c6
	adds r1, r1, r0	@ 0004f0c6 0918
.org 0x4f0c8
	str r1, [r7, #84]	@ 0004f0c8 7965
.org 0x4f0ca
	ldr r0, [r7, #92]	@ 0004f0ca f86d
.org 0x4f0cc
	negs r0, r0	@ 0004f0cc 4042
.org 0x4f0ce
	str r0, [r7, #92]	@ 0004f0ce f865
.org 0x4f0d0
	ldrb r2, [r7, #10]	@ 0004f0d0 ba7a
.org 0x4f0d2
	lsrs r0, r2, #4	@ 0004f0d2 1009
.org 0x4f0d4
	movs r1, #1	@ 0004f0d4 0121
.org 0x4f0d6
	bics r1, r0	@ 0004f0d6 8143
.org 0x4f0d8
	cmp r1, #0	@ 0004f0d8 0029
.org 0x4f0da
	beq.n 0x4f134	@ 0004f0da 2bd0
.org 0x4f0dc
	adds r0, r4, #0	@ 0004f0dc 201c
.org 0x4f0de
	orrs r0, r2	@ 0004f0de 1043
.org 0x4f0e0
	b.n 0x4f138	@ 0004f0e0 2ae0
.org 0x4f0e2
	.byte 0x00	@ 0004f0e2 data
.org 0x4f0e3
	.byte 0x00	@ 0004f0e3 data
.org 0x4f0e4
	.byte 0x80,0xfd,0xff,0xff	@ 0004f0e4 data
.org 0x4f0e8
	.byte 0x00,0xfb,0xff,0xff	@ 0004f0e8 data
.org 0x4f0ec
	.byte 0xd4,0x7b,0x85,0x08	@ 0004f0ec data
.org 0x4f0f0
	.byte 0xe9,0xf2,0x04,0x08	@ 0004f0f0 data
.org 0x4f0f4
	ldr r3, [pc, #56]	@ 0004f0f4 0e4b
.org 0x4f0f6
	adds r0, r2, r3	@ 0004f0f6 d018
.org 0x4f0f8
	ldr r1, [r7, #88]	@ 0004f0f8 b96d
.org 0x4f0fa
	bl 0x4f360	@ 0004f0fa 00f031f9
.org 0x4f0fe
	lsls r0, r0, #16	@ 0004f0fe 0004
.org 0x4f100
	cmp r0, #0	@ 0004f100 0028
.org 0x4f102
	beq.n 0x4f158	@ 0004f102 29d0
.org 0x4f104
	ldr r0, [r7, #84]	@ 0004f104 786d
.org 0x4f106
	ldr r1, [pc, #40]	@ 0004f106 0a49
.org 0x4f108
	adds r0, r0, r1	@ 0004f108 4018
.org 0x4f10a
	ldr r1, [r7, #88]	@ 0004f10a b96d
.org 0x4f10c
	bl 0x834c	@ 0004f10c b9f71ef9
.org 0x4f110
	ldr r1, [r7, #84]	@ 0004f110 796d
.org 0x4f112
	adds r1, r1, r0	@ 0004f112 0918
.org 0x4f114
	str r1, [r7, #84]	@ 0004f114 7965
.org 0x4f116
	ldr r0, [r7, #92]	@ 0004f116 f86d
.org 0x4f118
	negs r0, r0	@ 0004f118 4042
.org 0x4f11a
	str r0, [r7, #92]	@ 0004f11a f865
.org 0x4f11c
	ldrb r2, [r7, #10]	@ 0004f11c ba7a
.org 0x4f11e
	lsrs r0, r2, #4	@ 0004f11e 1009
.org 0x4f120
	movs r1, #1	@ 0004f120 0121
.org 0x4f122
	bics r1, r0	@ 0004f122 8143
.org 0x4f124
	cmp r1, #0	@ 0004f124 0029
.org 0x4f126
	beq.n 0x4f134	@ 0004f126 05d0
.org 0x4f128
	adds r0, r2, #0	@ 0004f128 101c
.org 0x4f12a
	orrs r0, r4	@ 0004f12a 2043
.org 0x4f12c
	b.n 0x4f138	@ 0004f12c 04e0
.org 0x4f12e
	.byte 0x00	@ 0004f12e data
.org 0x4f12f
	.byte 0x00	@ 0004f12f data
.org 0x4f130
	.byte 0x00,0xf8,0xff,0xff	@ 0004f130 data
.org 0x4f134
	movs r0, #239	@ 0004f134 ef20
.org 0x4f136
	ands r0, r2	@ 0004f136 1040
.org 0x4f138
	strb r0, [r7, #10]	@ 0004f138 b872
.org 0x4f13a
	adds r0, r7, #0	@ 0004f13a 381c
.org 0x4f13c
	adds r0, #76	@ 0004f13c 4c30
.org 0x4f13e
	strb r1, [r0, #0]	@ 0004f13e 0170
.org 0x4f140
	adds r3, r7, #0	@ 0004f140 3b1c
.org 0x4f142
	adds r3, #74	@ 0004f142 4a33
.org 0x4f144
	lsls r1, r1, #4	@ 0004f144 0901
.org 0x4f146
	ldrb r2, [r3, #0]	@ 0004f146 1a78
.org 0x4f148
	movs r0, #17	@ 0004f148 1120
.org 0x4f14a
	negs r0, r0	@ 0004f14a 4042
.org 0x4f14c
	ands r0, r2	@ 0004f14c 1040
.org 0x4f14e
	orrs r0, r1	@ 0004f14e 0843
.org 0x4f150
	strb r0, [r3, #0]	@ 0004f150 1870
.org 0x4f152
	ldrb r0, [r7, #19]	@ 0004f152 f87c
.org 0x4f154
	adds r0, #1	@ 0004f154 0130
.org 0x4f156
	strb r0, [r7, #19]	@ 0004f156 f874
.org 0x4f158
	ldr r0, [r7, #96]	@ 0004f158 386e
.org 0x4f15a
	adds r0, #64	@ 0004f15a 4030
.org 0x4f15c
	str r0, [r7, #96]	@ 0004f15c 3866
.org 0x4f15e
	movs r1, #224	@ 0004f15e e021
.org 0x4f160
	lsls r1, r1, #3	@ 0004f160 c900
.org 0x4f162
	cmp r0, r1	@ 0004f162 8842
.org 0x4f164
	ble.n 0x4f168	@ 0004f164 00dd
.org 0x4f166
	str r1, [r7, #96]	@ 0004f166 3966
.org 0x4f168
	ldr r1, [r7, #88]	@ 0004f168 b96d
.org 0x4f16a
	ldr r0, [r7, #96]	@ 0004f16a 386e
.org 0x4f16c
	adds r1, r1, r0	@ 0004f16c 0918
.org 0x4f16e
	str r1, [r7, #88]	@ 0004f16e b965
.org 0x4f170
	ldr r0, [r7, #84]	@ 0004f170 786d
.org 0x4f172
	movs r2, #128	@ 0004f172 8022
.org 0x4f174
	lsls r2, r2, #4	@ 0004f174 1201
.org 0x4f176
	adds r1, r1, r2	@ 0004f176 8918
.org 0x4f178
	bl 0x4f360	@ 0004f178 00f0f2f8
.org 0x4f17c
	lsls r0, r0, #16	@ 0004f17c 0004
.org 0x4f17e
	cmp r0, #0	@ 0004f17e 0028
.org 0x4f180
	beq.n 0x4f1b8	@ 0004f180 1ad0
.org 0x4f182
	ldr r0, [r7, #84]	@ 0004f182 786d
.org 0x4f184
	ldr r1, [r7, #88]	@ 0004f184 b96d
.org 0x4f186
	movs r3, #128	@ 0004f186 8023
.org 0x4f188
	lsls r3, r3, #4	@ 0004f188 1b01
.org 0x4f18a
	adds r1, r1, r3	@ 0004f18a c918
.org 0x4f18c
	bl 0x7db4	@ 0004f18c b8f712fe
.org 0x4f190
	ldr r1, [r7, #88]	@ 0004f190 b96d
.org 0x4f192
	adds r1, r1, r0	@ 0004f192 0918
.org 0x4f194
	str r1, [r7, #88]	@ 0004f194 b965
.org 0x4f196
	ldr r0, [r7, #96]	@ 0004f196 386e
.org 0x4f198
	negs r0, r0	@ 0004f198 4042
.org 0x4f19a
	str r0, [r7, #96]	@ 0004f19a 3866
.org 0x4f19c
	adds r0, r7, #0	@ 0004f19c 381c
.org 0x4f19e
	adds r0, #184	@ 0004f19e b830
.org 0x4f1a0
	ldr r0, [r0, #0]	@ 0004f1a0 0068
.org 0x4f1a2
	cmp r0, r1	@ 0004f1a2 8842
.org 0x4f1a4
	bgt.n 0x4f1aa	@ 0004f1a4 01dc
.org 0x4f1a6
	movs r0, #16	@ 0004f1a6 1020
.org 0x4f1a8
	b.n 0x4f1b6	@ 0004f1a8 05e0
.org 0x4f1aa
	ldr r0, [pc, #124]	@ 0004f1aa 1f48
.org 0x4f1ac
	adds r0, #44	@ 0004f1ac 2c30
.org 0x4f1ae
	movs r1, #2	@ 0004f1ae 0221
.org 0x4f1b0
	strb r1, [r0, #0]	@ 0004f1b0 0170
.org 0x4f1b2
	ldrb r0, [r7, #19]	@ 0004f1b2 f87c
.org 0x4f1b4
	adds r0, #1	@ 0004f1b4 0130
.org 0x4f1b6
	strb r0, [r7, #19]	@ 0004f1b6 f874
.org 0x4f1b8
	ldr r0, [r7, #84]	@ 0004f1b8 786d
.org 0x4f1ba
	ldr r1, [r7, #88]	@ 0004f1ba b96d
.org 0x4f1bc
	ldr r2, [pc, #108]	@ 0004f1bc 1b4a
.org 0x4f1be
	adds r1, r1, r2	@ 0004f1be 8918
.org 0x4f1c0
	bl 0x4f360	@ 0004f1c0 00f0cef8
.org 0x4f1c4
	lsls r0, r0, #16	@ 0004f1c4 0004
.org 0x4f1c6
	cmp r0, #0	@ 0004f1c6 0028
.org 0x4f1c8
	beq.n 0x4f1e8	@ 0004f1c8 0ed0
.org 0x4f1ca
	ldr r0, [r7, #84]	@ 0004f1ca 786d
.org 0x4f1cc
	ldr r1, [r7, #88]	@ 0004f1cc b96d
.org 0x4f1ce
	ldr r3, [pc, #92]	@ 0004f1ce 174b
.org 0x4f1d0
	adds r1, r1, r3	@ 0004f1d0 c918
.org 0x4f1d2
	bl 0x7f8c	@ 0004f1d2 b8f7dbfe
.org 0x4f1d6
	ldr r1, [r7, #88]	@ 0004f1d6 b96d
.org 0x4f1d8
	adds r1, r1, r0	@ 0004f1d8 0918
.org 0x4f1da
	str r1, [r7, #88]	@ 0004f1da b965
.org 0x4f1dc
	ldr r0, [r7, #96]	@ 0004f1dc 386e
.org 0x4f1de
	negs r0, r0	@ 0004f1de 4042
