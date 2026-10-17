@ FUN_08112c6c  entry 0x08112c6c  size 132
.thumb
.org 0x112c6c
FUN_08112c6c:
	push {r4, r5, r6, r7, lr}	@ 00112c6c f0b5
.org 0x112c6e
	adds r5, r0, #0	@ 00112c6e 051c
.org 0x112c70
	ldr r0, [pc, #124]	@ 00112c70 1f48
.org 0x112c72
	adds r4, r5, r0	@ 00112c72 2c18
.org 0x112c74
	movs r0, #17	@ 00112c74 1120
.org 0x112c76
	strh r0, [r4, #0]	@ 00112c76 2080
.org 0x112c78
	ldr r0, [pc, #120]	@ 00112c78 1e48
.org 0x112c7a
	ldr r1, [pc, #124]	@ 00112c7a 1f49
.org 0x112c7c
	adds r2, r0, r1	@ 00112c7c 4218
.org 0x112c7e
	adds r1, #4	@ 00112c7e 0431
.org 0x112c80
	adds r0, r0, r1	@ 00112c80 4018
.org 0x112c82
	ldr r1, [pc, #120]	@ 00112c82 1e49
.org 0x112c84
	str r1, [r0, #0]	@ 00112c84 0160
.org 0x112c86
	str r1, [r2, #0]	@ 00112c86 1160
.org 0x112c88
	ldr r1, [pc, #116]	@ 00112c88 1d49
.org 0x112c8a
	adds r0, r5, r1	@ 00112c8a 6818
.org 0x112c8c
	bl 0x1e8d8	@ 00112c8c 0bf724fe
.org 0x112c90
	movs r1, #198	@ 00112c90 c621
.org 0x112c92
	lsls r1, r1, #7	@ 00112c92 c901
.org 0x112c94
	adds r0, r5, r1	@ 00112c94 6818
.org 0x112c96
	bl 0x1e944	@ 00112c96 0bf755fe
.org 0x112c9a
	ldr r1, [pc, #104]	@ 00112c9a 1a49
.org 0x112c9c
	adds r0, r5, r1	@ 00112c9c 6818
.org 0x112c9e
	bl 0x108e04	@ 00112c9e f6f7b1f8
.org 0x112ca2
	ldr r1, [pc, #100]	@ 00112ca2 1949
.org 0x112ca4
	adds r0, r5, r1	@ 00112ca4 6818
.org 0x112ca6
	bl 0x108f48	@ 00112ca6 f6f74ff9
.org 0x112caa
	ldr r1, [pc, #96]	@ 00112caa 1849
.org 0x112cac
	adds r0, r5, r1	@ 00112cac 6818
.org 0x112cae
	bl 0x38034	@ 00112cae 25f7c1f9
.org 0x112cb2
	ldrb r0, [r4, #0]	@ 00112cb2 2078
.org 0x112cb4
	movs r1, #1	@ 00112cb4 0121
.org 0x112cb6
	bl 0x1f134	@ 00112cb6 0cf73dfa
.org 0x112cba
	ldr r0, [pc, #84]	@ 00112cba 1548
.org 0x112cbc
	adds r4, r5, r0	@ 00112cbc 2c18
.org 0x112cbe
	ldr r0, [pc, #84]	@ 00112cbe 1548
.org 0x112cc0
	movs r1, #180	@ 00112cc0 b421
.org 0x112cc2
	lsls r1, r1, #1	@ 00112cc2 4900
.org 0x112cc4
	adds r7, r0, r1	@ 00112cc4 4718
.org 0x112cc6
	ldr r0, [r7, #0]	@ 00112cc6 3868
.org 0x112cc8
	str r0, [r4, #4]	@ 00112cc8 6060
.org 0x112cca
	movs r6, #1	@ 00112cca 0126
.org 0x112ccc
	negs r6, r6	@ 00112ccc 7642
.org 0x112cce
	cmp r0, r6	@ 00112cce b042
.org 0x112cd0
	beq.n 0x112cdc	@ 00112cd0 04d0
.org 0x112cd2
	lsls r0, r0, #16	@ 00112cd2 0004
.org 0x112cd4
	lsrs r0, r0, #16	@ 00112cd4 000c
.org 0x112cd6
	bl 0x2a98	@ 00112cd6 eff6dffe
.org 0x112cda
	str r6, [r7, #0]	@ 00112cda 3e60
.org 0x112cdc
	movs r0, #1	@ 00112cdc 0120
.org 0x112cde
	strb r0, [r4, #1]	@ 00112cde 6070
.org 0x112ce0
	str r6, [r4, #8]	@ 00112ce0 a660
.org 0x112ce2
	adds r0, r5, #0	@ 00112ce2 281c
.org 0x112ce4
	movs r1, #5	@ 00112ce4 0521
.org 0x112ce6
	bl 0x1126ac	@ 00112ce6 fff7e1fc
.org 0x112cea
	pop {r4, r5, r6, r7}	@ 00112cea f0bc
.org 0x112cec
	pop {r0}	@ 00112cec 01bc
.org 0x112cee
	bx r0	@ 00112cee 0047
