@ FUN_080090a4  entry 0x080090a4  size 26
.thumb
.org 0x90a4
FUN_080090a4:
	push {lr}	@ 000090a4 00b5
.org 0x90a6
	adds r2, r1, #0	@ 000090a6 0a1c
.org 0x90a8
	asrs r0, r0, #1	@ 000090a8 4010
.org 0x90aa
	movs r1, #128	@ 000090aa 8021
.org 0x90ac
	lsls r1, r1, #5	@ 000090ac 4901
.org 0x90ae
	subs r1, r1, r0	@ 000090ae 091a
.org 0x90b0
	cmp r2, r1	@ 000090b0 8a42
.org 0x90b2
	blt.n 0x90b8	@ 000090b2 01db
.org 0x90b4
	movs r0, #0	@ 000090b4 0020
.org 0x90b6
	b.n 0x90ba	@ 000090b6 00e0
.org 0x90b8
	mvns r0, r2	@ 000090b8 d043
.org 0x90ba
	pop {r1}	@ 000090ba 02bc
.org 0x90bc
	bx r1	@ 000090bc 0847
