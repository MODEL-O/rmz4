@ FUN_080f7da8  entry 0x080f7da8  size 190
.thumb
.org 0xf7da8
FUN_080f7da8:
	push {r4, r5, r6, r7, lr}	@ 000f7da8 f0b5
.org 0xf7daa
	sub sp, #8	@ 000f7daa 82b0
.org 0xf7dac
	adds r6, r0, #0	@ 000f7dac 061c
.org 0xf7dae
	ldr r1, [pc, #184]	@ 000f7dae 2e49
.org 0xf7db0
	mov r0, sp	@ 000f7db0 6846
.org 0xf7db2
	movs r2, #4	@ 000f7db2 0422
.org 0xf7db4
	bl 0x129258	@ 000f7db4 31f050fa
.org 0xf7db8
	add r4, sp, #4	@ 000f7db8 01ac
.org 0xf7dba
	ldr r1, [pc, #176]	@ 000f7dba 2c49
.org 0xf7dbc
	adds r0, r4, #0	@ 000f7dbc 201c
.org 0xf7dbe
	movs r2, #4	@ 000f7dbe 0422
.org 0xf7dc0
	bl 0x129258	@ 000f7dc0 31f04afa
.org 0xf7dc4
	adds r0, r6, #0	@ 000f7dc4 301c
.org 0xf7dc6
	bl 0x1cc9c	@ 000f7dc6 24f769ff
.org 0xf7dca
	ldrb r0, [r6, #10]	@ 000f7dca b07a
.org 0xf7dcc
	movs r5, #1	@ 000f7dcc 0125
.org 0xf7dce
	orrs r0, r5	@ 000f7dce 2843
.org 0xf7dd0
	movs r1, #2	@ 000f7dd0 0221
.org 0xf7dd2
	orrs r0, r1	@ 000f7dd2 0843
.org 0xf7dd4
	strb r0, [r6, #10]	@ 000f7dd4 b072
.org 0xf7dd6
	movs r1, #224	@ 000f7dd6 e021
.org 0xf7dd8
	lsls r1, r1, #7	@ 000f7dd8 c901
.org 0xf7dda
	adds r0, r6, #0	@ 000f7dda 301c
.org 0xf7ddc
	bl 0x1cf00	@ 000f7ddc 25f790f8
.org 0xf7de0
	ldrb r1, [r6, #11]	@ 000f7de0 f17a
.org 0xf7de2
	movs r0, #8	@ 000f7de2 0820
.org 0xf7de4
	orrs r0, r1	@ 000f7de4 0843
.org 0xf7de6
	strb r0, [r6, #11]	@ 000f7de6 f072
.org 0xf7de8
	ldr r0, [pc, #132]	@ 000f7de8 2148
.org 0xf7dea
	str r0, [r6, #48]	@ 000f7dea 3063
.org 0xf7dec
	movs r0, #1	@ 000f7dec 0120
.org 0xf7dee
	strh r0, [r6, #38]	@ 000f7dee f084
.org 0xf7df0
	ldrb r0, [r6, #16]	@ 000f7df0 307c
.org 0xf7df2
	add r0, sp	@ 000f7df2 6844
.org 0xf7df4
	ldrb r0, [r0, #0]	@ 000f7df4 0078
.org 0xf7df6
	lsls r0, r0, #24	@ 000f7df6 0006
.org 0xf7df8
	asrs r0, r0, #24	@ 000f7df8 0016
.org 0xf7dfa
	lsls r0, r0, #8	@ 000f7dfa 0002
.org 0xf7dfc
	ldr r1, [r6, #88]	@ 000f7dfc b16d
.org 0xf7dfe
	adds r0, r1, r0	@ 000f7dfe 0818
.org 0xf7e00
	str r0, [r6, #100]	@ 000f7e00 7066
.org 0xf7e02
	ldrb r0, [r6, #16]	@ 000f7e02 307c
.org 0xf7e04
	adds r4, r4, r0	@ 000f7e04 2418
.org 0xf7e06
	movs r0, #0	@ 000f7e06 0020
.org 0xf7e08
	ldrsb r0, [r4, r0]	@ 000f7e08 2056
.org 0xf7e0a
	lsls r0, r0, #8	@ 000f7e0a 0002
.org 0xf7e0c
	adds r1, r1, r0	@ 000f7e0c 0918
.org 0xf7e0e
	str r1, [r6, #104]	@ 000f7e0e b166
.org 0xf7e10
	ldr r0, [pc, #96]	@ 000f7e10 1848
.org 0xf7e12
	ldr r1, [pc, #100]	@ 000f7e12 1949
.org 0xf7e14
	adds r0, r0, r1	@ 000f7e14 4018
.org 0xf7e16
	ldr r0, [r0, #0]	@ 000f7e16 0068
.org 0xf7e18
	movs r1, #142	@ 000f7e18 8e21
.org 0xf7e1a
	bl 0x129198	@ 000f7e1a 31f0bdf9
.org 0xf7e1e
	lsls r0, r0, #16	@ 000f7e1e 0004
.org 0xf7e20
	lsrs r7, r0, #16	@ 000f7e20 070c
.org 0xf7e22
	ldrb r0, [r6, #16]	@ 000f7e22 307c
.org 0xf7e24
	lsrs r0, r0, #1	@ 000f7e24 4008
.org 0xf7e26
	eors r0, r5	@ 000f7e26 6840
.org 0xf7e28
	strb r0, [r6, #13]	@ 000f7e28 7073
.org 0xf7e2a
	movs r4, #0	@ 000f7e2a 0024
.org 0xf7e2c
	cmp r4, r7	@ 000f7e2c bc42
.org 0xf7e2e
	bcs.n 0xf7e40	@ 000f7e2e 07d2
.org 0xf7e30
	adds r0, r6, #0	@ 000f7e30 301c
.org 0xf7e32
	bl 0xf7e80	@ 000f7e32 00f025f8
.org 0xf7e36
	adds r0, r4, #1	@ 000f7e36 601c
.org 0xf7e38
	lsls r0, r0, #16	@ 000f7e38 0004
.org 0xf7e3a
	lsrs r4, r0, #16	@ 000f7e3a 040c
.org 0xf7e3c
	cmp r4, r7	@ 000f7e3c bc42
.org 0xf7e3e
	bcc.n 0xf7e30	@ 000f7e3e f7d3
.org 0xf7e40
	ldrb r2, [r6, #13]	@ 000f7e40 727b
.org 0xf7e42
	strb r2, [r6, #16]	@ 000f7e42 3274
.org 0xf7e44
	ldr r1, [pc, #52]	@ 000f7e44 0d49
.org 0xf7e46
	ldrb r0, [r6, #9]	@ 000f7e46 707a
.org 0xf7e48
	lsls r0, r0, #2	@ 000f7e48 8000
.org 0xf7e4a
	adds r0, r0, r1	@ 000f7e4a 4018
.org 0xf7e4c
	movs r1, #1	@ 000f7e4c 0121
.org 0xf7e4e
	str r1, [r6, #12]	@ 000f7e4e f160
.org 0xf7e50
	ldr r0, [r0, #0]	@ 000f7e50 0068
.org 0xf7e52
	ldr r0, [r0, #4]	@ 000f7e52 4068
.org 0xf7e54
	str r0, [r6, #20]	@ 000f7e54 7061
.org 0xf7e56
	strb r2, [r6, #13]	@ 000f7e56 7273
.org 0xf7e58
	adds r0, r6, #0	@ 000f7e58 301c
.org 0xf7e5a
	bl 0xf7e80	@ 000f7e5a 00f011f8
.org 0xf7e5e
	add sp, #8	@ 000f7e5e 02b0
.org 0xf7e60
	pop {r4, r5, r6, r7}	@ 000f7e60 f0bc
.org 0xf7e62
	pop {r0}	@ 000f7e62 01bc
.org 0xf7e64
	bx r0	@ 000f7e64 0047
