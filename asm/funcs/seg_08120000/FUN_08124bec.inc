@ FUN_08124bec  entry 0x08124bec  size 690
.thumb
.org 0x124bec
FUN_08124bec:
	push {r4, r5, r6, r7, lr}	@ 00124bec f0b5
.org 0x124bee
	mov r7, sl	@ 00124bee 5746
.org 0x124bf0
	mov r6, r9	@ 00124bf0 4e46
.org 0x124bf2
	mov r5, r8	@ 00124bf2 4546
.org 0x124bf4
	push {r5, r6, r7}	@ 00124bf4 e0b4
.org 0x124bf6
	sub sp, #16	@ 00124bf6 84b0
.org 0x124bf8
	str r0, [sp, #12]	@ 00124bf8 0390
.org 0x124bfa
	ldr r2, [pc, #676]	@ 00124bfa a94a
.org 0x124bfc
	adds r1, r0, r2	@ 00124bfc 8118
.org 0x124bfe
	movs r0, #180	@ 00124bfe b420
.org 0x124c00
	lsls r0, r0, #9	@ 00124c00 4002
.org 0x124c02
	str r0, [r1, #0]	@ 00124c02 0860
.org 0x124c04
	movs r0, #240	@ 00124c04 f020
.org 0x124c06
	lsls r0, r0, #8	@ 00124c06 0002
.org 0x124c08
	str r0, [r1, #4]	@ 00124c08 4860
.org 0x124c0a
	movs r0, #22	@ 00124c0a 1620
.org 0x124c0c
	bl 0x6a94	@ 00124c0c e1f642ff
.org 0x124c10
	ldr r6, [pc, #656]	@ 00124c10 a44e
.org 0x124c12
	ldr r1, [pc, #660]	@ 00124c12 a549
.org 0x124c14
	mov r9, r1	@ 00124c14 8946
.org 0x124c16
	ldrh r1, [r1, #0]	@ 00124c16 0988
.org 0x124c18
	ldrh r0, [r6, #6]	@ 00124c18 f088
.org 0x124c1a
	lsrs r0, r0, #6	@ 00124c1a 8009
.org 0x124c1c
	subs r1, r1, r0	@ 00124c1c 091a
.org 0x124c1e
	lsls r1, r1, #5	@ 00124c1e 4901
.org 0x124c20
	movs r2, #128	@ 00124c20 8022
.org 0x124c22
	lsls r2, r2, #9	@ 00124c22 5202
.org 0x124c24
	adds r1, r1, r2	@ 00124c24 8918
.org 0x124c26
	adds r0, r6, #0	@ 00124c26 301c
.org 0x124c28
	bl 0x1d30	@ 00124c28 ddf682f8
.org 0x124c2c
	ldr r7, [pc, #636]	@ 00124c2c 9f4f
.org 0x124c2e
	ldr r0, [pc, #640]	@ 00124c2e a048
.org 0x124c30
	mov r8, r0	@ 00124c30 8046
.org 0x124c32
	ldrh r1, [r0, #0]	@ 00124c32 0188
.org 0x124c34
	ldrb r0, [r7, #7]	@ 00124c34 f879
.org 0x124c36
	subs r1, r1, r0	@ 00124c36 091a
.org 0x124c38
	lsls r1, r1, #5	@ 00124c38 4901
.org 0x124c3a
	movs r2, #128	@ 00124c3a 8022
.org 0x124c3c
	lsls r2, r2, #2	@ 00124c3c 9200
.org 0x124c3e
	mov sl, r2	@ 00124c3e 9246
.org 0x124c40
	add r1, sl	@ 00124c40 5144
.org 0x124c42
	adds r0, r7, #0	@ 00124c42 381c
.org 0x124c44
	bl 0x2208	@ 00124c44 ddf6e0fa
.org 0x124c48
	adds r0, r6, #0	@ 00124c48 301c
.org 0x124c4a
	adds r0, #20	@ 00124c4a 1430
.org 0x124c4c
	mov r2, r9	@ 00124c4c 4a46
.org 0x124c4e
	ldrh r1, [r2, #2]	@ 00124c4e 5188
.org 0x124c50
	ldrh r2, [r0, #6]	@ 00124c50 c288
.org 0x124c52
	lsrs r2, r2, #6	@ 00124c52 9209
.org 0x124c54
	subs r1, r1, r2	@ 00124c54 891a
.org 0x124c56
	lsls r1, r1, #5	@ 00124c56 4901
.org 0x124c58
	movs r2, #128	@ 00124c58 8022
.org 0x124c5a
	lsls r2, r2, #9	@ 00124c5a 5202
.org 0x124c5c
	adds r1, r1, r2	@ 00124c5c 8918
.org 0x124c5e
	bl 0x1d30	@ 00124c5e ddf667f8
.org 0x124c62
	adds r0, r7, #0	@ 00124c62 381c
.org 0x124c64
	adds r0, #20	@ 00124c64 1430
.org 0x124c66
	mov r2, r8	@ 00124c66 4246
.org 0x124c68
	ldrh r1, [r2, #2]	@ 00124c68 5188
.org 0x124c6a
	ldrb r2, [r0, #7]	@ 00124c6a c279
.org 0x124c6c
	subs r1, r1, r2	@ 00124c6c 891a
.org 0x124c6e
	lsls r1, r1, #5	@ 00124c6e 4901
.org 0x124c70
	add r1, sl	@ 00124c70 5144
.org 0x124c72
	bl 0x2208	@ 00124c72 ddf6c9fa
.org 0x124c76
	adds r0, r6, #0	@ 00124c76 301c
.org 0x124c78
	adds r0, #40	@ 00124c78 2830
.org 0x124c7a
	mov r2, r9	@ 00124c7a 4a46
.org 0x124c7c
	ldrh r1, [r2, #4]	@ 00124c7c 9188
.org 0x124c7e
	ldrh r2, [r0, #6]	@ 00124c7e c288
.org 0x124c80
	lsrs r2, r2, #6	@ 00124c80 9209
.org 0x124c82
	subs r1, r1, r2	@ 00124c82 891a
.org 0x124c84
	lsls r1, r1, #5	@ 00124c84 4901
.org 0x124c86
	movs r2, #128	@ 00124c86 8022
.org 0x124c88
	lsls r2, r2, #9	@ 00124c88 5202
.org 0x124c8a
	adds r1, r1, r2	@ 00124c8a 8918
.org 0x124c8c
	bl 0x1d30	@ 00124c8c ddf650f8
.org 0x124c90
	adds r0, r7, #0	@ 00124c90 381c
.org 0x124c92
	adds r0, #40	@ 00124c92 2830
.org 0x124c94
	mov r2, r8	@ 00124c94 4246
.org 0x124c96
	ldrh r1, [r2, #4]	@ 00124c96 9188
.org 0x124c98
	ldrb r2, [r0, #7]	@ 00124c98 c279
.org 0x124c9a
	subs r1, r1, r2	@ 00124c9a 891a
.org 0x124c9c
	lsls r1, r1, #5	@ 00124c9c 4901
.org 0x124c9e
	add r1, sl	@ 00124c9e 5144
.org 0x124ca0
	bl 0x2208	@ 00124ca0 ddf6b2fa
.org 0x124ca4
	adds r0, r6, #0	@ 00124ca4 301c
.org 0x124ca6
	adds r0, #80	@ 00124ca6 5030
.org 0x124ca8
	mov r2, r9	@ 00124ca8 4a46
.org 0x124caa
	ldrh r1, [r2, #8]	@ 00124caa 1189
.org 0x124cac
	ldrh r2, [r0, #6]	@ 00124cac c288
.org 0x124cae
	lsrs r2, r2, #6	@ 00124cae 9209
.org 0x124cb0
	subs r1, r1, r2	@ 00124cb0 891a
.org 0x124cb2
	lsls r1, r1, #5	@ 00124cb2 4901
.org 0x124cb4
	movs r2, #128	@ 00124cb4 8022
.org 0x124cb6
	lsls r2, r2, #9	@ 00124cb6 5202
.org 0x124cb8
	adds r1, r1, r2	@ 00124cb8 8918
.org 0x124cba
	bl 0x1d30	@ 00124cba ddf639f8
.org 0x124cbe
	adds r0, r7, #0	@ 00124cbe 381c
.org 0x124cc0
	adds r0, #80	@ 00124cc0 5030
.org 0x124cc2
	mov r2, r8	@ 00124cc2 4246
.org 0x124cc4
	ldrh r1, [r2, #8]	@ 00124cc4 1189
.org 0x124cc6
	ldrb r2, [r0, #7]	@ 00124cc6 c279
.org 0x124cc8
	subs r1, r1, r2	@ 00124cc8 891a
.org 0x124cca
	lsls r1, r1, #5	@ 00124cca 4901
.org 0x124ccc
	add r1, sl	@ 00124ccc 5144
.org 0x124cce
	bl 0x2208	@ 00124cce ddf69bfa
.org 0x124cd2
	adds r0, r6, #0	@ 00124cd2 301c
.org 0x124cd4
	adds r0, #100	@ 00124cd4 6430
.org 0x124cd6
	mov r2, r9	@ 00124cd6 4a46
.org 0x124cd8
	ldrh r1, [r2, #10]	@ 00124cd8 5189
.org 0x124cda
	ldrh r2, [r0, #6]	@ 00124cda c288
.org 0x124cdc
	lsrs r2, r2, #6	@ 00124cdc 9209
.org 0x124cde
	subs r1, r1, r2	@ 00124cde 891a
.org 0x124ce0
	lsls r1, r1, #5	@ 00124ce0 4901
.org 0x124ce2
	movs r2, #128	@ 00124ce2 8022
.org 0x124ce4
	lsls r2, r2, #9	@ 00124ce4 5202
.org 0x124ce6
	adds r1, r1, r2	@ 00124ce6 8918
.org 0x124ce8
	bl 0x1d30	@ 00124ce8 ddf622f8
.org 0x124cec
	adds r0, r7, #0	@ 00124cec 381c
.org 0x124cee
	adds r0, #100	@ 00124cee 6430
.org 0x124cf0
	mov r2, r8	@ 00124cf0 4246
.org 0x124cf2
	ldrh r1, [r2, #10]	@ 00124cf2 5189
.org 0x124cf4
	ldrb r2, [r0, #7]	@ 00124cf4 c279
.org 0x124cf6
	subs r1, r1, r2	@ 00124cf6 891a
.org 0x124cf8
	lsls r1, r1, #5	@ 00124cf8 4901
.org 0x124cfa
	add r1, sl	@ 00124cfa 5144
.org 0x124cfc
	bl 0x2208	@ 00124cfc ddf684fa
.org 0x124d00
	movs r4, #189	@ 00124d00 bd24
.org 0x124d02
	lsls r5, r4, #1	@ 00124d02 6500
.org 0x124d04
	mov r1, r9	@ 00124d04 4946
.org 0x124d06
	adds r0, r1, r5	@ 00124d06 4819
.org 0x124d08
	mov r2, sl	@ 00124d08 5246
.org 0x124d0a
	strh r2, [r0, #0]	@ 00124d0a 0280
.org 0x124d0c
	add r5, r8	@ 00124d0c 4544
.org 0x124d0e
	movs r0, #4	@ 00124d0e 0420
.org 0x124d10
	strh r0, [r5, #0]	@ 00124d10 2880
.org 0x124d12
	lsls r4, r4, #4	@ 00124d12 2401
.org 0x124d14
	movs r1, #189	@ 00124d14 bd21
.org 0x124d16
	lsls r1, r1, #2	@ 00124d16 8900
.org 0x124d18
	adds r4, r4, r1	@ 00124d18 6418
.org 0x124d1a
	adds r0, r4, r6	@ 00124d1a a019
.org 0x124d1c
	ldrh r1, [r0, #6]	@ 00124d1c c188
.org 0x124d1e
	lsrs r1, r1, #6	@ 00124d1e 8909
.org 0x124d20
	mov r2, sl	@ 00124d20 5246
.org 0x124d22
	subs r1, r2, r1	@ 00124d22 511a
.org 0x124d24
	lsls r1, r1, #5	@ 00124d24 4901
.org 0x124d26
	movs r2, #128	@ 00124d26 8022
.org 0x124d28
	lsls r2, r2, #9	@ 00124d28 5202
.org 0x124d2a
	adds r1, r1, r2	@ 00124d2a 8918
.org 0x124d2c
	bl 0x1d30	@ 00124d2c ddf600f8
.org 0x124d30
	adds r4, r4, r7	@ 00124d30 e419
.org 0x124d32
	ldrh r1, [r5, #0]	@ 00124d32 2988
.org 0x124d34
	ldrb r0, [r4, #7]	@ 00124d34 e079
.org 0x124d36
	subs r1, r1, r0	@ 00124d36 091a
.org 0x124d38
	lsls r1, r1, #5	@ 00124d38 4901
.org 0x124d3a
	add r1, sl	@ 00124d3a 5144
.org 0x124d3c
	adds r0, r4, #0	@ 00124d3c 201c
.org 0x124d3e
	bl 0x2208	@ 00124d3e ddf663fa
.org 0x124d42
	mov r0, r9	@ 00124d42 4846
.org 0x124d44
	adds r0, #144	@ 00124d44 9030
.org 0x124d46
	movs r1, #153	@ 00124d46 9921
.org 0x124d48
	lsls r1, r1, #2	@ 00124d48 8900
.org 0x124d4a
	strh r1, [r0, #0]	@ 00124d4a 0180
.org 0x124d4c
	mov r5, r8	@ 00124d4c 4546
.org 0x124d4e
	adds r5, #144	@ 00124d4e 9035
.org 0x124d50
	movs r0, #5	@ 00124d50 0520
.org 0x124d52
	strh r0, [r5, #0]	@ 00124d52 2880
.org 0x124d54
	movs r4, #180	@ 00124d54 b424
.org 0x124d56
	lsls r4, r4, #3	@ 00124d56 e400
.org 0x124d58
	adds r0, r4, r6	@ 00124d58 a019
.org 0x124d5a
	ldrh r2, [r0, #6]	@ 00124d5a c288
.org 0x124d5c
	lsrs r2, r2, #6	@ 00124d5c 9209
.org 0x124d5e
	subs r1, r1, r2	@ 00124d5e 891a
.org 0x124d60
	lsls r1, r1, #5	@ 00124d60 4901
.org 0x124d62
	movs r2, #128	@ 00124d62 8022
.org 0x124d64
	lsls r2, r2, #9	@ 00124d64 5202
.org 0x124d66
	adds r1, r1, r2	@ 00124d66 8918
.org 0x124d68
	bl 0x1d30	@ 00124d68 dcf6e2ff
.org 0x124d6c
	adds r4, r4, r7	@ 00124d6c e419
.org 0x124d6e
	ldrh r1, [r5, #0]	@ 00124d6e 2988
.org 0x124d70
	ldrb r0, [r4, #7]	@ 00124d70 e079
.org 0x124d72
	subs r1, r1, r0	@ 00124d72 091a
.org 0x124d74
	lsls r1, r1, #5	@ 00124d74 4901
.org 0x124d76
	add r1, sl	@ 00124d76 5144
.org 0x124d78
	adds r0, r4, #0	@ 00124d78 201c
.org 0x124d7a
	bl 0x2208	@ 00124d7a ddf645fa
.org 0x124d7e
	movs r4, #247	@ 00124d7e f724
.org 0x124d80
	lsls r5, r4, #1	@ 00124d80 6500
.org 0x124d82
	mov r0, r9	@ 00124d82 4846
.org 0x124d84
	adds r1, r0, r5	@ 00124d84 4119
.org 0x124d86
	ldr r0, [pc, #300]	@ 00124d86 4b48
.org 0x124d88
	strh r0, [r1, #0]	@ 00124d88 0880
.org 0x124d8a
	add r5, r8	@ 00124d8a 4544
.org 0x124d8c
	movs r2, #10	@ 00124d8c 0a22
.org 0x124d8e
	strh r2, [r5, #0]	@ 00124d8e 2a80
.org 0x124d90
	lsls r4, r4, #4	@ 00124d90 2401
.org 0x124d92
	adds r0, #7	@ 00124d92 0730
.org 0x124d94
	adds r4, r4, r0	@ 00124d94 2418
.org 0x124d96
	adds r0, r4, r6	@ 00124d96 a019
.org 0x124d98
	ldrh r1, [r1, #0]	@ 00124d98 0988
.org 0x124d9a
	ldrh r2, [r0, #6]	@ 00124d9a c288
.org 0x124d9c
	lsrs r2, r2, #6	@ 00124d9c 9209
.org 0x124d9e
	subs r1, r1, r2	@ 00124d9e 891a
.org 0x124da0
	lsls r1, r1, #5	@ 00124da0 4901
.org 0x124da2
	movs r2, #128	@ 00124da2 8022
.org 0x124da4
	lsls r2, r2, #9	@ 00124da4 5202
.org 0x124da6
	adds r1, r1, r2	@ 00124da6 8918
.org 0x124da8
	bl 0x1d30	@ 00124da8 dcf6c2ff
.org 0x124dac
	adds r4, r4, r7	@ 00124dac e419
.org 0x124dae
	ldrh r1, [r5, #0]	@ 00124dae 2988
.org 0x124db0
	ldrb r0, [r4, #7]	@ 00124db0 e079
.org 0x124db2
	subs r1, r1, r0	@ 00124db2 091a
.org 0x124db4
	lsls r1, r1, #5	@ 00124db4 4901
.org 0x124db6
	add r1, sl	@ 00124db6 5144
.org 0x124db8
	adds r0, r4, #0	@ 00124db8 201c
.org 0x124dba
	bl 0x2208	@ 00124dba ddf625fa
.org 0x124dbe
	movs r0, #206	@ 00124dbe ce20
.org 0x124dc0
	add r9, r0	@ 00124dc0 8144
.org 0x124dc2
	movs r1, #234	@ 00124dc2 ea21
.org 0x124dc4
	lsls r1, r1, #2	@ 00124dc4 8900
.org 0x124dc6
	mov r2, r9	@ 00124dc6 4a46
.org 0x124dc8
	strh r1, [r2, #0]	@ 00124dc8 1180
.org 0x124dca
	add r8, r0	@ 00124dca 8044
.org 0x124dcc
	movs r2, #10	@ 00124dcc 0a22
.org 0x124dce
	mov r0, r8	@ 00124dce 4046
.org 0x124dd0
	strh r2, [r0, #0]	@ 00124dd0 0280
.org 0x124dd2
	ldr r4, [pc, #228]	@ 00124dd2 394c
.org 0x124dd4
	adds r6, r4, r6	@ 00124dd4 a619
.org 0x124dd6
	ldrh r0, [r6, #6]	@ 00124dd6 f088
.org 0x124dd8
	lsrs r0, r0, #6	@ 00124dd8 8009
.org 0x124dda
	subs r1, r1, r0	@ 00124dda 091a
.org 0x124ddc
	lsls r1, r1, #5	@ 00124ddc 4901
.org 0x124dde
	movs r0, #128	@ 00124dde 8020
.org 0x124de0
	lsls r0, r0, #9	@ 00124de0 4002
.org 0x124de2
	adds r1, r1, r0	@ 00124de2 0918
.org 0x124de4
	adds r0, r6, #0	@ 00124de4 301c
.org 0x124de6
	bl 0x1d30	@ 00124de6 dcf6a3ff
.org 0x124dea
	adds r4, r4, r7	@ 00124dea e419
.org 0x124dec
	mov r2, r8	@ 00124dec 4246
.org 0x124dee
	ldrh r1, [r2, #0]	@ 00124dee 1188
.org 0x124df0
	ldrb r0, [r4, #7]	@ 00124df0 e079
.org 0x124df2
	subs r1, r1, r0	@ 00124df2 091a
.org 0x124df4
	lsls r1, r1, #5	@ 00124df4 4901
.org 0x124df6
	add r1, sl	@ 00124df6 5144
.org 0x124df8
	adds r0, r4, #0	@ 00124df8 201c
.org 0x124dfa
	bl 0x2208	@ 00124dfa ddf605fa
.org 0x124dfe
	movs r0, #180	@ 00124dfe b420
.org 0x124e00
	lsls r0, r0, #9	@ 00124e00 4002
.org 0x124e02
	str r0, [sp, #4]	@ 00124e02 0190
.org 0x124e04
	movs r0, #220	@ 00124e04 dc20
.org 0x124e06
	lsls r0, r0, #8	@ 00124e06 0002
.org 0x124e08
	str r0, [sp, #8]	@ 00124e08 0290
.org 0x124e0a
	add r0, sp, #4	@ 00124e0a 01a8
.org 0x124e0c
	bl 0x2f190	@ 00124e0c 0af7c0f9
.org 0x124e10
	ldr r1, [sp, #12]	@ 00124e10 0399
.org 0x124e12
	ldr r2, [pc, #168]	@ 00124e12 2a4a
.org 0x124e14
	adds r4, r1, r2	@ 00124e14 8c18
.org 0x124e16
	str r0, [r4, #0]	@ 00124e16 2060
.org 0x124e18
	ldr r3, [pc, #164]	@ 00124e18 294b
.org 0x124e1a
	str r3, [sp, #0]	@ 00124e1a 0093
.org 0x124e1c
	movs r1, #0	@ 00124e1c 0021
.org 0x124e1e
	movs r2, #0	@ 00124e1e 0022
.org 0x124e20
	bl 0x2cbec	@ 00124e20 07f7e4fe
.org 0x124e24
	ldr r1, [pc, #156]	@ 00124e24 2749
.org 0x124e26
	ldr r0, [r4, #0]	@ 00124e26 2068
.org 0x124e28
	str r0, [r1, #0]	@ 00124e28 0860
.org 0x124e2a
	ldr r1, [pc, #156]	@ 00124e2a 2749
.org 0x124e2c
	bl 0x382b0	@ 00124e2c 13f740fa
.org 0x124e30
	movs r0, #0	@ 00124e30 0020
.org 0x124e32
	str r0, [r4, #8]	@ 00124e32 a060
.org 0x124e34
	str r0, [r4, #12]	@ 00124e34 e060
.org 0x124e36
	ldr r0, [pc, #148]	@ 00124e36 2548
.org 0x124e38
	ldr r0, [r0, #40]	@ 00124e38 806a
.org 0x124e3a
	str r0, [r4, #16]	@ 00124e3a 2061
.org 0x124e3c
	movs r0, #225	@ 00124e3c e120
.org 0x124e3e
	lsls r0, r0, #4	@ 00124e3e 0001
.org 0x124e40
	str r0, [r4, #20]	@ 00124e40 6061
.org 0x124e42
	movs r1, #0	@ 00124e42 0021
.org 0x124e44
	strb r1, [r4, #24]	@ 00124e44 2176
.org 0x124e46
	strb r1, [r4, #25]	@ 00124e46 6176
.org 0x124e48
	strb r1, [r4, #26]	@ 00124e48 a176
.org 0x124e4a
	strb r1, [r4, #27]	@ 00124e4a e176
.org 0x124e4c
	strb r1, [r4, #28]	@ 00124e4c 2177
.org 0x124e4e
	strb r1, [r4, #29]	@ 00124e4e 6177
.org 0x124e50
	strb r1, [r4, #30]	@ 00124e50 a177
.org 0x124e52
	strb r1, [r4, #31]	@ 00124e52 e177
.org 0x124e54
	ldr r2, [sp, #12]	@ 00124e54 039a
.org 0x124e56
	ldr r1, [pc, #120]	@ 00124e56 1e49
.org 0x124e58
	adds r0, r2, r1	@ 00124e58 5018
.org 0x124e5a
	movs r2, #0	@ 00124e5a 0022
.org 0x124e5c
	strb r2, [r0, #0]	@ 00124e5c 0270
.org 0x124e5e
	ldr r1, [sp, #12]	@ 00124e5e 0399
.org 0x124e60
	ldr r2, [pc, #112]	@ 00124e60 1c4a
.org 0x124e62
	adds r0, r1, r2	@ 00124e62 8818
.org 0x124e64
	movs r1, #0	@ 00124e64 0021
.org 0x124e66
	strb r1, [r0, #0]	@ 00124e66 0170
.org 0x124e68
	ldr r2, [sp, #12]	@ 00124e68 039a
.org 0x124e6a
	ldr r1, [pc, #108]	@ 00124e6a 1b49
.org 0x124e6c
	adds r0, r2, r1	@ 00124e6c 5018
.org 0x124e6e
	movs r2, #0	@ 00124e6e 0022
.org 0x124e70
	strb r2, [r0, #0]	@ 00124e70 0270
.org 0x124e72
	ldr r1, [sp, #12]	@ 00124e72 0399
.org 0x124e74
	ldr r2, [pc, #100]	@ 00124e74 194a
.org 0x124e76
	adds r0, r1, r2	@ 00124e76 8818
.org 0x124e78
	movs r1, #0	@ 00124e78 0021
.org 0x124e7a
	strb r1, [r0, #0]	@ 00124e7a 0170
.org 0x124e7c
	movs r2, #0	@ 00124e7c 0022
.org 0x124e7e
	str r2, [r4, #36]	@ 00124e7e 6262
.org 0x124e80
	movs r0, #1	@ 00124e80 0120
.org 0x124e82
	str r0, [r4, #40]	@ 00124e82 a062
.org 0x124e84
	str r2, [r4, #48]	@ 00124e84 2263
.org 0x124e86
	str r2, [r4, #44]	@ 00124e86 e262
.org 0x124e88
	movs r0, #133	@ 00124e88 8520
.org 0x124e8a
	bl 0x2a88	@ 00124e8a ddf6fdfd
.org 0x124e8e
	add sp, #16	@ 00124e8e 04b0
.org 0x124e90
	pop {r3, r4, r5}	@ 00124e90 38bc
.org 0x124e92
	mov r8, r3	@ 00124e92 9846
.org 0x124e94
	mov r9, r4	@ 00124e94 a146
.org 0x124e96
	mov sl, r5	@ 00124e96 aa46
.org 0x124e98
	pop {r4, r5, r6, r7}	@ 00124e98 f0bc
.org 0x124e9a
	pop {r0}	@ 00124e9a 01bc
.org 0x124e9c
	bx r0	@ 00124e9c 0047
