@ FUN_080e2bec  entry 0x080e2bec  size 108
.thumb
.org 0xe2bec
FUN_080e2bec:
	push {r4, r5, r6, r7, lr}	@ 000e2bec f0b5
.org 0xe2bee
	adds r7, r0, #0	@ 000e2bee 071c
.org 0xe2bf0
	ldr r5, [pc, #100]	@ 000e2bf0 194d
.org 0xe2bf2
	ldr r0, [r5, #0]	@ 000e2bf2 2868
.org 0xe2bf4
	ldr r6, [pc, #100]	@ 000e2bf4 194e
.org 0xe2bf6
	adds r1, r0, #0	@ 000e2bf6 011c
.org 0xe2bf8
	muls r1, r6	@ 000e2bf8 7143
.org 0xe2bfa
	ldr r4, [pc, #100]	@ 000e2bfa 194c
.org 0xe2bfc
	adds r1, r1, r4	@ 000e2bfc 0919
.org 0xe2bfe
	lsls r1, r1, #1	@ 000e2bfe 4900
.org 0xe2c00
	lsrs r0, r1, #1	@ 000e2c00 4808
.org 0xe2c02
	str r0, [r5, #0]	@ 000e2c02 2860
.org 0xe2c04
	lsrs r1, r1, #17	@ 000e2c04 490c
.org 0xe2c06
	movs r0, #1	@ 000e2c06 0120
.org 0xe2c08
	ands r1, r0	@ 000e2c08 0140
.org 0xe2c0a
	ldr r2, [pc, #88]	@ 000e2c0a 164a
.org 0xe2c0c
	adds r0, r2, #0	@ 000e2c0c 101c
.org 0xe2c0e
	orrs r1, r0	@ 000e2c0e 0143
.org 0xe2c10
	adds r0, r7, #0	@ 000e2c10 381c
.org 0xe2c12
	bl 0x1cf00	@ 000e2c12 3af775f9
.org 0xe2c16
	ldr r0, [r5, #0]	@ 000e2c16 2868
.org 0xe2c18
	muls r0, r6	@ 000e2c18 7043
.org 0xe2c1a
	adds r0, r0, r4	@ 000e2c1a 0019
.org 0xe2c1c
	lsls r0, r0, #1	@ 000e2c1c 4000
.org 0xe2c1e
	lsrs r1, r0, #1	@ 000e2c1e 4108
.org 0xe2c20
	lsls r0, r0, #6	@ 000e2c20 8001
.org 0xe2c22
	lsrs r0, r0, #23	@ 000e2c22 c00d
.org 0xe2c24
	subs r0, #255	@ 000e2c24 ff38
.org 0xe2c26
	str r0, [r7, #92]	@ 000e2c26 f865
.org 0xe2c28
	adds r0, r1, #0	@ 000e2c28 081c
.org 0xe2c2a
	muls r0, r6	@ 000e2c2a 7043
.org 0xe2c2c
	adds r0, r0, r4	@ 000e2c2c 0019
.org 0xe2c2e
	lsls r0, r0, #1	@ 000e2c2e 4000
.org 0xe2c30
	lsrs r1, r0, #1	@ 000e2c30 4108
.org 0xe2c32
	str r1, [r5, #0]	@ 000e2c32 2960
.org 0xe2c34
	lsrs r0, r0, #17	@ 000e2c34 400c
.org 0xe2c36
	ldr r1, [pc, #48]	@ 000e2c36 0c49
.org 0xe2c38
	ands r0, r1	@ 000e2c38 0840
.org 0xe2c3a
	movs r1, #128	@ 000e2c3a 8021
.org 0xe2c3c
	lsls r1, r1, #1	@ 000e2c3c 4900
.org 0xe2c3e
	adds r0, r0, r1	@ 000e2c3e 4018
.org 0xe2c40
	lsls r0, r0, #8	@ 000e2c40 0002
.org 0xe2c42
	negs r0, r0	@ 000e2c42 4042
.org 0xe2c44
	cmp r0, #0	@ 000e2c44 0028
.org 0xe2c46
	bge.n 0xe2c4a	@ 000e2c46 00da
.org 0xe2c48
	adds r0, #255	@ 000e2c48 ff30
.org 0xe2c4a
	asrs r0, r0, #8	@ 000e2c4a 0012
.org 0xe2c4c
	str r0, [r7, #96]	@ 000e2c4c 3866
.org 0xe2c4e
	movs r0, #2	@ 000e2c4e 0220
.org 0xe2c50
	strb r0, [r7, #13]	@ 000e2c50 7873
.org 0xe2c52
	pop {r4, r5, r6, r7}	@ 000e2c52 f0bc
.org 0xe2c54
	pop {r0}	@ 000e2c54 01bc
.org 0xe2c56
	bx r0	@ 000e2c56 0047
