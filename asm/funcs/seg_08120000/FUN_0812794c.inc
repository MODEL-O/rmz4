@ FUN_0812794c  entry 0x0812794c  size 14
.thumb
.org 0x12794c
FUN_0812794c:
	push {lr}	@ 0012794c 00b5
.org 0x12794e
	lsls r1, r1, #16	@ 0012794e 0904
.org 0x127950
	lsrs r1, r1, #16	@ 00127950 090c
.org 0x127952
	bl 0x127710	@ 00127952 fff7ddfe
.org 0x127956
	pop {r0}	@ 00127956 01bc
.org 0x127958
	bx r0	@ 00127958 0047
