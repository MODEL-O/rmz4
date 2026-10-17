@ FUN_080033fc  entry 0x080033fc  size 34
.thumb
.org 0x33fc
FUN_080033fc:
	push {r4, lr}	@ 000033fc 10b5
.org 0x33fe
	lsls r2, r2, #16	@ 000033fe 1204
.org 0x3400
	lsls r3, r3, #16	@ 00003400 1b04
.org 0x3402
	movs r4, #128	@ 00003402 8024
.org 0x3404
	lsls r4, r4, #2	@ 00003404 a400
.org 0x3406
	adds r0, r0, r4	@ 00003406 0019
.org 0x3408
	ldr r0, [r0, #0]	@ 00003408 0068
.org 0x340a
	asrs r3, r3, #14	@ 0000340a 9b13
.org 0x340c
	asrs r2, r2, #9	@ 0000340c 5212
.org 0x340e
	adds r2, r2, r0	@ 0000340e 1218
.org 0x3410
	adds r3, r3, r2	@ 00003410 9b18
.org 0x3412
	ldr r0, [r3, #0]	@ 00003412 1868
.org 0x3414
	str r0, [r1, #0]	@ 00003414 0860
.org 0x3416
	str r1, [r3, #0]	@ 00003416 1960
.org 0x3418
	pop {r4}	@ 00003418 10bc
.org 0x341a
	pop {r0}	@ 0000341a 01bc
.org 0x341c
	bx r0	@ 0000341c 0047
