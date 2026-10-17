@ FUN_080cb004  entry 0x080cb004  size 88
.thumb
.org 0xcb004
FUN_080cb004:
	push {r4, lr}	@ 000cb004 10b5
.org 0xcb006
	adds r4, r0, #0	@ 000cb006 041c
.org 0xcb008
	bl 0x1cff0	@ 000cb008 51f7f2ff
.org 0xcb00c
	ldr r1, [r4, #84]	@ 000cb00c 616d
.org 0xcb00e
	ldr r0, [r4, #92]	@ 000cb00e e06d
.org 0xcb010
	adds r3, r1, r0	@ 000cb010 0b18
.org 0xcb012
	str r3, [r4, #84]	@ 000cb012 6365
.org 0xcb014
	ldr r1, [r4, #88]	@ 000cb014 a16d
.org 0xcb016
	ldr r0, [r4, #96]	@ 000cb016 206e
.org 0xcb018
	adds r2, r1, r0	@ 000cb018 0a18
.org 0xcb01a
	str r2, [r4, #88]	@ 000cb01a a265
.org 0xcb01c
	ldr r1, [r4, #104]	@ 000cb01c a16e
.org 0xcb01e
	adds r0, r0, r1	@ 000cb01e 4018
.org 0xcb020
	str r0, [r4, #96]	@ 000cb020 2066
.org 0xcb022
	adds r0, r4, #0	@ 000cb022 201c
.org 0xcb024
	adds r0, #140	@ 000cb024 8c30
.org 0xcb026
	ldr r0, [r0, #0]	@ 000cb026 0068
.org 0xcb028
	movs r1, #4	@ 000cb028 0421
.org 0xcb02a
	ands r0, r1	@ 000cb02a 0840
.org 0xcb02c
	cmp r0, #0	@ 000cb02c 0028
.org 0xcb02e
	bne.n 0xcb03e	@ 000cb02e 06d1
.org 0xcb030
	adds r0, r3, #0	@ 000cb030 181c
.org 0xcb032
	adds r1, r2, #0	@ 000cb032 111c
.org 0xcb034
	bl 0x7c7c	@ 000cb034 3cf722fe
.org 0xcb038
	lsls r0, r0, #16	@ 000cb038 0004
.org 0xcb03a
	cmp r0, #0	@ 000cb03a 0028
.org 0xcb03c
	beq.n 0xcb056	@ 000cb03c 0bd0
.org 0xcb03e
	ldr r1, [pc, #28]	@ 000cb03e 0749
.org 0xcb040
	ldrb r0, [r4, #9]	@ 000cb040 607a
.org 0xcb042
	lsls r0, r0, #2	@ 000cb042 8000
.org 0xcb044
	adds r0, r0, r1	@ 000cb044 4018
.org 0xcb046
	movs r1, #2	@ 000cb046 0221
.org 0xcb048
	str r1, [r4, #12]	@ 000cb048 e160
.org 0xcb04a
	ldr r0, [r0, #0]	@ 000cb04a 0068
.org 0xcb04c
	ldr r0, [r0, #8]	@ 000cb04c 8068
.org 0xcb04e
	str r0, [r4, #20]	@ 000cb04e 6061
.org 0xcb050
	adds r0, r4, #0	@ 000cb050 201c
.org 0xcb052
	bl 0xcb060	@ 000cb052 00f005f8
.org 0xcb056
	pop {r4}	@ 000cb056 10bc
.org 0xcb058
	pop {r0}	@ 000cb058 01bc
.org 0xcb05a
	bx r0	@ 000cb05a 0047
