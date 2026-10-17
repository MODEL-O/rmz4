@ FUN_080ed974  entry 0x080ed974  size 38
.thumb
.org 0xed974
FUN_080ed974:
	push {r4, r5, r6, lr}	@ 000ed974 70b5
.org 0xed976
	adds r4, r0, #0	@ 000ed976 041c
.org 0xed978
	lsls r1, r1, #16	@ 000ed978 0904
.org 0xed97a
	lsrs r6, r1, #16	@ 000ed97a 0e0c
.org 0xed97c
	lsls r2, r2, #24	@ 000ed97c 1206
.org 0xed97e
	lsrs r5, r2, #24	@ 000ed97e 150e
.org 0xed980
	ldrb r0, [r4, #15]	@ 000ed980 e07b
.org 0xed982
	cmp r0, #5	@ 000ed982 0528
.org 0xed984
	bls.n 0xed988	@ 000ed984 00d9
.org 0xed986
	b.n 0xedaea	@ 000ed986 b0e0
.org 0xed988
	lsls r0, r0, #2	@ 000ed988 8000
.org 0xed98a
	ldr r1, [pc, #8]	@ 000ed98a 0249
.org 0xed98c
	adds r0, r0, r1	@ 000ed98c 4018
.org 0xed98e
	ldr r0, [r0, #0]	@ 000ed98e 0068
.org 0xed990
	mov pc, r0	@ 000ed990 8746
.org 0xed992
	.byte 0x00	@ 000ed992 data
.org 0xed993
	.byte 0x00	@ 000ed993 data
.org 0xed994
	.byte 0x98,0xd9,0x0e,0x08	@ 000ed994 data
.org 0xed998
	.byte 0xb0,0xd9,0x0e,0x08	@ 000ed998 data
