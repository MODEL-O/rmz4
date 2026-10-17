@ FUN_080090f8  entry 0x080090f8  size 26
.thumb
.org 0x90f8
FUN_080090f8:
	push {lr}	@ 000090f8 00b5
.org 0x90fa
	adds r2, r1, #0	@ 000090fa 0a1c
.org 0x90fc
	asrs r0, r0, #2	@ 000090fc 8010
.org 0x90fe
	movs r1, #128	@ 000090fe 8021
.org 0x9100
	lsls r1, r1, #4	@ 00009100 0901
.org 0x9102
	subs r1, r1, r0	@ 00009102 091a
.org 0x9104
	cmp r2, r1	@ 00009104 8a42
.org 0x9106
	blt.n 0x910c	@ 00009106 01db
.org 0x9108
	movs r0, #0	@ 00009108 0020
.org 0x910a
	b.n 0x910e	@ 0000910a 00e0
.org 0x910c
	mvns r0, r2	@ 0000910c d043
.org 0x910e
	pop {r1}	@ 0000910e 02bc
.org 0x9110
	bx r1	@ 00009110 0847
