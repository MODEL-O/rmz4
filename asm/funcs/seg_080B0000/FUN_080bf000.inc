@ FUN_080bf000  entry 0x080bf000  size 126
.thumb
.org 0xbf000
FUN_080bf000:
	push {r4, r5, r6, lr}	@ 000bf000 70b5
.org 0xbf002
	adds r6, r0, #0	@ 000bf002 061c
.org 0xbf004
	ldrb r4, [r6, #14]	@ 000bf004 b47b
.org 0xbf006
	cmp r4, #0	@ 000bf006 002c
.org 0xbf008
	beq.n 0xbf010	@ 000bf008 02d0
.org 0xbf00a
	cmp r4, #1	@ 000bf00a 012c
.org 0xbf00c
	beq.n 0xbf026	@ 000bf00c 0bd0
.org 0xbf00e
	b.n 0xbf078	@ 000bf00e 33e0
.org 0xbf010
	ldr r1, [pc, #108]	@ 000bf010 1b49
.org 0xbf012
	adds r0, r6, #0	@ 000bf012 301c
.org 0xbf014
	bl 0x1cf00	@ 000bf014 5df774ff
.org 0xbf018
	str r4, [r6, #92]	@ 000bf018 f465
.org 0xbf01a
	movs r0, #144	@ 000bf01a 9020
.org 0xbf01c
	lsls r0, r0, #2	@ 000bf01c 8000
.org 0xbf01e
	str r0, [r6, #96]	@ 000bf01e 3066
.org 0xbf020
	ldrb r0, [r6, #14]	@ 000bf020 b07b
.org 0xbf022
	adds r0, #1	@ 000bf022 0130
.org 0xbf024
	strb r0, [r6, #14]	@ 000bf024 b073
.org 0xbf026
	adds r0, r6, #0	@ 000bf026 301c
.org 0xbf028
	bl 0x1cff0	@ 000bf028 5df7e2ff
.org 0xbf02c
	ldr r1, [r6, #88]	@ 000bf02c b16d
.org 0xbf02e
	ldr r0, [r6, #96]	@ 000bf02e 306e
.org 0xbf030
	adds r1, r1, r0	@ 000bf030 0918
.org 0xbf032
	str r1, [r6, #88]	@ 000bf032 b165
.org 0xbf034
	ldr r0, [r6, #84]	@ 000bf034 706d
.org 0xbf036
	bl 0x7c7c	@ 000bf036 48f721fe
.org 0xbf03a
	lsls r0, r0, #16	@ 000bf03a 0004
.org 0xbf03c
	cmp r0, #0	@ 000bf03c 0028
.org 0xbf03e
	beq.n 0xbf078	@ 000bf03e 1bd0
.org 0xbf040
	adds r4, r6, #0	@ 000bf040 341c
.org 0xbf042
	adds r4, #84	@ 000bf042 5434
.org 0xbf044
	adds r5, r6, #0	@ 000bf044 351c
.org 0xbf046
	adds r5, #92	@ 000bf046 5c35
.org 0xbf048
	ldrb r3, [r6, #17]	@ 000bf048 737c
.org 0xbf04a
	adds r0, r4, #0	@ 000bf04a 201c
.org 0xbf04c
	adds r1, r5, #0	@ 000bf04c 291c
.org 0xbf04e
	movs r2, #0	@ 000bf04e 0022
.org 0xbf050
	bl 0xbee30	@ 000bf050 fff7eefe
.org 0xbf054
	ldrb r3, [r6, #17]	@ 000bf054 737c
.org 0xbf056
	adds r0, r4, #0	@ 000bf056 201c
.org 0xbf058
	adds r1, r5, #0	@ 000bf058 291c
.org 0xbf05a
	movs r2, #1	@ 000bf05a 0122
.org 0xbf05c
	bl 0xbee30	@ 000bf05c fff7e8fe
.org 0xbf060
	ldr r1, [pc, #32]	@ 000bf060 0849
.org 0xbf062
	ldrb r0, [r6, #9]	@ 000bf062 707a
.org 0xbf064
	lsls r0, r0, #2	@ 000bf064 8000
.org 0xbf066
	adds r0, r0, r1	@ 000bf066 4018
.org 0xbf068
	movs r1, #2	@ 000bf068 0221
.org 0xbf06a
	str r1, [r6, #12]	@ 000bf06a f160
.org 0xbf06c
	ldr r0, [r0, #0]	@ 000bf06c 0068
.org 0xbf06e
	ldr r0, [r0, #8]	@ 000bf06e 8068
.org 0xbf070
	str r0, [r6, #20]	@ 000bf070 7061
.org 0xbf072
	adds r0, r6, #0	@ 000bf072 301c
.org 0xbf074
	bl 0xbefc0	@ 000bf074 fff7a4ff
.org 0xbf078
	pop {r4, r5, r6}	@ 000bf078 70bc
.org 0xbf07a
	pop {r0}	@ 000bf07a 01bc
.org 0xbf07c
	bx r0	@ 000bf07c 0047
