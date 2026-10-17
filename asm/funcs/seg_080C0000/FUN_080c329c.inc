@ FUN_080c329c  entry 0x080c329c  size 116
.thumb
.org 0xc329c
FUN_080c329c:
	push {r4, lr}	@ 000c329c 10b5
.org 0xc329e
	adds r4, r0, #0	@ 000c329e 041c
.org 0xc32a0
	bl 0x1cff0	@ 000c32a0 59f7a6fe
.org 0xc32a4
	ldr r0, [r4, #84]	@ 000c32a4 606d
.org 0xc32a6
	ldr r1, [r4, #92]	@ 000c32a6 e16d
.org 0xc32a8
	adds r0, r0, r1	@ 000c32a8 4018
.org 0xc32aa
	str r0, [r4, #84]	@ 000c32aa 6065
.org 0xc32ac
	ldr r0, [r4, #88]	@ 000c32ac a06d
.org 0xc32ae
	ldr r1, [r4, #96]	@ 000c32ae 216e
.org 0xc32b0
	adds r0, r0, r1	@ 000c32b0 4018
.org 0xc32b2
	str r0, [r4, #88]	@ 000c32b2 a065
.org 0xc32b4
	adds r1, #64	@ 000c32b4 4031
.org 0xc32b6
	str r1, [r4, #96]	@ 000c32b6 2166
.org 0xc32b8
	movs r0, #224	@ 000c32b8 e020
.org 0xc32ba
	lsls r0, r0, #3	@ 000c32ba c000
.org 0xc32bc
	cmp r1, r0	@ 000c32bc 8142
.org 0xc32be
	ble.n 0xc32c2	@ 000c32be 00dd
.org 0xc32c0
	str r0, [r4, #96]	@ 000c32c0 2066
.org 0xc32c2
	ldr r0, [pc, #76]	@ 000c32c2 1348
.org 0xc32c4
	adds r1, r4, #0	@ 000c32c4 211c
.org 0xc32c6
	adds r1, #84	@ 000c32c6 5431
.org 0xc32c8
	bl 0x1fb14	@ 000c32c8 5cf724fc
.org 0xc32cc
	movs r1, #128	@ 000c32cc 8021
.org 0xc32ce
	lsls r1, r1, #7	@ 000c32ce c901
.org 0xc32d0
	cmp r0, r1	@ 000c32d0 8842
.org 0xc32d2
	bls.n 0xc330a	@ 000c32d2 1ad9
.org 0xc32d4
	ldrb r1, [r4, #10]	@ 000c32d4 a17a
.org 0xc32d6
	movs r0, #254	@ 000c32d6 fe20
.org 0xc32d8
	ands r0, r1	@ 000c32d8 0840
.org 0xc32da
	movs r2, #0	@ 000c32da 0022
.org 0xc32dc
	movs r1, #253	@ 000c32dc fd21
.org 0xc32de
	ands r0, r1	@ 000c32de 0840
.org 0xc32e0
	strb r0, [r4, #10]	@ 000c32e0 a072
.org 0xc32e2
	adds r0, r4, #0	@ 000c32e2 201c
.org 0xc32e4
	adds r0, #140	@ 000c32e4 8c30
.org 0xc32e6
	str r2, [r0, #0]	@ 000c32e6 0260
.org 0xc32e8
	adds r0, #4	@ 000c32e8 0430
.org 0xc32ea
	str r2, [r0, #0]	@ 000c32ea 0260
.org 0xc32ec
	adds r0, #4	@ 000c32ec 0430
.org 0xc32ee
	strb r2, [r0, #0]	@ 000c32ee 0270
.org 0xc32f0
	ldrb r1, [r4, #10]	@ 000c32f0 a17a
.org 0xc32f2
	movs r0, #251	@ 000c32f2 fb20
.org 0xc32f4
	ands r0, r1	@ 000c32f4 0840
.org 0xc32f6
	strb r0, [r4, #10]	@ 000c32f6 a072
.org 0xc32f8
	ldr r1, [pc, #24]	@ 000c32f8 0649
.org 0xc32fa
	ldrb r0, [r4, #9]	@ 000c32fa 607a
.org 0xc32fc
	lsls r0, r0, #2	@ 000c32fc 8000
.org 0xc32fe
	adds r0, r0, r1	@ 000c32fe 4018
.org 0xc3300
	movs r1, #3	@ 000c3300 0321
.org 0xc3302
	str r1, [r4, #12]	@ 000c3302 e160
.org 0xc3304
	ldr r0, [r0, #0]	@ 000c3304 0068
.org 0xc3306
	ldr r0, [r0, #12]	@ 000c3306 c068
.org 0xc3308
	str r0, [r4, #20]	@ 000c3308 6061
.org 0xc330a
	pop {r4}	@ 000c330a 10bc
.org 0xc330c
	pop {r0}	@ 000c330c 01bc
.org 0xc330e
	bx r0	@ 000c330e 0047
