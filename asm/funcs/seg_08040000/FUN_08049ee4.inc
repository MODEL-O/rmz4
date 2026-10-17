@ FUN_08049ee4  entry 0x08049ee4  size 82
.thumb
.org 0x49ee4
FUN_08049ee4:
	push {r4, r5, lr}	@ 00049ee4 30b5
.org 0x49ee6
	adds r4, r0, #0	@ 00049ee6 041c
.org 0x49ee8
	ldr r1, [pc, #76]	@ 00049ee8 1349
.org 0x49eea
	ldrb r0, [r4, #9]	@ 00049eea 607a
.org 0x49eec
	lsls r0, r0, #2	@ 00049eec 8000
.org 0x49eee
	adds r0, r0, r1	@ 00049eee 4018
.org 0x49ef0
	movs r1, #1	@ 00049ef0 0121
.org 0x49ef2
	str r1, [r4, #12]	@ 00049ef2 e160
.org 0x49ef4
	ldr r0, [r0, #0]	@ 00049ef4 0068
.org 0x49ef6
	ldr r0, [r0, #4]	@ 00049ef6 4068
.org 0x49ef8
	str r0, [r4, #20]	@ 00049ef8 6061
.org 0x49efa
	adds r0, r4, #0	@ 00049efa 201c
.org 0x49efc
	bl 0x1cc9c	@ 00049efc d2f7cefe
.org 0x49f00
	adds r0, r4, #0	@ 00049f00 201c
.org 0x49f02
	bl 0x1ceec	@ 00049f02 d2f7f3ff
.org 0x49f06
	ldrb r1, [r4, #10]	@ 00049f06 a17a
.org 0x49f08
	movs r0, #254	@ 00049f08 fe20
.org 0x49f0a
	ands r0, r1	@ 00049f0a 0840
.org 0x49f0c
	movs r5, #0	@ 00049f0c 0025
.org 0x49f0e
	movs r1, #2	@ 00049f0e 0221
.org 0x49f10
	orrs r0, r1	@ 00049f10 0843
.org 0x49f12
	strb r0, [r4, #10]	@ 00049f12 a072
.org 0x49f14
	ldr r1, [pc, #36]	@ 00049f14 0949
.org 0x49f16
	adds r0, r4, #0	@ 00049f16 201c
.org 0x49f18
	bl 0x1cf00	@ 00049f18 d2f7f2ff
.org 0x49f1c
	movs r0, #8	@ 00049f1c 0820
.org 0x49f1e
	strb r0, [r4, #18]	@ 00049f1e a074
.org 0x49f20
	movs r0, #24	@ 00049f20 1820
.org 0x49f22
	strb r0, [r4, #19]	@ 00049f22 e074
.org 0x49f24
	adds r0, r4, #0	@ 00049f24 201c
.org 0x49f26
	adds r0, #189	@ 00049f26 bd30
.org 0x49f28
	strb r5, [r0, #0]	@ 00049f28 0570
.org 0x49f2a
	adds r0, r4, #0	@ 00049f2a 201c
.org 0x49f2c
	bl 0x49f40	@ 00049f2c 00f008f8
.org 0x49f30
	pop {r4, r5}	@ 00049f30 30bc
.org 0x49f32
	pop {r0}	@ 00049f32 01bc
.org 0x49f34
	bx r0	@ 00049f34 0047
