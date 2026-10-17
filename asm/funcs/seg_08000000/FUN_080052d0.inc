@ FUN_080052d0  entry 0x080052d0  size 72
.thumb
.org 0x52d0
FUN_080052d0:
	push {r4, r5, r6, r7, lr}	@ 000052d0 f0b5
.org 0x52d2
	mov r7, r8	@ 000052d2 4746
.org 0x52d4
	push {r7}	@ 000052d4 80b4
.org 0x52d6
	adds r7, r0, #0	@ 000052d6 071c
.org 0x52d8
	adds r6, r1, #0	@ 000052d8 0e1c
.org 0x52da
	adds r4, r2, #0	@ 000052da 141c
.org 0x52dc
	movs r5, #32	@ 000052dc 2025
.org 0x52de
	negs r5, r5	@ 000052de 6d42
.org 0x52e0
	ands r5, r4	@ 000052e0 2540
.org 0x52e2
	lsrs r2, r5, #2	@ 000052e2 aa08
.org 0x52e4
	ldr r0, [pc, #48]	@ 000052e4 0c48
.org 0x52e6
	mov r8, r0	@ 000052e6 8046
.org 0x52e8
	ands r2, r0	@ 000052e8 0240
.org 0x52ea
	adds r0, r6, #0	@ 000052ea 301c
.org 0x52ec
	adds r1, r7, #0	@ 000052ec 391c
.org 0x52ee
	bl 0x128be0	@ 000052ee 23f177fc
.org 0x52f2
	movs r2, #31	@ 000052f2 1f22
.org 0x52f4
	ands r2, r4	@ 000052f4 2240
.org 0x52f6
	cmp r2, #0	@ 000052f6 002a
.org 0x52f8
	beq.n 0x530e	@ 000052f8 09d0
.org 0x52fa
	adds r0, r6, r5	@ 000052fa 7019
.org 0x52fc
	adds r1, r7, r5	@ 000052fc 7919
.org 0x52fe
	lsrs r2, r2, #2	@ 000052fe 9208
.org 0x5300
	mov r3, r8	@ 00005300 4346
.org 0x5302
	ands r2, r3	@ 00005302 1a40
.org 0x5304
	movs r3, #128	@ 00005304 8023
.org 0x5306
	lsls r3, r3, #19	@ 00005306 db04
.org 0x5308
	orrs r2, r3	@ 00005308 1a43
.org 0x530a
	bl 0x128be4	@ 0000530a 23f16bfc
.org 0x530e
	pop {r3}	@ 0000530e 08bc
.org 0x5310
	mov r8, r3	@ 00005310 9846
.org 0x5312
	pop {r4, r5, r6, r7}	@ 00005312 f0bc
.org 0x5314
	pop {r0}	@ 00005314 01bc
.org 0x5316
	bx r0	@ 00005316 0047
