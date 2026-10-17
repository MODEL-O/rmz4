@ FUN_08096edc  entry 0x08096edc  size 112
.thumb
.org 0x96edc
FUN_08096edc:
	push {r4, r5, r6, lr}	@ 00096edc 70b5
.org 0x96ede
	adds r4, r0, #0	@ 00096ede 041c
.org 0x96ee0
	ldr r5, [r4, #40]	@ 00096ee0 a56a
.org 0x96ee2
	bl 0x1cd28	@ 00096ee2 85f721ff
.org 0x96ee6
	ldrb r1, [r4, #10]	@ 00096ee6 a17a
.org 0x96ee8
	movs r0, #1	@ 00096ee8 0120
.org 0x96eea
	movs r6, #0	@ 00096eea 0026
.org 0x96eec
	orrs r0, r1	@ 00096eec 0843
.org 0x96eee
	movs r1, #2	@ 00096eee 0221
.org 0x96ef0
	orrs r0, r1	@ 00096ef0 0843
.org 0x96ef2
	strb r0, [r4, #10]	@ 00096ef2 a072
.org 0x96ef4
	ldr r1, [pc, #84]	@ 00096ef4 1549
.org 0x96ef6
	adds r0, r4, #0	@ 00096ef6 201c
.org 0x96ef8
	bl 0x1cf00	@ 00096ef8 86f702f8
.org 0x96efc
	ldrb r0, [r4, #11]	@ 00096efc e07a
.org 0x96efe
	movs r1, #16	@ 00096efe 1021
.org 0x96f00
	orrs r0, r1	@ 00096f00 0843
.org 0x96f02
	strb r0, [r4, #11]	@ 00096f02 e072
.org 0x96f04
	ldrb r0, [r5, #28]	@ 00096f04 287f
.org 0x96f06
	strb r0, [r4, #29]	@ 00096f06 6077
.org 0x96f08
	ldrb r1, [r4, #10]	@ 00096f08 a17a
.org 0x96f0a
	movs r0, #4	@ 00096f0a 0420
.org 0x96f0c
	orrs r0, r1	@ 00096f0c 0843
.org 0x96f0e
	strb r0, [r4, #10]	@ 00096f0e a072
.org 0x96f10
	adds r5, r4, #0	@ 00096f10 251c
.org 0x96f12
	adds r5, #116	@ 00096f12 7435
.org 0x96f14
	ldr r1, [pc, #56]	@ 00096f14 0e49
.org 0x96f16
	adds r2, r4, #0	@ 00096f16 221c
.org 0x96f18
	adds r2, #84	@ 00096f18 5432
.org 0x96f1a
	adds r0, r5, #0	@ 00096f1a 281c
.org 0x96f1c
	movs r3, #8	@ 00096f1c 0823
.org 0x96f1e
	bl 0x5760	@ 00096f1e 6ef71ffc
.org 0x96f22
	str r4, [r5, #44]	@ 00096f22 ec62
.org 0x96f24
	str r6, [r5, #36]	@ 00096f24 6e62
.org 0x96f26
	adds r1, r4, #0	@ 00096f26 211c
.org 0x96f28
	adds r1, #37	@ 00096f28 2531
.org 0x96f2a
	movs r0, #25	@ 00096f2a 1920
.org 0x96f2c
	strb r0, [r1, #0]	@ 00096f2c 0870
.org 0x96f2e
	ldr r1, [pc, #36]	@ 00096f2e 0949
.org 0x96f30
	ldrb r0, [r4, #9]	@ 00096f30 607a
.org 0x96f32
	lsls r0, r0, #2	@ 00096f32 8000
.org 0x96f34
	adds r0, r0, r1	@ 00096f34 4018
.org 0x96f36
	movs r1, #1	@ 00096f36 0121
.org 0x96f38
	str r1, [r4, #12]	@ 00096f38 e160
.org 0x96f3a
	ldr r0, [r0, #0]	@ 00096f3a 0068
.org 0x96f3c
	ldr r0, [r0, #4]	@ 00096f3c 4068
.org 0x96f3e
	str r0, [r4, #20]	@ 00096f3e 6061
.org 0x96f40
	adds r0, r4, #0	@ 00096f40 201c
.org 0x96f42
	bl 0x96f58	@ 00096f42 00f009f8
.org 0x96f46
	pop {r4, r5, r6}	@ 00096f46 70bc
.org 0x96f48
	pop {r0}	@ 00096f48 01bc
.org 0x96f4a
	bx r0	@ 00096f4a 0047
