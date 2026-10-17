@ FUN_080ed2fc  entry 0x080ed2fc  size 44
.thumb
.org 0xed2fc
FUN_080ed2fc:
	push {lr}	@ 000ed2fc 00b5
.org 0xed2fe
	adds r2, r0, #0	@ 000ed2fe 021c
.org 0xed300
	ldr r0, [r2, #20]	@ 000ed300 5069
.org 0xed302
	movs r1, #4	@ 000ed302 0421
.org 0xed304
	ands r0, r1	@ 000ed304 0840
.org 0xed306
	cmp r0, #0	@ 000ed306 0028
.org 0xed308
	beq.n 0xed324	@ 000ed308 0cd0
.org 0xed30a
	ldr r0, [r2, #12]	@ 000ed30a d068
.org 0xed30c
	ldr r1, [r0, #44]	@ 000ed30c c16a
.org 0xed30e
	ldr r2, [r2, #44]	@ 000ed30e d26a
.org 0xed310
	movs r0, #8	@ 000ed310 0820
.org 0xed312
	ldrsb r0, [r1, r0]	@ 000ed312 0856
.org 0xed314
	cmp r0, #0	@ 000ed314 0028
.org 0xed316
	bne.n 0xed324	@ 000ed316 05d1
.org 0xed318
	ldrb r0, [r1, #9]	@ 000ed318 487a
.org 0xed31a
	cmp r0, #0	@ 000ed31a 0028
.org 0xed31c
	bne.n 0xed324	@ 000ed31c 02d1
.org 0xed31e
	adds r0, r2, #0	@ 000ed31e 101c
.org 0xed320
	adds r0, #188	@ 000ed320 bc30
.org 0xed322
	str r1, [r0, #0]	@ 000ed322 0160
.org 0xed324
	pop {r0}	@ 000ed324 01bc
.org 0xed326
	bx r0	@ 000ed326 0047
