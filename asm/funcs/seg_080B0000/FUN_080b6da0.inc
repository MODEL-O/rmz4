@ FUN_080b6da0  entry 0x080b6da0  size 150
.thumb
.org 0xb6da0
FUN_080b6da0:
	push {r4, r5, r6, r7, lr}	@ 000b6da0 f0b5
.org 0xb6da2
	adds r4, r0, #0	@ 000b6da2 041c
.org 0xb6da4
	ldr r6, [r4, #40]	@ 000b6da4 a66a
.org 0xb6da6
	ldrb r0, [r4, #10]	@ 000b6da6 a07a
.org 0xb6da8
	lsrs r5, r0, #4	@ 000b6da8 0509
.org 0xb6daa
	movs r7, #1	@ 000b6daa 0127
.org 0xb6dac
	ands r5, r7	@ 000b6dac 3d40
.org 0xb6dae
	ldrb r0, [r4, #15]	@ 000b6dae e07b
.org 0xb6db0
	cmp r0, #0	@ 000b6db0 0028
.org 0xb6db2
	bne.n 0xb6dec	@ 000b6db2 1bd1
.org 0xb6db4
	adds r0, r4, #0	@ 000b6db4 201c
.org 0xb6db6
	adds r0, #116	@ 000b6db6 7430
.org 0xb6db8
	ldr r1, [pc, #124]	@ 000b6db8 1f49
.org 0xb6dba
	bl 0x5784	@ 000b6dba 4ef7e3fc
.org 0xb6dbe
	ldrb r1, [r4, #10]	@ 000b6dbe a17a
.org 0xb6dc0
	movs r0, #254	@ 000b6dc0 fe20
.org 0xb6dc2
	ands r0, r1	@ 000b6dc2 0840
.org 0xb6dc4
	strb r0, [r4, #10]	@ 000b6dc4 a072
.org 0xb6dc6
	lsls r0, r5, #1	@ 000b6dc6 6800
.org 0xb6dc8
	subs r0, #1	@ 000b6dc8 0138
.org 0xb6dca
	lsls r0, r0, #14	@ 000b6dca 8003
.org 0xb6dcc
	ldr r1, [r6, #84]	@ 000b6dcc 716d
.org 0xb6dce
	adds r1, r1, r0	@ 000b6dce 0918
.org 0xb6dd0
	str r1, [r4, #92]	@ 000b6dd0 e165
.org 0xb6dd2
	ldr r2, [r6, #88]	@ 000b6dd2 b26d
.org 0xb6dd4
	str r2, [r4, #96]	@ 000b6dd4 2266
.org 0xb6dd6
	ldr r0, [r4, #84]	@ 000b6dd6 606d
.org 0xb6dd8
	subs r1, r1, r0	@ 000b6dd8 091a
.org 0xb6dda
	str r1, [r4, #100]	@ 000b6dda 6166
.org 0xb6ddc
	ldr r0, [r4, #88]	@ 000b6ddc a06d
.org 0xb6dde
	subs r2, r2, r0	@ 000b6dde 121a
.org 0xb6de0
	str r2, [r4, #104]	@ 000b6de0 a266
.org 0xb6de2
	movs r0, #32	@ 000b6de2 2020
.org 0xb6de4
	strb r0, [r4, #18]	@ 000b6de4 a074
.org 0xb6de6
	ldrb r0, [r4, #15]	@ 000b6de6 e07b
.org 0xb6de8
	adds r0, #1	@ 000b6de8 0130
.org 0xb6dea
	strb r0, [r4, #15]	@ 000b6dea e073
.org 0xb6dec
	ldrb r0, [r4, #18]	@ 000b6dec a07c
.org 0xb6dee
	subs r0, #1	@ 000b6dee 0138
.org 0xb6df0
	strb r0, [r4, #18]	@ 000b6df0 a074
.org 0xb6df2
	ldrb r0, [r4, #18]	@ 000b6df2 a07c
.org 0xb6df4
	lsls r2, r0, #3	@ 000b6df4 c200
.org 0xb6df6
	ldr r0, [r4, #100]	@ 000b6df6 606e
.org 0xb6df8
	negs r0, r0	@ 000b6df8 4042
.org 0xb6dfa
	muls r0, r2	@ 000b6dfa 5043
.org 0xb6dfc
	cmp r0, #0	@ 000b6dfc 0028
.org 0xb6dfe
	bge.n 0xb6e02	@ 000b6dfe 00da
.org 0xb6e00
	adds r0, #255	@ 000b6e00 ff30
.org 0xb6e02
	asrs r0, r0, #8	@ 000b6e02 0012
.org 0xb6e04
	ldr r1, [r4, #92]	@ 000b6e04 e16d
.org 0xb6e06
	adds r1, r1, r0	@ 000b6e06 0918
.org 0xb6e08
	str r1, [r4, #84]	@ 000b6e08 6165
.org 0xb6e0a
	ldr r0, [r4, #104]	@ 000b6e0a a06e
.org 0xb6e0c
	negs r0, r0	@ 000b6e0c 4042
.org 0xb6e0e
	muls r0, r2	@ 000b6e0e 5043
.org 0xb6e10
	cmp r0, #0	@ 000b6e10 0028
.org 0xb6e12
	bge.n 0xb6e16	@ 000b6e12 00da
.org 0xb6e14
	adds r0, #255	@ 000b6e14 ff30
.org 0xb6e16
	asrs r1, r0, #8	@ 000b6e16 0112
.org 0xb6e18
	ldr r0, [r4, #96]	@ 000b6e18 206e
.org 0xb6e1a
	adds r0, r0, r1	@ 000b6e1a 4018
.org 0xb6e1c
	str r0, [r4, #88]	@ 000b6e1c a065
.org 0xb6e1e
	adds r0, r4, #0	@ 000b6e1e 201c
.org 0xb6e20
	bl 0xb72a0	@ 000b6e20 00f03efa
.org 0xb6e24
	ldrb r0, [r4, #18]	@ 000b6e24 a07c
.org 0xb6e26
	cmp r0, #0	@ 000b6e26 0028
.org 0xb6e28
	bne.n 0xb6e30	@ 000b6e28 02d1
.org 0xb6e2a
	strb r7, [r4, #13]	@ 000b6e2a 6773
.org 0xb6e2c
	strb r0, [r4, #14]	@ 000b6e2c a073
.org 0xb6e2e
	strb r0, [r4, #15]	@ 000b6e2e e073
.org 0xb6e30
	pop {r4, r5, r6, r7}	@ 000b6e30 f0bc
.org 0xb6e32
	pop {r0}	@ 000b6e32 01bc
.org 0xb6e34
	bx r0	@ 000b6e34 0047
