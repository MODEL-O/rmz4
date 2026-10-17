@ FUN_08003be4  entry 0x08003be4  size 1014
.thumb
.org 0x3be4
FUN_08003be4:
	push {r4, r5, r6, r7, lr}	@ 00003be4 f0b5
.org 0x3be6
	mov r7, sl	@ 00003be6 5746
.org 0x3be8
	mov r6, r9	@ 00003be8 4e46
.org 0x3bea
	mov r5, r8	@ 00003bea 4546
.org 0x3bec
	push {r5, r6, r7}	@ 00003bec e0b4
.org 0x3bee
	sub sp, #88	@ 00003bee 96b0
.org 0x3bf0
	str r0, [sp, #0]	@ 00003bf0 0090
.org 0x3bf2
	str r1, [sp, #4]	@ 00003bf2 0191
.org 0x3bf4
	str r2, [sp, #8]	@ 00003bf4 0292
.org 0x3bf6
	ldr r0, [r1, #0]	@ 00003bf6 0868
.org 0x3bf8
	ldr r1, [r1, #4]	@ 00003bf8 4968
.org 0x3bfa
	str r0, [sp, #16]	@ 00003bfa 0490
.org 0x3bfc
	str r1, [sp, #20]	@ 00003bfc 0591
.org 0x3bfe
	ldr r0, [sp, #16]	@ 00003bfe 0498
.org 0x3c00
	movs r1, #240	@ 00003c00 f021
.org 0x3c02
	bl 0x128fb8	@ 00003c02 25f1d9f9
.org 0x3c06
	adds r4, r0, #0	@ 00003c06 041c
.org 0x3c08
	adds r4, #4	@ 00003c08 0434
.org 0x3c0a
	ldr r2, [sp, #0]	@ 00003c0a 009a
.org 0x3c0c
	ldr r5, [r2, #20]	@ 00003c0c 5569
.org 0x3c0e
	adds r4, r5, r4	@ 00003c0e 2c19
.org 0x3c10
	ldr r6, [sp, #20]	@ 00003c10 059e
.org 0x3c12
	adds r0, r6, #0	@ 00003c12 301c
.org 0x3c14
	movs r1, #160	@ 00003c14 a021
.org 0x3c16
	bl 0x128fb8	@ 00003c16 25f1cff9
.org 0x3c1a
	ldrb r1, [r5, #0]	@ 00003c1a 2978
.org 0x3c1c
	muls r0, r1	@ 00003c1c 4843
.org 0x3c1e
	adds r4, r4, r0	@ 00003c1e 2418
.org 0x3c20
	str r4, [sp, #12]	@ 00003c20 0394
.org 0x3c22
	ldr r0, [sp, #16]	@ 00003c22 0498
.org 0x3c24
	movs r1, #240	@ 00003c24 f021
.org 0x3c26
	bl 0x129050	@ 00003c26 25f113fa
.org 0x3c2a
	lsls r0, r0, #12	@ 00003c2a 0003
.org 0x3c2c
	lsrs r0, r0, #16	@ 00003c2c 000c
.org 0x3c2e
	str r0, [sp, #24]	@ 00003c2e 0690
.org 0x3c30
	adds r0, r6, #0	@ 00003c30 301c
.org 0x3c32
	movs r1, #160	@ 00003c32 a021
.org 0x3c34
	bl 0x129050	@ 00003c34 25f10cfa
.org 0x3c38
	lsls r0, r0, #12	@ 00003c38 0003
.org 0x3c3a
	ldrb r2, [r4, #0]	@ 00003c3a 2278
.org 0x3c3c
	lsls r1, r2, #2	@ 00003c3c 9100
.org 0x3c3e
	adds r1, r1, r2	@ 00003c3e 8918
.org 0x3c40
	lsls r2, r1, #4	@ 00003c40 0a01
.org 0x3c42
	subs r2, r2, r1	@ 00003c42 521a
.org 0x3c44
	lsls r2, r2, #2	@ 00003c44 9200
.org 0x3c46
	ldr r7, [sp, #0]	@ 00003c46 009f
.org 0x3c48
	ldr r3, [r7, #16]	@ 00003c48 3b69
.org 0x3c4a
	adds r3, r3, r2	@ 00003c4a 9b18
.org 0x3c4c
	ldr r2, [sp, #24]	@ 00003c4c 069a
.org 0x3c4e
	lsls r1, r2, #16	@ 00003c4e 1104
.org 0x3c50
	asrs r2, r1, #16	@ 00003c50 0a14
.org 0x3c52
	lsls r1, r2, #1	@ 00003c52 5100
.org 0x3c54
	adds r3, r3, r1	@ 00003c54 5b18
.org 0x3c56
	lsrs r7, r0, #16	@ 00003c56 070c
.org 0x3c58
	str r7, [sp, #28]	@ 00003c58 0797
.org 0x3c5a
	asrs r0, r0, #16	@ 00003c5a 0014
.org 0x3c5c
	lsls r1, r0, #4	@ 00003c5c 0101
.org 0x3c5e
	subs r1, r1, r0	@ 00003c5e 091a
.org 0x3c60
	lsls r1, r1, #1	@ 00003c60 4900
.org 0x3c62
	adds r6, r3, r1	@ 00003c62 5e18
.org 0x3c64
	movs r1, #0	@ 00003c64 0021
.org 0x3c66
	mov ip, r1	@ 00003c66 8c46
.org 0x3c68
	movs r7, #0	@ 00003c68 0027
.org 0x3c6a
	movs r1, #10	@ 00003c6a 0a21
.org 0x3c6c
	subs r1, r1, r0	@ 00003c6c 091a
.org 0x3c6e
	cmp ip, r1	@ 00003c6e 8c45
.org 0x3c70
	bge.n 0x3d10	@ 00003c70 4eda
.org 0x3c72
	mov r3, sp	@ 00003c72 6b46
.org 0x3c74
	ldrh r7, [r3, #20]	@ 00003c74 9f8a
.org 0x3c76
	strh r7, [r3, #44]	@ 00003c76 9f85
.org 0x3c78
	movs r0, #15	@ 00003c78 0f20
.org 0x3c7a
	subs r2, r0, r2	@ 00003c7a 821a
.org 0x3c7c
	mov sl, r2	@ 00003c7c 9246
.org 0x3c7e
	str r1, [sp, #40]	@ 00003c7e 0a91
.org 0x3c80
	mov r1, ip	@ 00003c80 6146
.org 0x3c82
	lsls r0, r1, #16	@ 00003c82 0804
.org 0x3c84
	asrs r0, r0, #12	@ 00003c84 0013
.org 0x3c86
	mov r2, sp	@ 00003c86 6a46
.org 0x3c88
	ldrh r2, [r2, #44]	@ 00003c88 928d
.org 0x3c8a
	adds r0, r2, r0	@ 00003c8a 1018
.org 0x3c8c
	lsls r0, r0, #16	@ 00003c8c 0004
.org 0x3c8e
	lsrs r1, r0, #16	@ 00003c8e 010c
.org 0x3c90
	movs r7, #0	@ 00003c90 0027
.org 0x3c92
	cmp r7, sl	@ 00003c92 5745
.org 0x3c94
	bge.n 0x3cee	@ 00003c94 2bda
.org 0x3c96
	mov r3, sp	@ 00003c96 6b46
.org 0x3c98
	ldrh r3, [r3, #16]	@ 00003c98 1b8a
.org 0x3c9a
	mov r9, r3	@ 00003c9a 9946
.org 0x3c9c
	lsls r0, r1, #16	@ 00003c9c 0804
.org 0x3c9e
	asrs r5, r0, #14	@ 00003c9e 8513
.org 0x3ca0
	movs r0, #240	@ 00003ca0 f020
.org 0x3ca2
	lsls r0, r0, #2	@ 00003ca2 8000
.org 0x3ca4
	ands r5, r0	@ 00003ca4 0540
.org 0x3ca6
	ldr r0, [sp, #0]	@ 00003ca6 0098
.org 0x3ca8
	ldr r0, [r0, #12]	@ 00003ca8 c068
.org 0x3caa
	mov r8, r0	@ 00003caa 8046
.org 0x3cac
	lsls r3, r7, #16	@ 00003cac 3b04
.org 0x3cae
	asrs r3, r3, #16	@ 00003cae 1b14
.org 0x3cb0
	lsls r2, r3, #4	@ 00003cb0 1a01
.org 0x3cb2
	add r2, r9	@ 00003cb2 4a44
.org 0x3cb4
	ldrh r4, [r6, #0]	@ 00003cb4 3488
.org 0x3cb6
	lsls r4, r4, #3	@ 00003cb6 e400
.org 0x3cb8
	add r4, r8	@ 00003cb8 4444
.org 0x3cba
	lsls r2, r2, #16	@ 00003cba 1204
.org 0x3cbc
	asrs r1, r2, #19	@ 00003cbc d114
.org 0x3cbe
	movs r0, #30	@ 00003cbe 1e20
.org 0x3cc0
	ands r1, r0	@ 00003cc0 0140
.org 0x3cc2
	adds r1, r5, r1	@ 00003cc2 6918
.org 0x3cc4
	movs r7, #128	@ 00003cc4 8027
.org 0x3cc6
	lsls r7, r7, #1	@ 00003cc6 7f00
.org 0x3cc8
	lsls r0, r7, #16	@ 00003cc8 3804
.org 0x3cca
	ands r0, r2	@ 00003cca 1040
.org 0x3ccc
	asrs r0, r0, #16	@ 00003ccc 0014
.org 0x3cce
	lsls r0, r0, #3	@ 00003cce c000
.org 0x3cd0
	lsls r1, r1, #1	@ 00003cd0 4900
.org 0x3cd2
	ldr r2, [sp, #8]	@ 00003cd2 029a
.org 0x3cd4
	adds r1, r1, r2	@ 00003cd4 8918
.org 0x3cd6
	adds r0, r0, r1	@ 00003cd6 4018
.org 0x3cd8
	ldr r1, [r4, #0]	@ 00003cd8 2168
.org 0x3cda
	str r1, [r0, #0]	@ 00003cda 0160
.org 0x3cdc
	ldr r1, [r4, #4]	@ 00003cdc 6168
.org 0x3cde
	str r1, [r0, #64]	@ 00003cde 0164
.org 0x3ce0
	adds r6, #2	@ 00003ce0 0236
.org 0x3ce2
	adds r3, #1	@ 00003ce2 0133
.org 0x3ce4
	lsls r3, r3, #16	@ 00003ce4 1b04
.org 0x3ce6
	lsrs r7, r3, #16	@ 00003ce6 1f0c
.org 0x3ce8
	asrs r3, r3, #16	@ 00003ce8 1b14
.org 0x3cea
	cmp r3, sl	@ 00003cea 5345
.org 0x3cec
	blt.n 0x3cac	@ 00003cec dedb
.org 0x3cee
	lsls r0, r7, #16	@ 00003cee 3804
.org 0x3cf0
	asrs r0, r0, #16	@ 00003cf0 0014
.org 0x3cf2
	movs r3, #15	@ 00003cf2 0f23
.org 0x3cf4
	subs r0, r3, r0	@ 00003cf4 181a
.org 0x3cf6
	lsls r0, r0, #1	@ 00003cf6 4000
.org 0x3cf8
	adds r6, r6, r0	@ 00003cf8 3618
.org 0x3cfa
	mov r1, ip	@ 00003cfa 6146
.org 0x3cfc
	lsls r0, r1, #16	@ 00003cfc 0804
.org 0x3cfe
	movs r2, #128	@ 00003cfe 8022
.org 0x3d00
	lsls r2, r2, #9	@ 00003d00 5202
.org 0x3d02
	adds r0, r0, r2	@ 00003d02 8018
.org 0x3d04
	lsrs r3, r0, #16	@ 00003d04 030c
.org 0x3d06
	mov ip, r3	@ 00003d06 9c46
.org 0x3d08
	asrs r0, r0, #16	@ 00003d08 0014
.org 0x3d0a
	ldr r1, [sp, #40]	@ 00003d0a 0a99
.org 0x3d0c
	cmp r0, r1	@ 00003d0c 8842
.org 0x3d0e
	blt.n 0x3c80	@ 00003d0e b7db
.org 0x3d10
	ldr r2, [sp, #12]	@ 00003d10 039a
.org 0x3d12
	adds r2, #1	@ 00003d12 0132
.org 0x3d14
	str r2, [sp, #12]	@ 00003d14 0392
.org 0x3d16
	ldrb r1, [r2, #0]	@ 00003d16 1178
.org 0x3d18
	lsls r0, r1, #2	@ 00003d18 8800
.org 0x3d1a
	adds r0, r0, r1	@ 00003d1a 4018
.org 0x3d1c
	lsls r1, r0, #4	@ 00003d1c 0101
.org 0x3d1e
	subs r1, r1, r0	@ 00003d1e 091a
.org 0x3d20
	lsls r1, r1, #2	@ 00003d20 8900
.org 0x3d22
	ldr r0, [sp, #0]	@ 00003d22 0098
.org 0x3d24
	ldr r3, [r0, #16]	@ 00003d24 0369
.org 0x3d26
	adds r1, r3, r1	@ 00003d26 5918
.org 0x3d28
	ldr r0, [sp, #28]	@ 00003d28 0798
.org 0x3d2a
	lsls r2, r0, #16	@ 00003d2a 0204
.org 0x3d2c
	asrs r2, r2, #16	@ 00003d2c 1214
.org 0x3d2e
	lsls r0, r2, #4	@ 00003d2e 1001
.org 0x3d30
	subs r0, r0, r2	@ 00003d30 801a
.org 0x3d32
	lsls r0, r0, #1	@ 00003d32 4000
.org 0x3d34
	adds r6, r1, r0	@ 00003d34 0e18
.org 0x3d36
	lsls r1, r7, #16	@ 00003d36 3904
.org 0x3d38
	lsrs r7, r1, #16	@ 00003d38 0f0c
.org 0x3d3a
	str r7, [sp, #32]	@ 00003d3a 0897
.org 0x3d3c
	movs r0, #0	@ 00003d3c 0020
.org 0x3d3e
	mov ip, r0	@ 00003d3e 8446
.org 0x3d40
	movs r0, #10	@ 00003d40 0a20
.org 0x3d42
	subs r0, r0, r2	@ 00003d42 801a
.org 0x3d44
	ldr r2, [sp, #0]	@ 00003d44 009a
.org 0x3d46
	ldr r2, [r2, #20]	@ 00003d46 5269
.org 0x3d48
	str r2, [sp, #80]	@ 00003d48 1492
.org 0x3d4a
	str r3, [sp, #76]	@ 00003d4a 1393
.org 0x3d4c
	ldr r3, [sp, #24]	@ 00003d4c 069b
.org 0x3d4e
	lsls r3, r3, #16	@ 00003d4e 1b04
.org 0x3d50
	str r3, [sp, #84]	@ 00003d50 1593
.org 0x3d52
	adds r2, r1, #0	@ 00003d52 0a1c
.org 0x3d54
	cmp ip, r0	@ 00003d54 8445
.org 0x3d56
	bge.n 0x3e04	@ 00003d56 55da
.org 0x3d58
	mov r7, sp	@ 00003d58 6f46
.org 0x3d5a
	ldrh r1, [r7, #20]	@ 00003d5a b98a
.org 0x3d5c
	strh r1, [r7, #52]	@ 00003d5c b986
.org 0x3d5e
	ldr r2, [sp, #32]	@ 00003d5e 089a
.org 0x3d60
	lsls r3, r2, #16	@ 00003d60 1304
.org 0x3d62
	asrs r3, r3, #16	@ 00003d62 1b14
.org 0x3d64
	str r3, [sp, #56]	@ 00003d64 0e93
.org 0x3d66
	str r0, [sp, #48]	@ 00003d66 0c90
.org 0x3d68
	mov r3, ip	@ 00003d68 6346
.org 0x3d6a
	lsls r0, r3, #16	@ 00003d6a 1804
.org 0x3d6c
	asrs r0, r0, #12	@ 00003d6c 0013
.org 0x3d6e
	mov r7, sp	@ 00003d6e 6f46
.org 0x3d70
	ldrh r7, [r7, #52]	@ 00003d70 bf8e
.org 0x3d72
	adds r0, r7, r0	@ 00003d72 3818
.org 0x3d74
	lsls r0, r0, #16	@ 00003d74 0004
.org 0x3d76
	lsrs r1, r0, #16	@ 00003d76 010c
.org 0x3d78
	ldr r7, [sp, #32]	@ 00003d78 089f
.org 0x3d7a
	lsls r4, r7, #16	@ 00003d7a 3c04
.org 0x3d7c
	asrs r0, r4, #16	@ 00003d7c 2014
.org 0x3d7e
	cmp r0, #15	@ 00003d7e 0f28
.org 0x3d80
	bgt.n 0x3dde	@ 00003d80 2ddc
.org 0x3d82
	mov r0, sp	@ 00003d82 6846
.org 0x3d84
	ldrh r0, [r0, #16]	@ 00003d84 008a
.org 0x3d86
	mov r9, r0	@ 00003d86 8146
.org 0x3d88
	lsls r0, r1, #16	@ 00003d88 0804
.org 0x3d8a
	asrs r5, r0, #14	@ 00003d8a 8513
.org 0x3d8c
	movs r0, #240	@ 00003d8c f020
.org 0x3d8e
	lsls r0, r0, #2	@ 00003d8e 8000
.org 0x3d90
	ands r5, r0	@ 00003d90 0540
.org 0x3d92
	ldr r1, [sp, #0]	@ 00003d92 0099
.org 0x3d94
	ldr r1, [r1, #12]	@ 00003d94 c968
.org 0x3d96
	mov r8, r1	@ 00003d96 8846
.org 0x3d98
	movs r2, #128	@ 00003d98 8022
.org 0x3d9a
	lsls r2, r2, #1	@ 00003d9a 5200
.org 0x3d9c
	mov sl, r2	@ 00003d9c 9246
.org 0x3d9e
	asrs r4, r4, #16	@ 00003d9e 2414
.org 0x3da0
	lsls r2, r4, #4	@ 00003da0 2201
.org 0x3da2
	add r2, r9	@ 00003da2 4a44
.org 0x3da4
	ldrh r3, [r6, #0]	@ 00003da4 3388
.org 0x3da6
	lsls r3, r3, #3	@ 00003da6 db00
.org 0x3da8
	add r3, r8	@ 00003da8 4344
.org 0x3daa
	lsls r2, r2, #16	@ 00003daa 1204
.org 0x3dac
	asrs r1, r2, #19	@ 00003dac d114
.org 0x3dae
	movs r0, #30	@ 00003dae 1e20
.org 0x3db0
	ands r1, r0	@ 00003db0 0140
.org 0x3db2
	adds r1, r5, r1	@ 00003db2 6918
.org 0x3db4
	mov r7, sl	@ 00003db4 5746
.org 0x3db6
	lsls r0, r7, #16	@ 00003db6 3804
.org 0x3db8
	ands r0, r2	@ 00003db8 1040
.org 0x3dba
	asrs r0, r0, #16	@ 00003dba 0014
.org 0x3dbc
	lsls r0, r0, #3	@ 00003dbc c000
.org 0x3dbe
	lsls r1, r1, #1	@ 00003dbe 4900
.org 0x3dc0
	ldr r2, [sp, #8]	@ 00003dc0 029a
.org 0x3dc2
	adds r1, r1, r2	@ 00003dc2 8918
.org 0x3dc4
	adds r0, r0, r1	@ 00003dc4 4018
.org 0x3dc6
	ldr r1, [r3, #0]	@ 00003dc6 1968
.org 0x3dc8
	str r1, [r0, #0]	@ 00003dc8 0160
.org 0x3dca
	ldr r1, [r3, #4]	@ 00003dca 5968
.org 0x3dcc
	str r1, [r0, #64]	@ 00003dcc 0164
.org 0x3dce
	adds r6, #2	@ 00003dce 0236
.org 0x3dd0
	adds r4, #1	@ 00003dd0 0134
.org 0x3dd2
	lsls r4, r4, #16	@ 00003dd2 2404
.org 0x3dd4
	lsrs r7, r4, #16	@ 00003dd4 270c
.org 0x3dd6
	lsls r4, r7, #16	@ 00003dd6 3c04
.org 0x3dd8
	asrs r0, r4, #16	@ 00003dd8 2014
.org 0x3dda
	cmp r0, #15	@ 00003dda 0f28
.org 0x3ddc
	ble.n 0x3d9e	@ 00003ddc dfdd
.org 0x3dde
	lsls r2, r7, #16	@ 00003dde 3a04
.org 0x3de0
	asrs r1, r2, #16	@ 00003de0 1114
.org 0x3de2
	ldr r3, [sp, #56]	@ 00003de2 0e9b
.org 0x3de4
	subs r1, r1, r3	@ 00003de4 c91a
.org 0x3de6
	movs r0, #15	@ 00003de6 0f20
.org 0x3de8
	subs r0, r0, r1	@ 00003de8 401a
.org 0x3dea
	lsls r0, r0, #1	@ 00003dea 4000
.org 0x3dec
	adds r6, r6, r0	@ 00003dec 3618
.org 0x3dee
	mov r7, ip	@ 00003dee 6746
.org 0x3df0
	lsls r0, r7, #16	@ 00003df0 3804
.org 0x3df2
	movs r1, #128	@ 00003df2 8021
.org 0x3df4
	lsls r1, r1, #9	@ 00003df4 4902
.org 0x3df6
	adds r0, r0, r1	@ 00003df6 4018
.org 0x3df8
	lsrs r3, r0, #16	@ 00003df8 030c
.org 0x3dfa
	mov ip, r3	@ 00003dfa 9c46
.org 0x3dfc
	asrs r0, r0, #16	@ 00003dfc 0014
.org 0x3dfe
	ldr r7, [sp, #48]	@ 00003dfe 0c9f
.org 0x3e00
	cmp r0, r7	@ 00003e00 b842
.org 0x3e02
	blt.n 0x3d68	@ 00003e02 b1db
.org 0x3e04
	ldr r1, [sp, #80]	@ 00003e04 1499
.org 0x3e06
	ldrb r0, [r1, #0]	@ 00003e06 0878
.org 0x3e08
	ldr r3, [sp, #12]	@ 00003e08 039b
.org 0x3e0a
	adds r0, r3, r0	@ 00003e0a 1818
.org 0x3e0c
	subs r0, #1	@ 00003e0c 0138
.org 0x3e0e
	str r0, [sp, #12]	@ 00003e0e 0390
.org 0x3e10
	ldrb r0, [r0, #0]	@ 00003e10 0078
.org 0x3e12
	lsls r1, r0, #2	@ 00003e12 8100
.org 0x3e14
	adds r1, r1, r0	@ 00003e14 0918
.org 0x3e16
	lsls r0, r1, #4	@ 00003e16 0801
.org 0x3e18
	subs r0, r0, r1	@ 00003e18 401a
.org 0x3e1a
	lsls r0, r0, #2	@ 00003e1a 8000
.org 0x3e1c
	ldr r7, [sp, #76]	@ 00003e1c 139f
.org 0x3e1e
	adds r0, r7, r0	@ 00003e1e 3818
.org 0x3e20
	ldr r1, [sp, #84]	@ 00003e20 1599
.org 0x3e22
	asrs r3, r1, #16	@ 00003e22 0b14
.org 0x3e24
	lsls r1, r3, #1	@ 00003e24 5900
.org 0x3e26
	adds r6, r0, r1	@ 00003e26 4618
.org 0x3e28
	mov r7, ip	@ 00003e28 6746
.org 0x3e2a
	str r7, [sp, #36]	@ 00003e2a 0997
.org 0x3e2c
	lsls r0, r7, #16	@ 00003e2c 3804
.org 0x3e2e
	lsrs r0, r0, #16	@ 00003e2e 000c
.org 0x3e30
	mov ip, r0	@ 00003e30 8446
.org 0x3e32
	lsls r5, r0, #16	@ 00003e32 0504
.org 0x3e34
	asrs r0, r5, #16	@ 00003e34 2814
.org 0x3e36
	cmp r0, #10	@ 00003e36 0a28
.org 0x3e38
	bgt.n 0x3ede	@ 00003e38 51dc
.org 0x3e3a
	mov r0, sp	@ 00003e3a 6846
.org 0x3e3c
	ldrh r1, [r0, #20]	@ 00003e3c 818a
.org 0x3e3e
	strh r1, [r0, #60]	@ 00003e3e 8187
.org 0x3e40
	movs r2, #15	@ 00003e40 0f22
.org 0x3e42
	subs r3, r2, r3	@ 00003e42 d31a
.org 0x3e44
	str r3, [sp, #72]	@ 00003e44 1293
.org 0x3e46
	asrs r0, r5, #12	@ 00003e46 2813
.org 0x3e48
	mov r3, sp	@ 00003e48 6b46
.org 0x3e4a
	ldrh r3, [r3, #60]	@ 00003e4a 9b8f
.org 0x3e4c
	adds r0, r3, r0	@ 00003e4c 1818
.org 0x3e4e
	lsls r0, r0, #16	@ 00003e4e 0004
.org 0x3e50
	lsrs r1, r0, #16	@ 00003e50 010c
.org 0x3e52
	movs r7, #0	@ 00003e52 0027
.org 0x3e54
	mov r0, ip	@ 00003e54 6046
.org 0x3e56
	lsls r0, r0, #16	@ 00003e56 0004
.org 0x3e58
	mov sl, r0	@ 00003e58 8246
.org 0x3e5a
	ldr r2, [sp, #72]	@ 00003e5a 129a
.org 0x3e5c
	cmp r7, r2	@ 00003e5c 9742
.org 0x3e5e
	bge.n 0x3ebe	@ 00003e5e 2eda
.org 0x3e60
	mov r3, sp	@ 00003e60 6b46
.org 0x3e62
	ldrh r3, [r3, #16]	@ 00003e62 1b8a
.org 0x3e64
	mov r9, r3	@ 00003e64 9946
.org 0x3e66
	lsls r0, r1, #16	@ 00003e66 0804
.org 0x3e68
	asrs r5, r0, #14	@ 00003e68 8513
.org 0x3e6a
	movs r0, #240	@ 00003e6a f020
.org 0x3e6c
	lsls r0, r0, #2	@ 00003e6c 8000
.org 0x3e6e
	ands r5, r0	@ 00003e6e 0540
.org 0x3e70
	ldr r0, [sp, #0]	@ 00003e70 0098
.org 0x3e72
	ldr r0, [r0, #12]	@ 00003e72 c068
.org 0x3e74
	mov r8, r0	@ 00003e74 8046
.org 0x3e76
	movs r1, #128	@ 00003e76 8021
.org 0x3e78
	lsls r1, r1, #1	@ 00003e78 4900
.org 0x3e7a
	mov ip, r1	@ 00003e7a 8c46
.org 0x3e7c
	lsls r3, r7, #16	@ 00003e7c 3b04
.org 0x3e7e
	asrs r3, r3, #16	@ 00003e7e 1b14
.org 0x3e80
	lsls r2, r3, #4	@ 00003e80 1a01
.org 0x3e82
	add r2, r9	@ 00003e82 4a44
.org 0x3e84
	ldrh r4, [r6, #0]	@ 00003e84 3488
.org 0x3e86
	lsls r4, r4, #3	@ 00003e86 e400
.org 0x3e88
	add r4, r8	@ 00003e88 4444
.org 0x3e8a
	lsls r2, r2, #16	@ 00003e8a 1204
.org 0x3e8c
	asrs r1, r2, #19	@ 00003e8c d114
.org 0x3e8e
	movs r0, #30	@ 00003e8e 1e20
.org 0x3e90
	ands r1, r0	@ 00003e90 0140
.org 0x3e92
	adds r1, r5, r1	@ 00003e92 6918
.org 0x3e94
	mov r7, ip	@ 00003e94 6746
.org 0x3e96
	lsls r0, r7, #16	@ 00003e96 3804
.org 0x3e98
	ands r0, r2	@ 00003e98 1040
.org 0x3e9a
	asrs r0, r0, #16	@ 00003e9a 0014
.org 0x3e9c
	lsls r0, r0, #3	@ 00003e9c c000
.org 0x3e9e
	lsls r1, r1, #1	@ 00003e9e 4900
.org 0x3ea0
	ldr r2, [sp, #8]	@ 00003ea0 029a
.org 0x3ea2
	adds r1, r1, r2	@ 00003ea2 8918
.org 0x3ea4
	adds r0, r0, r1	@ 00003ea4 4018
.org 0x3ea6
	ldr r1, [r4, #0]	@ 00003ea6 2168
.org 0x3ea8
	str r1, [r0, #0]	@ 00003ea8 0160
.org 0x3eaa
	ldr r1, [r4, #4]	@ 00003eaa 6168
.org 0x3eac
	str r1, [r0, #64]	@ 00003eac 0164
.org 0x3eae
	adds r6, #2	@ 00003eae 0236
.org 0x3eb0
	adds r3, #1	@ 00003eb0 0133
.org 0x3eb2
	lsls r3, r3, #16	@ 00003eb2 1b04
.org 0x3eb4
	lsrs r7, r3, #16	@ 00003eb4 1f0c
.org 0x3eb6
	asrs r3, r3, #16	@ 00003eb6 1b14
.org 0x3eb8
	ldr r0, [sp, #72]	@ 00003eb8 1298
.org 0x3eba
	cmp r3, r0	@ 00003eba 8342
.org 0x3ebc
	blt.n 0x3e7c	@ 00003ebc dedb
.org 0x3ebe
	lsls r1, r7, #16	@ 00003ebe 3904
.org 0x3ec0
	asrs r0, r1, #16	@ 00003ec0 0814
.org 0x3ec2
	movs r2, #15	@ 00003ec2 0f22
.org 0x3ec4
	subs r0, r2, r0	@ 00003ec4 101a
.org 0x3ec6
	lsls r0, r0, #1	@ 00003ec6 4000
.org 0x3ec8
	adds r6, r6, r0	@ 00003ec8 3618
.org 0x3eca
	movs r0, #128	@ 00003eca 8020
.org 0x3ecc
	lsls r0, r0, #9	@ 00003ecc 4002
.org 0x3ece
	add r0, sl	@ 00003ece 5044
.org 0x3ed0
	lsrs r0, r0, #16	@ 00003ed0 000c
.org 0x3ed2
	mov ip, r0	@ 00003ed2 8446
.org 0x3ed4
	lsls r5, r0, #16	@ 00003ed4 0504
.org 0x3ed6
	asrs r0, r5, #16	@ 00003ed6 2814
.org 0x3ed8
	adds r2, r1, #0	@ 00003ed8 0a1c
.org 0x3eda
	cmp r0, #10	@ 00003eda 0a28
.org 0x3edc
	ble.n 0x3e46	@ 00003edc b3dd
.org 0x3ede
	ldr r3, [sp, #12]	@ 00003ede 039b
.org 0x3ee0
	ldrb r0, [r3, #1]	@ 00003ee0 5878
.org 0x3ee2
	lsls r1, r0, #2	@ 00003ee2 8100
.org 0x3ee4
	adds r1, r1, r0	@ 00003ee4 0918
.org 0x3ee6
	lsls r0, r1, #4	@ 00003ee6 0801
.org 0x3ee8
	subs r0, r0, r1	@ 00003ee8 401a
.org 0x3eea
	lsls r0, r0, #2	@ 00003eea 8000
.org 0x3eec
	ldr r7, [sp, #76]	@ 00003eec 139f
.org 0x3eee
	adds r6, r7, r0	@ 00003eee 3e18
.org 0x3ef0
	lsrs r2, r2, #16	@ 00003ef0 120c
.org 0x3ef2
	str r2, [sp, #32]	@ 00003ef2 0892
.org 0x3ef4
	ldr r1, [sp, #36]	@ 00003ef4 0999
.org 0x3ef6
	lsls r0, r1, #16	@ 00003ef6 0804
.org 0x3ef8
	lsrs r0, r0, #16	@ 00003ef8 000c
.org 0x3efa
	mov ip, r0	@ 00003efa 8446
.org 0x3efc
	lsls r1, r0, #16	@ 00003efc 0104
.org 0x3efe
	asrs r0, r1, #16	@ 00003efe 0814
.org 0x3f00
	cmp r0, #10	@ 00003f00 0a28
.org 0x3f02
	bgt.n 0x3fae	@ 00003f02 54dc
.org 0x3f04
	mov r2, sp	@ 00003f04 6a46
.org 0x3f06
	ldrh r2, [r2, #20]	@ 00003f06 928a
.org 0x3f08
	add r3, sp, #64	@ 00003f08 10ab
.org 0x3f0a
	strh r2, [r3, #0]	@ 00003f0a 1a80
.org 0x3f0c
	ldr r7, [sp, #32]	@ 00003f0c 089f
.org 0x3f0e
	lsls r3, r7, #16	@ 00003f0e 3b04
.org 0x3f10
	asrs r3, r3, #16	@ 00003f10 1b14
.org 0x3f12
	str r3, [sp, #68]	@ 00003f12 1193
.org 0x3f14
	asrs r0, r1, #12	@ 00003f14 0813
.org 0x3f16
	add r1, sp, #64	@ 00003f16 10a9
.org 0x3f18
	ldrh r1, [r1, #0]	@ 00003f18 0988
.org 0x3f1a
	adds r0, r1, r0	@ 00003f1a 0818
.org 0x3f1c
	lsls r0, r0, #16	@ 00003f1c 0004
.org 0x3f1e
	lsrs r1, r0, #16	@ 00003f1e 010c
.org 0x3f20
	ldr r7, [sp, #32]	@ 00003f20 089f
.org 0x3f22
	lsls r4, r7, #16	@ 00003f22 3c04
.org 0x3f24
	asrs r0, r4, #16	@ 00003f24 2014
.org 0x3f26
	mov r2, ip	@ 00003f26 6246
.org 0x3f28
	lsls r2, r2, #16	@ 00003f28 1204
.org 0x3f2a
	mov sl, r2	@ 00003f2a 9246
.org 0x3f2c
	cmp r0, #15	@ 00003f2c 0f28
.org 0x3f2e
	bgt.n 0x3f8c	@ 00003f2e 2ddc
.org 0x3f30
	mov r3, sp	@ 00003f30 6b46
.org 0x3f32
	ldrh r3, [r3, #16]	@ 00003f32 1b8a
.org 0x3f34
	mov r8, r3	@ 00003f34 9846
.org 0x3f36
	lsls r0, r1, #16	@ 00003f36 0804
.org 0x3f38
	asrs r5, r0, #14	@ 00003f38 8513
.org 0x3f3a
	movs r0, #240	@ 00003f3a f020
.org 0x3f3c
	lsls r0, r0, #2	@ 00003f3c 8000
.org 0x3f3e
	ands r5, r0	@ 00003f3e 0540
.org 0x3f40
	ldr r7, [sp, #0]	@ 00003f40 009f
.org 0x3f42
	ldr r7, [r7, #12]	@ 00003f42 ff68
.org 0x3f44
	mov ip, r7	@ 00003f44 bc46
.org 0x3f46
	movs r0, #128	@ 00003f46 8020
.org 0x3f48
	lsls r0, r0, #1	@ 00003f48 4000
.org 0x3f4a
	mov r9, r0	@ 00003f4a 8146
.org 0x3f4c
	asrs r4, r4, #16	@ 00003f4c 2414
.org 0x3f4e
	lsls r2, r4, #4	@ 00003f4e 2201
.org 0x3f50
	add r2, r8	@ 00003f50 4244
.org 0x3f52
	ldrh r3, [r6, #0]	@ 00003f52 3388
.org 0x3f54
	lsls r3, r3, #3	@ 00003f54 db00
.org 0x3f56
	add r3, ip	@ 00003f56 6344
.org 0x3f58
	lsls r2, r2, #16	@ 00003f58 1204
.org 0x3f5a
	asrs r1, r2, #19	@ 00003f5a d114
.org 0x3f5c
	movs r0, #30	@ 00003f5c 1e20
.org 0x3f5e
	ands r1, r0	@ 00003f5e 0140
.org 0x3f60
	adds r1, r5, r1	@ 00003f60 6918
.org 0x3f62
	mov r7, r9	@ 00003f62 4f46
.org 0x3f64
	lsls r0, r7, #16	@ 00003f64 3804
.org 0x3f66
	ands r0, r2	@ 00003f66 1040
.org 0x3f68
	asrs r0, r0, #16	@ 00003f68 0014
.org 0x3f6a
	lsls r0, r0, #3	@ 00003f6a c000
.org 0x3f6c
	lsls r1, r1, #1	@ 00003f6c 4900
.org 0x3f6e
	ldr r2, [sp, #8]	@ 00003f6e 029a
.org 0x3f70
	adds r1, r1, r2	@ 00003f70 8918
.org 0x3f72
	adds r0, r0, r1	@ 00003f72 4018
.org 0x3f74
	ldr r1, [r3, #0]	@ 00003f74 1968
.org 0x3f76
	str r1, [r0, #0]	@ 00003f76 0160
.org 0x3f78
	ldr r1, [r3, #4]	@ 00003f78 5968
.org 0x3f7a
	str r1, [r0, #64]	@ 00003f7a 0164
.org 0x3f7c
	adds r6, #2	@ 00003f7c 0236
.org 0x3f7e
	adds r4, #1	@ 00003f7e 0134
.org 0x3f80
	lsls r4, r4, #16	@ 00003f80 2404
.org 0x3f82
	lsrs r7, r4, #16	@ 00003f82 270c
.org 0x3f84
	lsls r4, r7, #16	@ 00003f84 3c04
.org 0x3f86
	asrs r0, r4, #16	@ 00003f86 2014
.org 0x3f88
	cmp r0, #15	@ 00003f88 0f28
.org 0x3f8a
	ble.n 0x3f4c	@ 00003f8a dfdd
.org 0x3f8c
	lsls r1, r7, #16	@ 00003f8c 3904
.org 0x3f8e
	asrs r1, r1, #16	@ 00003f8e 0914
.org 0x3f90
	ldr r3, [sp, #68]	@ 00003f90 119b
.org 0x3f92
	subs r1, r1, r3	@ 00003f92 c91a
.org 0x3f94
	movs r0, #15	@ 00003f94 0f20
.org 0x3f96
	subs r0, r0, r1	@ 00003f96 401a
.org 0x3f98
	lsls r0, r0, #1	@ 00003f98 4000
.org 0x3f9a
	adds r6, r6, r0	@ 00003f9a 3618
.org 0x3f9c
	movs r0, #128	@ 00003f9c 8020
.org 0x3f9e
	lsls r0, r0, #9	@ 00003f9e 4002
.org 0x3fa0
	add r0, sl	@ 00003fa0 5044
.org 0x3fa2
	lsrs r0, r0, #16	@ 00003fa2 000c
.org 0x3fa4
	mov ip, r0	@ 00003fa4 8446
.org 0x3fa6
	lsls r1, r0, #16	@ 00003fa6 0104
.org 0x3fa8
	asrs r0, r1, #16	@ 00003fa8 0814
.org 0x3faa
	cmp r0, #10	@ 00003faa 0a28
.org 0x3fac
	ble.n 0x3f14	@ 00003fac b2dd
.org 0x3fae
	ldr r7, [sp, #4]	@ 00003fae 019f
.org 0x3fb0
	ldr r3, [r7, #0]	@ 00003fb0 3b68
.org 0x3fb2
	ldr r2, [pc, #40]	@ 00003fb2 0a4a
.org 0x3fb4
	adds r0, r3, #0	@ 00003fb4 181c
.org 0x3fb6
	ands r0, r2	@ 00003fb6 1040
.org 0x3fb8
	ldr r1, [sp, #0]	@ 00003fb8 0099
.org 0x3fba
	strh r0, [r1, #8]	@ 00003fba 0881
.org 0x3fbc
	ldr r1, [r7, #4]	@ 00003fbc 7968
.org 0x3fbe
	adds r0, r1, #0	@ 00003fbe 081c
.org 0x3fc0
	ands r0, r2	@ 00003fc0 1040
.org 0x3fc2
	ldr r2, [sp, #0]	@ 00003fc2 009a
.org 0x3fc4
	strh r0, [r2, #10]	@ 00003fc4 5081
.org 0x3fc6
	str r3, [r2, #0]	@ 00003fc6 1360
.org 0x3fc8
	str r1, [r2, #4]	@ 00003fc8 5160
.org 0x3fca
	add sp, #88	@ 00003fca 16b0
.org 0x3fcc
	pop {r3, r4, r5}	@ 00003fcc 38bc
.org 0x3fce
	mov r8, r3	@ 00003fce 9846
.org 0x3fd0
	mov r9, r4	@ 00003fd0 a146
.org 0x3fd2
	mov sl, r5	@ 00003fd2 aa46
.org 0x3fd4
	pop {r4, r5, r6, r7}	@ 00003fd4 f0bc
.org 0x3fd6
	pop {r0}	@ 00003fd6 01bc
.org 0x3fd8
	bx r0	@ 00003fd8 0047
