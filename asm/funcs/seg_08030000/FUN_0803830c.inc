@ FUN_0803830c  entry 0x0803830c  size 70
.thumb
.org 0x3830c
FUN_0803830c:
	mov ip, r0	@ 0003830c 8446
.org 0x3830e
	adds r3, r1, #0	@ 0003830e 0b1c
.org 0x38310
	adds r0, #164	@ 00038310 a430
.org 0x38312
	ldrh r1, [r0, #0]	@ 00038312 0188
.org 0x38314
	adds r0, r3, #0	@ 00038314 181c
.org 0x38316
	adds r0, #52	@ 00038316 3430
.org 0x38318
	strb r1, [r0, #0]	@ 00038318 0170
.org 0x3831a
	mov r2, ip	@ 0003831a 6246
.org 0x3831c
	adds r2, #180	@ 0003831c b432
.org 0x3831e
	mov r0, ip	@ 0003831e 6046
.org 0x38320
	adds r0, #228	@ 00038320 e430
.org 0x38322
	ldrb r1, [r0, #0]	@ 00038322 0178
.org 0x38324
	adds r0, r3, #0	@ 00038324 181c
.org 0x38326
	adds r0, #48	@ 00038326 3030
.org 0x38328
	strb r1, [r0, #0]	@ 00038328 0170
.org 0x3832a
	mov r0, ip	@ 0003832a 6046
.org 0x3832c
	adds r0, #229	@ 0003832c e530
.org 0x3832e
	ldrb r0, [r0, #0]	@ 0003832e 0078
.org 0x38330
	adds r1, r3, #0	@ 00038330 191c
.org 0x38332
	adds r1, #49	@ 00038332 3131
.org 0x38334
	strb r0, [r1, #0]	@ 00038334 0870
.org 0x38336
	ldrb r0, [r2, #12]	@ 00038336 107b
.org 0x38338
	strb r0, [r3, #12]	@ 00038338 1873
.org 0x3833a
	ldrb r0, [r2, #13]	@ 0003833a 507b
.org 0x3833c
	strb r0, [r3, #13]	@ 0003833c 5873
.org 0x3833e
	ldrb r0, [r2, #15]	@ 0003833e d07b
.org 0x38340
	strb r0, [r3, #15]	@ 00038340 d873
.org 0x38342
	mov r0, ip	@ 00038342 6046
.org 0x38344
	adds r0, #230	@ 00038344 e630
.org 0x38346
	ldrb r0, [r0, #0]	@ 00038346 0078
.org 0x38348
	adds r1, #1	@ 00038348 0131
.org 0x3834a
	strb r0, [r1, #0]	@ 0003834a 0870
.org 0x3834c
	ldr r0, [r2, #56]	@ 0003834c 906b
.org 0x3834e
	str r0, [r3, #56]	@ 0003834e 9863
.org 0x38350
	bx lr	@ 00038350 7047
