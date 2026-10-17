@ FUN_080142d4  entry 0x080142d4  size 84
.thumb
.org 0x142d4
FUN_080142d4:
	push {r4, r5, r6, lr}	@ 000142d4 70b5
.org 0x142d6
	adds r5, r0, #0	@ 000142d6 051c
.org 0x142d8
	ldrb r6, [r5, #14]	@ 000142d8 ae7b
.org 0x142da
	cmp r6, #0	@ 000142da 002e
.org 0x142dc
	bne.n 0x14322	@ 000142dc 21d1
.org 0x142de
	ldr r0, [r5, #92]	@ 000142de e86d
.org 0x142e0
	lsls r0, r0, #16	@ 000142e0 0004
.org 0x142e2
	lsrs r0, r0, #20	@ 000142e2 000d
.org 0x142e4
	lsls r3, r0, #1	@ 000142e4 4300
.org 0x142e6
	ldr r4, [pc, #64]	@ 000142e6 104c
.org 0x142e8
	adds r3, r3, r4	@ 000142e8 1b19
.org 0x142ea
	ldr r1, [r5, #96]	@ 000142ea 296e
.org 0x142ec
	ldr r2, [r5, #100]	@ 000142ec 6a6e
.org 0x142ee
	orrs r1, r2	@ 000142ee 1143
.org 0x142f0
	movs r2, #68	@ 000142f0 4422
.org 0x142f2
	orrs r1, r2	@ 000142f2 1143
.org 0x142f4
	strh r1, [r3, #0]	@ 000142f4 1980
.org 0x142f6
	lsls r0, r0, #2	@ 000142f6 8000
.org 0x142f8
	adds r4, #8	@ 000142f8 0834
.org 0x142fa
	adds r0, r0, r4	@ 000142fa 0019
.org 0x142fc
	str r6, [r0, #0]	@ 000142fc 0660
.org 0x142fe
	ldr r0, [pc, #44]	@ 000142fe 0b48
.org 0x14300
	ldr r0, [r0, #0]	@ 00014300 0068
.org 0x14302
	ldr r2, [pc, #44]	@ 00014302 0b4a
.org 0x14304
	adds r0, r0, r2	@ 00014304 8018
.org 0x14306
	movs r2, #248	@ 00014306 f822
.org 0x14308
	lsls r2, r2, #5	@ 00014308 5201
.org 0x1430a
	ands r1, r2	@ 0001430a 1140
.org 0x1430c
	lsls r1, r1, #3	@ 0001430c c900
.org 0x1430e
	movs r2, #192	@ 0001430e c022
.org 0x14310
	lsls r2, r2, #19	@ 00014310 d204
.org 0x14312
	adds r1, r1, r2	@ 00014312 8918
.org 0x14314
	movs r2, #128	@ 00014314 8022
.org 0x14316
	lsls r2, r2, #2	@ 00014316 9200
.org 0x14318
	bl 0x128be0	@ 00014318 14f162fc
.org 0x1431c
	ldrb r0, [r5, #14]	@ 0001431c a87b
.org 0x1431e
	adds r0, #1	@ 0001431e 0130
.org 0x14320
	strb r0, [r5, #14]	@ 00014320 a873
.org 0x14322
	pop {r4, r5, r6}	@ 00014322 70bc
.org 0x14324
	pop {r0}	@ 00014324 01bc
.org 0x14326
	bx r0	@ 00014326 0047
