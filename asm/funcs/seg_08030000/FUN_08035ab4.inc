@ FUN_08035ab4  entry 0x08035ab4  size 20
.thumb
.org 0x35ab4
FUN_08035ab4:
	push {lr}	@ 00035ab4 00b5
.org 0x35ab6
	movs r1, #128	@ 00035ab6 8021
.org 0x35ab8
	lsls r1, r1, #1	@ 00035ab8 4900
.org 0x35aba
	adds r2, r0, r1	@ 00035aba 4218
.org 0x35abc
	movs r1, #1	@ 00035abc 0121
.org 0x35abe
	strb r1, [r2, #0]	@ 00035abe 1170
.org 0x35ac0
	bl 0x35ac8	@ 00035ac0 00f002f8
.org 0x35ac4
	pop {r0}	@ 00035ac4 01bc
.org 0x35ac6
	bx r0	@ 00035ac6 0047
