@ FUN_080070b0  entry 0x080070b0  size 24
.thumb
.org 0x70b0
FUN_080070b0:
	push {r4, lr}	@ 000070b0 10b5
.org 0x70b2
	asrs r3, r0, #12	@ 000070b2 0313
.org 0x70b4
	asrs r4, r1, #12	@ 000070b4 0c13
.org 0x70b6
	lsls r3, r3, #12	@ 000070b6 1b03
.org 0x70b8
	subs r3, r3, r0	@ 000070b8 1b1a
.org 0x70ba
	str r3, [r2, #0]	@ 000070ba 1360
.org 0x70bc
	lsls r4, r4, #12	@ 000070bc 2403
.org 0x70be
	subs r4, r4, r1	@ 000070be 641a
.org 0x70c0
	str r4, [r2, #4]	@ 000070c0 5460
.org 0x70c2
	pop {r4}	@ 000070c2 10bc
.org 0x70c4
	pop {r0}	@ 000070c4 01bc
.org 0x70c6
	bx r0	@ 000070c6 0047
