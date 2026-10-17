@ FUN_080a52e4  entry 0x080a52e4  size 130
.thumb
.org 0xa52e4
FUN_080a52e4:
	push {r4, r5, r6, r7, lr}	@ 000a52e4 f0b5
.org 0xa52e6
	mov r7, r8	@ 000a52e6 4746
.org 0xa52e8
	push {r7}	@ 000a52e8 80b4
.org 0xa52ea
	sub sp, #24	@ 000a52ea 86b0
.org 0xa52ec
	adds r7, r0, #0	@ 000a52ec 071c
.org 0xa52ee
	mov r1, sp	@ 000a52ee 6946
.org 0xa52f0
	ldr r0, [pc, #116]	@ 000a52f0 1d48
.org 0xa52f2
	ldmia r0!, {r2, r3, r4}	@ 000a52f2 1cc8
.org 0xa52f4
	stmia r1!, {r2, r3, r4}	@ 000a52f4 1cc1
.org 0xa52f6
	ldr r0, [r0, #0]	@ 000a52f6 0068
.org 0xa52f8
	str r0, [r1, #0]	@ 000a52f8 0860
.org 0xa52fa
	ldrb r0, [r7, #17]	@ 000a52fa 787c
.org 0xa52fc
	mov r8, r0	@ 000a52fc 8046
.org 0xa52fe
	ldrb r0, [r7, #10]	@ 000a52fe b87a
.org 0xa5300
	lsrs r5, r0, #4	@ 000a5300 0509
.org 0xa5302
	movs r3, #1	@ 000a5302 0123
.org 0xa5304
	ands r5, r3	@ 000a5304 1d40
.org 0xa5306
	ldr r2, [pc, #100]	@ 000a5306 194a
.org 0xa5308
	ldr r1, [r2, #0]	@ 000a5308 1168
.org 0xa530a
	ldr r0, [pc, #100]	@ 000a530a 1948
.org 0xa530c
	muls r0, r1	@ 000a530c 4843
.org 0xa530e
	ldr r1, [pc, #100]	@ 000a530e 1949
.org 0xa5310
	adds r0, r0, r1	@ 000a5310 4018
.org 0xa5312
	lsls r0, r0, #1	@ 000a5312 4000
.org 0xa5314
	lsrs r1, r0, #1	@ 000a5314 4108
.org 0xa5316
	str r1, [r2, #0]	@ 000a5316 1160
.org 0xa5318
	lsrs r0, r0, #17	@ 000a5318 400c
.org 0xa531a
	ands r0, r3	@ 000a531a 1840
.org 0xa531c
	adds r4, r0, #3	@ 000a531c c41c
.org 0xa531e
	cmp r4, #0	@ 000a531e 002c
.org 0xa5320
	beq.n 0xa535a	@ 000a5320 1bd0
.org 0xa5322
	add r6, sp, #16	@ 000a5322 04ae
.org 0xa5324
	mov r2, r8	@ 000a5324 4246
.org 0xa5326
	lsls r0, r2, #2	@ 000a5326 9000
.org 0xa5328
	add r0, sp	@ 000a5328 6844
.org 0xa532a
	mov r8, r0	@ 000a532a 8046
.org 0xa532c
	lsls r0, r5, #4	@ 000a532c 2801
.org 0xa532e
	orrs r5, r0	@ 000a532e 0543
.org 0xa5330
	lsls r5, r5, #24	@ 000a5330 2d06
.org 0xa5332
	ldr r0, [r7, #84]	@ 000a5332 786d
.org 0xa5334
	str r0, [sp, #16]	@ 000a5334 0490
.org 0xa5336
	ldr r0, [r7, #88]	@ 000a5336 b86d
.org 0xa5338
	str r0, [r6, #4]	@ 000a5338 7060
.org 0xa533a
	movs r0, #3	@ 000a533a 0320
.org 0xa533c
	ands r0, r4	@ 000a533c 2040
.org 0xa533e
	lsls r2, r0, #3	@ 000a533e c200
.org 0xa5340
	subs r2, r2, r0	@ 000a5340 121a
.org 0xa5342
	lsls r2, r2, #2	@ 000a5342 9200
.org 0xa5344
	mov r3, r8	@ 000a5344 4346
.org 0xa5346
	ldr r1, [r3, #0]	@ 000a5346 1968
.org 0xa5348
	adds r1, r1, r2	@ 000a5348 8918
.org 0xa534a
	adds r0, r6, #0	@ 000a534a 301c
.org 0xa534c
	movs r2, #0	@ 000a534c 0022
.org 0xa534e
	lsrs r3, r5, #24	@ 000a534e 2b0e
.org 0xa5350
	bl 0xd4c8c	@ 000a5350 2ff09cfc
.org 0xa5354
	subs r4, #1	@ 000a5354 013c
.org 0xa5356
	cmp r4, #0	@ 000a5356 002c
.org 0xa5358
	bne.n 0xa5332	@ 000a5358 ebd1
.org 0xa535a
	add sp, #24	@ 000a535a 06b0
.org 0xa535c
	pop {r3}	@ 000a535c 08bc
.org 0xa535e
	mov r8, r3	@ 000a535e 9846
.org 0xa5360
	pop {r4, r5, r6, r7}	@ 000a5360 f0bc
.org 0xa5362
	pop {r0}	@ 000a5362 01bc
.org 0xa5364
	bx r0	@ 000a5364 0047
