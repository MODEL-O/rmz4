@ FUN_080d11a8  entry 0x080d11a8  size 124
.thumb
.org 0xd11a8
FUN_080d11a8:
	push {r4, r5, r6, lr}	@ 000d11a8 70b5
.org 0xd11aa
	adds r4, r0, #0	@ 000d11aa 041c
.org 0xd11ac
	bl 0x1cc9c	@ 000d11ac 4bf776fd
.org 0xd11b0
	ldrb r1, [r4, #10]	@ 000d11b0 a17a
.org 0xd11b2
	movs r0, #1	@ 000d11b2 0120
.org 0xd11b4
	orrs r0, r1	@ 000d11b4 0843
.org 0xd11b6
	strb r0, [r4, #10]	@ 000d11b6 a072
.org 0xd11b8
	adds r0, r4, #0	@ 000d11b8 201c
.org 0xd11ba
	movs r1, #12	@ 000d11ba 0c21
.org 0xd11bc
	bl 0x1cf00	@ 000d11bc 4bf7a0fe
.org 0xd11c0
	movs r0, #128	@ 000d11c0 8020
.org 0xd11c2
	lsls r0, r0, #2	@ 000d11c2 8000
.org 0xd11c4
	str r0, [r4, #92]	@ 000d11c4 e065
.org 0xd11c6
	ldr r6, [pc, #92]	@ 000d11c6 174e
.org 0xd11c8
	ldr r0, [r6, #0]	@ 000d11c8 3068
.org 0xd11ca
	ldr r3, [pc, #92]	@ 000d11ca 174b
.org 0xd11cc
	muls r0, r3	@ 000d11cc 5843
.org 0xd11ce
	ldr r2, [pc, #92]	@ 000d11ce 174a
.org 0xd11d0
	adds r0, r0, r2	@ 000d11d0 8018
.org 0xd11d2
	lsls r0, r0, #1	@ 000d11d2 4000
.org 0xd11d4
	lsrs r5, r0, #1	@ 000d11d4 4508
.org 0xd11d6
	lsrs r0, r0, #17	@ 000d11d6 400c
.org 0xd11d8
	movs r1, #31	@ 000d11d8 1f21
.org 0xd11da
	ands r0, r1	@ 000d11da 0840
.org 0xd11dc
	adds r0, #128	@ 000d11dc 8030
.org 0xd11de
	str r0, [r4, #96]	@ 000d11de 2066
.org 0xd11e0
	ldr r0, [r4, #84]	@ 000d11e0 606d
.org 0xd11e2
	str r0, [r4, #116]	@ 000d11e2 6067
.org 0xd11e4
	adds r0, r5, #0	@ 000d11e4 281c
.org 0xd11e6
	muls r0, r3	@ 000d11e6 5843
.org 0xd11e8
	adds r0, r0, r2	@ 000d11e8 8018
.org 0xd11ea
	lsls r0, r0, #1	@ 000d11ea 4000
.org 0xd11ec
	lsrs r1, r0, #1	@ 000d11ec 4108
.org 0xd11ee
	lsrs r0, r0, #17	@ 000d11ee 400c
.org 0xd11f0
	strb r0, [r4, #18]	@ 000d11f0 a074
.org 0xd11f2
	adds r0, r1, #0	@ 000d11f2 081c
.org 0xd11f4
	muls r0, r3	@ 000d11f4 5843
.org 0xd11f6
	adds r0, r0, r2	@ 000d11f6 8018
.org 0xd11f8
	lsls r0, r0, #1	@ 000d11f8 4000
.org 0xd11fa
	lsrs r1, r0, #1	@ 000d11fa 4108
.org 0xd11fc
	str r1, [r6, #0]	@ 000d11fc 3160
.org 0xd11fe
	lsrs r0, r0, #17	@ 000d11fe 400c
.org 0xd1200
	strb r0, [r4, #19]	@ 000d1200 e074
.org 0xd1202
	movs r0, #128	@ 000d1202 8020
.org 0xd1204
	str r0, [r4, #120]	@ 000d1204 a067
.org 0xd1206
	ldr r1, [pc, #40]	@ 000d1206 0a49
.org 0xd1208
	ldrb r0, [r4, #9]	@ 000d1208 607a
.org 0xd120a
	lsls r0, r0, #2	@ 000d120a 8000
.org 0xd120c
	adds r0, r0, r1	@ 000d120c 4018
.org 0xd120e
	movs r1, #1	@ 000d120e 0121
.org 0xd1210
	str r1, [r4, #12]	@ 000d1210 e160
.org 0xd1212
	ldr r0, [r0, #0]	@ 000d1212 0068
.org 0xd1214
	ldr r0, [r0, #4]	@ 000d1214 4068
.org 0xd1216
	str r0, [r4, #20]	@ 000d1216 6061
.org 0xd1218
	adds r0, r4, #0	@ 000d1218 201c
.org 0xd121a
	bl 0xd108c	@ 000d121a fff737ff
.org 0xd121e
	pop {r4, r5, r6}	@ 000d121e 70bc
.org 0xd1220
	pop {r0}	@ 000d1220 01bc
.org 0xd1222
	bx r0	@ 000d1222 0047
