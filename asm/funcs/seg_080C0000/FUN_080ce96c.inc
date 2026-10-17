@ FUN_080ce96c  entry 0x080ce96c  size 202
.thumb
.org 0xce96c
FUN_080ce96c:
	push {r4, r5, r6, r7, lr}	@ 000ce96c f0b5
.org 0xce96e
	ldr r5, [r0, #44]	@ 000ce96e c56a
.org 0xce970
	ldr r0, [r0, #12]	@ 000ce970 c068
.org 0xce972
	ldr r0, [r0, #44]	@ 000ce972 c06a
.org 0xce974
	movs r6, #8	@ 000ce974 0826
.org 0xce976
	ldrsb r6, [r0, r6]	@ 000ce976 8657
.org 0xce978
	cmp r6, #1	@ 000ce978 012e
.org 0xce97a
	bne.n 0xcea34	@ 000ce97a 5bd1
.org 0xce97c
	adds r0, r5, #0	@ 000ce97c 281c
.org 0xce97e
	adds r0, #140	@ 000ce97e 8c30
.org 0xce980
	ldr r0, [r0, #0]	@ 000ce980 0068
.org 0xce982
	movs r1, #128	@ 000ce982 8021
.org 0xce984
	lsls r1, r1, #1	@ 000ce984 4900
.org 0xce986
	ands r0, r1	@ 000ce986 0840
.org 0xce988
	cmp r0, #0	@ 000ce988 0028
.org 0xce98a
	beq.n 0xcea34	@ 000ce98a 53d0
.org 0xce98c
	movs r0, #128	@ 000ce98c 8020
.org 0xce98e
	lsls r0, r0, #2	@ 000ce98e 8000
.org 0xce990
	str r0, [r5, #92]	@ 000ce990 e865
.org 0xce992
	ldrb r0, [r5, #10]	@ 000ce992 a87a
.org 0xce994
	movs r1, #16	@ 000ce994 1021
.org 0xce996
	mov ip, r1	@ 000ce996 8c46
.org 0xce998
	movs r7, #0	@ 000ce998 0027
.org 0xce99a
	mov r1, ip	@ 000ce99a 6146
.org 0xce99c
	orrs r0, r1	@ 000ce99c 0843
.org 0xce99e
	strb r0, [r5, #10]	@ 000ce99e a872
.org 0xce9a0
	movs r0, #1	@ 000ce9a0 0120
.org 0xce9a2
	adds r4, r5, #0	@ 000ce9a2 2c1c
.org 0xce9a4
	adds r4, #76	@ 000ce9a4 4c34
.org 0xce9a6
	strb r0, [r4, #0]	@ 000ce9a6 2070
.org 0xce9a8
	adds r2, r5, #0	@ 000ce9a8 2a1c
.org 0xce9aa
	adds r2, #74	@ 000ce9aa 4a32
.org 0xce9ac
	movs r3, #16	@ 000ce9ac 1023
.org 0xce9ae
	ldrb r1, [r2, #0]	@ 000ce9ae 1178
.org 0xce9b0
	subs r0, #18	@ 000ce9b0 1238
.org 0xce9b2
	ands r0, r1	@ 000ce9b2 0840
.org 0xce9b4
	orrs r0, r3	@ 000ce9b4 1843
.org 0xce9b6
	strb r0, [r2, #0]	@ 000ce9b6 1070
.org 0xce9b8
	ldr r0, [pc, #44]	@ 000ce9b8 0b48
.org 0xce9ba
	ldr r0, [r0, #0]	@ 000ce9ba 0068
.org 0xce9bc
	ldr r1, [r0, #84]	@ 000ce9bc 416d
.org 0xce9be
	ldr r0, [r5, #84]	@ 000ce9be 686d
.org 0xce9c0
	adds r3, r2, #0	@ 000ce9c0 131c
.org 0xce9c2
	cmp r1, r0	@ 000ce9c2 8142
.org 0xce9c4
	ble.n 0xcea06	@ 000ce9c4 1fdd
.org 0xce9c6
	ldr r0, [r5, #92]	@ 000ce9c6 e86d
.org 0xce9c8
	lsls r0, r0, #8	@ 000ce9c8 0002
.org 0xce9ca
	negs r0, r0	@ 000ce9ca 4042
.org 0xce9cc
	cmp r0, #0	@ 000ce9cc 0028
.org 0xce9ce
	bge.n 0xce9d2	@ 000ce9ce 00da
.org 0xce9d0
	adds r0, #255	@ 000ce9d0 ff30
.org 0xce9d2
	asrs r0, r0, #8	@ 000ce9d2 0012
.org 0xce9d4
	str r0, [r5, #92]	@ 000ce9d4 e865
.org 0xce9d6
	ldrb r1, [r5, #10]	@ 000ce9d6 a97a
.org 0xce9d8
	lsrs r0, r1, #4	@ 000ce9d8 0809
.org 0xce9da
	adds r2, r6, #0	@ 000ce9da 321c
.org 0xce9dc
	bics r2, r0	@ 000ce9dc 8243
.org 0xce9de
	cmp r2, #0	@ 000ce9de 002a
.org 0xce9e0
	beq.n 0xce9ec	@ 000ce9e0 04d0
.org 0xce9e2
	mov r0, ip	@ 000ce9e2 6046
.org 0xce9e4
	orrs r0, r1	@ 000ce9e4 0843
.org 0xce9e6
	b.n 0xce9f0	@ 000ce9e6 03e0
.org 0xce9e8
	.byte 0xf0,0xdb,0x02,0x02	@ 000ce9e8 data
.org 0xce9ec
	movs r0, #239	@ 000ce9ec ef20
.org 0xce9ee
	ands r0, r1	@ 000ce9ee 0840
.org 0xce9f0
	strb r0, [r5, #10]	@ 000ce9f0 a872
.org 0xce9f2
	movs r0, #1	@ 000ce9f2 0120
.org 0xce9f4
	ands r0, r2	@ 000ce9f4 1040
.org 0xce9f6
	strb r0, [r4, #0]	@ 000ce9f6 2070
.org 0xce9f8
	lsls r0, r0, #4	@ 000ce9f8 0001
.org 0xce9fa
	ldrb r2, [r3, #0]	@ 000ce9fa 1a78
.org 0xce9fc
	movs r1, #17	@ 000ce9fc 1121
.org 0xce9fe
	negs r1, r1	@ 000ce9fe 4942
.org 0xcea00
	ands r1, r2	@ 000cea00 1140
.org 0xcea02
	orrs r1, r0	@ 000cea02 0143
.org 0xcea04
	strb r1, [r3, #0]	@ 000cea04 1970
.org 0xcea06
	adds r1, r5, #0	@ 000cea06 291c
.org 0xcea08
	adds r1, #185	@ 000cea08 b931
.org 0xcea0a
	ldrb r0, [r1, #0]	@ 000cea0a 0878
.org 0xcea0c
	cmp r0, #1	@ 000cea0c 0128
.org 0xcea0e
	bne.n 0xcea18	@ 000cea0e 03d1
.org 0xcea10
	ldr r0, [pc, #40]	@ 000cea10 0a48
.org 0xcea12
	str r0, [r5, #96]	@ 000cea12 2866
.org 0xcea14
	movs r0, #0	@ 000cea14 0020
.org 0xcea16
	strb r0, [r1, #0]	@ 000cea16 0870
.org 0xcea18
	movs r0, #182	@ 000cea18 b620
.org 0xcea1a
	lsls r0, r0, #1	@ 000cea1a 4000
.org 0xcea1c
	bl 0x2b10	@ 000cea1c 34f778f8
.org 0xcea20
	ldr r0, [r5, #84]	@ 000cea20 686d
.org 0xcea22
	ldr r1, [r5, #92]	@ 000cea22 e96d
.org 0xcea24
	adds r0, r0, r1	@ 000cea24 4018
.org 0xcea26
	str r0, [r5, #84]	@ 000cea26 6865
.org 0xcea28
	adds r1, r5, #0	@ 000cea28 291c
.org 0xcea2a
	adds r1, #186	@ 000cea2a ba31
.org 0xcea2c
	movs r0, #1	@ 000cea2c 0120
.org 0xcea2e
	strb r0, [r1, #0]	@ 000cea2e 0870
.org 0xcea30
	movs r0, #20	@ 000cea30 1420
.org 0xcea32
	strb r0, [r5, #18]	@ 000cea32 a874
.org 0xcea34
	pop {r4, r5, r6, r7}	@ 000cea34 f0bc
