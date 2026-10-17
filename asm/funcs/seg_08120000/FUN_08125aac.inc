@ FUN_08125aac  entry 0x08125aac  size 802
.thumb
.org 0x125aac
FUN_08125aac:
	push {r4, r5, r6, r7, lr}	@ 00125aac f0b5
.org 0x125aae
	mov r7, sl	@ 00125aae 5746
.org 0x125ab0
	mov r6, r9	@ 00125ab0 4e46
.org 0x125ab2
	mov r5, r8	@ 00125ab2 4546
.org 0x125ab4
	push {r5, r6, r7}	@ 00125ab4 e0b4
.org 0x125ab6
	sub sp, #20	@ 00125ab6 85b0
.org 0x125ab8
	str r0, [sp, #12]	@ 00125ab8 0390
.org 0x125aba
	ldr r1, [pc, #788]	@ 00125aba c549
.org 0x125abc
	adds r1, r0, r1	@ 00125abc 4118
.org 0x125abe
	str r1, [sp, #16]	@ 00125abe 0491
.org 0x125ac0
	movs r2, #180	@ 00125ac0 b422
.org 0x125ac2
	lsls r2, r2, #9	@ 00125ac2 5202
.org 0x125ac4
	str r2, [r1, #0]	@ 00125ac4 0a60
.org 0x125ac6
	movs r0, #240	@ 00125ac6 f020
.org 0x125ac8
	lsls r0, r0, #8	@ 00125ac8 0002
.org 0x125aca
	str r0, [r1, #4]	@ 00125aca 4860
.org 0x125acc
	movs r0, #24	@ 00125acc 1820
.org 0x125ace
	ldr r1, [sp, #16]	@ 00125ace 0499
.org 0x125ad0
	bl 0x6a94	@ 00125ad0 e0f6e0ff
.org 0x125ad4
	ldr r0, [pc, #764]	@ 00125ad4 bf48
.org 0x125ad6
	mov r8, r0	@ 00125ad6 8046
.org 0x125ad8
	ldr r1, [pc, #764]	@ 00125ad8 bf49
.org 0x125ada
	mov r9, r1	@ 00125ada 8946
.org 0x125adc
	ldrh r1, [r1, #0]	@ 00125adc 0988
.org 0x125ade
	ldrh r0, [r0, #6]	@ 00125ade c088
.org 0x125ae0
	lsrs r0, r0, #6	@ 00125ae0 8009
.org 0x125ae2
	subs r1, r1, r0	@ 00125ae2 091a
.org 0x125ae4
	lsls r1, r1, #5	@ 00125ae4 4901
.org 0x125ae6
	movs r2, #128	@ 00125ae6 8022
.org 0x125ae8
	lsls r2, r2, #9	@ 00125ae8 5202
.org 0x125aea
	adds r1, r1, r2	@ 00125aea 8918
.org 0x125aec
	mov r0, r8	@ 00125aec 4046
.org 0x125aee
	bl 0x1d30	@ 00125aee dcf61ff9
.org 0x125af2
	ldr r7, [pc, #744]	@ 00125af2 ba4f
.org 0x125af4
	ldr r6, [pc, #744]	@ 00125af4 ba4e
.org 0x125af6
	ldrh r1, [r6, #0]	@ 00125af6 3188
.org 0x125af8
	ldrb r0, [r7, #7]	@ 00125af8 f879
.org 0x125afa
	subs r1, r1, r0	@ 00125afa 091a
.org 0x125afc
	lsls r1, r1, #5	@ 00125afc 4901
.org 0x125afe
	movs r0, #128	@ 00125afe 8020
.org 0x125b00
	lsls r0, r0, #2	@ 00125b00 8000
.org 0x125b02
	mov sl, r0	@ 00125b02 8246
.org 0x125b04
	add r1, sl	@ 00125b04 5144
.org 0x125b06
	adds r0, r7, #0	@ 00125b06 381c
.org 0x125b08
	bl 0x2208	@ 00125b08 dcf67efb
.org 0x125b0c
	mov r0, r8	@ 00125b0c 4046
.org 0x125b0e
	adds r0, #20	@ 00125b0e 1430
.org 0x125b10
	mov r2, r9	@ 00125b10 4a46
.org 0x125b12
	ldrh r1, [r2, #2]	@ 00125b12 5188
.org 0x125b14
	ldrh r2, [r0, #6]	@ 00125b14 c288
.org 0x125b16
	lsrs r2, r2, #6	@ 00125b16 9209
.org 0x125b18
	subs r1, r1, r2	@ 00125b18 891a
.org 0x125b1a
	lsls r1, r1, #5	@ 00125b1a 4901
.org 0x125b1c
	movs r2, #128	@ 00125b1c 8022
.org 0x125b1e
	lsls r2, r2, #9	@ 00125b1e 5202
.org 0x125b20
	adds r1, r1, r2	@ 00125b20 8918
.org 0x125b22
	bl 0x1d30	@ 00125b22 dcf605f9
.org 0x125b26
	adds r0, r7, #0	@ 00125b26 381c
.org 0x125b28
	adds r0, #20	@ 00125b28 1430
.org 0x125b2a
	ldrh r1, [r6, #2]	@ 00125b2a 7188
.org 0x125b2c
	ldrb r2, [r0, #7]	@ 00125b2c c279
.org 0x125b2e
	subs r1, r1, r2	@ 00125b2e 891a
.org 0x125b30
	lsls r1, r1, #5	@ 00125b30 4901
.org 0x125b32
	add r1, sl	@ 00125b32 5144
.org 0x125b34
	bl 0x2208	@ 00125b34 dcf668fb
.org 0x125b38
	mov r0, r8	@ 00125b38 4046
.org 0x125b3a
	adds r0, #40	@ 00125b3a 2830
.org 0x125b3c
	mov r2, r9	@ 00125b3c 4a46
.org 0x125b3e
	ldrh r1, [r2, #4]	@ 00125b3e 9188
.org 0x125b40
	ldrh r2, [r0, #6]	@ 00125b40 c288
.org 0x125b42
	lsrs r2, r2, #6	@ 00125b42 9209
.org 0x125b44
	subs r1, r1, r2	@ 00125b44 891a
.org 0x125b46
	lsls r1, r1, #5	@ 00125b46 4901
.org 0x125b48
	movs r2, #128	@ 00125b48 8022
.org 0x125b4a
	lsls r2, r2, #9	@ 00125b4a 5202
.org 0x125b4c
	adds r1, r1, r2	@ 00125b4c 8918
.org 0x125b4e
	bl 0x1d30	@ 00125b4e dcf6eff8
.org 0x125b52
	adds r0, r7, #0	@ 00125b52 381c
.org 0x125b54
	adds r0, #40	@ 00125b54 2830
.org 0x125b56
	ldrh r1, [r6, #4]	@ 00125b56 b188
.org 0x125b58
	ldrb r2, [r0, #7]	@ 00125b58 c279
.org 0x125b5a
	subs r1, r1, r2	@ 00125b5a 891a
.org 0x125b5c
	lsls r1, r1, #5	@ 00125b5c 4901
.org 0x125b5e
	add r1, sl	@ 00125b5e 5144
.org 0x125b60
	bl 0x2208	@ 00125b60 dcf652fb
.org 0x125b64
	mov r0, r9	@ 00125b64 4846
.org 0x125b66
	ldrh r1, [r0, #8]	@ 00125b66 0189
.org 0x125b68
	ldr r2, [pc, #632]	@ 00125b68 9e4a
.org 0x125b6a
	ldrh r0, [r2, #6]	@ 00125b6a d088
.org 0x125b6c
	lsrs r0, r0, #6	@ 00125b6c 8009
.org 0x125b6e
	subs r1, r1, r0	@ 00125b6e 091a
.org 0x125b70
	lsls r1, r1, #5	@ 00125b70 4901
.org 0x125b72
	movs r0, #128	@ 00125b72 8020
.org 0x125b74
	lsls r0, r0, #9	@ 00125b74 4002
.org 0x125b76
	adds r1, r1, r0	@ 00125b76 0918
.org 0x125b78
	adds r0, r2, #0	@ 00125b78 101c
.org 0x125b7a
	bl 0x1d30	@ 00125b7a dcf6d9f8
.org 0x125b7e
	ldrh r1, [r6, #8]	@ 00125b7e 3189
.org 0x125b80
	ldr r2, [pc, #612]	@ 00125b80 994a
.org 0x125b82
	ldrb r0, [r2, #7]	@ 00125b82 d079
.org 0x125b84
	subs r1, r1, r0	@ 00125b84 091a
.org 0x125b86
	lsls r1, r1, #5	@ 00125b86 4901
.org 0x125b88
	add r1, sl	@ 00125b88 5144
.org 0x125b8a
	adds r0, r2, #0	@ 00125b8a 101c
.org 0x125b8c
	bl 0x2208	@ 00125b8c dcf63cfb
.org 0x125b90
	mov r0, r8	@ 00125b90 4046
.org 0x125b92
	adds r0, #100	@ 00125b92 6430
.org 0x125b94
	mov r2, r9	@ 00125b94 4a46
.org 0x125b96
	ldrh r1, [r2, #10]	@ 00125b96 5189
.org 0x125b98
	ldrh r2, [r0, #6]	@ 00125b98 c288
.org 0x125b9a
	lsrs r2, r2, #6	@ 00125b9a 9209
.org 0x125b9c
	subs r1, r1, r2	@ 00125b9c 891a
.org 0x125b9e
	lsls r1, r1, #5	@ 00125b9e 4901
.org 0x125ba0
	movs r2, #128	@ 00125ba0 8022
.org 0x125ba2
	lsls r2, r2, #9	@ 00125ba2 5202
.org 0x125ba4
	adds r1, r1, r2	@ 00125ba4 8918
.org 0x125ba6
	bl 0x1d30	@ 00125ba6 dcf6c3f8
.org 0x125baa
	adds r0, r7, #0	@ 00125baa 381c
.org 0x125bac
	adds r0, #100	@ 00125bac 6430
.org 0x125bae
	ldrh r1, [r6, #10]	@ 00125bae 7189
.org 0x125bb0
	ldrb r2, [r0, #7]	@ 00125bb0 c279
.org 0x125bb2
	subs r1, r1, r2	@ 00125bb2 891a
.org 0x125bb4
	lsls r1, r1, #5	@ 00125bb4 4901
.org 0x125bb6
	add r1, sl	@ 00125bb6 5144
.org 0x125bb8
	bl 0x2208	@ 00125bb8 dcf626fb
.org 0x125bbc
	movs r4, #169	@ 00125bbc a924
.org 0x125bbe
	lsls r5, r4, #1	@ 00125bbe 6500
.org 0x125bc0
	mov r1, r9	@ 00125bc0 4946
.org 0x125bc2
	adds r0, r1, r5	@ 00125bc2 4819
.org 0x125bc4
	mov r2, sl	@ 00125bc4 5246
.org 0x125bc6
	strh r2, [r0, #0]	@ 00125bc6 0280
.org 0x125bc8
	adds r5, r6, r5	@ 00125bc8 7519
.org 0x125bca
	movs r0, #4	@ 00125bca 0420
.org 0x125bcc
	strh r0, [r5, #0]	@ 00125bcc 2880
.org 0x125bce
	lsls r4, r4, #4	@ 00125bce 2401
.org 0x125bd0
	movs r1, #169	@ 00125bd0 a921
.org 0x125bd2
	lsls r1, r1, #2	@ 00125bd2 8900
.org 0x125bd4
	adds r4, r4, r1	@ 00125bd4 6418
.org 0x125bd6
	mov r2, r8	@ 00125bd6 4246
.org 0x125bd8
	adds r0, r4, r2	@ 00125bd8 a018
.org 0x125bda
	ldrh r1, [r0, #6]	@ 00125bda c188
.org 0x125bdc
	lsrs r1, r1, #6	@ 00125bdc 8909
.org 0x125bde
	mov r2, sl	@ 00125bde 5246
.org 0x125be0
	subs r1, r2, r1	@ 00125be0 511a
.org 0x125be2
	lsls r1, r1, #5	@ 00125be2 4901
.org 0x125be4
	movs r2, #128	@ 00125be4 8022
.org 0x125be6
	lsls r2, r2, #9	@ 00125be6 5202
.org 0x125be8
	adds r1, r1, r2	@ 00125be8 8918
.org 0x125bea
	bl 0x1d30	@ 00125bea dcf6a1f8
.org 0x125bee
	adds r4, r4, r7	@ 00125bee e419
.org 0x125bf0
	ldrh r1, [r5, #0]	@ 00125bf0 2988
.org 0x125bf2
	ldrb r0, [r4, #7]	@ 00125bf2 e079
.org 0x125bf4
	subs r1, r1, r0	@ 00125bf4 091a
.org 0x125bf6
	lsls r1, r1, #5	@ 00125bf6 4901
.org 0x125bf8
	add r1, sl	@ 00125bf8 5144
.org 0x125bfa
	adds r0, r4, #0	@ 00125bfa 201c
.org 0x125bfc
	bl 0x2208	@ 00125bfc dcf604fb
.org 0x125c00
	movs r4, #185	@ 00125c00 b924
.org 0x125c02
	lsls r5, r4, #1	@ 00125c02 6500
.org 0x125c04
	mov r1, r9	@ 00125c04 4946
.org 0x125c06
	adds r0, r1, r5	@ 00125c06 4819
.org 0x125c08
	movs r1, #156	@ 00125c08 9c21
.org 0x125c0a
	lsls r1, r1, #2	@ 00125c0a 8900
.org 0x125c0c
	strh r1, [r0, #0]	@ 00125c0c 0180
.org 0x125c0e
	adds r5, r6, r5	@ 00125c0e 7519
.org 0x125c10
	movs r2, #5	@ 00125c10 0522
.org 0x125c12
	strh r2, [r5, #0]	@ 00125c12 2a80
.org 0x125c14
	lsls r4, r4, #4	@ 00125c14 2401
.org 0x125c16
	movs r0, #185	@ 00125c16 b920
.org 0x125c18
	lsls r0, r0, #2	@ 00125c18 8000
.org 0x125c1a
	adds r4, r4, r0	@ 00125c1a 2418
.org 0x125c1c
	mov r2, r8	@ 00125c1c 4246
.org 0x125c1e
	adds r0, r4, r2	@ 00125c1e a018
.org 0x125c20
	ldrh r2, [r0, #6]	@ 00125c20 c288
.org 0x125c22
	lsrs r2, r2, #6	@ 00125c22 9209
.org 0x125c24
	subs r1, r1, r2	@ 00125c24 891a
.org 0x125c26
	lsls r1, r1, #5	@ 00125c26 4901
.org 0x125c28
	movs r2, #128	@ 00125c28 8022
.org 0x125c2a
	lsls r2, r2, #9	@ 00125c2a 5202
.org 0x125c2c
	adds r1, r1, r2	@ 00125c2c 8918
.org 0x125c2e
	bl 0x1d30	@ 00125c2e dcf67ff8
.org 0x125c32
	adds r4, r4, r7	@ 00125c32 e419
.org 0x125c34
	ldrh r1, [r5, #0]	@ 00125c34 2988
.org 0x125c36
	ldrb r0, [r4, #7]	@ 00125c36 e079
.org 0x125c38
	subs r1, r1, r0	@ 00125c38 091a
.org 0x125c3a
	lsls r1, r1, #5	@ 00125c3a 4901
.org 0x125c3c
	add r1, sl	@ 00125c3c 5144
.org 0x125c3e
	adds r0, r4, #0	@ 00125c3e 201c
.org 0x125c40
	bl 0x2208	@ 00125c40 dcf6e2fa
.org 0x125c44
	movs r1, #187	@ 00125c44 bb21
.org 0x125c46
	lsls r1, r1, #2	@ 00125c46 8900
.org 0x125c48
	mov r0, r9	@ 00125c48 4846
.org 0x125c4a
	strh r1, [r0, #8]	@ 00125c4a 0181
.org 0x125c4c
	movs r0, #6	@ 00125c4c 0620
.org 0x125c4e
	strh r0, [r6, #8]	@ 00125c4e 3081
.org 0x125c50
	ldr r2, [pc, #400]	@ 00125c50 644a
.org 0x125c52
	ldrh r0, [r2, #6]	@ 00125c52 d088
.org 0x125c54
	lsrs r0, r0, #6	@ 00125c54 8009
.org 0x125c56
	subs r1, r1, r0	@ 00125c56 091a
.org 0x125c58
	lsls r1, r1, #5	@ 00125c58 4901
.org 0x125c5a
	movs r0, #128	@ 00125c5a 8020
.org 0x125c5c
	lsls r0, r0, #9	@ 00125c5c 4002
.org 0x125c5e
	adds r1, r1, r0	@ 00125c5e 0918
.org 0x125c60
	adds r0, r2, #0	@ 00125c60 101c
.org 0x125c62
	bl 0x1d30	@ 00125c62 dcf665f8
.org 0x125c66
	ldrh r1, [r6, #8]	@ 00125c66 3189
.org 0x125c68
	ldr r2, [pc, #380]	@ 00125c68 5f4a
.org 0x125c6a
	ldrb r0, [r2, #7]	@ 00125c6a d079
.org 0x125c6c
	subs r1, r1, r0	@ 00125c6c 091a
.org 0x125c6e
	lsls r1, r1, #5	@ 00125c6e 4901
.org 0x125c70
	add r1, sl	@ 00125c70 5144
.org 0x125c72
	adds r0, r2, #0	@ 00125c72 101c
.org 0x125c74
	bl 0x2208	@ 00125c74 dcf6c8fa
.org 0x125c78
	movs r4, #247	@ 00125c78 f724
.org 0x125c7a
	lsls r5, r4, #1	@ 00125c7a 6500
.org 0x125c7c
	mov r0, r9	@ 00125c7c 4846
.org 0x125c7e
	adds r1, r0, r5	@ 00125c7e 4119
.org 0x125c80
	ldr r0, [pc, #360]	@ 00125c80 5a48
.org 0x125c82
	strh r0, [r1, #0]	@ 00125c82 0880
.org 0x125c84
	adds r5, r6, r5	@ 00125c84 7519
.org 0x125c86
	movs r2, #10	@ 00125c86 0a22
.org 0x125c88
	strh r2, [r5, #0]	@ 00125c88 2a80
.org 0x125c8a
	lsls r4, r4, #4	@ 00125c8a 2401
.org 0x125c8c
	adds r0, #7	@ 00125c8c 0730
.org 0x125c8e
	adds r4, r4, r0	@ 00125c8e 2418
.org 0x125c90
	mov r2, r8	@ 00125c90 4246
.org 0x125c92
	adds r0, r4, r2	@ 00125c92 a018
.org 0x125c94
	ldrh r1, [r1, #0]	@ 00125c94 0988
.org 0x125c96
	ldrh r2, [r0, #6]	@ 00125c96 c288
.org 0x125c98
	lsrs r2, r2, #6	@ 00125c98 9209
.org 0x125c9a
	subs r1, r1, r2	@ 00125c9a 891a
.org 0x125c9c
	lsls r1, r1, #5	@ 00125c9c 4901
.org 0x125c9e
	movs r2, #128	@ 00125c9e 8022
.org 0x125ca0
	lsls r2, r2, #9	@ 00125ca0 5202
.org 0x125ca2
	adds r1, r1, r2	@ 00125ca2 8918
.org 0x125ca4
	bl 0x1d30	@ 00125ca4 dcf644f8
.org 0x125ca8
	adds r4, r4, r7	@ 00125ca8 e419
.org 0x125caa
	ldrh r1, [r5, #0]	@ 00125caa 2988
.org 0x125cac
	ldrb r0, [r4, #7]	@ 00125cac e079
.org 0x125cae
	subs r1, r1, r0	@ 00125cae 091a
.org 0x125cb0
	lsls r1, r1, #5	@ 00125cb0 4901
.org 0x125cb2
	add r1, sl	@ 00125cb2 5144
.org 0x125cb4
	adds r0, r4, #0	@ 00125cb4 201c
.org 0x125cb6
	bl 0x2208	@ 00125cb6 dcf6a7fa
.org 0x125cba
	movs r0, #206	@ 00125cba ce20
.org 0x125cbc
	add r9, r0	@ 00125cbc 8144
.org 0x125cbe
	movs r1, #234	@ 00125cbe ea21
.org 0x125cc0
	lsls r1, r1, #2	@ 00125cc0 8900
.org 0x125cc2
	mov r2, r9	@ 00125cc2 4a46
.org 0x125cc4
	strh r1, [r2, #0]	@ 00125cc4 1180
.org 0x125cc6
	adds r6, #206	@ 00125cc6 ce36
.org 0x125cc8
	movs r0, #10	@ 00125cc8 0a20
.org 0x125cca
	strh r0, [r6, #0]	@ 00125cca 3080
.org 0x125ccc
	ldr r4, [pc, #288]	@ 00125ccc 484c
.org 0x125cce
	add r8, r4	@ 00125cce a044
.org 0x125cd0
	mov r2, r8	@ 00125cd0 4246
.org 0x125cd2
	ldrh r0, [r2, #6]	@ 00125cd2 d088
.org 0x125cd4
	lsrs r0, r0, #6	@ 00125cd4 8009
.org 0x125cd6
	subs r1, r1, r0	@ 00125cd6 091a
.org 0x125cd8
	lsls r1, r1, #5	@ 00125cd8 4901
.org 0x125cda
	movs r0, #128	@ 00125cda 8020
.org 0x125cdc
	lsls r0, r0, #9	@ 00125cdc 4002
.org 0x125cde
	adds r1, r1, r0	@ 00125cde 0918
.org 0x125ce0
	mov r0, r8	@ 00125ce0 4046
.org 0x125ce2
	bl 0x1d30	@ 00125ce2 dcf625f8
.org 0x125ce6
	adds r4, r4, r7	@ 00125ce6 e419
.org 0x125ce8
	ldrh r1, [r6, #0]	@ 00125ce8 3188
.org 0x125cea
	ldrb r0, [r4, #7]	@ 00125cea e079
.org 0x125cec
	subs r1, r1, r0	@ 00125cec 091a
.org 0x125cee
	lsls r1, r1, #5	@ 00125cee 4901
.org 0x125cf0
	add r1, sl	@ 00125cf0 5144
.org 0x125cf2
	adds r0, r4, #0	@ 00125cf2 201c
.org 0x125cf4
	bl 0x2208	@ 00125cf4 dcf688fa
.org 0x125cf8
	movs r1, #180	@ 00125cf8 b421
.org 0x125cfa
	lsls r1, r1, #9	@ 00125cfa 4902
.org 0x125cfc
	str r1, [sp, #4]	@ 00125cfc 0191
.org 0x125cfe
	movs r0, #220	@ 00125cfe dc20
.org 0x125d00
	lsls r0, r0, #8	@ 00125d00 0002
.org 0x125d02
	str r0, [sp, #8]	@ 00125d02 0290
.org 0x125d04
	add r0, sp, #4	@ 00125d04 01a8
.org 0x125d06
	bl 0x2f190	@ 00125d06 09f743fa
.org 0x125d0a
	ldr r2, [sp, #12]	@ 00125d0a 039a
.org 0x125d0c
	ldr r1, [pc, #228]	@ 00125d0c 3949
.org 0x125d0e
	adds r4, r2, r1	@ 00125d0e 5418
.org 0x125d10
	str r0, [r4, #0]	@ 00125d10 2060
.org 0x125d12
	movs r3, #240	@ 00125d12 f023
.org 0x125d14
	lsls r3, r3, #9	@ 00125d14 5b02
.org 0x125d16
	ldr r1, [pc, #224]	@ 00125d16 3849
.org 0x125d18
	str r1, [sp, #0]	@ 00125d18 0091
.org 0x125d1a
	movs r1, #0	@ 00125d1a 0021
.org 0x125d1c
	movs r2, #0	@ 00125d1c 0022
.org 0x125d1e
	bl 0x2cbec	@ 00125d1e 06f765ff
.org 0x125d22
	ldr r1, [pc, #216]	@ 00125d22 3649
.org 0x125d24
	ldr r0, [r4, #0]	@ 00125d24 2068
.org 0x125d26
	str r0, [r1, #0]	@ 00125d26 0860
.org 0x125d28
	ldr r1, [pc, #212]	@ 00125d28 3549
.org 0x125d2a
	bl 0x382b0	@ 00125d2a 12f7c1fa
.org 0x125d2e
	ldr r0, [r4, #0]	@ 00125d2e 2068
.org 0x125d30
	adds r0, #76	@ 00125d30 4c30
.org 0x125d32
	movs r2, #1	@ 00125d32 0122
.org 0x125d34
	strb r2, [r0, #0]	@ 00125d34 0270
.org 0x125d36
	ldr r1, [r4, #0]	@ 00125d36 2168
.org 0x125d38
	adds r1, #74	@ 00125d38 4a31
.org 0x125d3a
	ldrb r0, [r1, #0]	@ 00125d3a 0878
.org 0x125d3c
	movs r2, #16	@ 00125d3c 1022
.org 0x125d3e
	orrs r0, r2	@ 00125d3e 1043
.org 0x125d40
	strb r0, [r1, #0]	@ 00125d40 0870
.org 0x125d42
	ldr r1, [r4, #0]	@ 00125d42 2168
.org 0x125d44
	ldrb r0, [r1, #10]	@ 00125d44 887a
.org 0x125d46
	orrs r2, r0	@ 00125d46 0243
.org 0x125d48
	strb r2, [r1, #10]	@ 00125d48 8a72
.org 0x125d4a
	movs r0, #0	@ 00125d4a 0020
.org 0x125d4c
	str r0, [r4, #8]	@ 00125d4c a060
.org 0x125d4e
	str r0, [r4, #12]	@ 00125d4e e060
.org 0x125d50
	ldr r0, [pc, #176]	@ 00125d50 2c48
.org 0x125d52
	ldr r0, [r0, #48]	@ 00125d52 006b
.org 0x125d54
	str r0, [r4, #16]	@ 00125d54 2061
.org 0x125d56
	movs r0, #225	@ 00125d56 e120
.org 0x125d58
	lsls r0, r0, #4	@ 00125d58 0001
.org 0x125d5a
	str r0, [r4, #20]	@ 00125d5a 6061
.org 0x125d5c
	movs r1, #0	@ 00125d5c 0021
.org 0x125d5e
	strb r1, [r4, #24]	@ 00125d5e 2176
.org 0x125d60
	strb r1, [r4, #25]	@ 00125d60 6176
.org 0x125d62
	strb r1, [r4, #26]	@ 00125d62 a176
.org 0x125d64
	strb r1, [r4, #27]	@ 00125d64 e176
.org 0x125d66
	strb r1, [r4, #28]	@ 00125d66 2177
.org 0x125d68
	strb r1, [r4, #29]	@ 00125d68 6177
.org 0x125d6a
	strb r1, [r4, #30]	@ 00125d6a a177
.org 0x125d6c
	strb r1, [r4, #31]	@ 00125d6c e177
.org 0x125d6e
	ldr r2, [sp, #12]	@ 00125d6e 039a
.org 0x125d70
	ldr r1, [pc, #148]	@ 00125d70 2549
.org 0x125d72
	adds r0, r2, r1	@ 00125d72 5018
.org 0x125d74
	movs r2, #0	@ 00125d74 0022
.org 0x125d76
	strb r2, [r0, #0]	@ 00125d76 0270
.org 0x125d78
	ldr r1, [sp, #12]	@ 00125d78 0399
.org 0x125d7a
	ldr r2, [pc, #144]	@ 00125d7a 244a
.org 0x125d7c
	adds r0, r1, r2	@ 00125d7c 8818
.org 0x125d7e
	movs r1, #0	@ 00125d7e 0021
.org 0x125d80
	strb r1, [r0, #0]	@ 00125d80 0170
.org 0x125d82
	ldr r2, [sp, #12]	@ 00125d82 039a
.org 0x125d84
	ldr r1, [pc, #136]	@ 00125d84 2249
.org 0x125d86
	adds r0, r2, r1	@ 00125d86 5018
.org 0x125d88
	movs r2, #0	@ 00125d88 0022
.org 0x125d8a
	strb r2, [r0, #0]	@ 00125d8a 0270
.org 0x125d8c
	ldr r1, [sp, #12]	@ 00125d8c 0399
.org 0x125d8e
	ldr r2, [pc, #132]	@ 00125d8e 214a
.org 0x125d90
	adds r0, r1, r2	@ 00125d90 8818
.org 0x125d92
	movs r1, #0	@ 00125d92 0021
.org 0x125d94
	strb r1, [r0, #0]	@ 00125d94 0170
.org 0x125d96
	movs r2, #0	@ 00125d96 0022
.org 0x125d98
	str r2, [r4, #36]	@ 00125d98 6262
.org 0x125d9a
	str r2, [r4, #40]	@ 00125d9a a262
.org 0x125d9c
	str r2, [r4, #44]	@ 00125d9c e262
.org 0x125d9e
	str r2, [r4, #48]	@ 00125d9e 2263
.org 0x125da0
	ldr r1, [sp, #16]	@ 00125da0 0499
.org 0x125da2
	ldr r0, [r1, #0]	@ 00125da2 0868
.org 0x125da4
	ldr r2, [pc, #112]	@ 00125da4 1c4a
.org 0x125da6
	adds r0, r0, r2	@ 00125da6 8018
.org 0x125da8
	str r0, [sp, #4]	@ 00125da8 0190
.org 0x125daa
	ldr r0, [r1, #4]	@ 00125daa 4868
.org 0x125dac
	str r0, [sp, #8]	@ 00125dac 0290
.org 0x125dae
	add r0, sp, #4	@ 00125dae 01a8
.org 0x125db0
	movs r1, #0	@ 00125db0 0021
.org 0x125db2
	ldr r2, [sp, #12]	@ 00125db2 039a
.org 0x125db4
	bl 0x105418	@ 00125db4 dff730fb
.org 0x125db8
	movs r0, #132	@ 00125db8 8420
.org 0x125dba
	bl 0x2a88	@ 00125dba dcf665fe
.org 0x125dbe
	add sp, #20	@ 00125dbe 05b0
.org 0x125dc0
	pop {r3, r4, r5}	@ 00125dc0 38bc
.org 0x125dc2
	mov r8, r3	@ 00125dc2 9846
.org 0x125dc4
	mov r9, r4	@ 00125dc4 a146
.org 0x125dc6
	mov sl, r5	@ 00125dc6 aa46
.org 0x125dc8
	pop {r4, r5, r6, r7}	@ 00125dc8 f0bc
.org 0x125dca
	pop {r0}	@ 00125dca 01bc
.org 0x125dcc
	bx r0	@ 00125dcc 0047
