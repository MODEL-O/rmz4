@ FUN_080352a4  entry 0x080352a4  size 18
.thumb
.org 0x352a4
FUN_080352a4:
	push {lr}	@ 000352a4 00b5
.org 0x352a6
	movs r1, #0	@ 000352a6 0021
.org 0x352a8
	strb r1, [r0, #13]	@ 000352a8 4173
.org 0x352aa
	strb r1, [r0, #14]	@ 000352aa 8173
.org 0x352ac
	strb r1, [r0, #15]	@ 000352ac c173
.org 0x352ae
	bl 0x348f8	@ 000352ae fff723fb
.org 0x352b2
	pop {r0}	@ 000352b2 01bc
.org 0x352b4
	bx r0	@ 000352b4 0047
