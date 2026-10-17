@ FUN_08009088  entry 0x08009088  size 26
.thumb
.org 0x9088
FUN_08009088:
	push {lr}	@ 00009088 00b5
.org 0x908a
	adds r2, r1, #0	@ 0000908a 0a1c
.org 0x908c
	asrs r0, r0, #1	@ 0000908c 4010
.org 0x908e
	movs r1, #128	@ 0000908e 8021
.org 0x9090
	lsls r1, r1, #5	@ 00009090 4901
.org 0x9092
	subs r1, r1, r0	@ 00009092 091a
.org 0x9094
	cmp r2, r1	@ 00009094 8a42
.org 0x9096
	blt.n 0x909c	@ 00009096 01db
.org 0x9098
	movs r0, #0	@ 00009098 0020
.org 0x909a
	b.n 0x909e	@ 0000909a 00e0
.org 0x909c
	mvns r0, r2	@ 0000909c d043
.org 0x909e
	pop {r1}	@ 0000909e 02bc
.org 0x90a0
	bx r1	@ 000090a0 0847
