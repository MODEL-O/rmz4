@ FUN_08009040  entry 0x08009040  size 24
.thumb
.org 0x9040
FUN_08009040:
	push {lr}	@ 00009040 00b5
.org 0x9042
	asrs r0, r0, #2	@ 00009042 8010
.org 0x9044
	movs r2, #128	@ 00009044 8022
.org 0x9046
	lsls r2, r2, #3	@ 00009046 d200
.org 0x9048
	adds r0, r0, r2	@ 00009048 8018
.org 0x904a
	cmp r1, r0	@ 0000904a 8142
.org 0x904c
	blt.n 0x9052	@ 0000904c 01db
.org 0x904e
	movs r0, #0	@ 0000904e 0020
.org 0x9050
	b.n 0x9054	@ 00009050 00e0
.org 0x9052
	mvns r0, r1	@ 00009052 c843
.org 0x9054
	pop {r1}	@ 00009054 02bc
.org 0x9056
	bx r1	@ 00009056 0847
