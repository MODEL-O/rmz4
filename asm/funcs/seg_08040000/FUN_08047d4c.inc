@ FUN_08047d4c  entry 0x08047d4c  size 108
.thumb
.org 0x47d4c
FUN_08047d4c:
	push {r4, r5, r6, lr}	@ 00047d4c 70b5
.org 0x47d4e
	adds r4, r0, #0	@ 00047d4e 041c
.org 0x47d50
	ldr r1, [pc, #100]	@ 00047d50 1949
.org 0x47d52
	ldrb r0, [r4, #9]	@ 00047d52 607a
.org 0x47d54
	lsls r0, r0, #2	@ 00047d54 8000
.org 0x47d56
	adds r0, r0, r1	@ 00047d56 4018
.org 0x47d58
	movs r1, #1	@ 00047d58 0121
.org 0x47d5a
	str r1, [r4, #12]	@ 00047d5a e160
.org 0x47d5c
	ldr r0, [r0, #0]	@ 00047d5c 0068
.org 0x47d5e
	ldr r0, [r0, #4]	@ 00047d5e 4068
.org 0x47d60
	str r0, [r4, #20]	@ 00047d60 6061
.org 0x47d62
	adds r0, r4, #0	@ 00047d62 201c
.org 0x47d64
	bl 0x1cd28	@ 00047d64 d4f7e0ff
.org 0x47d68
	adds r0, r4, #0	@ 00047d68 201c
.org 0x47d6a
	bl 0x1ceec	@ 00047d6a d5f7bff8
.org 0x47d6e
	ldrb r1, [r4, #10]	@ 00047d6e a17a
.org 0x47d70
	movs r0, #1	@ 00047d70 0120
.org 0x47d72
	movs r6, #0	@ 00047d72 0026
.org 0x47d74
	orrs r0, r1	@ 00047d74 0843
.org 0x47d76
	movs r1, #2	@ 00047d76 0221
.org 0x47d78
	orrs r0, r1	@ 00047d78 0843
.org 0x47d7a
	strb r0, [r4, #10]	@ 00047d7a a072
.org 0x47d7c
	ldr r1, [pc, #60]	@ 00047d7c 0f49
.org 0x47d7e
	adds r0, r4, #0	@ 00047d7e 201c
.org 0x47d80
	bl 0x1cf00	@ 00047d80 d5f7bef8
.org 0x47d84
	ldrb r1, [r4, #10]	@ 00047d84 a17a
.org 0x47d86
	movs r0, #4	@ 00047d86 0420
.org 0x47d88
	orrs r0, r1	@ 00047d88 0843
.org 0x47d8a
	strb r0, [r4, #10]	@ 00047d8a a072
.org 0x47d8c
	adds r5, r4, #0	@ 00047d8c 251c
.org 0x47d8e
	adds r5, #116	@ 00047d8e 7435
.org 0x47d90
	ldr r1, [pc, #44]	@ 00047d90 0b49
.org 0x47d92
	adds r2, r4, #0	@ 00047d92 221c
.org 0x47d94
	adds r2, #84	@ 00047d94 5432
.org 0x47d96
	adds r0, r5, #0	@ 00047d96 281c
.org 0x47d98
	movs r3, #8	@ 00047d98 0823
.org 0x47d9a
	bl 0x5760	@ 00047d9a bdf7e1fc
.org 0x47d9e
	str r4, [r5, #44]	@ 00047d9e ec62
.org 0x47da0
	ldr r0, [pc, #32]	@ 00047da0 0848
.org 0x47da2
	str r0, [r5, #36]	@ 00047da2 6862
.org 0x47da4
	movs r0, #57	@ 00047da4 3920
.org 0x47da6
	bl 0x2b10	@ 00047da6 baf7b3fe
.org 0x47daa
	strb r6, [r4, #18]	@ 00047daa a674
.org 0x47dac
	adds r0, r4, #0	@ 00047dac 201c
.org 0x47dae
	bl 0x47dc8	@ 00047dae 00f00bf8
.org 0x47db2
	pop {r4, r5, r6}	@ 00047db2 70bc
.org 0x47db4
	pop {r0}	@ 00047db4 01bc
.org 0x47db6
	bx r0	@ 00047db6 0047
