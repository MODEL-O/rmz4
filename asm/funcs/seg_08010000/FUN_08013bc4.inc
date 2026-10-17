@ FUN_08013bc4  entry 0x08013bc4  size 768
.thumb
.org 0x13bc4
FUN_08013bc4:
	push {r4, r5, r6, r7, lr}	@ 00013bc4 f0b5
.org 0x13bc6
	mov r7, r9	@ 00013bc6 4f46
.org 0x13bc8
	mov r6, r8	@ 00013bc8 4646
.org 0x13bca
	push {r6, r7}	@ 00013bca c0b4
.org 0x13bcc
	ldr r2, [pc, #84]	@ 00013bcc 154a
.org 0x13bce
	ldr r1, [pc, #88]	@ 00013bce 1649
.org 0x13bd0
	adds r0, r2, r1	@ 00013bd0 5018
.org 0x13bd2
	ldrh r1, [r0, #0]	@ 00013bd2 0188
.org 0x13bd4
	lsrs r0, r1, #8	@ 00013bd4 080a
.org 0x13bd6
	cmp r0, #8	@ 00013bd6 0828
.org 0x13bd8
	bne.n 0x13c78	@ 00013bd8 4ed1
.org 0x13bda
	movs r0, #255	@ 00013bda ff20
.org 0x13bdc
	ands r0, r1	@ 00013bdc 0840
.org 0x13bde
	cmp r0, #2	@ 00013bde 0228
.org 0x13be0
	bne.n 0x13c78	@ 00013be0 4ad1
.org 0x13be2
	ldr r1, [r2, #84]	@ 00013be2 516d
.org 0x13be4
	ldr r0, [pc, #68]	@ 00013be4 1148
.org 0x13be6
	cmp r1, r0	@ 00013be6 8142
.org 0x13be8
	bgt.n 0x13c3c	@ 00013be8 28dc
.org 0x13bea
	ldr r6, [pc, #68]	@ 00013bea 114e
.org 0x13bec
	ldr r0, [pc, #68]	@ 00013bec 1148
.org 0x13bee
	adds r5, r2, r0	@ 00013bee 1518
.org 0x13bf0
	ldrb r0, [r5, #0]	@ 00013bf0 2878
.org 0x13bf2
	lsrs r0, r0, #1	@ 00013bf2 4008
.org 0x13bf4
	lsls r1, r0, #2	@ 00013bf4 8100
.org 0x13bf6
	adds r1, r1, r0	@ 00013bf6 0918
.org 0x13bf8
	lsls r1, r1, #2	@ 00013bf8 8900
.org 0x13bfa
	ldr r4, [pc, #60]	@ 00013bfa 0f4c
.org 0x13bfc
	adds r1, r1, r4	@ 00013bfc 0919
.org 0x13bfe
	ldr r0, [r6, #0]	@ 00013bfe 3068
.org 0x13c00
	adds r0, r0, r1	@ 00013c00 4018
.org 0x13c02
	movs r1, #128	@ 00013c02 8021
.org 0x13c04
	lsls r1, r1, #7	@ 00013c04 c901
.org 0x13c06
	bl 0x1ea4	@ 00013c06 eef74df9
.org 0x13c0a
	ldrb r0, [r5, #0]	@ 00013c0a 2878
.org 0x13c0c
	lsrs r0, r0, #1	@ 00013c0c 4008
.org 0x13c0e
	lsls r1, r0, #2	@ 00013c0e 8100
.org 0x13c10
	adds r1, r1, r0	@ 00013c10 0918
.org 0x13c12
	lsls r1, r1, #2	@ 00013c12 8900
.org 0x13c14
	adds r1, r1, r4	@ 00013c14 0919
.org 0x13c16
	ldr r0, [r6, #0]	@ 00013c16 3068
.org 0x13c18
	adds r0, r0, r1	@ 00013c18 4018
.org 0x13c1a
	adds r0, #12	@ 00013c1a 0c30
.org 0x13c1c
	movs r1, #0	@ 00013c1c 0021
.org 0x13c1e
	bl 0x2208	@ 00013c1e eef7f3fa
.org 0x13c22
	b.n 0x13c78	@ 00013c22 29e0
.org 0x13c24
	.byte 0xb0,0x0a,0x00,0x02	@ 00013c24 data
.org 0x13c28
	.byte 0xd4,0x07,0x00,0x00	@ 00013c28 data
.org 0x13c2c
	.byte 0x9f,0x05,0x00,0x00	@ 00013c2c data
.org 0x13c30
	.byte 0x48,0x20,0xdf,0x08	@ 00013c30 data
.org 0x13c34
	.byte 0x2c,0xd0,0x02,0x00	@ 00013c34 data
.org 0x13c38
	.byte 0xa4,0x23,0xdf,0x08	@ 00013c38 data
.org 0x13c3c
	ldr r5, [pc, #668]	@ 00013c3c a74d
.org 0x13c3e
	ldr r1, [pc, #672]	@ 00013c3e a849
.org 0x13c40
	adds r6, r2, r1	@ 00013c40 5618
.org 0x13c42
	ldrb r0, [r6, #0]	@ 00013c42 3078
.org 0x13c44
	lsrs r0, r0, #1	@ 00013c44 4008
.org 0x13c46
	movs r4, #46	@ 00013c46 2e24
.org 0x13c48
	subs r0, r4, r0	@ 00013c48 201a
.org 0x13c4a
	lsls r1, r0, #2	@ 00013c4a 8100
.org 0x13c4c
	adds r1, r1, r0	@ 00013c4c 0918
.org 0x13c4e
	lsls r1, r1, #2	@ 00013c4e 8900
.org 0x13c50
	adds r1, r1, r5	@ 00013c50 4919
.org 0x13c52
	ldr r0, [r5, #0]	@ 00013c52 2868
.org 0x13c54
	adds r0, r0, r1	@ 00013c54 4018
.org 0x13c56
	movs r1, #128	@ 00013c56 8021
.org 0x13c58
	lsls r1, r1, #7	@ 00013c58 c901
.org 0x13c5a
	bl 0x1ea4	@ 00013c5a eef723f9
.org 0x13c5e
	ldrb r0, [r6, #0]	@ 00013c5e 3078
.org 0x13c60
	lsrs r0, r0, #1	@ 00013c60 4008
.org 0x13c62
	subs r4, r4, r0	@ 00013c62 241a
.org 0x13c64
	lsls r1, r4, #2	@ 00013c64 a100
.org 0x13c66
	adds r1, r1, r4	@ 00013c66 0919
.org 0x13c68
	lsls r1, r1, #2	@ 00013c68 8900
.org 0x13c6a
	adds r1, r1, r5	@ 00013c6a 4919
.org 0x13c6c
	ldr r0, [r5, #0]	@ 00013c6c 2868
.org 0x13c6e
	adds r0, r0, r1	@ 00013c6e 4018
.org 0x13c70
	adds r0, #12	@ 00013c70 0c30
.org 0x13c72
	movs r1, #0	@ 00013c72 0021
.org 0x13c74
	bl 0x2208	@ 00013c74 eef7c8fa
.org 0x13c78
	ldr r7, [pc, #616]	@ 00013c78 9a4f
.org 0x13c7a
	ldr r2, [pc, #620]	@ 00013c7a 9b4a
.org 0x13c7c
	adds r0, r7, r2	@ 00013c7c b818
.org 0x13c7e
	ldrh r1, [r0, #0]	@ 00013c7e 0188
.org 0x13c80
	lsrs r0, r1, #8	@ 00013c80 080a
.org 0x13c82
	cmp r0, #8	@ 00013c82 0828
.org 0x13c84
	bne.n 0x13d10	@ 00013c84 44d1
.org 0x13c86
	movs r0, #255	@ 00013c86 ff20
.org 0x13c88
	ands r0, r1	@ 00013c88 0840
.org 0x13c8a
	cmp r0, #6	@ 00013c8a 0628
.org 0x13c8c
	bne.n 0x13d10	@ 00013c8c 40d1
.org 0x13c8e
	ldr r0, [pc, #588]	@ 00013c8e 9348
.org 0x13c90
	mov r8, r0	@ 00013c90 8046
.org 0x13c92
	ldr r5, [pc, #600]	@ 00013c92 964d
.org 0x13c94
	ldr r1, [pc, #600]	@ 00013c94 9649
.org 0x13c96
	adds r6, r7, r1	@ 00013c96 7e18
.org 0x13c98
	ldrb r0, [r6, #0]	@ 00013c98 3078
.org 0x13c9a
	adds r0, r0, r5	@ 00013c9a 4019
.org 0x13c9c
	ldrb r0, [r0, #0]	@ 00013c9c 0078
.org 0x13c9e
	lsls r1, r0, #2	@ 00013c9e 8100
.org 0x13ca0
	adds r1, r1, r0	@ 00013ca0 0918
.org 0x13ca2
	lsls r1, r1, #2	@ 00013ca2 8900
.org 0x13ca4
	ldr r4, [pc, #588]	@ 00013ca4 934c
.org 0x13ca6
	adds r1, r1, r4	@ 00013ca6 0919
.org 0x13ca8
	mov r2, r8	@ 00013ca8 4246
.org 0x13caa
	ldr r0, [r2, #0]	@ 00013caa 1068
.org 0x13cac
	adds r0, r0, r1	@ 00013cac 4018
.org 0x13cae
	movs r1, #128	@ 00013cae 8021
.org 0x13cb0
	lsls r1, r1, #7	@ 00013cb0 c901
.org 0x13cb2
	mov r9, r1	@ 00013cb2 8946
.org 0x13cb4
	bl 0x1ea4	@ 00013cb4 eef7f6f8
.org 0x13cb8
	ldrb r0, [r6, #0]	@ 00013cb8 3078
.org 0x13cba
	adds r0, r0, r5	@ 00013cba 4019
.org 0x13cbc
	ldrb r0, [r0, #0]	@ 00013cbc 0078
.org 0x13cbe
	lsls r1, r0, #2	@ 00013cbe 8100
.org 0x13cc0
	adds r1, r1, r0	@ 00013cc0 0918
.org 0x13cc2
	lsls r1, r1, #2	@ 00013cc2 8900
.org 0x13cc4
	adds r1, r1, r4	@ 00013cc4 0919
.org 0x13cc6
	mov r2, r8	@ 00013cc6 4246
.org 0x13cc8
	ldr r0, [r2, #0]	@ 00013cc8 1068
.org 0x13cca
	adds r0, r0, r1	@ 00013cca 4018
.org 0x13ccc
	adds r0, #12	@ 00013ccc 0c30
.org 0x13cce
	movs r1, #0	@ 00013cce 0021
.org 0x13cd0
	bl 0x2208	@ 00013cd0 eef79afa
.org 0x13cd4
	ldr r0, [pc, #544]	@ 00013cd4 8848
.org 0x13cd6
	adds r6, r7, r0	@ 00013cd6 3e18
.org 0x13cd8
	ldrb r0, [r6, #0]	@ 00013cd8 3078
.org 0x13cda
	adds r0, r0, r5	@ 00013cda 4019
.org 0x13cdc
	ldrb r0, [r0, #0]	@ 00013cdc 0078
.org 0x13cde
	lsls r1, r0, #2	@ 00013cde 8100
.org 0x13ce0
	adds r1, r1, r0	@ 00013ce0 0918
.org 0x13ce2
	lsls r1, r1, #2	@ 00013ce2 8900
.org 0x13ce4
	adds r4, #180	@ 00013ce4 b434
.org 0x13ce6
	adds r1, r1, r4	@ 00013ce6 0919
.org 0x13ce8
	mov r2, r8	@ 00013ce8 4246
.org 0x13cea
	ldr r0, [r2, #0]	@ 00013cea 1068
.org 0x13cec
	adds r0, r0, r1	@ 00013cec 4018
.org 0x13cee
	mov r1, r9	@ 00013cee 4946
.org 0x13cf0
	bl 0x1ea4	@ 00013cf0 eef7d8f8
.org 0x13cf4
	ldrb r0, [r6, #0]	@ 00013cf4 3078
.org 0x13cf6
	adds r0, r0, r5	@ 00013cf6 4019
.org 0x13cf8
	ldrb r0, [r0, #0]	@ 00013cf8 0078
.org 0x13cfa
	lsls r1, r0, #2	@ 00013cfa 8100
.org 0x13cfc
	adds r1, r1, r0	@ 00013cfc 0918
.org 0x13cfe
	lsls r1, r1, #2	@ 00013cfe 8900
.org 0x13d00
	adds r1, r1, r4	@ 00013d00 0919
.org 0x13d02
	mov r2, r8	@ 00013d02 4246
.org 0x13d04
	ldr r0, [r2, #0]	@ 00013d04 1068
.org 0x13d06
	adds r0, r0, r1	@ 00013d06 4018
.org 0x13d08
	adds r0, #12	@ 00013d08 0c30
.org 0x13d0a
	movs r1, #0	@ 00013d0a 0021
.org 0x13d0c
	bl 0x2208	@ 00013d0c eef77cfa
.org 0x13d10
	ldr r7, [pc, #464]	@ 00013d10 744f
.org 0x13d12
	ldr r1, [pc, #488]	@ 00013d12 7a49
.org 0x13d14
	adds r0, r7, r1	@ 00013d14 7818
.org 0x13d16
	ldrh r1, [r0, #0]	@ 00013d16 0188
.org 0x13d18
	lsrs r0, r1, #8	@ 00013d18 080a
.org 0x13d1a
	cmp r0, #8	@ 00013d1a 0828
.org 0x13d1c
	bne.n 0x13de2	@ 00013d1c 61d1
.org 0x13d1e
	movs r0, #255	@ 00013d1e ff20
.org 0x13d20
	ands r0, r1	@ 00013d20 0840
.org 0x13d22
	cmp r0, #7	@ 00013d22 0728
.org 0x13d24
	bne.n 0x13de2	@ 00013d24 5dd1
.org 0x13d26
	ldr r2, [pc, #436]	@ 00013d26 6d4a
.org 0x13d28
	mov r8, r2	@ 00013d28 9046
.org 0x13d2a
	ldr r6, [pc, #448]	@ 00013d2a 704e
.org 0x13d2c
	ldr r0, [pc, #464]	@ 00013d2c 7448
.org 0x13d2e
	adds r5, r7, r0	@ 00013d2e 3d18
.org 0x13d30
	ldrb r0, [r5, #0]	@ 00013d30 2878
.org 0x13d32
	adds r0, r0, r6	@ 00013d32 8019
.org 0x13d34
	ldrb r0, [r0, #0]	@ 00013d34 0078
.org 0x13d36
	lsls r1, r0, #2	@ 00013d36 8100
.org 0x13d38
	adds r1, r1, r0	@ 00013d38 0918
.org 0x13d3a
	lsls r1, r1, #2	@ 00013d3a 8900
.org 0x13d3c
	ldr r4, [pc, #452]	@ 00013d3c 714c
.org 0x13d3e
	adds r1, r1, r4	@ 00013d3e 0919
.org 0x13d40
	ldr r0, [r2, #0]	@ 00013d40 1068
.org 0x13d42
	adds r0, r0, r1	@ 00013d42 4018
.org 0x13d44
	movs r1, #128	@ 00013d44 8021
.org 0x13d46
	lsls r1, r1, #7	@ 00013d46 c901
.org 0x13d48
	mov r9, r1	@ 00013d48 8946
.org 0x13d4a
	bl 0x1ea4	@ 00013d4a eef7abf8
.org 0x13d4e
	ldrb r0, [r5, #0]	@ 00013d4e 2878
.org 0x13d50
	adds r0, r0, r6	@ 00013d50 8019
.org 0x13d52
	ldrb r0, [r0, #0]	@ 00013d52 0078
.org 0x13d54
	lsls r1, r0, #2	@ 00013d54 8100
.org 0x13d56
	adds r1, r1, r0	@ 00013d56 0918
.org 0x13d58
	lsls r1, r1, #2	@ 00013d58 8900
.org 0x13d5a
	adds r1, r1, r4	@ 00013d5a 0919
.org 0x13d5c
	mov r2, r8	@ 00013d5c 4246
.org 0x13d5e
	ldr r0, [r2, #0]	@ 00013d5e 1068
.org 0x13d60
	adds r0, r0, r1	@ 00013d60 4018
.org 0x13d62
	adds r0, #12	@ 00013d62 0c30
.org 0x13d64
	movs r1, #0	@ 00013d64 0021
.org 0x13d66
	bl 0x2208	@ 00013d66 eef74ffa
.org 0x13d6a
	ldr r0, [pc, #412]	@ 00013d6a 6748
.org 0x13d6c
	adds r5, r7, r0	@ 00013d6c 3d18
.org 0x13d6e
	ldrb r0, [r5, #0]	@ 00013d6e 2878
.org 0x13d70
	adds r0, r0, r6	@ 00013d70 8019
.org 0x13d72
	ldrb r0, [r0, #0]	@ 00013d72 0078
.org 0x13d74
	lsls r1, r0, #2	@ 00013d74 8100
.org 0x13d76
	adds r1, r1, r0	@ 00013d76 0918
.org 0x13d78
	lsls r1, r1, #2	@ 00013d78 8900
.org 0x13d7a
	adds r4, #180	@ 00013d7a b434
.org 0x13d7c
	adds r1, r1, r4	@ 00013d7c 0919
.org 0x13d7e
	mov r2, r8	@ 00013d7e 4246
.org 0x13d80
	ldr r0, [r2, #0]	@ 00013d80 1068
.org 0x13d82
	adds r0, r0, r1	@ 00013d82 4018
.org 0x13d84
	mov r1, r9	@ 00013d84 4946
.org 0x13d86
	bl 0x1ea4	@ 00013d86 eef78df8
.org 0x13d8a
	ldrb r0, [r5, #0]	@ 00013d8a 2878
.org 0x13d8c
	adds r0, r0, r6	@ 00013d8c 8019
.org 0x13d8e
	ldrb r0, [r0, #0]	@ 00013d8e 0078
.org 0x13d90
	lsls r1, r0, #2	@ 00013d90 8100
.org 0x13d92
	adds r1, r1, r0	@ 00013d92 0918
.org 0x13d94
	lsls r1, r1, #2	@ 00013d94 8900
.org 0x13d96
	adds r1, r1, r4	@ 00013d96 0919
.org 0x13d98
	mov r2, r8	@ 00013d98 4246
.org 0x13d9a
	ldr r0, [r2, #0]	@ 00013d9a 1068
.org 0x13d9c
	adds r0, r0, r1	@ 00013d9c 4018
.org 0x13d9e
	adds r0, #12	@ 00013d9e 0c30
.org 0x13da0
	movs r1, #0	@ 00013da0 0021
.org 0x13da2
	bl 0x2208	@ 00013da2 eef731fa
.org 0x13da6
	ldr r0, [pc, #356]	@ 00013da6 5948
.org 0x13da8
	adds r5, r7, r0	@ 00013da8 3d18
.org 0x13daa
	ldrb r0, [r5, #0]	@ 00013daa 2878
.org 0x13dac
	adds r0, r0, r6	@ 00013dac 8019
.org 0x13dae
	ldrb r0, [r0, #0]	@ 00013dae 0078
.org 0x13db0
	lsls r1, r0, #2	@ 00013db0 8100
.org 0x13db2
	adds r1, r1, r0	@ 00013db2 0918
.org 0x13db4
	lsls r1, r1, #2	@ 00013db4 8900
.org 0x13db6
	adds r4, #180	@ 00013db6 b434
.org 0x13db8
	adds r1, r1, r4	@ 00013db8 0919
.org 0x13dba
	mov r2, r8	@ 00013dba 4246
.org 0x13dbc
	ldr r0, [r2, #0]	@ 00013dbc 1068
.org 0x13dbe
	adds r0, r0, r1	@ 00013dbe 4018
.org 0x13dc0
	mov r1, r9	@ 00013dc0 4946
.org 0x13dc2
	bl 0x1ea4	@ 00013dc2 eef76ff8
.org 0x13dc6
	ldrb r0, [r5, #0]	@ 00013dc6 2878
.org 0x13dc8
	adds r0, r0, r6	@ 00013dc8 8019
.org 0x13dca
	ldrb r0, [r0, #0]	@ 00013dca 0078
.org 0x13dcc
	lsls r1, r0, #2	@ 00013dcc 8100
.org 0x13dce
	adds r1, r1, r0	@ 00013dce 0918
.org 0x13dd0
	lsls r1, r1, #2	@ 00013dd0 8900
.org 0x13dd2
	adds r1, r1, r4	@ 00013dd2 0919
.org 0x13dd4
	mov r2, r8	@ 00013dd4 4246
.org 0x13dd6
	ldr r0, [r2, #0]	@ 00013dd6 1068
.org 0x13dd8
	adds r0, r0, r1	@ 00013dd8 4018
.org 0x13dda
	adds r0, #12	@ 00013dda 0c30
.org 0x13ddc
	movs r1, #0	@ 00013ddc 0021
.org 0x13dde
	bl 0x2208	@ 00013dde eef713fa
.org 0x13de2
	ldr r5, [pc, #256]	@ 00013de2 404d
.org 0x13de4
	ldr r1, [pc, #256]	@ 00013de4 4049
.org 0x13de6
	adds r0, r5, r1	@ 00013de6 6818
.org 0x13de8
	ldrh r1, [r0, #0]	@ 00013de8 0188
.org 0x13dea
	lsrs r0, r1, #8	@ 00013dea 080a
.org 0x13dec
	cmp r0, #8	@ 00013dec 0828
.org 0x13dee
	bne.n 0x13e3a	@ 00013dee 24d1
.org 0x13df0
	movs r0, #255	@ 00013df0 ff20
.org 0x13df2
	ands r0, r1	@ 00013df2 0840
.org 0x13df4
	cmp r0, #8	@ 00013df4 0828
.org 0x13df6
	bne.n 0x13e3a	@ 00013df6 20d1
.org 0x13df8
	ldr r2, [pc, #224]	@ 00013df8 384a
.org 0x13dfa
	mov r8, r2	@ 00013dfa 9046
.org 0x13dfc
	ldr r6, [pc, #236]	@ 00013dfc 3b4e
.org 0x13dfe
	ldr r0, [pc, #272]	@ 00013dfe 4448
.org 0x13e00
	adds r5, r5, r0	@ 00013e00 2d18
.org 0x13e02
	ldrb r0, [r5, #0]	@ 00013e02 2878
.org 0x13e04
	adds r0, r0, r6	@ 00013e04 8019
.org 0x13e06
	ldrb r0, [r0, #0]	@ 00013e06 0078
.org 0x13e08
	lsls r1, r0, #2	@ 00013e08 8100
.org 0x13e0a
	adds r1, r1, r0	@ 00013e0a 0918
.org 0x13e0c
	lsls r1, r1, #2	@ 00013e0c 8900
.org 0x13e0e
	ldr r4, [pc, #260]	@ 00013e0e 414c
.org 0x13e10
	adds r1, r1, r4	@ 00013e10 0919
.org 0x13e12
	ldr r0, [r2, #0]	@ 00013e12 1068
.org 0x13e14
	adds r0, r0, r1	@ 00013e14 4018
.org 0x13e16
	movs r1, #128	@ 00013e16 8021
.org 0x13e18
	lsls r1, r1, #7	@ 00013e18 c901
.org 0x13e1a
	bl 0x1ea4	@ 00013e1a eef743f8
.org 0x13e1e
	ldrb r0, [r5, #0]	@ 00013e1e 2878
.org 0x13e20
	adds r0, r0, r6	@ 00013e20 8019
.org 0x13e22
	ldrb r0, [r0, #0]	@ 00013e22 0078
.org 0x13e24
	lsls r1, r0, #2	@ 00013e24 8100
.org 0x13e26
	adds r1, r1, r0	@ 00013e26 0918
.org 0x13e28
	lsls r1, r1, #2	@ 00013e28 8900
.org 0x13e2a
	adds r1, r1, r4	@ 00013e2a 0919
.org 0x13e2c
	mov r2, r8	@ 00013e2c 4246
.org 0x13e2e
	ldr r0, [r2, #0]	@ 00013e2e 1068
.org 0x13e30
	adds r0, r0, r1	@ 00013e30 4018
.org 0x13e32
	adds r0, #12	@ 00013e32 0c30
.org 0x13e34
	movs r1, #0	@ 00013e34 0021
.org 0x13e36
	bl 0x2208	@ 00013e36 eef7e7f9
.org 0x13e3a
	ldr r7, [pc, #168]	@ 00013e3a 2a4f
.org 0x13e3c
	ldr r1, [pc, #188]	@ 00013e3c 2f49
.org 0x13e3e
	adds r0, r7, r1	@ 00013e3e 7818
.org 0x13e40
	ldrh r1, [r0, #0]	@ 00013e40 0188
.org 0x13e42
	lsrs r0, r1, #8	@ 00013e42 080a
.org 0x13e44
	cmp r0, #8	@ 00013e44 0828
.org 0x13e46
	bne.n 0x13ed0	@ 00013e46 43d1
.org 0x13e48
	movs r0, #255	@ 00013e48 ff20
.org 0x13e4a
	ands r0, r1	@ 00013e4a 0840
.org 0x13e4c
	cmp r0, #11	@ 00013e4c 0b28
.org 0x13e4e
	bne.n 0x13ed0	@ 00013e4e 3fd1
.org 0x13e50
	ldr r2, [pc, #136]	@ 00013e50 224a
.org 0x13e52
	mov r8, r2	@ 00013e52 9046
.org 0x13e54
	ldr r5, [pc, #148]	@ 00013e54 254d
.org 0x13e56
	ldr r0, [pc, #192]	@ 00013e56 3048
.org 0x13e58
	adds r6, r7, r0	@ 00013e58 3e18
.org 0x13e5a
	ldrb r0, [r6, #0]	@ 00013e5a 3078
.org 0x13e5c
	adds r0, r0, r5	@ 00013e5c 4019
.org 0x13e5e
	ldrb r0, [r0, #0]	@ 00013e5e 0078
.org 0x13e60
	lsls r1, r0, #2	@ 00013e60 8100
.org 0x13e62
	adds r1, r1, r0	@ 00013e62 0918
.org 0x13e64
	lsls r1, r1, #2	@ 00013e64 8900
.org 0x13e66
	ldr r4, [pc, #180]	@ 00013e66 2d4c
.org 0x13e68
	adds r1, r1, r4	@ 00013e68 0919
.org 0x13e6a
	ldr r0, [r2, #0]	@ 00013e6a 1068
.org 0x13e6c
	adds r0, r0, r1	@ 00013e6c 4018
.org 0x13e6e
	movs r1, #128	@ 00013e6e 8021
.org 0x13e70
	lsls r1, r1, #7	@ 00013e70 c901
.org 0x13e72
	mov r9, r1	@ 00013e72 8946
.org 0x13e74
	bl 0x1ea4	@ 00013e74 eef716f8
.org 0x13e78
	ldrb r0, [r6, #0]	@ 00013e78 3078
.org 0x13e7a
	adds r0, r0, r5	@ 00013e7a 4019
.org 0x13e7c
	ldrb r0, [r0, #0]	@ 00013e7c 0078
.org 0x13e7e
	lsls r1, r0, #2	@ 00013e7e 8100
.org 0x13e80
	adds r1, r1, r0	@ 00013e80 0918
.org 0x13e82
	lsls r1, r1, #2	@ 00013e82 8900
.org 0x13e84
	adds r1, r1, r4	@ 00013e84 0919
.org 0x13e86
	mov r2, r8	@ 00013e86 4246
.org 0x13e88
	ldr r0, [r2, #0]	@ 00013e88 1068
.org 0x13e8a
	adds r0, r0, r1	@ 00013e8a 4018
.org 0x13e8c
	adds r0, #12	@ 00013e8c 0c30
.org 0x13e8e
	movs r1, #0	@ 00013e8e 0021
.org 0x13e90
	bl 0x2208	@ 00013e90 eef7baf9
.org 0x13e94
	ldr r0, [pc, #136]	@ 00013e94 2248
.org 0x13e96
	adds r6, r7, r0	@ 00013e96 3e18
.org 0x13e98
	ldrb r0, [r6, #0]	@ 00013e98 3078
.org 0x13e9a
	adds r0, r0, r5	@ 00013e9a 4019
.org 0x13e9c
	ldrb r0, [r0, #0]	@ 00013e9c 0078
.org 0x13e9e
	lsls r1, r0, #2	@ 00013e9e 8100
.org 0x13ea0
	adds r1, r1, r0	@ 00013ea0 0918
.org 0x13ea2
	lsls r1, r1, #2	@ 00013ea2 8900
.org 0x13ea4
	adds r4, #180	@ 00013ea4 b434
.org 0x13ea6
	adds r1, r1, r4	@ 00013ea6 0919
.org 0x13ea8
	mov r2, r8	@ 00013ea8 4246
.org 0x13eaa
	ldr r0, [r2, #0]	@ 00013eaa 1068
.org 0x13eac
	adds r0, r0, r1	@ 00013eac 4018
.org 0x13eae
	mov r1, r9	@ 00013eae 4946
.org 0x13eb0
	bl 0x1ea4	@ 00013eb0 edf7f8ff
.org 0x13eb4
	ldrb r0, [r6, #0]	@ 00013eb4 3078
.org 0x13eb6
	adds r0, r0, r5	@ 00013eb6 4019
.org 0x13eb8
	ldrb r0, [r0, #0]	@ 00013eb8 0078
.org 0x13eba
	lsls r1, r0, #2	@ 00013eba 8100
.org 0x13ebc
	adds r1, r1, r0	@ 00013ebc 0918
.org 0x13ebe
	lsls r1, r1, #2	@ 00013ebe 8900
.org 0x13ec0
	adds r1, r1, r4	@ 00013ec0 0919
.org 0x13ec2
	mov r2, r8	@ 00013ec2 4246
