@ FUN_08081c94  entry 0x08081c94  size 1140
.thumb
.org 0x81c94
FUN_08081c94:
	push {r4, r5, r6, r7, lr}	@ 00081c94 f0b5
.org 0x81c96
	mov r7, sl	@ 00081c96 5746
.org 0x81c98
	mov r6, r9	@ 00081c98 4e46
.org 0x81c9a
	mov r5, r8	@ 00081c9a 4546
.org 0x81c9c
	push {r5, r6, r7}	@ 00081c9c e0b4
.org 0x81c9e
	sub sp, #60	@ 00081c9e 8fb0
.org 0x81ca0
	str r0, [sp, #40]	@ 00081ca0 0a90
.org 0x81ca2
	ldr r0, [pc, #880]	@ 00081ca2 dc48
.org 0x81ca4
	ldr r0, [r0, #0]	@ 00081ca4 0068
.org 0x81ca6
	ldr r1, [r0, #84]	@ 00081ca6 416d
.org 0x81ca8
	str r1, [sp, #44]	@ 00081ca8 0b91
.org 0x81caa
	ldr r0, [r0, #88]	@ 00081caa 806d
.org 0x81cac
	ldr r2, [pc, #872]	@ 00081cac da4a
.org 0x81cae
	adds r2, r2, r0	@ 00081cae 1218
.org 0x81cb0
	mov r8, r2	@ 00081cb0 9046
.org 0x81cb2
	str r2, [sp, #48]	@ 00081cb2 0c92
.org 0x81cb4
	ldr r0, [sp, #40]	@ 00081cb4 0a98
.org 0x81cb6
	adds r0, #184	@ 00081cb6 b830
.org 0x81cb8
	ldr r3, [r0, #0]	@ 00081cb8 0368
.org 0x81cba
	adds r6, r1, #0	@ 00081cba 0e1c
.org 0x81cbc
	subs r0, r6, r3	@ 00081cbc f01a
.org 0x81cbe
	movs r1, #128	@ 00081cbe 8021
.org 0x81cc0
	lsls r1, r1, #8	@ 00081cc0 0902
.org 0x81cc2
	adds r0, r0, r1	@ 00081cc2 4018
.org 0x81cc4
	movs r1, #128	@ 00081cc4 8021
.org 0x81cc6
	lsls r1, r1, #9	@ 00081cc6 4902
.org 0x81cc8
	cmp r0, r1	@ 00081cc8 8842
.org 0x81cca
	bls.n 0x81cce	@ 00081cca 00d9
.org 0x81ccc
	b.n 0x820aa	@ 00081ccc ede1
.org 0x81cce
	ldr r1, [sp, #40]	@ 00081cce 0a99
.org 0x81cd0
	adds r1, #188	@ 00081cd0 bc31
.org 0x81cd2
	ldr r0, [r1, #0]	@ 00081cd2 0868
.org 0x81cd4
	subs r0, r2, r0	@ 00081cd4 101a
.org 0x81cd6
	movs r2, #192	@ 00081cd6 c022
.org 0x81cd8
	lsls r2, r2, #6	@ 00081cd8 9201
.org 0x81cda
	adds r0, r0, r2	@ 00081cda 8018
.org 0x81cdc
	movs r6, #192	@ 00081cdc c026
.org 0x81cde
	lsls r6, r6, #7	@ 00081cde f601
.org 0x81ce0
	mov sl, r6	@ 00081ce0 b246
.org 0x81ce2
	str r1, [sp, #56]	@ 00081ce2 0e91
.org 0x81ce4
	cmp r0, sl	@ 00081ce4 5045
.org 0x81ce6
	bls.n 0x81cea	@ 00081ce6 00d9
.org 0x81ce8
	b.n 0x820aa	@ 00081ce8 dfe1
.org 0x81cea
	add r1, sp, #32	@ 00081cea 08a9
.org 0x81cec
	movs r0, #0	@ 00081cec 0020
.org 0x81cee
	strb r0, [r1, #3]	@ 00081cee c870
.org 0x81cf0
	strb r0, [r1, #2]	@ 00081cf0 8870
.org 0x81cf2
	strb r0, [r1, #1]	@ 00081cf2 4870
.org 0x81cf4
	strb r0, [r1, #0]	@ 00081cf4 0870
.org 0x81cf6
	ldr r0, [sp, #44]	@ 00081cf6 0b98
.org 0x81cf8
	ldr r2, [pc, #800]	@ 00081cf8 c84a
.org 0x81cfa
	adds r7, r0, r2	@ 00081cfa 8718
.org 0x81cfc
	ldr r6, [pc, #800]	@ 00081cfc c84e
.org 0x81cfe
	adds r2, r0, r6	@ 00081cfe 8219
.org 0x81d00
	ldr r6, [pc, #800]	@ 00081d00 c84e
.org 0x81d02
	adds r0, r3, r6	@ 00081d02 9819
.org 0x81d04
	mov r9, r1	@ 00081d04 8946
.org 0x81d06
	cmp r2, r0	@ 00081d06 8242
.org 0x81d08
	bge.n 0x81d0c	@ 00081d08 00da
.org 0x81d0a
	adds r2, r0, #0	@ 00081d0a 021c
.org 0x81d0c
	subs r3, r7, r2	@ 00081d0c bb1a
.org 0x81d0e
	cmp r3, #0	@ 00081d0e 002b
.org 0x81d10
	ble.n 0x81dfe	@ 00081d10 75dd
.org 0x81d12
	ldr r2, [pc, #788]	@ 00081d12 c54a
.org 0x81d14
	ldr r1, [r2, #0]	@ 00081d14 1168
.org 0x81d16
	ldr r0, [pc, #788]	@ 00081d16 c548
.org 0x81d18
	muls r0, r1	@ 00081d18 4843
.org 0x81d1a
	ldr r1, [pc, #788]	@ 00081d1a c549
.org 0x81d1c
	adds r0, r0, r1	@ 00081d1c 4018
.org 0x81d1e
	lsls r0, r0, #1	@ 00081d1e 4000
.org 0x81d20
	lsrs r1, r0, #1	@ 00081d20 4108
.org 0x81d22
	str r1, [r2, #0]	@ 00081d22 1160
.org 0x81d24
	lsrs r0, r0, #17	@ 00081d24 400c
.org 0x81d26
	adds r1, r3, #0	@ 00081d26 191c
.org 0x81d28
	bl 0x129198	@ 00081d28 a7f036fa
.org 0x81d2c
	subs r6, r7, r0	@ 00081d2c 3e1a
.org 0x81d2e
	adds r0, r6, #0	@ 00081d2e 301c
.org 0x81d30
	mov r1, r8	@ 00081d30 4146
.org 0x81d32
	bl 0x8534	@ 00081d32 86f7fffb
.org 0x81d36
	adds r1, r0, #0	@ 00081d36 011c
.org 0x81d38
	adds r5, r1, #0	@ 00081d38 0d1c
.org 0x81d3a
	ldr r2, [sp, #56]	@ 00081d3a 0e9a
.org 0x81d3c
	ldr r0, [r2, #0]	@ 00081d3c 1068
.org 0x81d3e
	subs r0, r5, r0	@ 00081d3e 281a
.org 0x81d40
	movs r3, #192	@ 00081d40 c023
.org 0x81d42
	lsls r3, r3, #6	@ 00081d42 9b01
.org 0x81d44
	adds r0, r0, r3	@ 00081d44 c018
.org 0x81d46
	cmp r0, sl	@ 00081d46 5045
.org 0x81d48
	bhi.n 0x81dfe	@ 00081d48 59d8
.org 0x81d4a
	str r6, [sp, #0]	@ 00081d4a 0096
.org 0x81d4c
	str r1, [sp, #4]	@ 00081d4c 0191
.org 0x81d4e
	movs r7, #0	@ 00081d4e 0027
.org 0x81d50
	ldr r0, [pc, #708]	@ 00081d50 b148
.org 0x81d52
	adds r0, r0, r6	@ 00081d52 8019
.org 0x81d54
	mov r8, r0	@ 00081d54 8046
.org 0x81d56
	movs r2, #128	@ 00081d56 8022
.org 0x81d58
	lsls r2, r2, #4	@ 00081d58 1201
.org 0x81d5a
	mov sl, r2	@ 00081d5a 9246
.org 0x81d5c
	adds r6, r1, r2	@ 00081d5c 8e18
.org 0x81d5e
	adds r1, r6, #0	@ 00081d5e 311c
.org 0x81d60
	bl 0x7c7c	@ 00081d60 85f78cff
.org 0x81d64
	lsls r0, r0, #16	@ 00081d64 0004
.org 0x81d66
	cmp r0, #0	@ 00081d66 0028
.org 0x81d68
	bne.n 0x81d7c	@ 00081d68 08d1
.org 0x81d6a
	mov r0, r8	@ 00081d6a 4046
.org 0x81d6c
	adds r1, r6, #0	@ 00081d6c 311c
.org 0x81d6e
	bl 0x8868	@ 00081d6e 86f77bfd
.org 0x81d72
	movs r3, #128	@ 00081d72 8023
.org 0x81d74
	lsls r3, r3, #5	@ 00081d74 5b01
.org 0x81d76
	adds r0, r0, r3	@ 00081d76 c018
.org 0x81d78
	str r0, [sp, #0]	@ 00081d78 0090
.org 0x81d7a
	movs r7, #1	@ 00081d7a 0127
.org 0x81d7c
	ldr r0, [sp, #4]	@ 00081d7c 0198
.org 0x81d7e
	ldr r1, [pc, #692]	@ 00081d7e ad49
.org 0x81d80
	adds r6, r0, r1	@ 00081d80 4618
.org 0x81d82
	mov r0, r8	@ 00081d82 4046
.org 0x81d84
	adds r1, r6, #0	@ 00081d84 311c
.org 0x81d86
	bl 0x7c7c	@ 00081d86 85f779ff
.org 0x81d8a
	lsls r0, r0, #16	@ 00081d8a 0004
.org 0x81d8c
	cmp r0, #0	@ 00081d8c 0028
.org 0x81d8e
	beq.n 0x81da2	@ 00081d8e 08d0
.org 0x81d90
	mov r0, r8	@ 00081d90 4046
.org 0x81d92
	adds r1, r6, #0	@ 00081d92 311c
.org 0x81d94
	bl 0x8988	@ 00081d94 86f7f8fd
.org 0x81d98
	movs r2, #128	@ 00081d98 8022
.org 0x81d9a
	lsls r2, r2, #5	@ 00081d9a 5201
.org 0x81d9c
	adds r0, r0, r2	@ 00081d9c 8018
.org 0x81d9e
	str r0, [sp, #0]	@ 00081d9e 0090
.org 0x81da0
	adds r7, #1	@ 00081da0 0137
.org 0x81da2
	ldr r0, [sp, #0]	@ 00081da2 0098
.org 0x81da4
	movs r3, #128	@ 00081da4 8023
.org 0x81da6
	lsls r3, r3, #5	@ 00081da6 5b01
.org 0x81da8
	adds r3, r3, r0	@ 00081da8 1b18
.org 0x81daa
	mov r8, r3	@ 00081daa 9846
.org 0x81dac
	ldr r0, [sp, #4]	@ 00081dac 0198
.org 0x81dae
	mov r1, sl	@ 00081dae 5146
.org 0x81db0
	adds r6, r0, r1	@ 00081db0 4618
.org 0x81db2
	mov r0, r8	@ 00081db2 4046
.org 0x81db4
	adds r1, r6, #0	@ 00081db4 311c
.org 0x81db6
	bl 0x7c7c	@ 00081db6 85f761ff
.org 0x81dba
	lsls r0, r0, #16	@ 00081dba 0004
.org 0x81dbc
	cmp r0, #0	@ 00081dbc 0028
.org 0x81dbe
	bne.n 0x81dd0	@ 00081dbe 07d1
.org 0x81dc0
	mov r0, r8	@ 00081dc0 4046
.org 0x81dc2
	adds r1, r6, #0	@ 00081dc2 311c
.org 0x81dc4
	bl 0x8988	@ 00081dc4 86f7e0fd
.org 0x81dc8
	ldr r2, [pc, #588]	@ 00081dc8 934a
.org 0x81dca
	adds r0, r0, r2	@ 00081dca 8018
.org 0x81dcc
	str r0, [sp, #0]	@ 00081dcc 0090
.org 0x81dce
	adds r7, #1	@ 00081dce 0137
.org 0x81dd0
	ldr r0, [sp, #4]	@ 00081dd0 0198
.org 0x81dd2
	ldr r3, [pc, #608]	@ 00081dd2 984b
.org 0x81dd4
	adds r6, r0, r3	@ 00081dd4 c618
.org 0x81dd6
	mov r0, r8	@ 00081dd6 4046
.org 0x81dd8
	adds r1, r6, #0	@ 00081dd8 311c
.org 0x81dda
	bl 0x7c7c	@ 00081dda 85f74fff
.org 0x81dde
	lsls r0, r0, #16	@ 00081dde 0004
.org 0x81de0
	cmp r0, #0	@ 00081de0 0028
.org 0x81de2
	beq.n 0x81df4	@ 00081de2 07d0
.org 0x81de4
	mov r0, r8	@ 00081de4 4046
.org 0x81de6
	adds r1, r6, #0	@ 00081de6 311c
.org 0x81de8
	bl 0x8868	@ 00081de8 86f73efd
.org 0x81dec
	ldr r6, [pc, #552]	@ 00081dec 8a4e
.org 0x81dee
	adds r0, r0, r6	@ 00081dee 8019
.org 0x81df0
	str r0, [sp, #0]	@ 00081df0 0090
.org 0x81df2
	adds r7, #1	@ 00081df2 0137
.org 0x81df4
	cmp r7, #1	@ 00081df4 012f
.org 0x81df6
	bgt.n 0x81dfe	@ 00081df6 02dc
.org 0x81df8
	movs r0, #1	@ 00081df8 0120
.org 0x81dfa
	mov r1, r9	@ 00081dfa 4946
.org 0x81dfc
	strb r0, [r1, #0]	@ 00081dfc 0870
.org 0x81dfe
	ldr r2, [sp, #44]	@ 00081dfe 0b9a
.org 0x81e00
	movs r3, #128	@ 00081e00 8023
.org 0x81e02
	lsls r3, r3, #6	@ 00081e02 9b01
.org 0x81e04
	adds r7, r2, r3	@ 00081e04 d718
.org 0x81e06
	movs r6, #128	@ 00081e06 8026
.org 0x81e08
	lsls r6, r6, #7	@ 00081e08 f601
.org 0x81e0a
	adds r2, r2, r6	@ 00081e0a 9219
.org 0x81e0c
	ldr r1, [sp, #40]	@ 00081e0c 0a99
.org 0x81e0e
	adds r1, #184	@ 00081e0e b831
.org 0x81e10
	ldr r0, [r1, #0]	@ 00081e10 0868
.org 0x81e12
	movs r3, #128	@ 00081e12 8023
.org 0x81e14
	lsls r3, r3, #8	@ 00081e14 1b02
.org 0x81e16
	adds r0, r0, r3	@ 00081e16 c018
.org 0x81e18
	str r1, [sp, #52]	@ 00081e18 0d91
.org 0x81e1a
	cmp r2, r0	@ 00081e1a 8242
.org 0x81e1c
	ble.n 0x81e20	@ 00081e1c 00dd
.org 0x81e1e
	adds r2, r0, #0	@ 00081e1e 021c
.org 0x81e20
	subs r3, r2, r7	@ 00081e20 d31b
.org 0x81e22
	cmp r3, #0	@ 00081e22 002b
.org 0x81e24
	ble.n 0x81f16	@ 00081e24 77dd
.org 0x81e26
	ldr r2, [pc, #512]	@ 00081e26 804a
.org 0x81e28
	ldr r1, [r2, #0]	@ 00081e28 1168
.org 0x81e2a
	ldr r0, [pc, #512]	@ 00081e2a 8048
.org 0x81e2c
	muls r0, r1	@ 00081e2c 4843
.org 0x81e2e
	ldr r6, [pc, #512]	@ 00081e2e 804e
.org 0x81e30
	adds r0, r0, r6	@ 00081e30 8019
.org 0x81e32
	lsls r0, r0, #1	@ 00081e32 4000
.org 0x81e34
	lsrs r1, r0, #1	@ 00081e34 4108
.org 0x81e36
	str r1, [r2, #0]	@ 00081e36 1160
.org 0x81e38
	lsrs r0, r0, #17	@ 00081e38 400c
.org 0x81e3a
	adds r1, r3, #0	@ 00081e3a 191c
.org 0x81e3c
	bl 0x129198	@ 00081e3c a7f0acf9
.org 0x81e40
	adds r6, r7, r0	@ 00081e40 3e18
.org 0x81e42
	adds r0, r6, #0	@ 00081e42 301c
.org 0x81e44
	ldr r1, [sp, #48]	@ 00081e44 0c99
.org 0x81e46
	bl 0x8534	@ 00081e46 86f775fb
.org 0x81e4a
	adds r2, r0, #0	@ 00081e4a 021c
.org 0x81e4c
	adds r5, r2, #0	@ 00081e4c 151c
.org 0x81e4e
	ldr r1, [sp, #56]	@ 00081e4e 0e99
.org 0x81e50
	ldr r0, [r1, #0]	@ 00081e50 0868
.org 0x81e52
	subs r0, r5, r0	@ 00081e52 281a
.org 0x81e54
	movs r3, #192	@ 00081e54 c023
.org 0x81e56
	lsls r3, r3, #6	@ 00081e56 9b01
.org 0x81e58
	adds r0, r0, r3	@ 00081e58 c018
.org 0x81e5a
	movs r1, #192	@ 00081e5a c021
.org 0x81e5c
	lsls r1, r1, #7	@ 00081e5c c901
.org 0x81e5e
	cmp r0, r1	@ 00081e5e 8842
.org 0x81e60
	bhi.n 0x81f16	@ 00081e60 59d8
.org 0x81e62
	str r6, [sp, #8]	@ 00081e62 0296
.org 0x81e64
	str r2, [sp, #12]	@ 00081e64 0392
.org 0x81e66
	movs r7, #0	@ 00081e66 0027
.org 0x81e68
	ldr r0, [pc, #428]	@ 00081e68 6b48
.org 0x81e6a
	adds r0, r0, r6	@ 00081e6a 8019
.org 0x81e6c
	mov r8, r0	@ 00081e6c 8046
.org 0x81e6e
	movs r1, #128	@ 00081e6e 8021
.org 0x81e70
	lsls r1, r1, #4	@ 00081e70 0901
.org 0x81e72
	mov sl, r1	@ 00081e72 8a46
.org 0x81e74
	adds r6, r2, r1	@ 00081e74 5618
.org 0x81e76
	adds r1, r6, #0	@ 00081e76 311c
.org 0x81e78
	bl 0x7c7c	@ 00081e78 85f700ff
.org 0x81e7c
	lsls r0, r0, #16	@ 00081e7c 0004
.org 0x81e7e
	cmp r0, #0	@ 00081e7e 0028
.org 0x81e80
	bne.n 0x81e94	@ 00081e80 08d1
.org 0x81e82
	mov r0, r8	@ 00081e82 4046
.org 0x81e84
	adds r1, r6, #0	@ 00081e84 311c
.org 0x81e86
	bl 0x8868	@ 00081e86 86f7effc
.org 0x81e8a
	movs r2, #128	@ 00081e8a 8022
.org 0x81e8c
	lsls r2, r2, #5	@ 00081e8c 5201
.org 0x81e8e
	adds r0, r0, r2	@ 00081e8e 8018
.org 0x81e90
	str r0, [sp, #8]	@ 00081e90 0290
.org 0x81e92
	movs r7, #1	@ 00081e92 0127
.org 0x81e94
	ldr r0, [sp, #12]	@ 00081e94 0398
.org 0x81e96
	ldr r3, [pc, #412]	@ 00081e96 674b
.org 0x81e98
	adds r6, r0, r3	@ 00081e98 c618
.org 0x81e9a
	mov r0, r8	@ 00081e9a 4046
.org 0x81e9c
	adds r1, r6, #0	@ 00081e9c 311c
.org 0x81e9e
	bl 0x7c7c	@ 00081e9e 85f7edfe
.org 0x81ea2
	lsls r0, r0, #16	@ 00081ea2 0004
.org 0x81ea4
	cmp r0, #0	@ 00081ea4 0028
.org 0x81ea6
	beq.n 0x81eba	@ 00081ea6 08d0
.org 0x81ea8
	mov r0, r8	@ 00081ea8 4046
.org 0x81eaa
	adds r1, r6, #0	@ 00081eaa 311c
.org 0x81eac
	bl 0x8988	@ 00081eac 86f76cfd
.org 0x81eb0
	movs r6, #128	@ 00081eb0 8026
.org 0x81eb2
	lsls r6, r6, #5	@ 00081eb2 7601
.org 0x81eb4
	adds r0, r0, r6	@ 00081eb4 8019
.org 0x81eb6
	str r0, [sp, #8]	@ 00081eb6 0290
.org 0x81eb8
	adds r7, #1	@ 00081eb8 0137
.org 0x81eba
	ldr r0, [sp, #8]	@ 00081eba 0298
.org 0x81ebc
	movs r1, #128	@ 00081ebc 8021
.org 0x81ebe
	lsls r1, r1, #5	@ 00081ebe 4901
.org 0x81ec0
	adds r1, r1, r0	@ 00081ec0 0918
.org 0x81ec2
	mov r8, r1	@ 00081ec2 8846
.org 0x81ec4
	ldr r0, [sp, #12]	@ 00081ec4 0398
.org 0x81ec6
	mov r2, sl	@ 00081ec6 5246
.org 0x81ec8
	adds r6, r0, r2	@ 00081ec8 8618
.org 0x81eca
	mov r0, r8	@ 00081eca 4046
.org 0x81ecc
	adds r1, r6, #0	@ 00081ecc 311c
.org 0x81ece
	bl 0x7c7c	@ 00081ece 85f7d5fe
.org 0x81ed2
	lsls r0, r0, #16	@ 00081ed2 0004
.org 0x81ed4
	cmp r0, #0	@ 00081ed4 0028
.org 0x81ed6
	bne.n 0x81ee8	@ 00081ed6 07d1
.org 0x81ed8
	mov r0, r8	@ 00081ed8 4046
.org 0x81eda
	adds r1, r6, #0	@ 00081eda 311c
.org 0x81edc
	bl 0x8988	@ 00081edc 86f754fd
.org 0x81ee0
	ldr r3, [pc, #308]	@ 00081ee0 4d4b
.org 0x81ee2
	adds r0, r0, r3	@ 00081ee2 c018
.org 0x81ee4
	str r0, [sp, #8]	@ 00081ee4 0290
.org 0x81ee6
	adds r7, #1	@ 00081ee6 0137
.org 0x81ee8
	ldr r0, [sp, #12]	@ 00081ee8 0398
.org 0x81eea
	ldr r1, [pc, #328]	@ 00081eea 5249
.org 0x81eec
	adds r6, r0, r1	@ 00081eec 4618
.org 0x81eee
	mov r0, r8	@ 00081eee 4046
.org 0x81ef0
	adds r1, r6, #0	@ 00081ef0 311c
.org 0x81ef2
	bl 0x7c7c	@ 00081ef2 85f7c3fe
.org 0x81ef6
	lsls r0, r0, #16	@ 00081ef6 0004
.org 0x81ef8
	cmp r0, #0	@ 00081ef8 0028
.org 0x81efa
	beq.n 0x81f0c	@ 00081efa 07d0
.org 0x81efc
	mov r0, r8	@ 00081efc 4046
.org 0x81efe
	adds r1, r6, #0	@ 00081efe 311c
.org 0x81f00
	bl 0x8868	@ 00081f00 86f7b2fc
.org 0x81f04
	ldr r2, [pc, #272]	@ 00081f04 444a
.org 0x81f06
	adds r0, r0, r2	@ 00081f06 8018
.org 0x81f08
	str r0, [sp, #8]	@ 00081f08 0290
.org 0x81f0a
	adds r7, #1	@ 00081f0a 0137
.org 0x81f0c
	cmp r7, #1	@ 00081f0c 012f
.org 0x81f0e
	bgt.n 0x81f16	@ 00081f0e 02dc
.org 0x81f10
	movs r0, #1	@ 00081f10 0120
.org 0x81f12
	mov r3, r9	@ 00081f12 4b46
.org 0x81f14
	strb r0, [r3, #1]	@ 00081f14 5870
.org 0x81f16
	ldr r0, [sp, #44]	@ 00081f16 0b98
.org 0x81f18
	ldr r1, [sp, #48]	@ 00081f18 0c99
.org 0x81f1a
	bl 0x8988	@ 00081f1a 86f735fd
.org 0x81f1e
	mov r8, r0	@ 00081f1e 8046
.org 0x81f20
	mov r4, r8	@ 00081f20 4446
.org 0x81f22
	ldr r6, [sp, #48]	@ 00081f22 0c9e
.org 0x81f24
	ldr r1, [sp, #52]	@ 00081f24 0d99
.org 0x81f26
	ldr r0, [r1, #0]	@ 00081f26 0868
.org 0x81f28
	subs r0, r4, r0	@ 00081f28 201a
.org 0x81f2a
	movs r3, #128	@ 00081f2a 8023
.org 0x81f2c
	lsls r3, r3, #8	@ 00081f2c 1b02
.org 0x81f2e
	adds r0, r0, r3	@ 00081f2e c018
.org 0x81f30
	movs r1, #128	@ 00081f30 8021
.org 0x81f32
	lsls r1, r1, #9	@ 00081f32 4902
.org 0x81f34
	cmp r0, r1	@ 00081f34 8842
.org 0x81f36
	bhi.n 0x81fc2	@ 00081f36 44d8
.org 0x81f38
	ldr r2, [sp, #44]	@ 00081f38 0b9a
.org 0x81f3a
	subs r1, r4, r2	@ 00081f3a a11a
.org 0x81f3c
	movs r2, #128	@ 00081f3c 8022
.org 0x81f3e
	lsls r2, r2, #7	@ 00081f3e d201
.org 0x81f40
	adds r0, r1, r2	@ 00081f40 8818
.org 0x81f42
	cmp r0, r3	@ 00081f42 9842
.org 0x81f44
	bhi.n 0x81fc2	@ 00081f44 3dd8
.org 0x81f46
	movs r3, #128	@ 00081f46 8023
.org 0x81f48
	lsls r3, r3, #6	@ 00081f48 9b01
.org 0x81f4a
	adds r0, r1, r3	@ 00081f4a c818
.org 0x81f4c
	cmp r0, r2	@ 00081f4c 9042
.org 0x81f4e
	bls.n 0x81fc2	@ 00081f4e 38d9
.org 0x81f50
	ldr r0, [sp, #44]	@ 00081f50 0b98
.org 0x81f52
	cmp r4, r0	@ 00081f52 8442
.org 0x81f54
	bge.n 0x81fc2	@ 00081f54 35da
.org 0x81f56
	subs r0, r4, #1	@ 00081f56 601e
.org 0x81f58
	adds r1, r6, #0	@ 00081f58 311c
.org 0x81f5a
	bl 0x82140	@ 00081f5a 00f0f1f8
.org 0x81f5e
	cmp r0, #0	@ 00081f5e 0028
.org 0x81f60
	beq.n 0x81fc2	@ 00081f60 2fd0
.org 0x81f62
	mov r1, r8	@ 00081f62 4146
.org 0x81f64
	str r1, [sp, #16]	@ 00081f64 0491
.org 0x81f66
	str r6, [sp, #20]	@ 00081f66 0596
.org 0x81f68
	movs r7, #0	@ 00081f68 0027
.org 0x81f6a
	ldr r2, [pc, #200]	@ 00081f6a 324a
.org 0x81f6c
	add r8, r2	@ 00081f6c 9044
.org 0x81f6e
	ldr r3, [pc, #168]	@ 00081f6e 2a4b
.org 0x81f70
	adds r6, r6, r3	@ 00081f70 f618
.org 0x81f72
	mov r0, r8	@ 00081f72 4046
.org 0x81f74
	adds r1, r6, #0	@ 00081f74 311c
.org 0x81f76
	bl 0x7c7c	@ 00081f76 85f781fe
.org 0x81f7a
	lsls r0, r0, #16	@ 00081f7a 0004
.org 0x81f7c
	cmp r0, #0	@ 00081f7c 0028
.org 0x81f7e
	bne.n 0x81f92	@ 00081f7e 08d1
.org 0x81f80
	mov r0, r8	@ 00081f80 4046
.org 0x81f82
	adds r1, r6, #0	@ 00081f82 311c
.org 0x81f84
	bl 0x8534	@ 00081f84 86f7d6fa
.org 0x81f88
	movs r6, #128	@ 00081f88 8026
.org 0x81f8a
	lsls r6, r6, #5	@ 00081f8a 7601
.org 0x81f8c
	adds r0, r0, r6	@ 00081f8c 8019
.org 0x81f8e
	str r0, [sp, #20]	@ 00081f8e 0590
.org 0x81f90
	movs r7, #1	@ 00081f90 0127
.org 0x81f92
	ldr r0, [sp, #20]	@ 00081f92 0598
.org 0x81f94
	movs r1, #128	@ 00081f94 8021
.org 0x81f96
	lsls r1, r1, #5	@ 00081f96 4901
.org 0x81f98
	adds r6, r0, r1	@ 00081f98 4618
.org 0x81f9a
	mov r0, r8	@ 00081f9a 4046
.org 0x81f9c
	adds r1, r6, #0	@ 00081f9c 311c
.org 0x81f9e
	bl 0x7c7c	@ 00081f9e 85f76dfe
.org 0x81fa2
	lsls r0, r0, #16	@ 00081fa2 0004
.org 0x81fa4
	cmp r0, #0	@ 00081fa4 0028
.org 0x81fa6
	bne.n 0x81fb8	@ 00081fa6 07d1
.org 0x81fa8
	mov r0, r8	@ 00081fa8 4046
.org 0x81faa
	adds r1, r6, #0	@ 00081faa 311c
.org 0x81fac
	bl 0x8748	@ 00081fac 86f7ccfb
.org 0x81fb0
	ldr r2, [pc, #100]	@ 00081fb0 194a
.org 0x81fb2
	adds r0, r0, r2	@ 00081fb2 8018
.org 0x81fb4
	str r0, [sp, #20]	@ 00081fb4 0590
.org 0x81fb6
	adds r7, #1	@ 00081fb6 0137
.org 0x81fb8
	cmp r7, #1	@ 00081fb8 012f
.org 0x81fba
	bgt.n 0x81fc2	@ 00081fba 02dc
.org 0x81fbc
	movs r0, #1	@ 00081fbc 0120
.org 0x81fbe
	mov r3, r9	@ 00081fbe 4b46
.org 0x81fc0
	strb r0, [r3, #2]	@ 00081fc0 9870
.org 0x81fc2
	ldr r0, [sp, #44]	@ 00081fc2 0b98
.org 0x81fc4
	ldr r1, [sp, #48]	@ 00081fc4 0c99
.org 0x81fc6
	bl 0x8868	@ 00081fc6 86f74ffc
.org 0x81fca
	mov r8, r0	@ 00081fca 8046
.org 0x81fcc
	mov r4, r8	@ 00081fcc 4446
.org 0x81fce
	ldr r6, [sp, #48]	@ 00081fce 0c9e
.org 0x81fd0
	ldr r1, [sp, #52]	@ 00081fd0 0d99
.org 0x81fd2
	ldr r0, [r1, #0]	@ 00081fd2 0868
.org 0x81fd4
	subs r0, r4, r0	@ 00081fd4 201a
.org 0x81fd6
	movs r3, #128	@ 00081fd6 8023
.org 0x81fd8
	lsls r3, r3, #8	@ 00081fd8 1b02
.org 0x81fda
	adds r0, r0, r3	@ 00081fda c018
.org 0x81fdc
	movs r1, #128	@ 00081fdc 8021
.org 0x81fde
	lsls r1, r1, #9	@ 00081fde 4902
.org 0x81fe0
	cmp r0, r1	@ 00081fe0 8842
.org 0x81fe2
	bhi.n 0x82096	@ 00081fe2 58d8
.org 0x81fe4
	ldr r2, [sp, #44]	@ 00081fe4 0b9a
.org 0x81fe6
	subs r1, r4, r2	@ 00081fe6 a11a
.org 0x81fe8
	movs r2, #128	@ 00081fe8 8022
.org 0x81fea
	lsls r2, r2, #7	@ 00081fea d201
.org 0x81fec
	adds r0, r1, r2	@ 00081fec 8818
.org 0x81fee
	cmp r0, r3	@ 00081fee 9842
.org 0x81ff0
	bhi.n 0x82096	@ 00081ff0 51d8
.org 0x81ff2
	movs r3, #128	@ 00081ff2 8023
.org 0x81ff4
	lsls r3, r3, #6	@ 00081ff4 9b01
.org 0x81ff6
	adds r0, r1, r3	@ 00081ff6 c818
.org 0x81ff8
	cmp r0, r2	@ 00081ff8 9042
.org 0x81ffa
	bls.n 0x82096	@ 00081ffa 4cd9
.org 0x81ffc
	ldr r0, [sp, #44]	@ 00081ffc 0b98
.org 0x81ffe
	cmp r0, r4	@ 00081ffe a042
.org 0x82000
	bge.n 0x82096	@ 00082000 49da
.org 0x82002
	adds r0, r4, #1	@ 00082002 601c
.org 0x82004
	adds r1, r6, #0	@ 00082004 311c
.org 0x82006
	bl 0x82140	@ 00082006 00f09bf8
.org 0x8200a
	cmp r0, #0	@ 0008200a 0028
.org 0x8200c
	beq.n 0x82096	@ 0008200c 43d0
.org 0x8200e
	mov r1, r8	@ 0008200e 4146
.org 0x82010
	str r1, [sp, #24]	@ 00082010 0691
.org 0x82012
	b.n 0x82038	@ 00082012 11e0
.org 0x82014
	.byte 0xf0,0xdb,0x02,0x02	@ 00082014 data
.org 0x82018
	.byte 0x00,0xf0,0xff,0xff	@ 00082018 data
.org 0x8201c
	.byte 0x00,0xe0,0xff,0xff	@ 0008201c data
.org 0x82020
	.byte 0x00,0xc0,0xff,0xff	@ 00082020 data
.org 0x82024
	.byte 0x00,0x80,0xff,0xff	@ 00082024 data
.org 0x82028
	.byte 0x38,0xdc,0x02,0x02	@ 00082028 data
.org 0x8202c
	.byte 0xfd,0x43,0x03,0x00	@ 0008202c data
.org 0x82030
	.byte 0xc3,0x9e,0x26,0x00	@ 00082030 data
.org 0x82034
	.byte 0x00,0xf8,0xff,0xff	@ 00082034 data
.org 0x82038
	str r6, [sp, #28]	@ 00082038 0796
.org 0x8203a
	movs r7, #0	@ 0008203a 0027
.org 0x8203c
	movs r4, #128	@ 0008203c 8024
.org 0x8203e
	lsls r4, r4, #4	@ 0008203e 2401
.org 0x82040
	add r4, r8	@ 00082040 4444
.org 0x82042
	ldr r2, [pc, #108]	@ 00082042 1b4a
.org 0x82044
	adds r5, r6, r2	@ 00082044 b518
.org 0x82046
	adds r0, r4, #0	@ 00082046 201c
.org 0x82048
	adds r1, r5, #0	@ 00082048 291c
.org 0x8204a
	bl 0x7c7c	@ 0008204a 85f717fe
.org 0x8204e
	lsls r0, r0, #16	@ 0008204e 0004
.org 0x82050
	cmp r0, #0	@ 00082050 0028
.org 0x82052
	bne.n 0x82066	@ 00082052 08d1
.org 0x82054
	adds r0, r4, #0	@ 00082054 201c
.org 0x82056
	adds r1, r5, #0	@ 00082056 291c
.org 0x82058
	bl 0x8534	@ 00082058 86f76cfa
.org 0x8205c
	movs r3, #128	@ 0008205c 8023
.org 0x8205e
	lsls r3, r3, #5	@ 0008205e 5b01
.org 0x82060
	adds r0, r0, r3	@ 00082060 c018
.org 0x82062
	str r0, [sp, #28]	@ 00082062 0790
.org 0x82064
	movs r7, #1	@ 00082064 0127
.org 0x82066
	ldr r0, [sp, #28]	@ 00082066 0798
.org 0x82068
	movs r6, #128	@ 00082068 8026
.org 0x8206a
	lsls r6, r6, #5	@ 0008206a 7601
.org 0x8206c
	adds r5, r0, r6	@ 0008206c 8519
.org 0x8206e
	adds r0, r4, #0	@ 0008206e 201c
.org 0x82070
	adds r1, r5, #0	@ 00082070 291c
.org 0x82072
	bl 0x7c7c	@ 00082072 85f703fe
.org 0x82076
	lsls r0, r0, #16	@ 00082076 0004
.org 0x82078
	cmp r0, #0	@ 00082078 0028
.org 0x8207a
	bne.n 0x8208c	@ 0008207a 07d1
.org 0x8207c
	adds r0, r4, #0	@ 0008207c 201c
.org 0x8207e
	adds r1, r5, #0	@ 0008207e 291c
.org 0x82080
	bl 0x8748	@ 00082080 86f762fb
.org 0x82084
	ldr r1, [pc, #40]	@ 00082084 0a49
.org 0x82086
	adds r0, r0, r1	@ 00082086 4018
.org 0x82088
	str r0, [sp, #28]	@ 00082088 0790
.org 0x8208a
	adds r7, #1	@ 0008208a 0137
.org 0x8208c
	cmp r7, #1	@ 0008208c 012f
.org 0x8208e
	bgt.n 0x82096	@ 0008208e 02dc
.org 0x82090
	movs r0, #1	@ 00082090 0120
.org 0x82092
	mov r2, r9	@ 00082092 4a46
.org 0x82094
	strb r0, [r2, #3]	@ 00082094 d070
.org 0x82096
	mov r3, r9	@ 00082096 4b46
.org 0x82098
	ldrb r0, [r3, #0]	@ 00082098 1878
.org 0x8209a
	ldrb r1, [r3, #1]	@ 0008209a 5978
.org 0x8209c
	adds r0, r0, r1	@ 0008209c 4018
.org 0x8209e
	ldrb r1, [r3, #2]	@ 0008209e 9978
.org 0x820a0
	adds r0, r0, r1	@ 000820a0 4018
.org 0x820a2
	ldrb r1, [r3, #3]	@ 000820a2 d978
.org 0x820a4
	adds r7, r0, r1	@ 000820a4 4718
.org 0x820a6
	cmp r7, #0	@ 000820a6 002f
.org 0x820a8
	bne.n 0x820b4	@ 000820a8 04d1
.org 0x820aa
	movs r0, #0	@ 000820aa 0020
.org 0x820ac
	b.n 0x82122	@ 000820ac 39e0
.org 0x820ae
	.byte 0x00	@ 000820ae data
.org 0x820af
	.byte 0x00	@ 000820af data
.org 0x820b0
	.byte 0x00,0xf0,0xff,0xff	@ 000820b0 data
.org 0x820b4
	movs r1, #0	@ 000820b4 0021
.org 0x820b6
	movs r3, #0	@ 000820b6 0023
.org 0x820b8
	ldr r6, [pc, #120]	@ 000820b8 1e4e
.org 0x820ba
	mov ip, r6	@ 000820ba b446
.org 0x820bc
	add r5, sp, #36	@ 000820bc 09ad
.org 0x820be
	ldr r0, [sp, #40]	@ 000820be 0a98
.org 0x820c0
	adds r0, #180	@ 000820c0 b430
.org 0x820c2
	mov r8, r0	@ 000820c2 8046
.org 0x820c4
	mov r4, r9	@ 000820c4 4c46
.org 0x820c6
	adds r6, r5, #0	@ 000820c6 2e1c
.org 0x820c8
	lsls r0, r3, #24	@ 000820c8 1806
.org 0x820ca
	asrs r2, r0, #24	@ 000820ca 0216
.org 0x820cc
	adds r0, r4, r2	@ 000820cc a018
.org 0x820ce
	ldrb r0, [r0, #0]	@ 000820ce 0078
.org 0x820d0
	cmp r0, #0	@ 000820d0 0028
.org 0x820d2
	beq.n 0x820e2	@ 000820d2 06d0
.org 0x820d4
	lsls r0, r1, #24	@ 000820d4 0806
.org 0x820d6
	asrs r0, r0, #24	@ 000820d6 0016
.org 0x820d8
	adds r1, r6, r0	@ 000820d8 3118
.org 0x820da
	strb r3, [r1, #0]	@ 000820da 0b70
.org 0x820dc
	adds r0, #1	@ 000820dc 0130
.org 0x820de
	lsls r0, r0, #24	@ 000820de 0006
.org 0x820e0
	lsrs r1, r0, #24	@ 000820e0 010e
.org 0x820e2
	adds r0, r2, #1	@ 000820e2 501c
.org 0x820e4
	lsls r0, r0, #24	@ 000820e4 0006
.org 0x820e6
	lsrs r3, r0, #24	@ 000820e6 030e
.org 0x820e8
	asrs r0, r0, #24	@ 000820e8 0016
.org 0x820ea
	cmp r0, #3	@ 000820ea 0328
.org 0x820ec
	ble.n 0x820c8	@ 000820ec ecdd
.org 0x820ee
	mov r2, ip	@ 000820ee 6246
.org 0x820f0
	ldr r1, [r2, #0]	@ 000820f0 1168
.org 0x820f2
	ldr r0, [pc, #68]	@ 000820f2 1148
.org 0x820f4
	muls r0, r1	@ 000820f4 4843
.org 0x820f6
	ldr r3, [pc, #68]	@ 000820f6 114b
.org 0x820f8
	adds r0, r0, r3	@ 000820f8 c018
.org 0x820fa
	lsls r0, r0, #1	@ 000820fa 4000
.org 0x820fc
	lsrs r1, r0, #1	@ 000820fc 4108
.org 0x820fe
	str r1, [r2, #0]	@ 000820fe 1160
.org 0x82100
	lsrs r0, r0, #17	@ 00082100 400c
.org 0x82102
	adds r1, r7, #0	@ 00082102 391c
.org 0x82104
	bl 0x129198	@ 00082104 a7f048f8
