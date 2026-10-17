@ FUN_080119c8  entry 0x080119c8  size 674
.thumb
.org 0x119c8
FUN_080119c8:
	push {r4, r5, r6, r7, lr}	@ 000119c8 f0b5
.org 0x119ca
	mov r7, r8	@ 000119ca 4746
.org 0x119cc
	push {r7}	@ 000119cc 80b4
.org 0x119ce
	sub sp, #8	@ 000119ce 82b0
.org 0x119d0
	adds r7, r0, #0	@ 000119d0 071c
.org 0x119d2
	ldr r0, [r7, #92]	@ 000119d2 f86d
.org 0x119d4
	lsls r2, r0, #16	@ 000119d4 0204
.org 0x119d6
	ldrb r0, [r7, #14]	@ 000119d6 b87b
.org 0x119d8
	mov r8, r0	@ 000119d8 8046
.org 0x119da
	cmp r0, #0	@ 000119da 0028
.org 0x119dc
	beq.n 0x119e0	@ 000119dc 00d0
.org 0x119de
	b.n 0x11b16	@ 000119de 9ae0
.org 0x119e0
	ldr r0, [pc, #180]	@ 000119e0 2d48
.org 0x119e2
	ldr r1, [pc, #184]	@ 000119e2 2e49
.org 0x119e4
	adds r0, r0, r1	@ 000119e4 4018
.org 0x119e6
	ldrb r1, [r0, #0]	@ 000119e6 0178
.org 0x119e8
	movs r0, #15	@ 000119e8 0f20
.org 0x119ea
	ands r0, r1	@ 000119ea 0840
.org 0x119ec
	cmp r0, #3	@ 000119ec 0328
.org 0x119ee
	bne.n 0x11aec	@ 000119ee 7dd1
.org 0x119f0
	lsrs r2, r2, #20	@ 000119f0 120d
.org 0x119f2
	lsls r5, r2, #1	@ 000119f2 5500
.org 0x119f4
	ldr r3, [pc, #168]	@ 000119f4 2a4b
.org 0x119f6
	adds r5, r5, r3	@ 000119f6 ed18
.org 0x119f8
	ldr r1, [r7, #100]	@ 000119f8 796e
.org 0x119fa
	ldr r4, [pc, #168]	@ 000119fa 2a4c
.org 0x119fc
	adds r0, r4, #0	@ 000119fc 201c
.org 0x119fe
	orrs r1, r0	@ 000119fe 0143
.org 0x11a00
	strh r1, [r5, #0]	@ 00011a00 2980
.org 0x11a02
	lsls r2, r2, #2	@ 00011a02 9200
.org 0x11a04
	adds r3, #8	@ 00011a04 0833
.org 0x11a06
	adds r2, r2, r3	@ 00011a06 d218
.org 0x11a08
	mov r0, r8	@ 00011a08 4046
.org 0x11a0a
	str r0, [r2, #0]	@ 00011a0a 1060
.org 0x11a0c
	ldr r0, [pc, #152]	@ 00011a0c 2648
.org 0x11a0e
	ldr r0, [r0, #0]	@ 00011a0e 0068
.org 0x11a10
	ldr r2, [pc, #152]	@ 00011a10 264a
.org 0x11a12
	adds r0, r0, r2	@ 00011a12 8018
.org 0x11a14
	movs r4, #248	@ 00011a14 f824
.org 0x11a16
	lsls r4, r4, #5	@ 00011a16 6401
.org 0x11a18
	ands r1, r4	@ 00011a18 2140
.org 0x11a1a
	lsls r1, r1, #3	@ 00011a1a c900
.org 0x11a1c
	movs r2, #192	@ 00011a1c c022
.org 0x11a1e
	lsls r2, r2, #19	@ 00011a1e d204
.org 0x11a20
	adds r1, r1, r2	@ 00011a20 8918
.org 0x11a22
	movs r6, #128	@ 00011a22 8026
.org 0x11a24
	lsls r6, r6, #2	@ 00011a24 b600
.org 0x11a26
	adds r2, r6, #0	@ 00011a26 321c
.org 0x11a28
	bl 0x128be0	@ 00011a28 17f1daf8
.org 0x11a2c
	ldr r0, [pc, #128]	@ 00011a2c 2048
.org 0x11a2e
	ldr r0, [r0, #0]	@ 00011a2e 0068
.org 0x11a30
	ldr r3, [pc, #128]	@ 00011a30 204b
.org 0x11a32
	adds r0, r0, r3	@ 00011a32 c018
.org 0x11a34
	ldrh r1, [r5, #0]	@ 00011a34 2988
.org 0x11a36
	ands r4, r1	@ 00011a36 0c40
.org 0x11a38
	lsls r4, r4, #3	@ 00011a38 e400
.org 0x11a3a
	ldr r1, [pc, #124]	@ 00011a3a 1f49
.org 0x11a3c
	adds r4, r4, r1	@ 00011a3c 6418
.org 0x11a3e
	adds r1, r4, #0	@ 00011a3e 211c
.org 0x11a40
	adds r2, r6, #0	@ 00011a40 321c
.org 0x11a42
	bl 0x128be0	@ 00011a42 17f1cdf8
.org 0x11a46
	mov r2, r8	@ 00011a46 4246
.org 0x11a48
	str r2, [r7, #108]	@ 00011a48 fa66
.org 0x11a4a
	adds r0, r7, #0	@ 00011a4a 381c
.org 0x11a4c
	adds r0, #104	@ 00011a4c 6830
.org 0x11a4e
	strh r2, [r0, #0]	@ 00011a4e 0280
.org 0x11a50
	adds r1, r7, #0	@ 00011a50 391c
.org 0x11a52
	adds r1, #106	@ 00011a52 6a31
.org 0x11a54
	movs r0, #1	@ 00011a54 0120
.org 0x11a56
	strb r0, [r1, #0]	@ 00011a56 0870
.org 0x11a58
	ldr r1, [pc, #96]	@ 00011a58 1849
.org 0x11a5a
	ldr r0, [pc, #100]	@ 00011a5a 1948
.org 0x11a5c
	strh r0, [r1, #0]	@ 00011a5c 0880
.org 0x11a5e
	ldr r1, [pc, #100]	@ 00011a5e 1949
.org 0x11a60
	ldrh r2, [r1, #0]	@ 00011a60 0a88
.org 0x11a62
	movs r3, #128	@ 00011a62 8023
.org 0x11a64
	lsls r3, r3, #7	@ 00011a64 db01
.org 0x11a66
	adds r0, r3, #0	@ 00011a66 181c
.org 0x11a68
	orrs r0, r2	@ 00011a68 1043
.org 0x11a6a
	strh r0, [r1, #0]	@ 00011a6a 0880
.org 0x11a6c
	movs r0, #251	@ 00011a6c fb20
.org 0x11a6e
	strb r0, [r1, #13]	@ 00011a6e 4873
.org 0x11a70
	movs r0, #255	@ 00011a70 ff20
.org 0x11a72
	strh r0, [r1, #6]	@ 00011a72 c880
.org 0x11a74
	strh r0, [r1, #10]	@ 00011a74 4881
.org 0x11a76
	movs r2, #192	@ 00011a76 c022
.org 0x11a78
	str r2, [r7, #72]	@ 00011a78 ba64
.org 0x11a7a
	ldr r1, [r7, #52]	@ 00011a7a 796b
.org 0x11a7c
	ldr r0, [pc, #72]	@ 00011a7c 1248
.org 0x11a7e
	cmp r1, r0	@ 00011a7e 8142
.org 0x11a80
	bgt.n 0x11ad0	@ 00011a80 26dc
.org 0x11a82
	movs r0, #184	@ 00011a82 b820
.org 0x11a84
	str r0, [r7, #80]	@ 00011a84 3865
.org 0x11a86
	lsls r0, r2, #3	@ 00011a86 d000
.org 0x11a88
	adds r0, #192	@ 00011a88 c030
.org 0x11a8a
	lsls r0, r0, #7	@ 00011a8a c001
.org 0x11a8c
	ldr r4, [pc, #60]	@ 00011a8c 0f4c
.org 0x11a8e
	adds r0, r0, r4	@ 00011a8e 0019
.org 0x11a90
	asrs r0, r0, #8	@ 00011a90 0012
.org 0x11a92
	adds r0, #184	@ 00011a92 b830
.org 0x11a94
	b.n 0x11ae0	@ 00011a94 24e0
.org 0x11a96
	.byte 0x00	@ 00011a96 data
.org 0x11a97
	.byte 0x00	@ 00011a97 data
.org 0x11a98
	.byte 0xb0,0x0a,0x00,0x02	@ 00011a98 data
.org 0x11a9c
	.byte 0x10,0xc0,0x02,0x00	@ 00011a9c data
.org 0x11aa0
	.byte 0x04,0x0a,0x00,0x02	@ 00011aa0 data
.org 0x11aa4
	.byte 0x45,0x40,0x00,0x00	@ 00011aa4 data
.org 0x11aa8
	.byte 0x68,0xc1,0xb2,0x08	@ 00011aa8 data
.org 0x11aac
	.byte 0x70,0xc1,0xb2,0x08	@ 00011aac data
.org 0x11ab0
	.byte 0x6c,0xc1,0xb2,0x08	@ 00011ab0 data
.org 0x11ab4
	.byte 0x74,0xc1,0xb2,0x08	@ 00011ab4 data
.org 0x11ab8
	.byte 0x00,0x08,0x00,0x06	@ 00011ab8 data
.org 0x11abc
	.byte 0x40,0x0a,0x00,0x02	@ 00011abc data
.org 0x11ac0
	.byte 0x44,0x3b,0x00,0x00	@ 00011ac0 data
.org 0x11ac4
	.byte 0x50,0x0a,0x00,0x02	@ 00011ac4 data
.org 0x11ac8
	.byte 0x5f,0x18,0x00,0x00	@ 00011ac8 data
.org 0x11acc
	.byte 0x00,0xe8,0xff,0xff	@ 00011acc data
.org 0x11ad0
	movs r0, #168	@ 00011ad0 a820
.org 0x11ad2
	str r0, [r7, #80]	@ 00011ad2 3865
.org 0x11ad4
	lsls r0, r2, #9	@ 00011ad4 5002
.org 0x11ad6
	movs r1, #216	@ 00011ad6 d821
.org 0x11ad8
	lsls r1, r1, #8	@ 00011ad8 0902
.org 0x11ada
	adds r0, r0, r1	@ 00011ada 4018
.org 0x11adc
	asrs r0, r0, #8	@ 00011adc 0012
.org 0x11ade
	adds r0, #168	@ 00011ade a830
.org 0x11ae0
	str r0, [r7, #112]	@ 00011ae0 3867
.org 0x11ae2
	adds r1, r7, #0	@ 00011ae2 391c
.org 0x11ae4
	adds r1, #118	@ 00011ae4 7631
.org 0x11ae6
	movs r0, #0	@ 00011ae6 0020
.org 0x11ae8
	strh r0, [r1, #0]	@ 00011ae8 0880
.org 0x11aea
	b.n 0x11b10	@ 00011aea 11e0
.org 0x11aec
	lsrs r0, r2, #20	@ 00011aec 100d
.org 0x11aee
	lsls r0, r0, #1	@ 00011aee 4000
.org 0x11af0
	ldr r1, [pc, #152]	@ 00011af0 2649
.org 0x11af2
	adds r0, r0, r1	@ 00011af2 4018
.org 0x11af4
	ldrh r0, [r0, #0]	@ 00011af4 0088
.org 0x11af6
	movs r1, #248	@ 00011af6 f821
.org 0x11af8
	lsls r1, r1, #5	@ 00011af8 4901
.org 0x11afa
	ands r1, r0	@ 00011afa 0140
.org 0x11afc
	lsls r1, r1, #3	@ 00011afc c900
.org 0x11afe
	movs r0, #192	@ 00011afe c020
.org 0x11b00
	lsls r0, r0, #19	@ 00011b00 c004
.org 0x11b02
	adds r1, r1, r0	@ 00011b02 0918
.org 0x11b04
	mov r2, r8	@ 00011b04 4246
.org 0x11b06
	str r2, [sp, #0]	@ 00011b06 0092
.org 0x11b08
	ldr r2, [pc, #132]	@ 00011b08 214a
.org 0x11b0a
	mov r0, sp	@ 00011b0a 6846
.org 0x11b0c
	bl 0x128be0	@ 00011b0c 17f168f8
.org 0x11b10
	ldrb r0, [r7, #14]	@ 00011b10 b87b
.org 0x11b12
	adds r0, #1	@ 00011b12 0130
.org 0x11b14
	strb r0, [r7, #14]	@ 00011b14 b873
.org 0x11b16
	ldr r0, [pc, #124]	@ 00011b16 1f48
.org 0x11b18
	ldr r3, [pc, #124]	@ 00011b18 1f4b
.org 0x11b1a
	adds r0, r0, r3	@ 00011b1a c018
.org 0x11b1c
	ldrb r1, [r0, #0]	@ 00011b1c 0178
.org 0x11b1e
	movs r0, #15	@ 00011b1e 0f20
.org 0x11b20
	ands r0, r1	@ 00011b20 0840
.org 0x11b22
	cmp r0, #3	@ 00011b22 0328
.org 0x11b24
	beq.n 0x11b28	@ 00011b24 00d0
.org 0x11b26
	b.n 0x11cd0	@ 00011b26 d3e0
.org 0x11b28
	adds r3, r7, #0	@ 00011b28 3b1c
.org 0x11b2a
	adds r3, #104	@ 00011b2a 6833
.org 0x11b2c
	ldrh r0, [r3, #0]	@ 00011b2c 1888
.org 0x11b2e
	ldr r1, [r7, #108]	@ 00011b2e f96e
.org 0x11b30
	ldr r2, [r7, #52]	@ 00011b30 7a6b
.org 0x11b32
	subs r1, r1, r2	@ 00011b32 891a
.org 0x11b34
	lsls r1, r1, #4	@ 00011b34 0901
.org 0x11b36
	movs r4, #128	@ 00011b36 8024
.org 0x11b38
	lsls r4, r4, #6	@ 00011b38 a401
.org 0x11b3a
	adds r1, r1, r4	@ 00011b3a 0919
.org 0x11b3c
	cmp r0, r1	@ 00011b3c 8842
.org 0x11b3e
	ble.n 0x11b48	@ 00011b3e 03dd
.org 0x11b40
	movs r0, #0	@ 00011b40 0020
.org 0x11b42
	strh r0, [r3, #0]	@ 00011b42 1880
.org 0x11b44
	ldr r0, [r7, #52]	@ 00011b44 786b
.org 0x11b46
	str r0, [r7, #108]	@ 00011b46 f866
.org 0x11b48
	ldrh r0, [r3, #0]	@ 00011b48 1888
.org 0x11b4a
	adds r0, #16	@ 00011b4a 1030
.org 0x11b4c
	movs r5, #0	@ 00011b4c 0025
.org 0x11b4e
	strh r0, [r3, #0]	@ 00011b4e 1880
.org 0x11b50
	ldr r1, [r7, #52]	@ 00011b50 796b
.org 0x11b52
	ldr r0, [pc, #72]	@ 00011b52 1248
.org 0x11b54
	cmp r1, r0	@ 00011b54 8142
.org 0x11b56
	bgt.n 0x11c08	@ 00011b56 57dc
.org 0x11b58
	ldr r2, [pc, #68]	@ 00011b58 114a
.org 0x11b5a
	adds r0, r1, r2	@ 00011b5a 8818
.org 0x11b5c
	lsls r4, r0, #4	@ 00011b5c 0401
.org 0x11b5e
	movs r2, #128	@ 00011b5e 8022
.org 0x11b60
	lsls r2, r2, #5	@ 00011b60 5201
.org 0x11b62
	cmp r4, r2	@ 00011b62 9442
.org 0x11b64
	ble.n 0x11b68	@ 00011b64 00dd
.org 0x11b66
	adds r4, r2, #0	@ 00011b66 141c
.org 0x11b68
	ldrh r0, [r7, #16]	@ 00011b68 388a
.org 0x11b6a
	adds r0, #1	@ 00011b6a 0130
.org 0x11b6c
	movs r1, #255	@ 00011b6c ff21
.org 0x11b6e
	ands r0, r1	@ 00011b6e 0840
.org 0x11b70
	strh r0, [r7, #16]	@ 00011b70 3882
.org 0x11b72
	ldr r1, [pc, #48]	@ 00011b72 0c49
.org 0x11b74
	adds r0, #64	@ 00011b74 4030
.org 0x11b76
	lsls r0, r0, #24	@ 00011b76 0006
.org 0x11b78
	lsrs r0, r0, #23	@ 00011b78 c00d
.org 0x11b7a
	adds r0, r0, r1	@ 00011b7a 4018
.org 0x11b7c
	movs r3, #0	@ 00011b7c 0023
.org 0x11b7e
	ldrsh r0, [r0, r3]	@ 00011b7e c05e
.org 0x11b80
	lsls r0, r0, #2	@ 00011b80 8000
.org 0x11b82
	adds r4, r4, r0	@ 00011b82 2418
.org 0x11b84
	cmp r4, r2	@ 00011b84 9442
.org 0x11b86
	ble.n 0x11ba8	@ 00011b86 0fdd
.org 0x11b88
	adds r4, r2, #0	@ 00011b88 141c
.org 0x11b8a
	b.n 0x11bda	@ 00011b8a 26e0
.org 0x11b8c
	.byte 0x04,0x0a,0x00,0x02	@ 00011b8c data
.org 0x11b90
	.byte 0x00,0x04,0x00,0x01	@ 00011b90 data
.org 0x11b94
	.byte 0xb0,0x0a,0x00,0x02	@ 00011b94 data
.org 0x11b98
	.byte 0x10,0xc0,0x02,0x00	@ 00011b98 data
.org 0x11b9c
	.byte 0x5f,0x18,0x00,0x00	@ 00011b9c data
.org 0x11ba0
	.byte 0xa0,0xf6,0xff,0xff	@ 00011ba0 data
.org 0x11ba4
	.byte 0x0c,0x93,0x12,0x08	@ 00011ba4 data
.org 0x11ba8
	cmp r4, #0	@ 00011ba8 002c
.org 0x11baa
	bge.n 0x11bc4	@ 00011baa 0bda
.org 0x11bac
	adds r4, r7, #0	@ 00011bac 3c1c
.org 0x11bae
	adds r4, #120	@ 00011bae 7834
.org 0x11bb0
	movs r1, #0	@ 00011bb0 0021
.org 0x11bb2
	ldrsh r0, [r4, r1]	@ 00011bb2 605e
.org 0x11bb4
	cmp r0, #0	@ 00011bb4 0028
.org 0x11bb6
	beq.n 0x11bc0	@ 00011bb6 03d0
.org 0x11bb8
	movs r0, #122	@ 00011bb8 7a20
.org 0x11bba
	bl 0x2b5c	@ 00011bba f0f7cfff
.org 0x11bbe
	strh r5, [r4, #0]	@ 00011bbe 2580
.org 0x11bc0
	movs r4, #0	@ 00011bc0 0024
.org 0x11bc2
	b.n 0x11bda	@ 00011bc2 0ae0
.org 0x11bc4
	adds r5, r7, #0	@ 00011bc4 3d1c
.org 0x11bc6
	adds r5, #120	@ 00011bc6 7835
.org 0x11bc8
	movs r2, #0	@ 00011bc8 0022
.org 0x11bca
	ldrsh r0, [r5, r2]	@ 00011bca a85e
.org 0x11bcc
	cmp r0, #0	@ 00011bcc 0028
.org 0x11bce
	bne.n 0x11bda	@ 00011bce 04d1
.org 0x11bd0
	movs r0, #122	@ 00011bd0 7a20
.org 0x11bd2
	bl 0x2b10	@ 00011bd2 f0f79dff
.org 0x11bd6
	movs r0, #122	@ 00011bd6 7a20
.org 0x11bd8
	strh r0, [r5, #0]	@ 00011bd8 2880
.org 0x11bda
	ldr r3, [pc, #36]	@ 00011bda 094b
.org 0x11bdc
	asrs r2, r4, #8	@ 00011bdc 2212
.org 0x11bde
	movs r0, #31	@ 00011bde 1f20
.org 0x11be0
	adds r1, r2, #0	@ 00011be0 111c
.org 0x11be2
	ands r1, r0	@ 00011be2 0140
.org 0x11be4
	movs r0, #16	@ 00011be4 1020
.org 0x11be6
	subs r0, r0, r2	@ 00011be6 801a
.org 0x11be8
	lsls r0, r0, #8	@ 00011be8 0002
.org 0x11bea
	orrs r1, r0	@ 00011bea 0143
.org 0x11bec
	strh r1, [r3, #2]	@ 00011bec 5980
.org 0x11bee
	movs r0, #128	@ 00011bee 8020
.org 0x11bf0
	lsls r0, r0, #4	@ 00011bf0 0001
.org 0x11bf2
	cmp r4, r0	@ 00011bf2 8442
.org 0x11bf4
	ble.n 0x11ca4	@ 00011bf4 56dd
.org 0x11bf6
	adds r1, r7, #0	@ 00011bf6 391c
.org 0x11bf8
	adds r1, #118	@ 00011bf8 7631
.org 0x11bfa
	ldr r0, [pc, #8]	@ 00011bfa 0248
.org 0x11bfc
	b.n 0x11cac	@ 00011bfc 56e0
.org 0x11bfe
	.byte 0x00	@ 00011bfe data
.org 0x11bff
	.byte 0x00	@ 00011bff data
.org 0x11c00
	.byte 0x40,0x0a,0x00,0x02	@ 00011c00 data
.org 0x11c04
	.byte 0x80,0xff,0x00,0x00	@ 00011c04 data
.org 0x11c08
	ldr r3, [pc, #48]	@ 00011c08 0c4b
.org 0x11c0a
	adds r0, r1, r3	@ 00011c0a c818
.org 0x11c0c
	lsls r4, r0, #4	@ 00011c0c 0401
.org 0x11c0e
	movs r2, #128	@ 00011c0e 8022
.org 0x11c10
	lsls r2, r2, #5	@ 00011c10 5201
.org 0x11c12
	cmp r4, r2	@ 00011c12 9442
.org 0x11c14
	ble.n 0x11c18	@ 00011c14 00dd
.org 0x11c16
	adds r4, r2, #0	@ 00011c16 141c
.org 0x11c18
	ldrh r0, [r7, #16]	@ 00011c18 388a
.org 0x11c1a
	adds r0, #1	@ 00011c1a 0130
.org 0x11c1c
	movs r1, #255	@ 00011c1c ff21
.org 0x11c1e
	ands r0, r1	@ 00011c1e 0840
.org 0x11c20
	strh r0, [r7, #16]	@ 00011c20 3882
.org 0x11c22
	ldr r1, [pc, #28]	@ 00011c22 0749
.org 0x11c24
	adds r0, #64	@ 00011c24 4030
.org 0x11c26
	lsls r0, r0, #24	@ 00011c26 0006
.org 0x11c28
	lsrs r0, r0, #23	@ 00011c28 c00d
.org 0x11c2a
	adds r0, r0, r1	@ 00011c2a 4018
.org 0x11c2c
	movs r1, #0	@ 00011c2c 0021
.org 0x11c2e
	ldrsh r0, [r0, r1]	@ 00011c2e 405e
.org 0x11c30
	lsls r0, r0, #2	@ 00011c30 8000
.org 0x11c32
	adds r4, r4, r0	@ 00011c32 2418
.org 0x11c34
	cmp r4, r2	@ 00011c34 9442
.org 0x11c36
	ble.n 0x11c44	@ 00011c36 05dd
.org 0x11c38
	adds r4, r2, #0	@ 00011c38 141c
.org 0x11c3a
	b.n 0x11c76	@ 00011c3a 1ce0
.org 0x11c3c
	.byte 0xd0,0xe4,0xff,0xff	@ 00011c3c data
.org 0x11c40
	.byte 0x0c,0x93,0x12,0x08	@ 00011c40 data
.org 0x11c44
	cmp r4, #0	@ 00011c44 002c
.org 0x11c46
	bge.n 0x11c60	@ 00011c46 0bda
.org 0x11c48
	adds r4, r7, #0	@ 00011c48 3c1c
.org 0x11c4a
	adds r4, #120	@ 00011c4a 7834
.org 0x11c4c
	movs r2, #0	@ 00011c4c 0022
.org 0x11c4e
	ldrsh r0, [r4, r2]	@ 00011c4e a05e
.org 0x11c50
	cmp r0, #0	@ 00011c50 0028
.org 0x11c52
	beq.n 0x11c5c	@ 00011c52 03d0
.org 0x11c54
	movs r0, #122	@ 00011c54 7a20
.org 0x11c56
	bl 0x2b5c	@ 00011c56 f0f781ff
.org 0x11c5a
	strh r5, [r4, #0]	@ 00011c5a 2580
.org 0x11c5c
	movs r4, #0	@ 00011c5c 0024
.org 0x11c5e
	b.n 0x11c76	@ 00011c5e 0ae0
.org 0x11c60
	adds r5, r7, #0	@ 00011c60 3d1c
.org 0x11c62
	adds r5, #120	@ 00011c62 7835
.org 0x11c64
	movs r3, #0	@ 00011c64 0023
.org 0x11c66
	ldrsh r0, [r5, r3]	@ 00011c66 e85e
.org 0x11c68
	cmp r0, #0	@ 00011c68 0028
