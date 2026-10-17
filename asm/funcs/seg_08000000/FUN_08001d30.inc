@ FUN_08001d30  entry 0x08001d30  size 364
.thumb
.org 0x1d30
FUN_08001d30:
	push {r4, r5, r6, r7, lr}	@ 00001d30 f0b5
.org 0x1d32
	mov r7, r8	@ 00001d32 4746
.org 0x1d34
	push {r7}	@ 00001d34 80b4
.org 0x1d36
	sub sp, #32	@ 00001d36 88b0
.org 0x1d38
	adds r4, r0, #0	@ 00001d38 041c
.org 0x1d3a
	adds r6, r1, #0	@ 00001d3a 0e1c
.org 0x1d3c
	ldr r0, [r4, #4]	@ 00001d3c 6068
.org 0x1d3e
	lsls r0, r0, #10	@ 00001d3e 8002
.org 0x1d40
	lsrs r3, r0, #10	@ 00001d40 830a
.org 0x1d42
	cmp r3, #0	@ 00001d42 002b
.org 0x1d44
	bne.n 0x1d48	@ 00001d44 00d1
.org 0x1d46
	b.n 0x1e98	@ 00001d46 a7e0
.org 0x1d48
	ldrh r1, [r4, #6]	@ 00001d48 e188
.org 0x1d4a
	lsrs r1, r1, #6	@ 00001d4a 8909
.org 0x1d4c
	ldrh r2, [r4, #10]	@ 00001d4c 6289
.org 0x1d4e
	movs r0, #255	@ 00001d4e ff20
.org 0x1d50
	lsls r0, r0, #3	@ 00001d50 c000
.org 0x1d52
	ands r0, r2	@ 00001d52 1040
.org 0x1d54
	muls r0, r1	@ 00001d54 4843
.org 0x1d56
	adds r6, r6, r0	@ 00001d56 3618
.org 0x1d58
	ldrb r2, [r4, #10]	@ 00001d58 a27a
.org 0x1d5a
	movs r0, #1	@ 00001d5a 0120
.org 0x1d5c
	ands r0, r2	@ 00001d5c 1040
.org 0x1d5e
	cmp r0, #0	@ 00001d5e 0028
.org 0x1d60
	beq.n 0x1e52	@ 00001d60 77d0
.org 0x1d62
	ldr r0, [r4, #0]	@ 00001d62 2068
.org 0x1d64
	adds r5, r4, r0	@ 00001d64 2518
.org 0x1d66
	adds r7, r3, #0	@ 00001d66 1f1c
.org 0x1d68
	movs r0, #2	@ 00001d68 0220
.org 0x1d6a
	ands r0, r2	@ 00001d6a 1040
.org 0x1d6c
	cmp r0, #0	@ 00001d6c 0028
.org 0x1d6e
	beq.n 0x1dd8	@ 00001d6e 33d0
.org 0x1d70
	cmp r3, #0	@ 00001d70 002b
.org 0x1d72
	bgt.n 0x1d76	@ 00001d72 00dc
.org 0x1d74
	b.n 0x1e98	@ 00001d74 90e0
.org 0x1d76
	movs r0, #192	@ 00001d76 c020
.org 0x1d78
	lsls r0, r0, #19	@ 00001d78 c004
.org 0x1d7a
	mov r8, r0	@ 00001d7a 8046
.org 0x1d7c
	ldr r0, [r5, #0]	@ 00001d7c 2868
.org 0x1d7e
	cmp r0, #0	@ 00001d7e 0028
.org 0x1d80
	bge.n 0x1daa	@ 00001d80 13da
.org 0x1d82
	ldrh r0, [r4, #8]	@ 00001d82 2089
.org 0x1d84
	add r0, r8	@ 00001d84 4044
.org 0x1d86
	adds r0, r6, r0	@ 00001d86 3018
.org 0x1d88
	mov r1, sp	@ 00001d88 6946
.org 0x1d8a
	movs r2, #8	@ 00001d8a 0822
.org 0x1d8c
	bl 0x128be0	@ 00001d8c 26f128ff
.org 0x1d90
	adds r0, r5, #4	@ 00001d90 281d
.org 0x1d92
	mov r2, r8	@ 00001d92 4246
.org 0x1d94
	adds r1, r6, r2	@ 00001d94 b118
.org 0x1d96
	bl 0x128be8	@ 00001d96 26f127ff
.org 0x1d9a
	ldrh r1, [r4, #8]	@ 00001d9a 2189
.org 0x1d9c
	add r1, r8	@ 00001d9c 4144
.org 0x1d9e
	adds r1, r6, r1	@ 00001d9e 7118
.org 0x1da0
	mov r0, sp	@ 00001da0 6846
.org 0x1da2
	movs r2, #8	@ 00001da2 0822
.org 0x1da4
	bl 0x128be0	@ 00001da4 26f11cff
.org 0x1da8
	b.n 0x1dba	@ 00001da8 07e0
.org 0x1daa
	adds r0, r5, #4	@ 00001daa 281d
.org 0x1dac
	movs r2, #192	@ 00001dac c022
.org 0x1dae
	lsls r2, r2, #19	@ 00001dae d204
.org 0x1db0
	adds r1, r6, r2	@ 00001db0 b118
.org 0x1db2
	ldrh r2, [r4, #8]	@ 00001db2 2289
.org 0x1db4
	lsrs r2, r2, #2	@ 00001db4 9208
.org 0x1db6
	bl 0x128be0	@ 00001db6 26f113ff
.org 0x1dba
	ldrh r0, [r4, #10]	@ 00001dba 6089
.org 0x1dbc
	lsls r0, r0, #21	@ 00001dbc 4005
.org 0x1dbe
	lsrs r0, r0, #24	@ 00001dbe 000e
.org 0x1dc0
	lsls r0, r0, #8	@ 00001dc0 0002
.org 0x1dc2
	adds r6, r6, r0	@ 00001dc2 3618
.org 0x1dc4
	ldr r1, [r5, #0]	@ 00001dc4 2968
.org 0x1dc6
	ldr r0, [pc, #12]	@ 00001dc6 0348
.org 0x1dc8
	ands r1, r0	@ 00001dc8 0140
.org 0x1dca
	subs r7, r7, r1	@ 00001dca 7f1a
.org 0x1dcc
	adds r5, r5, r1	@ 00001dcc 6d18
.org 0x1dce
	cmp r7, #0	@ 00001dce 002f
.org 0x1dd0
	bgt.n 0x1d7c	@ 00001dd0 d4dc
.org 0x1dd2
	b.n 0x1e98	@ 00001dd2 61e0
.org 0x1dd4
	.byte 0xff,0xff,0xff,0x7f	@ 00001dd4 data
.org 0x1dd8
	ldrb r1, [r4, #11]	@ 00001dd8 e17a
.org 0x1dda
	movs r0, #16	@ 00001dda 1020
.org 0x1ddc
	ands r0, r1	@ 00001ddc 0840
.org 0x1dde
	cmp r0, #0	@ 00001dde 0028
.org 0x1de0
	beq.n 0x1e28	@ 00001de0 22d0
.org 0x1de2
	cmp r3, #0	@ 00001de2 002b
.org 0x1de4
	ble.n 0x1e98	@ 00001de4 58dd
.org 0x1de6
	ldr r0, [r5, #0]	@ 00001de6 2868
.org 0x1de8
	cmp r0, #0	@ 00001de8 0028
.org 0x1dea
	bge.n 0x1dfa	@ 00001dea 06da
.org 0x1dec
	adds r0, r5, #4	@ 00001dec 281d
.org 0x1dee
	movs r2, #192	@ 00001dee c022
.org 0x1df0
	lsls r2, r2, #19	@ 00001df0 d204
.org 0x1df2
	adds r1, r6, r2	@ 00001df2 b118
.org 0x1df4
	bl 0x128bf0	@ 00001df4 26f1fcfe
.org 0x1df8
	b.n 0x1e0a	@ 00001df8 07e0
.org 0x1dfa
	adds r0, r5, #4	@ 00001dfa 281d
.org 0x1dfc
	movs r2, #192	@ 00001dfc c022
.org 0x1dfe
	lsls r2, r2, #19	@ 00001dfe d204
.org 0x1e00
	adds r1, r6, r2	@ 00001e00 b118
.org 0x1e02
	ldrh r2, [r4, #8]	@ 00001e02 2289
.org 0x1e04
	lsrs r2, r2, #2	@ 00001e04 9208
.org 0x1e06
	bl 0x128be0	@ 00001e06 26f1ebfe
.org 0x1e0a
	ldrh r0, [r4, #10]	@ 00001e0a 6089
.org 0x1e0c
	lsls r0, r0, #21	@ 00001e0c 4005
.org 0x1e0e
	lsrs r0, r0, #24	@ 00001e0e 000e
.org 0x1e10
	lsls r0, r0, #8	@ 00001e10 0002
.org 0x1e12
	adds r6, r6, r0	@ 00001e12 3618
.org 0x1e14
	ldr r1, [r5, #0]	@ 00001e14 2968
.org 0x1e16
	ldr r0, [pc, #12]	@ 00001e16 0348
.org 0x1e18
	ands r1, r0	@ 00001e18 0140
.org 0x1e1a
	subs r7, r7, r1	@ 00001e1a 7f1a
.org 0x1e1c
	adds r5, r5, r1	@ 00001e1c 6d18
.org 0x1e1e
	cmp r7, #0	@ 00001e1e 002f
.org 0x1e20
	bgt.n 0x1de6	@ 00001e20 e1dc
.org 0x1e22
	b.n 0x1e98	@ 00001e22 39e0
.org 0x1e24
	.byte 0xff,0xff,0xff,0x7f	@ 00001e24 data
.org 0x1e28
	cmp r3, #0	@ 00001e28 002b
.org 0x1e2a
	ble.n 0x1e98	@ 00001e2a 35dd
.org 0x1e2c
	movs r0, #192	@ 00001e2c c020
.org 0x1e2e
	lsls r0, r0, #19	@ 00001e2e c004
.org 0x1e30
	adds r1, r6, r0	@ 00001e30 3118
.org 0x1e32
	ldrh r2, [r4, #8]	@ 00001e32 2289
.org 0x1e34
	lsrs r2, r2, #2	@ 00001e34 9208
.org 0x1e36
	adds r0, r5, #0	@ 00001e36 281c
.org 0x1e38
	bl 0x128be0	@ 00001e38 26f1d2fe
.org 0x1e3c
	ldrh r0, [r4, #10]	@ 00001e3c 6089
.org 0x1e3e
	lsls r0, r0, #21	@ 00001e3e 4005
.org 0x1e40
	lsrs r0, r0, #24	@ 00001e40 000e
.org 0x1e42
	lsls r0, r0, #8	@ 00001e42 0002
.org 0x1e44
	adds r6, r6, r0	@ 00001e44 3618
.org 0x1e46
	ldrh r0, [r4, #8]	@ 00001e46 2089
.org 0x1e48
	adds r5, r5, r0	@ 00001e48 2d18
.org 0x1e4a
	subs r7, r7, r0	@ 00001e4a 3f1a
.org 0x1e4c
	cmp r7, #0	@ 00001e4c 002f
.org 0x1e4e
	bgt.n 0x1e2c	@ 00001e4e eddc
.org 0x1e50
	b.n 0x1e98	@ 00001e50 22e0
.org 0x1e52
	movs r0, #2	@ 00001e52 0220
.org 0x1e54
	ands r0, r2	@ 00001e54 1040
.org 0x1e56
	cmp r0, #0	@ 00001e56 0028
.org 0x1e58
	beq.n 0x1e6a	@ 00001e58 07d0
.org 0x1e5a
	ldr r0, [r4, #0]	@ 00001e5a 2068
.org 0x1e5c
	adds r0, r4, r0	@ 00001e5c 2018
.org 0x1e5e
	movs r2, #192	@ 00001e5e c022
.org 0x1e60
	lsls r2, r2, #19	@ 00001e60 d204
.org 0x1e62
	adds r1, r6, r2	@ 00001e62 b118
.org 0x1e64
	bl 0x128be8	@ 00001e64 26f1c0fe
.org 0x1e68
	b.n 0x1e98	@ 00001e68 16e0
.org 0x1e6a
	ldrb r1, [r4, #11]	@ 00001e6a e17a
.org 0x1e6c
	movs r0, #16	@ 00001e6c 1020
.org 0x1e6e
	ands r0, r1	@ 00001e6e 0840
.org 0x1e70
	cmp r0, #0	@ 00001e70 0028
.org 0x1e72
	beq.n 0x1e84	@ 00001e72 07d0
.org 0x1e74
	ldr r0, [r4, #0]	@ 00001e74 2068
.org 0x1e76
	adds r0, r4, r0	@ 00001e76 2018
.org 0x1e78
	movs r2, #192	@ 00001e78 c022
.org 0x1e7a
	lsls r2, r2, #19	@ 00001e7a d204
.org 0x1e7c
	adds r1, r6, r2	@ 00001e7c b118
.org 0x1e7e
	bl 0x128bf0	@ 00001e7e 26f1b7fe
.org 0x1e82
	b.n 0x1e98	@ 00001e82 09e0
.org 0x1e84
	ldr r0, [r4, #0]	@ 00001e84 2068
.org 0x1e86
	adds r4, r4, r0	@ 00001e86 2418
.org 0x1e88
	movs r0, #192	@ 00001e88 c020
.org 0x1e8a
	lsls r0, r0, #19	@ 00001e8a c004
.org 0x1e8c
	adds r1, r6, r0	@ 00001e8c 3118
.org 0x1e8e
	adds r0, r3, #0	@ 00001e8e 181c
.org 0x1e90
	lsrs r2, r0, #2	@ 00001e90 8208
.org 0x1e92
	adds r0, r4, #0	@ 00001e92 201c
.org 0x1e94
	bl 0x128be0	@ 00001e94 26f1a4fe
.org 0x1e98
	add sp, #32	@ 00001e98 08b0
.org 0x1e9a
	pop {r3}	@ 00001e9a 08bc
