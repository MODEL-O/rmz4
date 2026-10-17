@ FUN_08032a70  entry 0x08032a70  size 412
.thumb
.org 0x32a70
FUN_08032a70:
	push {r4, r5, r6, r7, lr}	@ 00032a70 f0b5
.org 0x32a72
	adds r5, r0, #0	@ 00032a72 051c
.org 0x32a74
	bl 0x396a8	@ 00032a74 06f018fe
.org 0x32a78
	lsls r0, r0, #24	@ 00032a78 0006
.org 0x32a7a
	lsrs r2, r0, #24	@ 00032a7a 020e
.org 0x32a7c
	cmp r2, #0	@ 00032a7c 002a
.org 0x32a7e
	beq.n 0x32ac6	@ 00032a7e 22d0
.org 0x32a80
	adds r1, r5, #0	@ 00032a80 291c
.org 0x32a82
	adds r1, #149	@ 00032a82 9531
.org 0x32a84
	ldrb r0, [r1, #0]	@ 00032a84 0878
.org 0x32a86
	cmp r0, #255	@ 00032a86 ff28
.org 0x32a88
	beq.n 0x32ac6	@ 00032a88 1dd0
.org 0x32a8a
	cmp r0, r2	@ 00032a8a 9042
.org 0x32a8c
	bcs.n 0x32a92	@ 00032a8c 01d2
.org 0x32a8e
	movs r0, #0	@ 00032a8e 0020
.org 0x32a90
	b.n 0x32a94	@ 00032a90 00e0
.org 0x32a92
	subs r0, r0, r2	@ 00032a92 801a
.org 0x32a94
	strb r0, [r1, #0]	@ 00032a94 0870
.org 0x32a96
	ldrb r0, [r5, #30]	@ 00032a96 a87f
.org 0x32a98
	lsls r0, r0, #8	@ 00032a98 0002
.org 0x32a9a
	adds r1, r5, #0	@ 00032a9a 291c
.org 0x32a9c
	adds r1, #112	@ 00032a9c 7031
.org 0x32a9e
	ldrb r1, [r1, #0]	@ 00032a9e 0978
.org 0x32aa0
	orrs r1, r0	@ 00032aa0 0143
.org 0x32aa2
	movs r2, #150	@ 00032aa2 9622
.org 0x32aa4
	lsls r2, r2, #7	@ 00032aa4 d201
.org 0x32aa6
	cmp r1, r2	@ 00032aa6 9142
.org 0x32aa8
	bne.n 0x32aba	@ 00032aa8 07d1
.org 0x32aaa
	movs r1, #148	@ 00032aaa 9421
.org 0x32aac
	lsls r1, r1, #7	@ 00032aac c901
.org 0x32aae
	adds r0, r5, #0	@ 00032aae 281c
.org 0x32ab0
	movs r2, #3	@ 00032ab0 0322
.org 0x32ab2
	movs r3, #4	@ 00032ab2 0423
.org 0x32ab4
	bl 0x1cfc8	@ 00032ab4 eaf788fa
.org 0x32ab8
	b.n 0x32ac6	@ 00032ab8 05e0
.org 0x32aba
	adds r0, r5, #0	@ 00032aba 281c
.org 0x32abc
	adds r1, r2, #0	@ 00032abc 111c
.org 0x32abe
	movs r2, #3	@ 00032abe 0322
.org 0x32ac0
	movs r3, #4	@ 00032ac0 0423
.org 0x32ac2
	bl 0x1cfc8	@ 00032ac2 eaf781fa
.org 0x32ac6
	ldr r1, [pc, #56]	@ 00032ac6 0e49
.org 0x32ac8
	adds r0, r5, r1	@ 00032ac8 6818
.org 0x32aca
	ldrb r1, [r0, #0]	@ 00032aca 0178
.org 0x32acc
	adds r4, r0, #0	@ 00032acc 041c
.org 0x32ace
	cmp r1, #0	@ 00032ace 0029
.org 0x32ad0
	beq.n 0x32b28	@ 00032ad0 2ad0
.org 0x32ad2
	movs r1, #185	@ 00032ad2 b921
.org 0x32ad4
	lsls r1, r1, #1	@ 00032ad4 4900
.org 0x32ad6
	adds r0, r5, r1	@ 00032ad6 6818
.org 0x32ad8
	ldrb r0, [r0, #0]	@ 00032ad8 0078
.org 0x32ada
	cmp r0, #0	@ 00032ada 0028
.org 0x32adc
	bne.n 0x32b04	@ 00032adc 12d1
.org 0x32ade
	ldrb r0, [r5, #30]	@ 00032ade a87f
.org 0x32ae0
	lsls r0, r0, #8	@ 00032ae0 0002
.org 0x32ae2
	adds r1, r5, #0	@ 00032ae2 291c
.org 0x32ae4
	adds r1, #112	@ 00032ae4 7031
.org 0x32ae6
	ldrb r1, [r1, #0]	@ 00032ae6 0978
.org 0x32ae8
	orrs r1, r0	@ 00032ae8 0143
.org 0x32aea
	movs r2, #150	@ 00032aea 9622
.org 0x32aec
	lsls r2, r2, #7	@ 00032aec d201
.org 0x32aee
	cmp r1, r2	@ 00032aee 9142
.org 0x32af0
	beq.n 0x32b24	@ 00032af0 18d0
.org 0x32af2
	adds r0, r5, #0	@ 00032af2 281c
.org 0x32af4
	adds r1, r2, #0	@ 00032af4 111c
.org 0x32af6
	movs r2, #3	@ 00032af6 0322
.org 0x32af8
	movs r3, #4	@ 00032af8 0423
.org 0x32afa
	bl 0x1cfc8	@ 00032afa eaf765fa
.org 0x32afe
	b.n 0x32b24	@ 00032afe 11e0
.org 0x32b00
	.byte 0x71,0x01,0x00,0x00	@ 00032b00 data
.org 0x32b04
	ldrb r0, [r5, #30]	@ 00032b04 a87f
.org 0x32b06
	lsls r0, r0, #8	@ 00032b06 0002
.org 0x32b08
	adds r1, r5, #0	@ 00032b08 291c
.org 0x32b0a
	adds r1, #112	@ 00032b0a 7031
.org 0x32b0c
	ldrb r1, [r1, #0]	@ 00032b0c 0978
.org 0x32b0e
	orrs r1, r0	@ 00032b0e 0143
.org 0x32b10
	movs r2, #148	@ 00032b10 9422
.org 0x32b12
	lsls r2, r2, #7	@ 00032b12 d201
.org 0x32b14
	cmp r1, r2	@ 00032b14 9142
.org 0x32b16
	beq.n 0x32b24	@ 00032b16 05d0
.org 0x32b18
	adds r0, r5, #0	@ 00032b18 281c
.org 0x32b1a
	adds r1, r2, #0	@ 00032b1a 111c
.org 0x32b1c
	movs r2, #3	@ 00032b1c 0322
.org 0x32b1e
	movs r3, #4	@ 00032b1e 0423
.org 0x32b20
	bl 0x1cfc8	@ 00032b20 eaf752fa
.org 0x32b24
	movs r0, #0	@ 00032b24 0020
.org 0x32b26
	strb r0, [r4, #0]	@ 00032b26 2070
.org 0x32b28
	adds r0, r5, #0	@ 00032b28 281c
.org 0x32b2a
	adds r0, #149	@ 00032b2a 9530
.org 0x32b2c
	ldrb r0, [r0, #0]	@ 00032b2c 0078
.org 0x32b2e
	cmp r0, #0	@ 00032b2e 0028
.org 0x32b30
	beq.n 0x32b42	@ 00032b30 07d0
.org 0x32b32
	adds r0, r5, #0	@ 00032b32 281c
.org 0x32b34
	adds r0, #140	@ 00032b34 8c30
.org 0x32b36
	ldr r0, [r0, #0]	@ 00032b36 0068
.org 0x32b38
	movs r1, #128	@ 00032b38 8021
.org 0x32b3a
	lsls r1, r1, #3	@ 00032b3a c900
.org 0x32b3c
	ands r0, r1	@ 00032b3c 0840
.org 0x32b3e
	cmp r0, #0	@ 00032b3e 0028
.org 0x32b40
	bne.n 0x32b58	@ 00032b40 0ad1
.org 0x32b42
	movs r0, #0	@ 00032b42 0020
.org 0x32b44
	movs r1, #1	@ 00032b44 0121
.org 0x32b46
	strb r1, [r5, #13]	@ 00032b46 6973
.org 0x32b48
	movs r1, #2	@ 00032b48 0221
.org 0x32b4a
	strb r1, [r5, #14]	@ 00032b4a a973
.org 0x32b4c
	strb r0, [r5, #15]	@ 00032b4c e873
.org 0x32b4e
	str r0, [r5, #96]	@ 00032b4e 2866
.org 0x32b50
	adds r0, r5, #0	@ 00032b50 281c
.org 0x32b52
	bl 0x30e50	@ 00032b52 fef77df9
.org 0x32b56
	b.n 0x32c10	@ 00032b56 5be0
.org 0x32b58
	ldr r4, [r5, #84]	@ 00032b58 6c6d
.org 0x32b5a
	movs r0, #186	@ 00032b5a ba20
.org 0x32b5c
	lsls r0, r0, #1	@ 00032b5c 4000
.org 0x32b5e
	adds r6, r5, r0	@ 00032b5e 2e18
.org 0x32b60
	ldrb r1, [r6, #0]	@ 00032b60 3178
.org 0x32b62
	lsls r1, r1, #3	@ 00032b62 c900
.org 0x32b64
	ldr r7, [pc, #120]	@ 00032b64 1e4f
.org 0x32b66
	adds r1, r1, r7	@ 00032b66 c919
.org 0x32b68
	adds r0, r5, #0	@ 00032b68 281c
.org 0x32b6a
	movs r2, #0	@ 00032b6a 0022
.org 0x32b6c
	bl 0x2b7f0	@ 00032b6c f8f740fe
.org 0x32b70
	ldrb r1, [r6, #0]	@ 00032b70 3178
.org 0x32b72
	lsls r1, r1, #3	@ 00032b72 c900
.org 0x32b74
	adds r1, r1, r7	@ 00032b74 c919
.org 0x32b76
	adds r0, r5, #0	@ 00032b76 281c
.org 0x32b78
	movs r2, #1	@ 00032b78 0122
.org 0x32b7a
	bl 0x2b7f0	@ 00032b7a f8f739fe
.org 0x32b7e
	ldr r0, [r5, #84]	@ 00032b7e 686d
.org 0x32b80
	cmp r4, r0	@ 00032b80 8442
.org 0x32b82
	beq.n 0x32b92	@ 00032b82 06d0
.org 0x32b84
	ldrb r1, [r6, #0]	@ 00032b84 3178
.org 0x32b86
	lsls r1, r1, #3	@ 00032b86 c900
.org 0x32b88
	adds r1, r1, r7	@ 00032b88 c919
.org 0x32b8a
	adds r0, r5, #0	@ 00032b8a 281c
.org 0x32b8c
	movs r2, #0	@ 00032b8c 0022
.org 0x32b8e
	bl 0x2bfe8	@ 00032b8e f9f72bfa
.org 0x32b92
	ldr r0, [r5, #88]	@ 00032b92 a86d
.org 0x32b94
	ldr r1, [r5, #96]	@ 00032b94 296e
.org 0x32b96
	adds r0, r0, r1	@ 00032b96 4018
.org 0x32b98
	str r0, [r5, #88]	@ 00032b98 a865
.org 0x32b9a
	movs r1, #161	@ 00032b9a a121
.org 0x32b9c
	lsls r1, r1, #1	@ 00032b9c 4900
.org 0x32b9e
	adds r0, r5, r1	@ 00032b9e 6818
.org 0x32ba0
	ldrb r1, [r0, #0]	@ 00032ba0 0178
.org 0x32ba2
	movs r0, #16	@ 00032ba2 1020
.org 0x32ba4
	ands r0, r1	@ 00032ba4 0840
.org 0x32ba6
	lsls r0, r0, #24	@ 00032ba6 0006
.org 0x32ba8
	lsrs r4, r0, #24	@ 00032ba8 040e
.org 0x32baa
	cmp r4, #0	@ 00032baa 002c
.org 0x32bac
	bne.n 0x32be4	@ 00032bac 1ad1
.org 0x32bae
	ldrb r1, [r6, #0]	@ 00032bae 3178
.org 0x32bb0
	lsls r1, r1, #3	@ 00032bb0 c900
.org 0x32bb2
	adds r1, r1, r7	@ 00032bb2 c919
.org 0x32bb4
	adds r0, r5, #0	@ 00032bb4 281c
.org 0x32bb6
	movs r2, #1	@ 00032bb6 0122
.org 0x32bb8
	bl 0x2baf0	@ 00032bb8 f8f79aff
.org 0x32bbc
	lsls r0, r0, #16	@ 00032bbc 0004
.org 0x32bbe
	cmp r0, #0	@ 00032bbe 0028
.org 0x32bc0
	beq.n 0x32be4	@ 00032bc0 10d0
.org 0x32bc2
	ldrb r1, [r6, #0]	@ 00032bc2 3178
.org 0x32bc4
	lsls r1, r1, #3	@ 00032bc4 c900
.org 0x32bc6
	adds r1, r1, r7	@ 00032bc6 c919
.org 0x32bc8
	adds r0, r5, #0	@ 00032bc8 281c
.org 0x32bca
	movs r2, #0	@ 00032bca 0022
.org 0x32bcc
	bl 0x2c2d4	@ 00032bcc f9f782fb
.org 0x32bd0
	lsls r0, r0, #16	@ 00032bd0 0004
.org 0x32bd2
	cmp r0, #0	@ 00032bd2 0028
.org 0x32bd4
	beq.n 0x32be4	@ 00032bd4 06d0
.org 0x32bd6
	movs r0, #1	@ 00032bd6 0120
.org 0x32bd8
	strb r0, [r5, #14]	@ 00032bd8 a873
.org 0x32bda
	strb r4, [r5, #15]	@ 00032bda ec73
.org 0x32bdc
	b.n 0x32c10	@ 00032bdc 18e0
.org 0x32bde
	.byte 0x00	@ 00032bde data
.org 0x32bdf
	.byte 0x00	@ 00032bdf data
.org 0x32be0
	.byte 0x6c,0x33,0x85,0x08	@ 00032be0 data
.org 0x32be4
	adds r0, r5, #0	@ 00032be4 281c
.org 0x32be6
	bl 0x3851c	@ 00032be6 05f099fc
.org 0x32bea
	lsls r0, r0, #16	@ 00032bea 0004
.org 0x32bec
	asrs r0, r0, #16	@ 00032bec 0014
.org 0x32bee
	ldr r1, [r5, #96]	@ 00032bee 296e
.org 0x32bf0
	adds r1, r1, r0	@ 00032bf0 0918
.org 0x32bf2
	str r1, [r5, #96]	@ 00032bf2 2966
.org 0x32bf4
	adds r0, r5, #0	@ 00032bf4 281c
.org 0x32bf6
	bl 0x385dc	@ 00032bf6 05f0f1fc
.org 0x32bfa
	lsls r0, r0, #16	@ 00032bfa 0004
.org 0x32bfc
	asrs r0, r0, #16	@ 00032bfc 0014
.org 0x32bfe
	ldr r1, [r5, #96]	@ 00032bfe 296e
.org 0x32c00
	cmp r1, r0	@ 00032c00 8142
.org 0x32c02
	ble.n 0x32c10	@ 00032c02 05dd
.org 0x32c04
	adds r0, r5, #0	@ 00032c04 281c
.org 0x32c06
	bl 0x385dc	@ 00032c06 05f0e9fc
.org 0x32c0a
	lsls r0, r0, #16	@ 00032c0a 0004
