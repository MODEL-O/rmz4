@ FUN_08008d04  entry 0x08008d04  size 374
.thumb
.org 0x8d04
FUN_08008d04:
	push {r4, r5, r6, r7, lr}	@ 00008d04 f0b5
.org 0x8d06
	mov r7, sl	@ 00008d06 5746
.org 0x8d08
	mov r6, r9	@ 00008d08 4e46
.org 0x8d0a
	mov r5, r8	@ 00008d0a 4546
.org 0x8d0c
	push {r5, r6, r7}	@ 00008d0c e0b4
.org 0x8d0e
	adds r7, r2, #0	@ 00008d0e 171c
.org 0x8d10
	mov r9, r3	@ 00008d10 9946
.org 0x8d12
	lsls r0, r0, #16	@ 00008d12 0004
.org 0x8d14
	lsrs r6, r0, #16	@ 00008d14 060c
.org 0x8d16
	lsls r1, r1, #16	@ 00008d16 0904
.org 0x8d18
	lsrs r1, r1, #16	@ 00008d18 090c
.org 0x8d1a
	ldr r4, [pc, #96]	@ 00008d1a 184c
.org 0x8d1c
	movs r0, #233	@ 00008d1c e920
.org 0x8d1e
	lsls r0, r0, #1	@ 00008d1e 4000
.org 0x8d20
	adds r3, r4, r0	@ 00008d20 2318
.org 0x8d22
	ldrb r0, [r3, #0]	@ 00008d22 1878
.org 0x8d24
	adds r2, r0, #1	@ 00008d24 421c
.org 0x8d26
	adds r5, r4, #0	@ 00008d26 251c
.org 0x8d28
	cmp r2, #31	@ 00008d28 1f2a
.org 0x8d2a
	ble.n 0x8d2e	@ 00008d2a 00dd
.org 0x8d2c
	b.n 0x8e82	@ 00008d2c a9e0
.org 0x8d2e
	strb r2, [r3, #0]	@ 00008d2e 1a70
.org 0x8d30
	mov r8, r0	@ 00008d30 8046
.org 0x8d32
	lsls r0, r0, #1	@ 00008d32 4000
.org 0x8d34
	add r0, r8	@ 00008d34 4044
.org 0x8d36
	lsls r3, r0, #3	@ 00008d36 c300
.org 0x8d38
	adds r2, r3, r5	@ 00008d38 5a19
.org 0x8d3a
	movs r4, #234	@ 00008d3a ea24
.org 0x8d3c
	lsls r4, r4, #1	@ 00008d3c 6400
.org 0x8d3e
	adds r0, r2, r4	@ 00008d3e 1019
.org 0x8d40
	strh r6, [r0, #0]	@ 00008d40 0680
.org 0x8d42
	adds r4, #2	@ 00008d42 0234
.org 0x8d44
	adds r0, r2, r4	@ 00008d44 1019
.org 0x8d46
	strh r1, [r0, #0]	@ 00008d46 0180
.org 0x8d48
	movs r1, #232	@ 00008d48 e821
.org 0x8d4a
	lsls r1, r1, #1	@ 00008d4a 4900
.org 0x8d4c
	adds r0, r5, r1	@ 00008d4c 6818
.org 0x8d4e
	ldrh r0, [r0, #0]	@ 00008d4e 0088
.org 0x8d50
	cmp r0, #4	@ 00008d50 0428
.org 0x8d52
	bne.n 0x8d84	@ 00008d52 17d1
.org 0x8d54
	movs r2, #238	@ 00008d54 ee22
.org 0x8d56
	lsls r2, r2, #1	@ 00008d56 5200
.org 0x8d58
	adds r4, r5, r2	@ 00008d58 ac18
.org 0x8d5a
	adds r4, r3, r4	@ 00008d5a 1c19
.org 0x8d5c
	ldr r0, [r7, #0]	@ 00008d5c 3868
.org 0x8d5e
	ldr r3, [pc, #32]	@ 00008d5e 084b
.org 0x8d60
	adds r0, r0, r3	@ 00008d60 c018
.org 0x8d62
	movs r1, #240	@ 00008d62 f021
.org 0x8d64
	lsls r1, r1, #10	@ 00008d64 8902
.org 0x8d66
	bl 0x129050	@ 00008d66 20f173f9
.org 0x8d6a
	mov r2, r9	@ 00008d6a 4a46
.org 0x8d6c
	movs r3, #0	@ 00008d6c 0023
.org 0x8d6e
	ldrsh r1, [r2, r3]	@ 00008d6e d15e
.org 0x8d70
	movs r2, #240	@ 00008d70 f022
.org 0x8d72
	lsls r2, r2, #8	@ 00008d72 1202
.org 0x8d74
	adds r1, r1, r2	@ 00008d74 8918
.org 0x8d76
	adds r0, r0, r1	@ 00008d76 4018
.org 0x8d78
	str r0, [r4, #0]	@ 00008d78 2060
.org 0x8d7a
	b.n 0x8d98	@ 00008d7a 0de0
.org 0x8d7c
	.byte 0xb0,0x0a,0x00,0x02	@ 00008d7c data
.org 0x8d80
	.byte 0x00,0x10,0xff,0xff	@ 00008d80 data
.org 0x8d84
	movs r4, #238	@ 00008d84 ee24
.org 0x8d86
	lsls r4, r4, #1	@ 00008d86 6400
.org 0x8d88
	adds r0, r5, r4	@ 00008d88 2819
.org 0x8d8a
	adds r0, r3, r0	@ 00008d8a 1818
.org 0x8d8c
	mov r1, r9	@ 00008d8c 4946
.org 0x8d8e
	movs r3, #0	@ 00008d8e 0023
.org 0x8d90
	ldrsh r2, [r1, r3]	@ 00008d90 ca5e
.org 0x8d92
	ldr r1, [r7, #0]	@ 00008d92 3968
.org 0x8d94
	adds r1, r1, r2	@ 00008d94 8918
.org 0x8d96
	str r1, [r0, #0]	@ 00008d96 0160
.org 0x8d98
	mov r4, r8	@ 00008d98 4446
.org 0x8d9a
	lsls r3, r4, #1	@ 00008d9a 6300
.org 0x8d9c
	adds r0, r3, r4	@ 00008d9c 1819
.org 0x8d9e
	lsls r6, r0, #3	@ 00008d9e c600
.org 0x8da0
	movs r0, #238	@ 00008da0 ee20
.org 0x8da2
	lsls r0, r0, #1	@ 00008da2 4000
.org 0x8da4
	adds r1, r5, r0	@ 00008da4 2918
.org 0x8da6
	adds r1, r6, r1	@ 00008da6 7118
.org 0x8da8
	mov r4, r9	@ 00008da8 4c46
.org 0x8daa
	movs r0, #0	@ 00008daa 0020
.org 0x8dac
	ldrsh r2, [r4, r0]	@ 00008dac 225e
.org 0x8dae
	ldr r0, [r7, #0]	@ 00008dae 3868
.org 0x8db0
	adds r0, r0, r2	@ 00008db0 8018
.org 0x8db2
	str r0, [r1, #0]	@ 00008db2 0860
.org 0x8db4
	movs r2, #240	@ 00008db4 f022
.org 0x8db6
	lsls r2, r2, #1	@ 00008db6 5200
.org 0x8db8
	adds r1, r5, r2	@ 00008db8 a918
.org 0x8dba
	adds r1, r6, r1	@ 00008dba 7118
.org 0x8dbc
	movs r0, #2	@ 00008dbc 0220
.org 0x8dbe
	ldrsh r2, [r4, r0]	@ 00008dbe 225e
.org 0x8dc0
	ldr r0, [r7, #4]	@ 00008dc0 7868
.org 0x8dc2
	adds r0, r0, r2	@ 00008dc2 8018
.org 0x8dc4
	str r0, [r1, #0]	@ 00008dc4 0860
.org 0x8dc6
	movs r4, #0	@ 00008dc6 0024
.org 0x8dc8
	ldr r1, [pc, #92]	@ 00008dc8 1749
.org 0x8dca
	adds r0, r5, r1	@ 00008dca 6818
.org 0x8dcc
	ldrb r2, [r0, #0]	@ 00008dcc 0278
.org 0x8dce
	mov sl, r3	@ 00008dce 9a46
.org 0x8dd0
	cmp r4, r2	@ 00008dd0 9442
.org 0x8dd2
	bge.n 0x8e34	@ 00008dd2 2fda
.org 0x8dd4
	mov ip, r5	@ 00008dd4 ac46
.org 0x8dd6
	adds r3, r6, #0	@ 00008dd6 331c
.org 0x8dd8
	adds r0, r3, r5	@ 00008dd8 5819
.org 0x8dda
	adds r1, #1	@ 00008dda 0131
.org 0x8ddc
	adds r0, r0, r1	@ 00008ddc 4018
.org 0x8dde
	ldrh r6, [r0, #0]	@ 00008dde 0688
.org 0x8de0
	adds r1, r5, #0	@ 00008de0 291c
.org 0x8de2
	ldr r7, [pc, #72]	@ 00008de2 124f
.org 0x8de4
	adds r0, r1, r7	@ 00008de4 c819
.org 0x8de6
	ldrh r0, [r0, #0]	@ 00008de6 0088
.org 0x8de8
	cmp r0, r6	@ 00008de8 b042
.org 0x8dea
	beq.n 0x8df4	@ 00008dea 03d0
.org 0x8dec
	adds r1, #24	@ 00008dec 1831
.org 0x8dee
	adds r4, #1	@ 00008dee 0134
.org 0x8df0
	cmp r4, r2	@ 00008df0 9442
.org 0x8df2
	blt.n 0x8de4	@ 00008df2 f7db
.org 0x8df4
	ldr r0, [pc, #48]	@ 00008df4 0c48
.org 0x8df6
	add r0, ip	@ 00008df6 6044
.org 0x8df8
	ldrb r0, [r0, #0]	@ 00008df8 0078
.org 0x8dfa
	cmp r4, r0	@ 00008dfa 8442
.org 0x8dfc
	bge.n 0x8e34	@ 00008dfc 1ada
.org 0x8dfe
	movs r2, #242	@ 00008dfe f222
.org 0x8e00
	lsls r2, r2, #1	@ 00008e00 5200
.org 0x8e02
	add r2, ip	@ 00008e02 6244
.org 0x8e04
	adds r2, r3, r2	@ 00008e04 9a18
.org 0x8e06
	lsls r1, r4, #1	@ 00008e06 6100
.org 0x8e08
	adds r1, r1, r4	@ 00008e08 0919
.org 0x8e0a
	lsls r1, r1, #3	@ 00008e0a c900
.org 0x8e0c
	ldr r0, [pc, #32]	@ 00008e0c 0848
.org 0x8e0e
	add r0, ip	@ 00008e0e 6044
.org 0x8e10
	adds r0, r1, r0	@ 00008e10 0818
.org 0x8e12
	ldr r0, [r0, #0]	@ 00008e12 0068
.org 0x8e14
	str r0, [r2, #0]	@ 00008e14 1060
.org 0x8e16
	movs r2, #244	@ 00008e16 f422
.org 0x8e18
	lsls r2, r2, #1	@ 00008e18 5200
.org 0x8e1a
	add r2, ip	@ 00008e1a 6244
.org 0x8e1c
	adds r2, r3, r2	@ 00008e1c 9a18
.org 0x8e1e
	movs r0, #156	@ 00008e1e 9c20
.org 0x8e20
	lsls r0, r0, #3	@ 00008e20 c000
.org 0x8e22
	add r0, ip	@ 00008e22 6044
.org 0x8e24
	b.n 0x8e5a	@ 00008e24 19e0
.org 0x8e26
	.byte 0x00	@ 00008e26 data
.org 0x8e27
	.byte 0x00	@ 00008e27 data
.org 0x8e28
	.byte 0xd3,0x01,0x00,0x00	@ 00008e28 data
.org 0x8e2c
	.byte 0xd4,0x04,0x00,0x00	@ 00008e2c data
.org 0x8e30
	.byte 0xdc,0x04,0x00,0x00	@ 00008e30 data
.org 0x8e34
	mov r1, sl	@ 00008e34 5146
.org 0x8e36
	add r1, r8	@ 00008e36 4144
.org 0x8e38
	lsls r1, r1, #3	@ 00008e38 c900
.org 0x8e3a
	movs r3, #242	@ 00008e3a f223
.org 0x8e3c
	lsls r3, r3, #1	@ 00008e3c 5b00
.org 0x8e3e
	adds r2, r5, r3	@ 00008e3e ea18
.org 0x8e40
	adds r2, r1, r2	@ 00008e40 8a18
.org 0x8e42
	movs r4, #238	@ 00008e42 ee24
.org 0x8e44
	lsls r4, r4, #1	@ 00008e44 6400
.org 0x8e46
	adds r0, r5, r4	@ 00008e46 2819
.org 0x8e48
	adds r0, r1, r0	@ 00008e48 0818
.org 0x8e4a
	ldr r0, [r0, #0]	@ 00008e4a 0068
.org 0x8e4c
	str r0, [r2, #0]	@ 00008e4c 1060
.org 0x8e4e
	movs r0, #244	@ 00008e4e f420
.org 0x8e50
	lsls r0, r0, #1	@ 00008e50 4000
.org 0x8e52
	adds r2, r5, r0	@ 00008e52 2a18
.org 0x8e54
	adds r2, r1, r2	@ 00008e54 8a18
.org 0x8e56
	subs r3, #4	@ 00008e56 043b
.org 0x8e58
	adds r0, r5, r3	@ 00008e58 e818
.org 0x8e5a
	adds r1, r1, r0	@ 00008e5a 0918
.org 0x8e5c
	ldr r0, [r1, #0]	@ 00008e5c 0868
.org 0x8e5e
	str r0, [r2, #0]	@ 00008e5e 1060
.org 0x8e60
	mov r0, sl	@ 00008e60 5046
.org 0x8e62
	add r0, r8	@ 00008e62 4044
.org 0x8e64
	lsls r0, r0, #3	@ 00008e64 c000
.org 0x8e66
	adds r2, r0, r5	@ 00008e66 4219
.org 0x8e68
	mov r4, r9	@ 00008e68 4c46
.org 0x8e6a
	ldrh r0, [r4, #4]	@ 00008e6a a088
.org 0x8e6c
	lsrs r0, r0, #1	@ 00008e6c 4008
.org 0x8e6e
	movs r3, #236	@ 00008e6e ec23
.org 0x8e70
	lsls r3, r3, #1	@ 00008e70 5b00
.org 0x8e72
	adds r1, r2, r3	@ 00008e72 d118
.org 0x8e74
	strh r0, [r1, #0]	@ 00008e74 0880
.org 0x8e76
	ldrh r0, [r4, #6]	@ 00008e76 e088
.org 0x8e78
	lsrs r0, r0, #1	@ 00008e78 4008
