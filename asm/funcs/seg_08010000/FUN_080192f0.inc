@ FUN_080192f0  entry 0x080192f0  size 64
.thumb
.org 0x192f0
FUN_080192f0:
	push {r4, r5, r6, lr}	@ 000192f0 70b5
.org 0x192f2
	adds r5, r0, #0	@ 000192f2 051c
.org 0x192f4
	ldrb r6, [r5, #14]	@ 000192f4 ae7b
.org 0x192f6
	cmp r6, #0	@ 000192f6 002e
.org 0x192f8
	bne.n 0x1932a	@ 000192f8 17d1
.org 0x192fa
	ldr r1, [r5, #92]	@ 000192fa e96d
.org 0x192fc
	lsls r1, r1, #16	@ 000192fc 0904
.org 0x192fe
	lsrs r1, r1, #20	@ 000192fe 090d
.org 0x19300
	lsls r3, r1, #1	@ 00019300 4b00
.org 0x19302
	ldr r4, [pc, #44]	@ 00019302 0b4c
.org 0x19304
	adds r3, r3, r4	@ 00019304 1b19
.org 0x19306
	ldrh r2, [r3, #0]	@ 00019306 1a88
.org 0x19308
	ldr r0, [pc, #40]	@ 00019308 0a48
.org 0x1930a
	ands r0, r2	@ 0001930a 1040
.org 0x1930c
	movs r2, #2	@ 0001930c 0222
.org 0x1930e
	orrs r0, r2	@ 0001930e 1043
.org 0x19310
	strh r0, [r3, #0]	@ 00019310 1880
.org 0x19312
	lsls r1, r1, #2	@ 00019312 8900
.org 0x19314
	adds r4, #8	@ 00019314 0834
.org 0x19316
	adds r1, r1, r4	@ 00019316 0919
.org 0x19318
	str r6, [r1, #0]	@ 00019318 0e60
.org 0x1931a
	movs r0, #195	@ 0001931a c320
.org 0x1931c
	lsls r0, r0, #3	@ 0001931c c000
.org 0x1931e
	str r0, [r5, #76]	@ 0001931e e864
.org 0x19320
	movs r0, #192	@ 00019320 c020
.org 0x19322
	str r0, [r5, #68]	@ 00019322 6864
.org 0x19324
	ldrb r0, [r5, #14]	@ 00019324 a87b
.org 0x19326
	adds r0, #1	@ 00019326 0130
.org 0x19328
	strb r0, [r5, #14]	@ 00019328 a873
.org 0x1932a
	pop {r4, r5, r6}	@ 0001932a 70bc
.org 0x1932c
	pop {r0}	@ 0001932c 01bc
.org 0x1932e
	bx r0	@ 0001932e 0047
