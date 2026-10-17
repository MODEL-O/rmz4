@ FUN_080772e8  entry 0x080772e8  size 112
.thumb
.org 0x772e8
FUN_080772e8:
	push {r4, lr}	@ 000772e8 10b5
.org 0x772ea
	adds r4, r0, #0	@ 000772ea 041c
.org 0x772ec
	ldrb r0, [r4, #15]	@ 000772ec e07b
.org 0x772ee
	cmp r0, #0	@ 000772ee 0028
.org 0x772f0
	bne.n 0x77300	@ 000772f0 06d1
.org 0x772f2
	adds r0, r4, #0	@ 000772f2 201c
.org 0x772f4
	movs r1, #0	@ 000772f4 0021
.org 0x772f6
	bl 0x78fdc	@ 000772f6 01f071fe
.org 0x772fa
	ldrb r0, [r4, #15]	@ 000772fa e07b
.org 0x772fc
	adds r0, #1	@ 000772fc 0130
.org 0x772fe
	strb r0, [r4, #15]	@ 000772fe e073
.org 0x77300
	adds r0, r4, #0	@ 00077300 201c
.org 0x77302
	bl 0x1cff0	@ 00077302 a5f775fe
.org 0x77306
	adds r0, r4, #0	@ 00077306 201c
.org 0x77308
	adds r0, #116	@ 00077308 7430
.org 0x7730a
	ldr r3, [pc, #76]	@ 0007730a 134b
.org 0x7730c
	ldr r2, [pc, #76]	@ 0007730c 134a
.org 0x7730e
	adds r1, r4, #0	@ 0007730e 211c
.org 0x77310
	adds r1, #196	@ 00077310 c431
.org 0x77312
	ldrb r1, [r1, #0]	@ 00077312 0978
.org 0x77314
	lsls r1, r1, #1	@ 00077314 4900
.org 0x77316
	adds r1, r1, r2	@ 00077316 8918
.org 0x77318
	ldrh r2, [r1, #0]	@ 00077318 0a88
.org 0x7731a
	lsls r2, r2, #2	@ 0007731a 9200
.org 0x7731c
	adds r2, r2, r3	@ 0007731c d218
.org 0x7731e
	adds r1, r4, #0	@ 0007731e 211c
.org 0x77320
	adds r1, #113	@ 00077320 7131
.org 0x77322
	ldrb r1, [r1, #0]	@ 00077322 0978
.org 0x77324
	lsls r1, r1, #24	@ 00077324 0906
.org 0x77326
	asrs r1, r1, #24	@ 00077326 0916
.org 0x77328
	ldr r2, [r2, #0]	@ 00077328 1268
.org 0x7732a
	lsls r1, r1, #2	@ 0007732a 8900
.org 0x7732c
	adds r1, r1, r2	@ 0007732c 8918
.org 0x7732e
	ldr r1, [r1, #0]	@ 0007732e 0968
.org 0x77330
	bl 0x5784	@ 00077330 8ef728fa
.org 0x77334
	adds r0, r4, #0	@ 00077334 201c
.org 0x77336
	bl 0x78f28	@ 00077336 01f0f7fd
.org 0x7733a
	ldr r0, [pc, #36]	@ 0007733a 0948
.org 0x7733c
	ldrh r1, [r0, #8]	@ 0007733c 0189
.org 0x7733e
	movs r0, #8	@ 0007733e 0820
.org 0x77340
	ands r0, r1	@ 00077340 0840
.org 0x77342
	lsls r0, r0, #16	@ 00077342 0004
.org 0x77344
	lsrs r1, r0, #16	@ 00077344 010c
.org 0x77346
	cmp r1, #0	@ 00077346 0029
.org 0x77348
	bne.n 0x77352	@ 00077348 03d1
.org 0x7734a
	ldrb r0, [r4, #14]	@ 0007734a a07b
.org 0x7734c
	adds r0, #1	@ 0007734c 0130
.org 0x7734e
	strb r0, [r4, #14]	@ 0007734e a073
.org 0x77350
	strb r1, [r4, #15]	@ 00077350 e173
.org 0x77352
	pop {r4}	@ 00077352 10bc
.org 0x77354
	pop {r0}	@ 00077354 01bc
.org 0x77356
	bx r0	@ 00077356 0047
