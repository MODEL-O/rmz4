@ FUN_080090c0  entry 0x080090c0  size 26
.thumb
.org 0x90c0
FUN_080090c0:
	push {lr}	@ 000090c0 00b5
.org 0x90c2
	adds r2, r1, #0	@ 000090c2 0a1c
.org 0x90c4
	asrs r0, r0, #2	@ 000090c4 8010
.org 0x90c6
	movs r1, #128	@ 000090c6 8021
.org 0x90c8
	lsls r1, r1, #5	@ 000090c8 4901
.org 0x90ca
	subs r1, r1, r0	@ 000090ca 091a
.org 0x90cc
	cmp r2, r1	@ 000090cc 8a42
.org 0x90ce
	blt.n 0x90d4	@ 000090ce 01db
.org 0x90d0
	movs r0, #0	@ 000090d0 0020
.org 0x90d2
	b.n 0x90d6	@ 000090d2 00e0
.org 0x90d4
	mvns r0, r2	@ 000090d4 d043
.org 0x90d6
	pop {r1}	@ 000090d6 02bc
.org 0x90d8
	bx r1	@ 000090d8 0847
