@ FUN_080ca410  entry 0x080ca410  size 76
.thumb
.org 0xca410
FUN_080ca410:
	push {r4, r5, lr}	@ 000ca410 30b5
.org 0xca412
	adds r2, r0, #0	@ 000ca412 021c
.org 0xca414
	movs r0, #182	@ 000ca414 b620
.org 0xca416
	adds r0, r0, r2	@ 000ca416 8018
.org 0xca418
	mov ip, r0	@ 000ca418 8446
.org 0xca41a
	ldrb r0, [r0, #0]	@ 000ca41a 0078
.org 0xca41c
	cmp r0, #255	@ 000ca41c ff28
.org 0xca41e
	bne.n 0xca45e	@ 000ca41e 1ed1
.org 0xca420
	ldr r0, [pc, #40]	@ 000ca420 0a48
.org 0xca422
	ldr r4, [r0, #0]	@ 000ca422 0468
.org 0xca424
	ldr r3, [r2, #84]	@ 000ca424 536d
.org 0xca426
	ldr r1, [pc, #40]	@ 000ca426 0a49
.org 0xca428
	adds r0, r3, r1	@ 000ca428 5818
.org 0xca42a
	ldr r1, [r4, #84]	@ 000ca42a 616d
.org 0xca42c
	cmp r1, r0	@ 000ca42c 8142
.org 0xca42e
	ble.n 0xca45e	@ 000ca42e 16dd
.org 0xca430
	movs r5, #160	@ 000ca430 a025
.org 0xca432
	lsls r5, r5, #3	@ 000ca432 ed00
.org 0xca434
	adds r0, r3, r5	@ 000ca434 5819
.org 0xca436
	cmp r1, r0	@ 000ca436 8142
.org 0xca438
	bge.n 0xca45e	@ 000ca438 11da
.org 0xca43a
	ldr r1, [r4, #88]	@ 000ca43a a16d
.org 0xca43c
	ldr r0, [r2, #88]	@ 000ca43c 906d
.org 0xca43e
	cmp r1, r0	@ 000ca43e 8142
.org 0xca440
	ble.n 0xca454	@ 000ca440 08dd
.org 0xca442
	movs r0, #1	@ 000ca442 0120
.org 0xca444
	mov r1, ip	@ 000ca444 6146
.org 0xca446
	strb r0, [r1, #0]	@ 000ca446 0870
.org 0xca448
	b.n 0xca45a	@ 000ca448 07e0
.org 0xca44a
	.byte 0x00	@ 000ca44a data
.org 0xca44b
	.byte 0x00	@ 000ca44b data
.org 0xca44c
	.byte 0xf0,0xdb,0x02,0x02	@ 000ca44c data
.org 0xca450
	.byte 0x00,0xfb,0xff,0xff	@ 000ca450 data
.org 0xca454
	movs r0, #0	@ 000ca454 0020
.org 0xca456
	mov r5, ip	@ 000ca456 6546
.org 0xca458
	strb r0, [r5, #0]	@ 000ca458 2870
.org 0xca45a
	movs r0, #1	@ 000ca45a 0120
