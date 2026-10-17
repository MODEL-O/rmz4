@ FUN_08005418  entry 0x08005418  size 40
.thumb
.org 0x5418
FUN_08005418:
	push {r4, lr}	@ 00005418 10b5
.org 0x541a
	lsls r1, r1, #24	@ 0000541a 0906
.org 0x541c
	lsrs r1, r1, #24	@ 0000541c 090e
.org 0x541e
	lsls r4, r3, #4	@ 0000541e 1c01
.org 0x5420
	subs r4, r4, r3	@ 00005420 e41a
.org 0x5422
	movs r3, #150	@ 00005422 9623
.org 0x5424
	muls r1, r3	@ 00005424 5943
.org 0x5426
	adds r1, r1, r2	@ 00005426 8918
.org 0x5428
	adds r4, r4, r1	@ 00005428 6418
.org 0x542a
	ldr r1, [r0, #8]	@ 0000542a 8168
.org 0x542c
	lsls r4, r4, #1	@ 0000542c 6400
.org 0x542e
	adds r4, r4, r1	@ 0000542e 6418
.org 0x5430
	ldrh r1, [r4, #0]	@ 00005430 2188
.org 0x5432
	ldr r0, [r0, #0]	@ 00005432 0068
.org 0x5434
	lsls r1, r1, #1	@ 00005434 4900
.org 0x5436
	adds r1, r1, r0	@ 00005436 0918
.org 0x5438
	ldrb r0, [r1, #0]	@ 00005438 0878
.org 0x543a
	pop {r4}	@ 0000543a 10bc
.org 0x543c
	pop {r1}	@ 0000543c 02bc
.org 0x543e
	bx r1	@ 0000543e 0847
