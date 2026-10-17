@ FUN_080d5c88  entry 0x080d5c88  size 328
.thumb
.org 0xd5c88
FUN_080d5c88:
	push {r4, r5, r6, r7, lr}	@ 000d5c88 f0b5
.org 0xd5c8a
	adds r5, r0, #0	@ 000d5c8a 051c
.org 0xd5c8c
	ldrb r0, [r5, #14]	@ 000d5c8c a87b
.org 0xd5c8e
	cmp r0, #0	@ 000d5c8e 0028
.org 0xd5c90
	bne.n 0xd5cd4	@ 000d5c90 20d1
.org 0xd5c92
	ldr r1, [pc, #96]	@ 000d5c92 1849
.org 0xd5c94
	ldrh r2, [r1, #0]	@ 000d5c94 0a88
.org 0xd5c96
	movs r3, #128	@ 000d5c96 8023
.org 0xd5c98
	lsls r3, r3, #7	@ 000d5c98 db01
.org 0xd5c9a
	adds r0, r3, #0	@ 000d5c9a 181c
.org 0xd5c9c
	movs r3, #0	@ 000d5c9c 0023
.org 0xd5c9e
	orrs r0, r2	@ 000d5c9e 1043
.org 0xd5ca0
	strh r0, [r1, #0]	@ 000d5ca0 0880
.org 0xd5ca2
	movs r0, #49	@ 000d5ca2 3120
.org 0xd5ca4
	strb r0, [r1, #13]	@ 000d5ca4 4873
.org 0xd5ca6
	ldrb r2, [r1, #14]	@ 000d5ca6 8a7b
.org 0xd5ca8
	movs r0, #14	@ 000d5ca8 0e20
.org 0xd5caa
	orrs r0, r2	@ 000d5caa 1043
.org 0xd5cac
	strb r0, [r1, #14]	@ 000d5cac 8873
.org 0xd5cae
	adds r0, r5, #0	@ 000d5cae 281c
.org 0xd5cb0
	adds r0, #116	@ 000d5cb0 7430
.org 0xd5cb2
	strb r3, [r0, #0]	@ 000d5cb2 0370
.org 0xd5cb4
	adds r0, #1	@ 000d5cb4 0130
.org 0xd5cb6
	strb r3, [r0, #0]	@ 000d5cb6 0370
.org 0xd5cb8
	adds r0, #1	@ 000d5cb8 0130
.org 0xd5cba
	strb r3, [r0, #0]	@ 000d5cba 0370
.org 0xd5cbc
	adds r1, r5, #0	@ 000d5cbc 291c
.org 0xd5cbe
	adds r1, #122	@ 000d5cbe 7a31
.org 0xd5cc0
	movs r0, #8	@ 000d5cc0 0820
.org 0xd5cc2
	strb r0, [r1, #0]	@ 000d5cc2 0870
.org 0xd5cc4
	adds r0, r5, #0	@ 000d5cc4 281c
.org 0xd5cc6
	adds r0, #123	@ 000d5cc6 7b30
.org 0xd5cc8
	strb r3, [r0, #0]	@ 000d5cc8 0370
.org 0xd5cca
	strb r3, [r5, #18]	@ 000d5cca ab74
.org 0xd5ccc
	strb r3, [r5, #19]	@ 000d5ccc eb74
.org 0xd5cce
	ldrb r0, [r5, #14]	@ 000d5cce a87b
.org 0xd5cd0
	adds r0, #1	@ 000d5cd0 0130
.org 0xd5cd2
	strb r0, [r5, #14]	@ 000d5cd2 a873
.org 0xd5cd4
	ldrb r0, [r5, #18]	@ 000d5cd4 a87c
.org 0xd5cd6
	cmp r0, #0	@ 000d5cd6 0028
.org 0xd5cd8
	bne.n 0xd5cf8	@ 000d5cd8 0ed1
.org 0xd5cda
	adds r1, r5, #0	@ 000d5cda 291c
.org 0xd5cdc
	adds r1, #122	@ 000d5cdc 7a31
.org 0xd5cde
	ldrb r0, [r1, #0]	@ 000d5cde 0878
.org 0xd5ce0
	adds r0, #1	@ 000d5ce0 0130
.org 0xd5ce2
	strb r0, [r1, #0]	@ 000d5ce2 0870
.org 0xd5ce4
	lsls r0, r0, #24	@ 000d5ce4 0006
.org 0xd5ce6
	lsrs r0, r0, #24	@ 000d5ce6 000e
.org 0xd5ce8
	adds r6, r1, #0	@ 000d5ce8 0e1c
.org 0xd5cea
	cmp r0, #254	@ 000d5cea fe28
.org 0xd5cec
	bls.n 0xd5d10	@ 000d5cec 10d9
.org 0xd5cee
	movs r0, #1	@ 000d5cee 0120
.org 0xd5cf0
	b.n 0xd5d0e	@ 000d5cf0 0de0
.org 0xd5cf2
	.byte 0x00	@ 000d5cf2 data
.org 0xd5cf3
	.byte 0x00	@ 000d5cf3 data
.org 0xd5cf4
	.byte 0x50,0x0a,0x00,0x02	@ 000d5cf4 data
.org 0xd5cf8
	adds r1, r5, #0	@ 000d5cf8 291c
.org 0xd5cfa
	adds r1, #122	@ 000d5cfa 7a31
.org 0xd5cfc
	ldrb r0, [r1, #0]	@ 000d5cfc 0878
.org 0xd5cfe
	subs r0, #1	@ 000d5cfe 0138
.org 0xd5d00
	strb r0, [r1, #0]	@ 000d5d00 0870
.org 0xd5d02
	lsls r0, r0, #24	@ 000d5d02 0006
.org 0xd5d04
	lsrs r0, r0, #24	@ 000d5d04 000e
.org 0xd5d06
	adds r6, r1, #0	@ 000d5d06 0e1c
.org 0xd5d08
	cmp r0, #16	@ 000d5d08 1028
.org 0xd5d0a
	bhi.n 0xd5d10	@ 000d5d0a 01d8
.org 0xd5d0c
	movs r0, #0	@ 000d5d0c 0020
.org 0xd5d0e
	strb r0, [r5, #18]	@ 000d5d0e a874
.org 0xd5d10
	movs r7, #123	@ 000d5d10 7b27
.org 0xd5d12
	adds r7, r7, r5	@ 000d5d12 7f19
.org 0xd5d14
	mov ip, r7	@ 000d5d14 bc46
.org 0xd5d16
	ldrb r0, [r7, #0]	@ 000d5d16 3878
.org 0xd5d18
	adds r1, r0, #0	@ 000d5d18 011c
.org 0xd5d1a
	adds r1, #129	@ 000d5d1a 8131
.org 0xd5d1c
	strb r1, [r7, #0]	@ 000d5d1c 3970
.org 0xd5d1e
	ldr r3, [pc, #176]	@ 000d5d1e 2c4b
.org 0xd5d20
	adds r0, #193	@ 000d5d20 c130
.org 0xd5d22
	lsls r0, r0, #24	@ 000d5d22 0006
.org 0xd5d24
	lsrs r0, r0, #23	@ 000d5d24 c00d
.org 0xd5d26
	adds r0, r0, r3	@ 000d5d26 c018
.org 0xd5d28
	movs r2, #0	@ 000d5d28 0022
.org 0xd5d2a
	ldrsh r1, [r0, r2]	@ 000d5d2a 815e
.org 0xd5d2c
	ldrb r0, [r6, #0]	@ 000d5d2c 3078
.org 0xd5d2e
	lsrs r0, r0, #2	@ 000d5d2e 8008
.org 0xd5d30
	muls r0, r1	@ 000d5d30 4843
.org 0xd5d32
	ldr r2, [r5, #124]	@ 000d5d32 ea6f
.org 0xd5d34
	adds r0, r2, r0	@ 000d5d34 1018
.org 0xd5d36
	str r0, [r5, #84]	@ 000d5d36 6865
.org 0xd5d38
	adds r4, r5, #0	@ 000d5d38 2c1c
.org 0xd5d3a
	adds r4, #128	@ 000d5d3a 8034
.org 0xd5d3c
	ldrb r0, [r7, #0]	@ 000d5d3c 3878
.org 0xd5d3e
	lsls r0, r0, #1	@ 000d5d3e 4000
.org 0xd5d40
	adds r0, r0, r3	@ 000d5d40 c018
.org 0xd5d42
	movs r7, #0	@ 000d5d42 0027
.org 0xd5d44
	ldrsh r1, [r0, r7]	@ 000d5d44 c15f
.org 0xd5d46
	ldrb r0, [r6, #0]	@ 000d5d46 3078
.org 0xd5d48
	lsrs r0, r0, #2	@ 000d5d48 8008
.org 0xd5d4a
	muls r1, r0	@ 000d5d4a 4143
.org 0xd5d4c
	ldr r0, [r4, #0]	@ 000d5d4c 2068
.org 0xd5d4e
	adds r0, r0, r1	@ 000d5d4e 4018
.org 0xd5d50
	str r0, [r5, #88]	@ 000d5d50 a865
.org 0xd5d52
	mov r1, ip	@ 000d5d52 6146
.org 0xd5d54
	ldrb r0, [r1, #0]	@ 000d5d54 0878
.org 0xd5d56
	adds r0, #149	@ 000d5d56 9530
.org 0xd5d58
	lsls r0, r0, #24	@ 000d5d58 0006
.org 0xd5d5a
	lsrs r0, r0, #23	@ 000d5d5a c00d
.org 0xd5d5c
	adds r0, r0, r3	@ 000d5d5c c018
.org 0xd5d5e
	movs r7, #0	@ 000d5d5e 0027
.org 0xd5d60
	ldrsh r1, [r0, r7]	@ 000d5d60 c15f
.org 0xd5d62
	ldrb r0, [r6, #0]	@ 000d5d62 3078
.org 0xd5d64
	lsrs r0, r0, #2	@ 000d5d64 8008
.org 0xd5d66
	muls r0, r1	@ 000d5d66 4843
.org 0xd5d68
	adds r0, r2, r0	@ 000d5d68 1018
.org 0xd5d6a
	str r0, [r5, #100]	@ 000d5d6a 6866
.org 0xd5d6c
	mov r1, ip	@ 000d5d6c 6146
.org 0xd5d6e
	ldrb r0, [r1, #0]	@ 000d5d6e 0878
.org 0xd5d70
	adds r0, #85	@ 000d5d70 5530
.org 0xd5d72
	lsls r0, r0, #24	@ 000d5d72 0006
.org 0xd5d74
	lsrs r0, r0, #23	@ 000d5d74 c00d
.org 0xd5d76
	adds r0, r0, r3	@ 000d5d76 c018
.org 0xd5d78
	movs r7, #0	@ 000d5d78 0027
.org 0xd5d7a
	ldrsh r1, [r0, r7]	@ 000d5d7a c15f
.org 0xd5d7c
	ldrb r0, [r6, #0]	@ 000d5d7c 3078
.org 0xd5d7e
	lsrs r0, r0, #2	@ 000d5d7e 8008
.org 0xd5d80
	muls r1, r0	@ 000d5d80 4143
.org 0xd5d82
	ldr r0, [r4, #0]	@ 000d5d82 2068
.org 0xd5d84
	adds r0, r0, r1	@ 000d5d84 4018
.org 0xd5d86
	str r0, [r5, #104]	@ 000d5d86 a866
.org 0xd5d88
	mov r1, ip	@ 000d5d88 6146
.org 0xd5d8a
	ldrb r0, [r1, #0]	@ 000d5d8a 0878
.org 0xd5d8c
	adds r0, #235	@ 000d5d8c eb30
.org 0xd5d8e
	lsls r0, r0, #24	@ 000d5d8e 0006
.org 0xd5d90
	lsrs r0, r0, #23	@ 000d5d90 c00d
.org 0xd5d92
	adds r0, r0, r3	@ 000d5d92 c018
.org 0xd5d94
	movs r7, #0	@ 000d5d94 0027
.org 0xd5d96
	ldrsh r1, [r0, r7]	@ 000d5d96 c15f
.org 0xd5d98
	ldrb r0, [r6, #0]	@ 000d5d98 3078
.org 0xd5d9a
	lsrs r0, r0, #2	@ 000d5d9a 8008
.org 0xd5d9c
	muls r0, r1	@ 000d5d9c 4843
.org 0xd5d9e
	adds r2, r2, r0	@ 000d5d9e 1218
.org 0xd5da0
	str r2, [r5, #92]	@ 000d5da0 ea65
.org 0xd5da2
	mov r1, ip	@ 000d5da2 6146
.org 0xd5da4
	ldrb r0, [r1, #0]	@ 000d5da4 0878
.org 0xd5da6
	adds r0, #171	@ 000d5da6 ab30
.org 0xd5da8
	lsls r0, r0, #24	@ 000d5da8 0006
.org 0xd5daa
	lsrs r0, r0, #23	@ 000d5daa c00d
.org 0xd5dac
	adds r0, r0, r3	@ 000d5dac c018
.org 0xd5dae
	movs r2, #0	@ 000d5dae 0022
.org 0xd5db0
	ldrsh r1, [r0, r2]	@ 000d5db0 815e
.org 0xd5db2
	ldrb r0, [r6, #0]	@ 000d5db2 3078
.org 0xd5db4
	lsrs r0, r0, #2	@ 000d5db4 8008
.org 0xd5db6
	muls r1, r0	@ 000d5db6 4143
.org 0xd5db8
	ldr r0, [r4, #0]	@ 000d5db8 2068
.org 0xd5dba
	adds r0, r0, r1	@ 000d5dba 4018
.org 0xd5dbc
	str r0, [r5, #96]	@ 000d5dbc 2866
.org 0xd5dbe
	ldrb r0, [r5, #19]	@ 000d5dbe e87c
.org 0xd5dc0
	cmp r0, #5	@ 000d5dc0 0528
.org 0xd5dc2
	bls.n 0xd5dc6	@ 000d5dc2 00d9
.org 0xd5dc4
	b.n 0xd5eee	@ 000d5dc4 93e0
.org 0xd5dc6
	lsls r0, r0, #2	@ 000d5dc6 8000
.org 0xd5dc8
	ldr r1, [pc, #8]	@ 000d5dc8 0249
.org 0xd5dca
	adds r0, r0, r1	@ 000d5dca 4018
.org 0xd5dcc
	ldr r0, [r0, #0]	@ 000d5dcc 0068
.org 0xd5dce
	mov pc, r0	@ 000d5dce 8746
