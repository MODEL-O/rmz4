@ FUN_08033000  entry 0x08033000  size 64
.thumb
.org 0x33000
FUN_08033000:
	push {r4, lr}	@ 00033000 10b5
.org 0x33002
	adds r4, r0, #0	@ 00033002 041c
.org 0x33004
	movs r1, #152	@ 00033004 9821
.org 0x33006
	lsls r1, r1, #7	@ 00033006 c901
.org 0x33008
	bl 0x1cf00	@ 00033008 e9f77aff
.org 0x3300c
	adds r3, r4, #0	@ 0003300c 231c
.org 0x3300e
	adds r3, #180	@ 0003300e b433
.org 0x33010
	ldr r2, [r3, #84]	@ 00033010 5a6d
.org 0x33012
	cmp r2, #0	@ 00033012 002a
.org 0x33014
	beq.n 0x3301e	@ 00033014 03d0
.org 0x33016
	movs r1, #0	@ 00033016 0021
.org 0x33018
	movs r0, #1	@ 00033018 0120
.org 0x3301a
	strb r0, [r2, #17]	@ 0003301a 5074
.org 0x3301c
	str r1, [r3, #84]	@ 0003301c 5965
.org 0x3301e
	movs r1, #128	@ 0003301e 8021
.org 0x33020
	lsls r1, r1, #1	@ 00033020 4900
.org 0x33022
	adds r0, r4, r1	@ 00033022 6018
.org 0x33024
	movs r2, #0	@ 00033024 0022
.org 0x33026
	strb r2, [r0, #0]	@ 00033026 0270
.org 0x33028
	ldr r1, [pc, #20]	@ 00033028 0549
.org 0x3302a
	movs r0, #1	@ 0003302a 0120
.org 0x3302c
	strb r0, [r1, #0]	@ 0003302c 0870
.org 0x3302e
	movs r0, #1	@ 0003302e 0120
.org 0x33030
	strb r0, [r4, #14]	@ 00033030 a073
.org 0x33032
	strb r2, [r4, #15]	@ 00033032 e273
.org 0x33034
	adds r0, r4, #0	@ 00033034 201c
.org 0x33036
	bl 0x33044	@ 00033036 00f005f8
.org 0x3303a
	pop {r4}	@ 0003303a 10bc
.org 0x3303c
	pop {r0}	@ 0003303c 01bc
.org 0x3303e
	bx r0	@ 0003303e 0047
