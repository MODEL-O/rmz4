@ FUN_08048018  entry 0x08048018  size 108
.thumb
.org 0x48018
FUN_08048018:
	push {r4, r5, r6, lr}	@ 00048018 70b5
.org 0x4801a
	adds r4, r0, #0	@ 0004801a 041c
.org 0x4801c
	ldr r1, [pc, #100]	@ 0004801c 1949
.org 0x4801e
	ldrb r0, [r4, #9]	@ 0004801e 607a
.org 0x48020
	lsls r0, r0, #2	@ 00048020 8000
.org 0x48022
	adds r0, r0, r1	@ 00048022 4018
.org 0x48024
	movs r1, #1	@ 00048024 0121
.org 0x48026
	str r1, [r4, #12]	@ 00048026 e160
.org 0x48028
	ldr r0, [r0, #0]	@ 00048028 0068
.org 0x4802a
	ldr r0, [r0, #4]	@ 0004802a 4068
.org 0x4802c
	str r0, [r4, #20]	@ 0004802c 6061
.org 0x4802e
	adds r0, r4, #0	@ 0004802e 201c
.org 0x48030
	bl 0x1cd28	@ 00048030 d4f77afe
.org 0x48034
	adds r0, r4, #0	@ 00048034 201c
.org 0x48036
	bl 0x1ceec	@ 00048036 d4f759ff
.org 0x4803a
	ldrb r1, [r4, #10]	@ 0004803a a17a
.org 0x4803c
	movs r0, #1	@ 0004803c 0120
.org 0x4803e
	movs r6, #0	@ 0004803e 0026
.org 0x48040
	orrs r0, r1	@ 00048040 0843
.org 0x48042
	movs r1, #2	@ 00048042 0221
.org 0x48044
	orrs r0, r1	@ 00048044 0843
.org 0x48046
	strb r0, [r4, #10]	@ 00048046 a072
.org 0x48048
	ldr r1, [pc, #60]	@ 00048048 0f49
.org 0x4804a
	adds r0, r4, #0	@ 0004804a 201c
.org 0x4804c
	bl 0x1cf00	@ 0004804c d4f758ff
.org 0x48050
	ldrb r1, [r4, #10]	@ 00048050 a17a
.org 0x48052
	movs r0, #4	@ 00048052 0420
.org 0x48054
	orrs r0, r1	@ 00048054 0843
.org 0x48056
	strb r0, [r4, #10]	@ 00048056 a072
.org 0x48058
	adds r5, r4, #0	@ 00048058 251c
.org 0x4805a
	adds r5, #116	@ 0004805a 7435
.org 0x4805c
	ldr r1, [pc, #44]	@ 0004805c 0b49
.org 0x4805e
	adds r2, r4, #0	@ 0004805e 221c
.org 0x48060
	adds r2, #84	@ 00048060 5432
.org 0x48062
	adds r0, r5, #0	@ 00048062 281c
.org 0x48064
	movs r3, #8	@ 00048064 0823
.org 0x48066
	bl 0x5760	@ 00048066 bdf77bfb
.org 0x4806a
	str r4, [r5, #44]	@ 0004806a ec62
.org 0x4806c
	ldr r0, [pc, #32]	@ 0004806c 0848
.org 0x4806e
	str r0, [r5, #36]	@ 0004806e 6862
.org 0x48070
	movs r0, #57	@ 00048070 3920
.org 0x48072
	bl 0x2b10	@ 00048072 baf74dfd
.org 0x48076
	strb r6, [r4, #18]	@ 00048076 a674
.org 0x48078
	adds r0, r4, #0	@ 00048078 201c
.org 0x4807a
	bl 0x48094	@ 0004807a 00f00bf8
.org 0x4807e
	pop {r4, r5, r6}	@ 0004807e 70bc
.org 0x48080
	pop {r0}	@ 00048080 01bc
.org 0x48082
	bx r0	@ 00048082 0047
