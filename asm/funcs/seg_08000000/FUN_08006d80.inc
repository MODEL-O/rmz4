@ FUN_08006d80  entry 0x08006d80  size 240
.thumb
.org 0x6d80
FUN_08006d80:
	push {r4, r5, lr}	@ 00006d80 30b5
.org 0x6d82
	ldr r2, [pc, #236]	@ 00006d82 3b4a
.org 0x6d84
	ldrh r1, [r2, #0]	@ 00006d84 1188
.org 0x6d86
	ldr r0, [pc, #236]	@ 00006d86 3b48
.org 0x6d88
	ands r0, r1	@ 00006d88 0840
.org 0x6d8a
	strh r0, [r2, #0]	@ 00006d8a 1080
.org 0x6d8c
	ldr r0, [pc, #232]	@ 00006d8c 3a48
.org 0x6d8e
	ldr r1, [pc, #236]	@ 00006d8e 3b49
.org 0x6d90
	adds r0, r0, r1	@ 00006d90 4018
.org 0x6d92
	ldrh r0, [r0, #0]	@ 00006d92 0088
.org 0x6d94
	lsrs r5, r0, #8	@ 00006d94 050a
.org 0x6d96
	cmp r5, #255	@ 00006d96 ff2d
.org 0x6d98
	beq.n 0x6dca	@ 00006d98 17d0
.org 0x6d9a
	lsls r0, r0, #24	@ 00006d9a 0006
.org 0x6d9c
	lsrs r1, r0, #24	@ 00006d9c 010e
.org 0x6d9e
	cmp r1, #255	@ 00006d9e ff29
.org 0x6da0
	beq.n 0x6dca	@ 00006da0 13d0
.org 0x6da2
	lsls r5, r5, #2	@ 00006da2 ad00
.org 0x6da4
	ldr r0, [pc, #216]	@ 00006da4 3648
.org 0x6da6
	adds r5, r5, r0	@ 00006da6 2d18
.org 0x6da8
	ldr r0, [r5, #0]	@ 00006da8 2868
.org 0x6daa
	adds r0, r0, r5	@ 00006daa 4019
.org 0x6dac
	lsls r4, r1, #2	@ 00006dac 8c00
.org 0x6dae
	adds r4, r4, r1	@ 00006dae 6418
.org 0x6db0
	lsls r4, r4, #2	@ 00006db0 a400
.org 0x6db2
	adds r0, r0, r4	@ 00006db2 0019
.org 0x6db4
	movs r1, #128	@ 00006db4 8021
.org 0x6db6
	lsls r1, r1, #7	@ 00006db6 c901
.org 0x6db8
	bl 0x1d30	@ 00006db8 faf7baff
.org 0x6dbc
	ldr r0, [r5, #0]	@ 00006dbc 2868
.org 0x6dbe
	adds r0, r0, r5	@ 00006dbe 4019
.org 0x6dc0
	adds r0, r0, r4	@ 00006dc0 0019
.org 0x6dc2
	adds r0, #12	@ 00006dc2 0c30
.org 0x6dc4
	movs r1, #0	@ 00006dc4 0021
.org 0x6dc6
	bl 0x2208	@ 00006dc6 fbf71ffa
.org 0x6dca
	ldr r0, [pc, #172]	@ 00006dca 2b48
.org 0x6dcc
	ldr r2, [pc, #180]	@ 00006dcc 2d4a
.org 0x6dce
	adds r0, r0, r2	@ 00006dce 8018
.org 0x6dd0
	ldrh r0, [r0, #0]	@ 00006dd0 0088
.org 0x6dd2
	lsrs r5, r0, #8	@ 00006dd2 050a
.org 0x6dd4
	cmp r5, #255	@ 00006dd4 ff2d
.org 0x6dd6
	beq.n 0x6e08	@ 00006dd6 17d0
.org 0x6dd8
	lsls r0, r0, #24	@ 00006dd8 0006
.org 0x6dda
	lsrs r1, r0, #24	@ 00006dda 010e
.org 0x6ddc
	cmp r1, #255	@ 00006ddc ff29
.org 0x6dde
	beq.n 0x6e08	@ 00006dde 13d0
.org 0x6de0
	lsls r5, r5, #2	@ 00006de0 ad00
.org 0x6de2
	ldr r0, [pc, #156]	@ 00006de2 2748
.org 0x6de4
	adds r5, r5, r0	@ 00006de4 2d18
.org 0x6de6
	ldr r0, [r5, #0]	@ 00006de6 2868
.org 0x6de8
	adds r0, r0, r5	@ 00006de8 4019
.org 0x6dea
	lsls r4, r1, #2	@ 00006dea 8c00
.org 0x6dec
	adds r4, r4, r1	@ 00006dec 6418
.org 0x6dee
	lsls r4, r4, #2	@ 00006dee a400
.org 0x6df0
	adds r0, r0, r4	@ 00006df0 0019
.org 0x6df2
	movs r1, #128	@ 00006df2 8021
.org 0x6df4
	lsls r1, r1, #7	@ 00006df4 c901
.org 0x6df6
	bl 0x1d30	@ 00006df6 faf79bff
.org 0x6dfa
	ldr r0, [r5, #0]	@ 00006dfa 2868
.org 0x6dfc
	adds r0, r0, r5	@ 00006dfc 4019
.org 0x6dfe
	adds r0, r0, r4	@ 00006dfe 0019
.org 0x6e00
	adds r0, #12	@ 00006e00 0c30
.org 0x6e02
	movs r1, #0	@ 00006e02 0021
.org 0x6e04
	bl 0x2208	@ 00006e04 fbf700fa
.org 0x6e08
	ldr r5, [pc, #100]	@ 00006e08 194d
.org 0x6e0a
	ldr r4, [pc, #108]	@ 00006e0a 1b4c
.org 0x6e0c
	movs r2, #128	@ 00006e0c 8022
.org 0x6e0e
	lsls r2, r2, #6	@ 00006e0e 9201
.org 0x6e10
	adds r1, r4, #0	@ 00006e10 211c
.org 0x6e12
	adds r1, #92	@ 00006e12 5c31
.org 0x6e14
	movs r3, #2	@ 00006e14 0223
.org 0x6e16
	ldr r0, [r1, #0]	@ 00006e16 0868
.org 0x6e18
	adds r0, r0, r2	@ 00006e18 8018
.org 0x6e1a
	str r0, [r1, #0]	@ 00006e1a 0860
.org 0x6e1c
	ldr r0, [r1, #4]	@ 00006e1c 4868
.org 0x6e1e
	adds r0, r0, r2	@ 00006e1e 8018
.org 0x6e20
	str r0, [r1, #4]	@ 00006e20 4860
.org 0x6e22
	ldr r0, [r1, #24]	@ 00006e22 8869
.org 0x6e24
	adds r0, r0, r2	@ 00006e24 8018
.org 0x6e26
	str r0, [r1, #24]	@ 00006e26 8861
.org 0x6e28
	ldr r0, [r1, #28]	@ 00006e28 c869
.org 0x6e2a
	adds r0, r0, r2	@ 00006e2a 8018
.org 0x6e2c
	str r0, [r1, #28]	@ 00006e2c c861
.org 0x6e2e
	adds r1, #136	@ 00006e2e 8831
.org 0x6e30
	subs r3, #1	@ 00006e30 013b
.org 0x6e32
	cmp r3, #0	@ 00006e32 002b
.org 0x6e34
	bge.n 0x6e16	@ 00006e34 efda
.org 0x6e36
	ldrh r0, [r5, #0]	@ 00006e36 2888
.org 0x6e38
	ldr r1, [pc, #76]	@ 00006e38 1349
.org 0x6e3a
	ands r1, r0	@ 00006e3a 0140
.org 0x6e3c
	movs r2, #251	@ 00006e3c fb22
.org 0x6e3e
	lsls r2, r2, #3	@ 00006e3e d200
.org 0x6e40
	adds r0, r4, r2	@ 00006e40 a018
.org 0x6e42
	ldrh r0, [r0, #0]	@ 00006e42 0088
.org 0x6e44
	lsls r0, r0, #8	@ 00006e44 0002
.org 0x6e46
	orrs r1, r0	@ 00006e46 0143
.org 0x6e48
	strh r1, [r5, #0]	@ 00006e48 2980
.org 0x6e4a
	ldr r1, [pc, #64]	@ 00006e4a 1049
.org 0x6e4c
	adds r0, r4, r1	@ 00006e4c 6018
.org 0x6e4e
	ldrh r0, [r0, #0]	@ 00006e4e 0088
.org 0x6e50
	strh r0, [r5, #6]	@ 00006e50 e880
.org 0x6e52
	adds r2, #4	@ 00006e52 0432
.org 0x6e54
	adds r0, r4, r2	@ 00006e54 a018
.org 0x6e56
	ldrh r0, [r0, #0]	@ 00006e56 0088
.org 0x6e58
	strh r0, [r5, #8]	@ 00006e58 2881
.org 0x6e5a
	adds r1, #4	@ 00006e5a 0431
.org 0x6e5c
	adds r0, r4, r1	@ 00006e5c 6018
.org 0x6e5e
	ldrh r0, [r0, #0]	@ 00006e5e 0088
.org 0x6e60
	strh r0, [r5, #10]	@ 00006e60 6881
.org 0x6e62
	ldr r2, [pc, #44]	@ 00006e62 0b4a
.org 0x6e64
	adds r1, r4, r2	@ 00006e64 a118
.org 0x6e66
	movs r0, #1	@ 00006e66 0120
.org 0x6e68
	strh r0, [r1, #0]	@ 00006e68 0880
.org 0x6e6a
	pop {r4, r5}	@ 00006e6a 30bc
.org 0x6e6c
	pop {r0}	@ 00006e6c 01bc
.org 0x6e6e
	bx r0	@ 00006e6e 0047
