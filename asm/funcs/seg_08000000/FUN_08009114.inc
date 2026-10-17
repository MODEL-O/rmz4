@ FUN_08009114  entry 0x08009114  size 26
.thumb
.org 0x9114
FUN_08009114:
	push {lr}	@ 00009114 00b5
.org 0x9116
	adds r2, r1, #0	@ 00009116 0a1c
.org 0x9118
	asrs r0, r0, #2	@ 00009118 8010
.org 0x911a
	movs r1, #128	@ 0000911a 8021
.org 0x911c
	lsls r1, r1, #3	@ 0000911c c900
.org 0x911e
	subs r1, r1, r0	@ 0000911e 091a
.org 0x9120
	cmp r2, r1	@ 00009120 8a42
.org 0x9122
	blt.n 0x9128	@ 00009122 01db
.org 0x9124
	movs r0, #0	@ 00009124 0020
.org 0x9126
	b.n 0x912a	@ 00009126 00e0
.org 0x9128
	mvns r0, r2	@ 00009128 d043
.org 0x912a
	pop {r1}	@ 0000912a 02bc
.org 0x912c
	bx r1	@ 0000912c 0847
