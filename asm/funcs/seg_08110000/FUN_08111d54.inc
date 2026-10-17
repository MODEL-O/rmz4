@ FUN_08111d54  entry 0x08111d54  size 770
.thumb
.org 0x111d54
FUN_08111d54:
	push {r4, r5, r6, r7, lr}	@ 00111d54 f0b5
.org 0x111d56
	mov r7, sl	@ 00111d56 5746
.org 0x111d58
	mov r6, r9	@ 00111d58 4e46
.org 0x111d5a
	mov r5, r8	@ 00111d5a 4546
.org 0x111d5c
	push {r5, r6, r7}	@ 00111d5c e0b4
.org 0x111d5e
	sub sp, #4	@ 00111d5e 81b0
.org 0x111d60
	adds r5, r0, #0	@ 00111d60 051c
.org 0x111d62
	movs r0, #0	@ 00111d62 0020
.org 0x111d64
	mov r9, r0	@ 00111d64 8146
.org 0x111d66
	mov r8, r0	@ 00111d66 8046
.org 0x111d68
	ldrb r0, [r5, #6]	@ 00111d68 a879
.org 0x111d6a
	cmp r0, #1	@ 00111d6a 0128
.org 0x111d6c
	beq.n 0x111e66	@ 00111d6c 7bd0
.org 0x111d6e
	cmp r0, #1	@ 00111d6e 0128
.org 0x111d70
	bgt.n 0x111d78	@ 00111d70 02dc
.org 0x111d72
	cmp r0, #0	@ 00111d72 0028
.org 0x111d74
	beq.n 0x111d86	@ 00111d74 07d0
.org 0x111d76
	b.n 0x111fc4	@ 00111d76 25e1
.org 0x111d78
	cmp r0, #2	@ 00111d78 0228
.org 0x111d7a
	bne.n 0x111d7e	@ 00111d7a 00d1
.org 0x111d7c
	b.n 0x111f48	@ 00111d7c e4e0
.org 0x111d7e
	cmp r0, #3	@ 00111d7e 0328
.org 0x111d80
	bne.n 0x111d84	@ 00111d80 00d1
.org 0x111d82
	b.n 0x111f96	@ 00111d82 08e1
.org 0x111d84
	b.n 0x111fc4	@ 00111d84 1ee1
.org 0x111d86
	ldr r2, [pc, #344]	@ 00111d86 564a
.org 0x111d88
	ldrh r1, [r2, #0]	@ 00111d88 1188
.org 0x111d8a
	ldr r0, [pc, #344]	@ 00111d8a 5648
.org 0x111d8c
	ands r0, r1	@ 00111d8c 0840
.org 0x111d8e
	ldr r1, [pc, #344]	@ 00111d8e 5649
.org 0x111d90
	ands r0, r1	@ 00111d90 0840
.org 0x111d92
	movs r3, #228	@ 00111d92 e423
.org 0x111d94
	lsls r3, r3, #6	@ 00111d94 9b01
.org 0x111d96
	adds r1, r3, #0	@ 00111d96 191c
.org 0x111d98
	orrs r0, r1	@ 00111d98 0843
.org 0x111d9a
	strh r0, [r2, #0]	@ 00111d9a 1080
.org 0x111d9c
	ldr r6, [pc, #332]	@ 00111d9c 534e
.org 0x111d9e
	adds r0, r6, #0	@ 00111d9e 301c
.org 0x111da0
	strh r0, [r2, #10]	@ 00111da0 5081
.org 0x111da2
	mov r0, r8	@ 00111da2 4046
.org 0x111da4
	str r0, [r2, #24]	@ 00111da4 9061
.org 0x111da6
	ldr r0, [pc, #328]	@ 00111da6 5248
.org 0x111da8
	ldrh r2, [r2, #8]	@ 00111da8 1289
.org 0x111daa
	movs r1, #12	@ 00111daa 0c21
.org 0x111dac
	ands r1, r2	@ 00111dac 1140
.org 0x111dae
	lsls r1, r1, #12	@ 00111dae 0903
.org 0x111db0
	bl 0x1d30	@ 00111db0 eff6beff
.org 0x111db4
	ldr r0, [pc, #316]	@ 00111db4 4f48
.org 0x111db6
	movs r1, #0	@ 00111db6 0021
.org 0x111db8
	bl 0x2208	@ 00111db8 f0f626fa
.org 0x111dbc
	ldr r1, [pc, #312]	@ 00111dbc 4e49
.org 0x111dbe
	mov r2, r8	@ 00111dbe 4246
.org 0x111dc0
	str r2, [sp, #0]	@ 00111dc0 0092
.org 0x111dc2
	movs r0, #56	@ 00111dc2 3820
.org 0x111dc4
	movs r2, #39	@ 00111dc4 2722
.org 0x111dc6
	movs r3, #0	@ 00111dc6 0023
.org 0x111dc8
	bl 0x2734	@ 00111dc8 f0f6b4fc
.org 0x111dcc
	movs r0, #51	@ 00111dcc 3320
.org 0x111dce
	movs r1, #0	@ 00111dce 0021
.org 0x111dd0
	bl 0x249c	@ 00111dd0 f0f664fb
.org 0x111dd4
	ldr r1, [pc, #292]	@ 00111dd4 4949
.org 0x111dd6
	ldr r0, [pc, #296]	@ 00111dd6 4a48
.org 0x111dd8
	strh r0, [r1, #0]	@ 00111dd8 0880
.org 0x111dda
	movs r3, #16	@ 00111dda 1023
.org 0x111ddc
	mov sl, r3	@ 00111ddc 9a46
.org 0x111dde
	mov r6, sl	@ 00111dde 5646
.org 0x111de0
	strh r6, [r1, #2]	@ 00111de0 4e80
.org 0x111de2
	bl 0x10d4a8	@ 00111de2 fbf761fb
.org 0x111de6
	bl 0x10d5b8	@ 00111de6 fbf7e7fb
.org 0x111dea
	movs r1, #0	@ 00111dea 0021
.org 0x111dec
	ldr r7, [pc, #276]	@ 00111dec 454f
.org 0x111dee
	ldrb r0, [r7, #18]	@ 00111dee b87c
.org 0x111df0
	ldr r6, [pc, #276]	@ 00111df0 454e
.org 0x111df2
	movs r4, #255	@ 00111df2 ff24
.org 0x111df4
	ldrb r2, [r6, #20]	@ 00111df4 327d
.org 0x111df6
	cmp r0, r2	@ 00111df6 9042
.org 0x111df8
	bne.n 0x111dfc	@ 00111df8 00d1
.org 0x111dfa
	movs r1, #1	@ 00111dfa 0121
.org 0x111dfc
	adds r3, r1, #0	@ 00111dfc 0b1c
.org 0x111dfe
	ldrb r2, [r7, #19]	@ 00111dfe fa7c
.org 0x111e00
	ldrh r1, [r6, #22]	@ 00111e00 f18a
.org 0x111e02
	adds r0, r4, #0	@ 00111e02 201c
.org 0x111e04
	ands r0, r1	@ 00111e04 0840
.org 0x111e06
	cmp r2, r0	@ 00111e06 8242
.org 0x111e08
	bne.n 0x111e0c	@ 00111e08 00d1
.org 0x111e0a
	adds r3, #1	@ 00111e0a 0133
.org 0x111e0c
	ldrb r2, [r7, #20]	@ 00111e0c 3a7d
.org 0x111e0e
	ldrh r1, [r6, #24]	@ 00111e0e 318b
.org 0x111e10
	adds r0, r4, #0	@ 00111e10 201c
.org 0x111e12
	ands r0, r1	@ 00111e12 0840
.org 0x111e14
	cmp r2, r0	@ 00111e14 8242
.org 0x111e16
	bne.n 0x111e1a	@ 00111e16 00d1
.org 0x111e18
	adds r3, #1	@ 00111e18 0133
.org 0x111e1a
	ldrb r2, [r7, #21]	@ 00111e1a 7a7d
.org 0x111e1c
	ldrh r1, [r6, #26]	@ 00111e1c 718b
.org 0x111e1e
	adds r0, r4, #0	@ 00111e1e 201c
.org 0x111e20
	ands r0, r1	@ 00111e20 0840
.org 0x111e22
	cmp r2, r0	@ 00111e22 8242
.org 0x111e24
	bne.n 0x111e28	@ 00111e24 00d1
.org 0x111e26
	adds r3, #1	@ 00111e26 0133
.org 0x111e28
	ldrb r2, [r7, #22]	@ 00111e28 ba7d
.org 0x111e2a
	ldrh r1, [r6, #28]	@ 00111e2a b18b
.org 0x111e2c
	adds r0, r4, #0	@ 00111e2c 201c
.org 0x111e2e
	ands r0, r1	@ 00111e2e 0840
.org 0x111e30
	cmp r2, r0	@ 00111e30 8242
.org 0x111e32
	bne.n 0x111e36	@ 00111e32 00d1
.org 0x111e34
	adds r3, #1	@ 00111e34 0133
.org 0x111e36
	ldrb r2, [r7, #23]	@ 00111e36 fa7d
.org 0x111e38
	ldrh r1, [r6, #30]	@ 00111e38 f18b
.org 0x111e3a
	adds r0, r4, #0	@ 00111e3a 201c
.org 0x111e3c
	ands r0, r1	@ 00111e3c 0840
.org 0x111e3e
	cmp r2, r0	@ 00111e3e 8242
.org 0x111e40
	bne.n 0x111e44	@ 00111e40 00d1
.org 0x111e42
	adds r3, #1	@ 00111e42 0133
.org 0x111e44
	adds r2, r3, #0	@ 00111e44 1a1c
.org 0x111e46
	ldrb r1, [r7, #24]	@ 00111e46 397e
.org 0x111e48
	ldrh r0, [r6, #32]	@ 00111e48 308c
.org 0x111e4a
	ands r4, r0	@ 00111e4a 0440
.org 0x111e4c
	cmp r1, r4	@ 00111e4c a142
.org 0x111e4e
	bne.n 0x111e52	@ 00111e4e 00d1
.org 0x111e50
	adds r2, #1	@ 00111e50 0132
.org 0x111e52
	ldr r3, [pc, #184]	@ 00111e52 2e4b
.org 0x111e54
	adds r0, r5, r3	@ 00111e54 e818
.org 0x111e56
	strb r2, [r0, #0]	@ 00111e56 0270
.org 0x111e58
	mov r6, sl	@ 00111e58 5646
.org 0x111e5a
	strh r6, [r5, #8]	@ 00111e5a 2e81
.org 0x111e5c
	mov r0, r8	@ 00111e5c 4046
.org 0x111e5e
	strh r0, [r5, #10]	@ 00111e5e 6881
.org 0x111e60
	ldrb r0, [r5, #6]	@ 00111e60 a879
.org 0x111e62
	adds r0, #1	@ 00111e62 0130
.org 0x111e64
	strb r0, [r5, #6]	@ 00111e64 a871
.org 0x111e66
	movs r1, #145	@ 00111e66 9121
.org 0x111e68
	lsls r1, r1, #2	@ 00111e68 8900
.org 0x111e6a
	adds r6, r5, r1	@ 00111e6a 6e18
.org 0x111e6c
	ldrb r2, [r6, #0]	@ 00111e6c 3278
.org 0x111e6e
	adds r4, r2, #0	@ 00111e6e 141c
.org 0x111e70
	ldr r7, [pc, #156]	@ 00111e70 274f
.org 0x111e72
	ldrh r1, [r7, #6]	@ 00111e72 f988
.org 0x111e74
	movs r0, #128	@ 00111e74 8020
.org 0x111e76
	ands r0, r1	@ 00111e76 0840
.org 0x111e78
	cmp r0, #0	@ 00111e78 0028
.org 0x111e7a
	beq.n 0x111e80	@ 00111e7a 01d0
.org 0x111e7c
	adds r0, r2, #1	@ 00111e7c 501c
.org 0x111e7e
	strb r0, [r6, #0]	@ 00111e7e 3070
.org 0x111e80
	ldrh r1, [r7, #6]	@ 00111e80 f988
.org 0x111e82
	movs r0, #64	@ 00111e82 4020
.org 0x111e84
	ands r0, r1	@ 00111e84 0840
.org 0x111e86
	cmp r0, #0	@ 00111e86 0028
.org 0x111e88
	beq.n 0x111e98	@ 00111e88 06d0
.org 0x111e8a
	ldrb r0, [r6, #0]	@ 00111e8a 3078
.org 0x111e8c
	ldr r2, [pc, #124]	@ 00111e8c 1f4a
.org 0x111e8e
	adds r1, r5, r2	@ 00111e8e a918
.org 0x111e90
	adds r0, #255	@ 00111e90 ff30
.org 0x111e92
	ldrb r1, [r1, #0]	@ 00111e92 0978
.org 0x111e94
	adds r0, r0, r1	@ 00111e94 4018
.org 0x111e96
	strb r0, [r6, #0]	@ 00111e96 3070
.org 0x111e98
	ldr r3, [pc, #112]	@ 00111e98 1c4b
.org 0x111e9a
	adds r1, r5, r3	@ 00111e9a e918
.org 0x111e9c
	ldrb r0, [r6, #0]	@ 00111e9c 3078
.org 0x111e9e
	ldrb r1, [r1, #0]	@ 00111e9e 0978
.org 0x111ea0
	bl 0x129198	@ 00111ea0 17f07af9
.org 0x111ea4
	strb r0, [r6, #0]	@ 00111ea4 3070
.org 0x111ea6
	lsls r0, r0, #24	@ 00111ea6 0006
.org 0x111ea8
	lsrs r0, r0, #24	@ 00111ea8 000e
.org 0x111eaa
	cmp r4, r0	@ 00111eaa 8442
.org 0x111eac
	beq.n 0x111eb4	@ 00111eac 02d0
.org 0x111eae
	movs r0, #1	@ 00111eae 0120
.org 0x111eb0
	bl 0x2b10	@ 00111eb0 f0f62efe
.org 0x111eb4
	ldrh r2, [r5, #8]	@ 00111eb4 2a89
.org 0x111eb6
	movs r6, #8	@ 00111eb6 0826
.org 0x111eb8
	ldrsh r0, [r5, r6]	@ 00111eb8 a85f
.org 0x111eba
	cmp r0, #15	@ 00111eba 0f28
.org 0x111ebc
	bgt.n 0x111ed2	@ 00111ebc 09dc
.org 0x111ebe
	adds r2, #1	@ 00111ebe 0132
.org 0x111ec0
	strh r2, [r5, #8]	@ 00111ec0 2a81
.org 0x111ec2
	ldr r3, [pc, #56]	@ 00111ec2 0e4b
.org 0x111ec4
	movs r1, #31	@ 00111ec4 1f21
.org 0x111ec6
	ands r1, r2	@ 00111ec6 1140
.org 0x111ec8
	movs r0, #16	@ 00111ec8 1020
.org 0x111eca
	subs r0, r0, r2	@ 00111eca 801a
.org 0x111ecc
	lsls r0, r0, #8	@ 00111ecc 0002
.org 0x111ece
	orrs r1, r0	@ 00111ece 0143
.org 0x111ed0
	strh r1, [r3, #2]	@ 00111ed0 5980
.org 0x111ed2
	ldrh r1, [r5, #10]	@ 00111ed2 6989
.org 0x111ed4
	movs r2, #10	@ 00111ed4 0a22
.org 0x111ed6
	ldrsh r0, [r5, r2]	@ 00111ed6 a85e
.org 0x111ed8
	cmp r0, #31	@ 00111ed8 1f28
.org 0x111eda
	bgt.n 0x111f14	@ 00111eda 1bdc
.org 0x111edc
	adds r0, r1, #1	@ 00111edc 481c
.org 0x111ede
	b.n 0x111f54	@ 00111ede 39e0
.org 0x111ee0
	.byte 0x00,0x0a,0x00,0x02	@ 00111ee0 data
.org 0x111ee4
	.byte 0xf8,0xff,0x00,0x00	@ 00111ee4 data
.org 0x111ee8
	.byte 0xff,0xf0,0x00,0x00	@ 00111ee8 data
.org 0x111eec
	.byte 0x06,0x06,0x00,0x00	@ 00111eec data
.org 0x111ef0
	.byte 0xb8,0xc1,0xb6,0x08	@ 00111ef0 data
.org 0x111ef4
	.byte 0xc4,0xc1,0xb6,0x08	@ 00111ef4 data
.org 0x111ef8
	.byte 0x00,0xc0,0xb2,0x08	@ 00111ef8 data
.org 0x111efc
	.byte 0x40,0x0a,0x00,0x02	@ 00111efc data
.org 0x111f00
	.byte 0x41,0x3e,0x00,0x00	@ 00111f00 data
.org 0x111f04
	.byte 0x70,0x0a,0x00,0x02	@ 00111f04 data
.org 0x111f08
	.byte 0x0c,0x93,0x12,0x08	@ 00111f08 data
.org 0x111f0c
	.byte 0x45,0x02,0x00,0x00	@ 00111f0c data
.org 0x111f10
	.byte 0x60,0x07,0x00,0x02	@ 00111f10 data
.org 0x111f14
	ldrh r1, [r7, #4]	@ 00111f14 b988
.org 0x111f16
	movs r0, #9	@ 00111f16 0920
.org 0x111f18
	ands r0, r1	@ 00111f18 0840
.org 0x111f1a
	cmp r0, #0	@ 00111f1a 0028
.org 0x111f1c
	beq.n 0x111f2c	@ 00111f1c 06d0
.org 0x111f1e
	movs r0, #2	@ 00111f1e 0220
.org 0x111f20
	bl 0x2b10	@ 00111f20 f0f6f6fd
.org 0x111f24
	ldrb r0, [r5, #6]	@ 00111f24 a879
.org 0x111f26
	adds r0, #2	@ 00111f26 0230
.org 0x111f28
	strb r0, [r5, #6]	@ 00111f28 a871
.org 0x111f2a
	b.n 0x111fc4	@ 00111f2a 4be0
.org 0x111f2c
	movs r0, #2	@ 00111f2c 0220
.org 0x111f2e
	ands r0, r1	@ 00111f2e 0840
.org 0x111f30
	cmp r0, #0	@ 00111f30 0028
.org 0x111f32
	beq.n 0x111fc4	@ 00111f32 47d0
.org 0x111f34
	movs r0, #3	@ 00111f34 0320
.org 0x111f36
	bl 0x2b10	@ 00111f36 f0f6ebfd
.org 0x111f3a
	movs r0, #51	@ 00111f3a 3320
.org 0x111f3c
	bl 0x2624	@ 00111f3c f0f672fb
.org 0x111f40
	ldrb r0, [r5, #6]	@ 00111f40 a879
.org 0x111f42
	adds r0, #1	@ 00111f42 0130
.org 0x111f44
	strb r0, [r5, #6]	@ 00111f44 a871
.org 0x111f46
	b.n 0x111fc4	@ 00111f46 3de0
.org 0x111f48
	ldrh r1, [r5, #10]	@ 00111f48 6989
.org 0x111f4a
	movs r2, #10	@ 00111f4a 0a22
.org 0x111f4c
	ldrsh r0, [r5, r2]	@ 00111f4c a85e
.org 0x111f4e
	cmp r0, #0	@ 00111f4e 0028
.org 0x111f50
	beq.n 0x111f80	@ 00111f50 16d0
.org 0x111f52
	subs r0, r1, #1	@ 00111f52 481e
.org 0x111f54
	adds r1, r0, #0	@ 00111f54 011c
.org 0x111f56
	strh r0, [r5, #10]	@ 00111f56 6881
.org 0x111f58
	ldr r2, [pc, #24]	@ 00111f58 064a
.org 0x111f5a
	ldr r3, [pc, #28]	@ 00111f5a 074b
.org 0x111f5c
	adds r0, r2, r3	@ 00111f5c d018
.org 0x111f5e
	strb r1, [r0, #0]	@ 00111f5e 0170
.org 0x111f60
	movs r0, #255	@ 00111f60 ff20
.org 0x111f62
	ands r0, r1	@ 00111f62 0840
.org 0x111f64
	ldr r6, [pc, #20]	@ 00111f64 054e
.org 0x111f66
	adds r1, r2, r6	@ 00111f66 9119
.org 0x111f68
	strb r0, [r1, #0]	@ 00111f68 0870
.org 0x111f6a
	movs r1, #128	@ 00111f6a 8021
.org 0x111f6c
	lsls r1, r1, #3	@ 00111f6c c900
.org 0x111f6e
	adds r2, r2, r1	@ 00111f6e 5218
.org 0x111f70
	strb r0, [r2, #0]	@ 00111f70 1070
.org 0x111f72
	b.n 0x111fc4	@ 00111f72 27e0
.org 0x111f74
	.byte 0xc0,0x2a,0x00,0x03	@ 00111f74 data
.org 0x111f78
	.byte 0x02,0x04,0x00,0x00	@ 00111f78 data
.org 0x111f7c
	.byte 0x01,0x04,0x00,0x00	@ 00111f7c data
.org 0x111f80
	movs r0, #51	@ 00111f80 3320
.org 0x111f82
	bl 0x2624	@ 00111f82 f0f64ffb
.org 0x111f86
	movs r0, #149	@ 00111f86 9520
.org 0x111f88
	bl 0x2b5c	@ 00111f88 f0f6e8fd
.org 0x111f8c
	adds r0, r5, #0	@ 00111f8c 281c
.org 0x111f8e
	movs r1, #4	@ 00111f8e 0421
.org 0x111f90
	bl 0x10f6f8	@ 00111f90 fdf7b2fb
.org 0x111f94
	b.n 0x111fc4	@ 00111f94 16e0
.org 0x111f96
	ldrh r2, [r5, #8]	@ 00111f96 2a89
.org 0x111f98
	movs r3, #8	@ 00111f98 0823
.org 0x111f9a
	ldrsh r0, [r5, r3]	@ 00111f9a e85e
.org 0x111f9c
	cmp r0, #0	@ 00111f9c 0028
.org 0x111f9e
	beq.n 0x111fbc	@ 00111f9e 0dd0
.org 0x111fa0
	subs r2, #1	@ 00111fa0 013a
.org 0x111fa2
	strh r2, [r5, #8]	@ 00111fa2 2a81
.org 0x111fa4
	ldr r3, [pc, #16]	@ 00111fa4 044b
.org 0x111fa6
	movs r1, #31	@ 00111fa6 1f21
.org 0x111fa8
	ands r1, r2	@ 00111fa8 1140
.org 0x111faa
	movs r0, #16	@ 00111faa 1020
.org 0x111fac
	subs r0, r0, r2	@ 00111fac 801a
.org 0x111fae
	lsls r0, r0, #8	@ 00111fae 0002
.org 0x111fb0
	orrs r1, r0	@ 00111fb0 0143
.org 0x111fb2
	strh r1, [r3, #2]	@ 00111fb2 5980
.org 0x111fb4
	b.n 0x111fc4	@ 00111fb4 06e0
.org 0x111fb6
	.byte 0x00	@ 00111fb6 data
.org 0x111fb7
	.byte 0x00	@ 00111fb7 data
.org 0x111fb8
	.byte 0x40,0x0a,0x00,0x02	@ 00111fb8 data
.org 0x111fbc
	mov r6, r8	@ 00111fbc 4646
.org 0x111fbe
	strb r6, [r5, #6]	@ 00111fbe ae71
.org 0x111fc0
	movs r0, #2	@ 00111fc0 0220
.org 0x111fc2
	strb r0, [r5, #5]	@ 00111fc2 6871
.org 0x111fc4
	movs r0, #51	@ 00111fc4 3320
.org 0x111fc6
	bl 0x25d8	@ 00111fc6 f0f607fb
.org 0x111fca
	mov r0, r9	@ 00111fca 4846
.org 0x111fcc
	lsls r4, r0, #16	@ 00111fcc 0404
.org 0x111fce
	asrs r1, r4, #16	@ 00111fce 2114
.org 0x111fd0
	ldr r2, [pc, #100]	@ 00111fd0 194a
.org 0x111fd2
	adds r0, r5, r2	@ 00111fd2 a818
.org 0x111fd4
	ldrb r0, [r0, #0]	@ 00111fd4 0078
.org 0x111fd6
	cmp r1, r0	@ 00111fd6 8142
.org 0x111fd8
	bge.n 0x1120aa	@ 00111fd8 67da
.org 0x111fda
	mov r3, r8	@ 00111fda 4346
.org 0x111fdc
	lsls r1, r3, #16	@ 00111fdc 1904
.org 0x111fde
	asrs r0, r1, #16	@ 00111fde 0814
.org 0x111fe0
	adds r7, r1, #0	@ 00111fe0 0f1c
.org 0x111fe2
	cmp r0, #6	@ 00111fe2 0628
.org 0x111fe4
	bgt.n 0x1120aa	@ 00111fe4 61dc
.org 0x111fe6
	ldr r6, [pc, #84]	@ 00111fe6 154e
.org 0x111fe8
	mov sl, r6	@ 00111fe8 b246
.org 0x111fea
	ldr r0, [pc, #84]	@ 00111fea 1548
.org 0x111fec
	asrs r6, r1, #16	@ 00111fec 0e14
.org 0x111fee
	adds r0, r6, r0	@ 00111fee 3018
.org 0x111ff0
	ldrb r1, [r0, #0]	@ 00111ff0 0178
.org 0x111ff2
	adds r0, r1, #0	@ 00111ff2 081c
.org 0x111ff4
	subs r0, #240	@ 00111ff4 f038
.org 0x111ff6
	add r0, sl	@ 00111ff6 5044
.org 0x111ff8
	ldrb r2, [r0, #0]	@ 00111ff8 0278
.org 0x111ffa
	ldr r0, [pc, #72]	@ 00111ffa 1248
.org 0x111ffc
	adds r1, #24	@ 00111ffc 1831
.org 0x111ffe
	lsls r1, r1, #24	@ 00111ffe 0906
.org 0x112000
	lsrs r1, r1, #23	@ 00112000 c90d
.org 0x112002
	adds r1, r1, r0	@ 00112002 0918
.org 0x112004
	ldrb r1, [r1, #0]	@ 00112004 0978
.org 0x112006
	cmp r2, r1	@ 00112006 8a42
.org 0x112008
	bne.n 0x112084	@ 00112008 3cd1
.org 0x11200a
	movs r0, #145	@ 0011200a 9120
.org 0x11200c
	lsls r0, r0, #2	@ 0011200c 8000
.org 0x11200e
	adds r3, r5, r0	@ 0011200e 2b18
.org 0x112010
	ldrb r0, [r3, #0]	@ 00112010 1878
.org 0x112012
	asrs r2, r4, #16	@ 00112012 2214
.org 0x112014
	cmp r0, r2	@ 00112014 9042
.org 0x112016
	bne.n 0x112020	@ 00112016 03d1
.org 0x112018
	ldr r1, [pc, #44]	@ 00112018 0b49
.org 0x11201a
	adds r0, r5, r1	@ 0011201a 6818
.org 0x11201c
	mov r1, r8	@ 0011201c 4146
.org 0x11201e
	strb r1, [r0, #0]	@ 0011201e 0170
.org 0x112020
	ldr r4, [pc, #40]	@ 00112020 0a4c
.org 0x112022
	ldr r0, [pc, #44]	@ 00112022 0b48
.org 0x112024
	lsls r1, r6, #1	@ 00112024 7100
.org 0x112026
	adds r1, r1, r0	@ 00112026 0918
.org 0x112028
	ldrh r1, [r1, #0]	@ 00112028 0988
.org 0x11202a
	ldrb r0, [r3, #0]	@ 0011202a 1878
.org 0x11202c
	cmp r0, r2	@ 0011202c 9042
.org 0x11202e
	beq.n 0x112054	@ 0011202e 11d0
.org 0x112030
	adds r0, r1, #1	@ 00112030 481c
.org 0x112032
	lsls r0, r0, #1	@ 00112032 4000
.org 0x112034
	b.n 0x112056	@ 00112034 0fe0
.org 0x112036
	.byte 0x00	@ 00112036 data
.org 0x112037
	.byte 0x00	@ 00112037 data
.org 0x112038
	.byte 0x45,0x02,0x00,0x00	@ 00112038 data
.org 0x11203c
	.byte 0x80,0x0a,0x00,0x02	@ 0011203c data
.org 0x112040
	.byte 0x54,0x1a,0x88,0x08	@ 00112040 data
.org 0x112044
	.byte 0x0c,0x93,0x12,0x08	@ 00112044 data
.org 0x112048
	.byte 0x46,0x02,0x00,0x00	@ 00112048 data
.org 0x11204c
	.byte 0xf8,0xcf,0x86,0x08	@ 0011204c data
.org 0x112050
	.byte 0x5c,0x1a,0x88,0x08	@ 00112050 data
.org 0x112054
	lsls r0, r1, #1	@ 00112054 4800
