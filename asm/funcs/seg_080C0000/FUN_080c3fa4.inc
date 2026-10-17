@ FUN_080c3fa4  entry 0x080c3fa4  size 84
.thumb
.org 0xc3fa4
FUN_080c3fa4:
	push {r4, r5, r6, lr}	@ 000c3fa4 70b5
.org 0xc3fa6
	adds r4, r0, #0	@ 000c3fa6 041c
.org 0xc3fa8
	ldr r1, [pc, #76]	@ 000c3fa8 1349
.org 0xc3faa
	ldrb r0, [r4, #9]	@ 000c3faa 607a
.org 0xc3fac
	lsls r0, r0, #2	@ 000c3fac 8000
.org 0xc3fae
	adds r0, r0, r1	@ 000c3fae 4018
.org 0xc3fb0
	movs r1, #1	@ 000c3fb0 0121
.org 0xc3fb2
	str r1, [r4, #12]	@ 000c3fb2 e160
.org 0xc3fb4
	ldr r0, [r0, #0]	@ 000c3fb4 0068
.org 0xc3fb6
	ldr r0, [r0, #4]	@ 000c3fb6 4068
.org 0xc3fb8
	str r0, [r4, #20]	@ 000c3fb8 6061
.org 0xc3fba
	ldrb r1, [r4, #10]	@ 000c3fba a17a
.org 0xc3fbc
	movs r0, #1	@ 000c3fbc 0120
.org 0xc3fbe
	movs r6, #0	@ 000c3fbe 0026
.org 0xc3fc0
	orrs r0, r1	@ 000c3fc0 0843
.org 0xc3fc2
	movs r1, #2	@ 000c3fc2 0221
.org 0xc3fc4
	orrs r0, r1	@ 000c3fc4 0843
.org 0xc3fc6
	strb r0, [r4, #10]	@ 000c3fc6 a072
.org 0xc3fc8
	adds r0, r4, #0	@ 000c3fc8 201c
.org 0xc3fca
	bl 0x1cc9c	@ 000c3fca 58f767fe
.org 0xc3fce
	ldrb r1, [r4, #10]	@ 000c3fce a17a
.org 0xc3fd0
	movs r0, #4	@ 000c3fd0 0420
.org 0xc3fd2
	orrs r0, r1	@ 000c3fd2 0843
.org 0xc3fd4
	strb r0, [r4, #10]	@ 000c3fd4 a072
.org 0xc3fd6
	adds r5, r4, #0	@ 000c3fd6 251c
.org 0xc3fd8
	adds r5, #116	@ 000c3fd8 7435
.org 0xc3fda
	ldr r1, [pc, #32]	@ 000c3fda 0849
.org 0xc3fdc
	adds r2, r4, #0	@ 000c3fdc 221c
.org 0xc3fde
	adds r2, #84	@ 000c3fde 5432
.org 0xc3fe0
	adds r0, r5, #0	@ 000c3fe0 281c
.org 0xc3fe2
	movs r3, #64	@ 000c3fe2 4023
.org 0xc3fe4
	bl 0x5760	@ 000c3fe4 41f7bcfb
.org 0xc3fe8
	str r4, [r5, #44]	@ 000c3fe8 ec62
.org 0xc3fea
	str r6, [r5, #36]	@ 000c3fea 6e62
.org 0xc3fec
	adds r0, r4, #0	@ 000c3fec 201c
.org 0xc3fee
	bl 0xc4000	@ 000c3fee 00f007f8
.org 0xc3ff2
	pop {r4, r5, r6}	@ 000c3ff2 70bc
.org 0xc3ff4
	pop {r0}	@ 000c3ff4 01bc
.org 0xc3ff6
	bx r0	@ 000c3ff6 0047
