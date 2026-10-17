@ FUN_08003384  entry 0x08003384  size 50
.thumb
.org 0x3384
FUN_08003384:
	push {r4, r5, lr}	@ 00003384 30b5
.org 0x3386
	sub sp, #8	@ 00003386 82b0
.org 0x3388
	adds r4, r0, #0	@ 00003388 041c
.org 0x338a
	movs r5, #0	@ 0000338a 0025
.org 0x338c
	str r5, [sp, #0]	@ 0000338c 0095
.org 0x338e
	ldr r2, [pc, #40]	@ 0000338e 0a4a
.org 0x3390
	mov r0, sp	@ 00003390 6846
.org 0x3392
	adds r1, r4, #0	@ 00003392 211c
.org 0x3394
	bl 0x128be0	@ 00003394 25f124fc
.org 0x3398
	movs r1, #128	@ 00003398 8021
.org 0x339a
	lsls r1, r1, #2	@ 0000339a 8900
.org 0x339c
	adds r0, r4, r1	@ 0000339c 6018
.org 0x339e
	str r4, [r0, #0]	@ 0000339e 0460
.org 0x33a0
	adds r1, #4	@ 000033a0 0431
.org 0x33a2
	adds r0, r4, r1	@ 000033a2 6018
.org 0x33a4
	str r5, [r0, #0]	@ 000033a4 0560
.org 0x33a6
	movs r0, #130	@ 000033a6 8220
.org 0x33a8
	lsls r0, r0, #2	@ 000033a8 8000
.org 0x33aa
	adds r4, r4, r0	@ 000033aa 2418
.org 0x33ac
	str r5, [r4, #0]	@ 000033ac 2560
.org 0x33ae
	add sp, #8	@ 000033ae 02b0
.org 0x33b0
	pop {r4, r5}	@ 000033b0 30bc
.org 0x33b2
	pop {r0}	@ 000033b2 01bc
.org 0x33b4
	bx r0	@ 000033b4 0047
