@ FUN_08018024  entry 0x08018024  size 234
.thumb
.org 0x18024
FUN_08018024:
	push {r4, r5, r6, r7, lr}	@ 00018024 f0b5
.org 0x18026
	mov r7, r8	@ 00018026 4746
.org 0x18028
	push {r7}	@ 00018028 80b4
.org 0x1802a
	mov r8, r0	@ 0001802a 8046
.org 0x1802c
	movs r7, #159	@ 0001802c 9f27
.org 0x1802e
	ldr r0, [r0, #92]	@ 0001802e c06d
.org 0x18030
	lsls r5, r0, #16	@ 00018030 0504
.org 0x18032
	ldr r0, [pc, #220]	@ 00018032 3748
.org 0x18034
	ldr r1, [pc, #220]	@ 00018034 3749
.org 0x18036
	adds r0, r0, r1	@ 00018036 4018
.org 0x18038
	ldrh r0, [r0, #0]	@ 00018038 0088
.org 0x1803a
	cmp r0, #0	@ 0001803a 0028
.org 0x1803c
	beq.n 0x18084	@ 0001803c 22d0
.org 0x1803e
	ldr r0, [pc, #216]	@ 0001803e 3648
.org 0x18040
	ldr r0, [r0, #0]	@ 00018040 0068
.org 0x18042
	ldr r2, [pc, #216]	@ 00018042 364a
.org 0x18044
	adds r0, r0, r2	@ 00018044 8018
.org 0x18046
	lsrs r5, r5, #20	@ 00018046 2d0d
.org 0x18048
	lsls r5, r5, #1	@ 00018048 6d00
.org 0x1804a
	ldr r1, [pc, #212]	@ 0001804a 3549
.org 0x1804c
	adds r5, r5, r1	@ 0001804c 6d18
.org 0x1804e
	ldrh r2, [r5, #0]	@ 0001804e 2a88
.org 0x18050
	movs r4, #248	@ 00018050 f824
.org 0x18052
	lsls r4, r4, #5	@ 00018052 6401
.org 0x18054
	adds r1, r4, #0	@ 00018054 211c
.org 0x18056
	ands r1, r2	@ 00018056 1140
.org 0x18058
	lsls r1, r1, #3	@ 00018058 c900
.org 0x1805a
	movs r2, #192	@ 0001805a c022
.org 0x1805c
	lsls r2, r2, #19	@ 0001805c d204
.org 0x1805e
	adds r1, r1, r2	@ 0001805e 8918
.org 0x18060
	movs r6, #128	@ 00018060 8026
.org 0x18062
	lsls r6, r6, #2	@ 00018062 b600
.org 0x18064
	adds r2, r6, #0	@ 00018064 321c
.org 0x18066
	bl 0x128be0	@ 00018066 10f1bbfd
.org 0x1806a
	ldr r0, [pc, #184]	@ 0001806a 2e48
.org 0x1806c
	ldr r0, [r0, #0]	@ 0001806c 0068
.org 0x1806e
	ldr r1, [pc, #184]	@ 0001806e 2e49
.org 0x18070
	adds r0, r0, r1	@ 00018070 4018
.org 0x18072
	ldrh r1, [r5, #0]	@ 00018072 2988
.org 0x18074
	ands r4, r1	@ 00018074 0c40
.org 0x18076
	lsls r4, r4, #3	@ 00018076 e400
.org 0x18078
	ldr r2, [pc, #176]	@ 00018078 2c4a
.org 0x1807a
	adds r4, r4, r2	@ 0001807a a418
.org 0x1807c
	adds r1, r4, #0	@ 0001807c 211c
.org 0x1807e
	adds r2, r6, #0	@ 0001807e 321c
.org 0x18080
	bl 0x128be0	@ 00018080 10f1aefd
.org 0x18084
	movs r0, #160	@ 00018084 a020
.org 0x18086
	lsls r0, r0, #2	@ 00018086 8000
.org 0x18088
	bl 0xa70	@ 00018088 e8f7f2fc
.org 0x1808c
	adds r4, r0, #0	@ 0001808c 041c
.org 0x1808e
	cmp r4, #0	@ 0001808e 002c
.org 0x18090
	beq.n 0x18104	@ 00018090 38d0
.org 0x18092
	ldr r2, [pc, #156]	@ 00018092 274a
.org 0x18094
	movs r1, #186	@ 00018094 ba21
.org 0x18096
	lsls r1, r1, #1	@ 00018096 4900
.org 0x18098
	adds r0, r2, r1	@ 00018098 5018
.org 0x1809a
	str r4, [r0, #0]	@ 0001809a 0460
.org 0x1809c
	movs r0, #188	@ 0001809c bc20
.org 0x1809e
	lsls r0, r0, #1	@ 0001809e 4000
.org 0x180a0
	adds r1, r2, r0	@ 000180a0 1118
.org 0x180a2
	ldr r0, [pc, #144]	@ 000180a2 2448
.org 0x180a4
	str r0, [r1, #0]	@ 000180a4 0860
.org 0x180a6
	movs r0, #190	@ 000180a6 be20
.org 0x180a8
	lsls r0, r0, #1	@ 000180a8 4000
.org 0x180aa
	adds r1, r2, r0	@ 000180aa 1118
.org 0x180ac
	ldr r0, [pc, #136]	@ 000180ac 2248
.org 0x180ae
	str r0, [r1, #0]	@ 000180ae 0860
.org 0x180b0
	mov r1, r8	@ 000180b0 4146
.org 0x180b2
	ldr r0, [r1, #56]	@ 000180b2 886b
.org 0x180b4
	ldr r2, [pc, #132]	@ 000180b4 214a
.org 0x180b6
	adds r3, r0, r2	@ 000180b6 8318
.org 0x180b8
	ldr r1, [r1, #52]	@ 000180b8 496b
.org 0x180ba
	adds r2, #159	@ 000180ba 9f32
.org 0x180bc
	adds r0, r0, r2	@ 000180bc 8018
.org 0x180be
	cmp r0, #215	@ 000180be d728
.org 0x180c0
	ble.n 0x180de	@ 000180c0 0ddd
.org 0x180c2
	lsls r2, r3, #16	@ 000180c2 1a04
.org 0x180c4
	ldr r0, [pc, #120]	@ 000180c4 1e48
.org 0x180c6
	ands r1, r0	@ 000180c6 0140
.org 0x180c8
	orrs r2, r1	@ 000180c8 0a43
.org 0x180ca
	lsls r0, r7, #2	@ 000180ca b800
.org 0x180cc
	adds r1, r4, r0	@ 000180cc 2118
.org 0x180ce
	str r2, [r1, #0]	@ 000180ce 0a60
.org 0x180d0
	subs r1, #4	@ 000180d0 0439
.org 0x180d2
	subs r7, #1	@ 000180d2 013f
.org 0x180d4
	adds r0, r3, r7	@ 000180d4 d819
.org 0x180d6
	cmp r0, #215	@ 000180d6 d728
.org 0x180d8
	ble.n 0x180de	@ 000180d8 01dd
.org 0x180da
	cmp r7, #0	@ 000180da 002f
.org 0x180dc
	bge.n 0x180ce	@ 000180dc f7da
.org 0x180de
	mov r0, r8	@ 000180de 4046
.org 0x180e0
	ldr r1, [r0, #52]	@ 000180e0 416b
.org 0x180e2
	lsls r0, r1, #3	@ 000180e2 c800
.org 0x180e4
	subs r0, r0, r1	@ 000180e4 401a
.org 0x180e6
	lsls r0, r0, #1	@ 000180e6 4000
.org 0x180e8
	asrs r1, r0, #4	@ 000180e8 0111
.org 0x180ea
	cmp r7, #0	@ 000180ea 002f
.org 0x180ec
	blt.n 0x18104	@ 000180ec 0adb
.org 0x180ee
	lsls r2, r3, #16	@ 000180ee 1a04
.org 0x180f0
	ldr r0, [pc, #76]	@ 000180f0 1348
.org 0x180f2
	ands r1, r0	@ 000180f2 0140
.org 0x180f4
	orrs r2, r1	@ 000180f4 0a43
.org 0x180f6
	lsls r0, r7, #2	@ 000180f6 b800
.org 0x180f8
	adds r0, r0, r4	@ 000180f8 0019
.org 0x180fa
	str r2, [r0, #0]	@ 000180fa 0260
.org 0x180fc
	subs r0, #4	@ 000180fc 0438
.org 0x180fe
	subs r7, #1	@ 000180fe 013f
.org 0x18100
	cmp r7, #0	@ 00018100 002f
.org 0x18102
	bge.n 0x180fa	@ 00018102 fada
.org 0x18104
	pop {r3}	@ 00018104 08bc
.org 0x18106
	mov r8, r3	@ 00018106 9846
.org 0x18108
	pop {r4, r5, r6, r7}	@ 00018108 f0bc
.org 0x1810a
	pop {r0}	@ 0001810a 01bc
.org 0x1810c
	bx r0	@ 0001810c 0047
