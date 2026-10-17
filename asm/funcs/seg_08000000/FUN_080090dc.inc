@ FUN_080090dc  entry 0x080090dc  size 26
.thumb
.org 0x90dc
FUN_080090dc:
	push {lr}	@ 000090dc 00b5
.org 0x90de
	adds r2, r1, #0	@ 000090de 0a1c
.org 0x90e0
	asrs r0, r0, #2	@ 000090e0 8010
.org 0x90e2
	movs r1, #192	@ 000090e2 c021
.org 0x90e4
	lsls r1, r1, #4	@ 000090e4 0901
.org 0x90e6
	subs r1, r1, r0	@ 000090e6 091a
.org 0x90e8
	cmp r2, r1	@ 000090e8 8a42
.org 0x90ea
	blt.n 0x90f0	@ 000090ea 01db
.org 0x90ec
	movs r0, #0	@ 000090ec 0020
.org 0x90ee
	b.n 0x90f2	@ 000090ee 00e0
.org 0x90f0
	mvns r0, r2	@ 000090f0 d043
.org 0x90f2
	pop {r1}	@ 000090f2 02bc
.org 0x90f4
	bx r1	@ 000090f4 0847
