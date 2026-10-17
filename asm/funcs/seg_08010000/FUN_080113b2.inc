@ FUN_080113b2  entry 0x080113b2  size 16
.thumb
.org 0x113b2
FUN_080113b2:
	add sp, #20	@ 000113b2 05b0
.org 0x113b4
	pop {r3, r4, r5}	@ 000113b4 38bc
.org 0x113b6
	mov r8, r3	@ 000113b6 9846
.org 0x113b8
	mov r9, r4	@ 000113b8 a146
.org 0x113ba
	mov sl, r5	@ 000113ba aa46
.org 0x113bc
	pop {r4, r5, r6, r7}	@ 000113bc f0bc
.org 0x113be
	pop {r0}	@ 000113be 01bc
.org 0x113c0
	bx r0	@ 000113c0 0047
