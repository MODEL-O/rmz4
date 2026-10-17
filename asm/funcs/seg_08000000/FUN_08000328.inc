@ FUN_08000328  entry 0x08000328  size 20
.thumb
.org 0x328
FUN_08000328:
	mov sp, r0	@ 00000328 8546
.org 0x32a
	pop {r4, r5, r6, r7}	@ 0000032a f0bc
.org 0x32c
	mov fp, r7	@ 0000032c bb46
.org 0x32e
	mov sl, r6	@ 0000032e b246
.org 0x330
	mov r9, r5	@ 00000330 a946
.org 0x332
	mov r8, r4	@ 00000332 a046
.org 0x334
	pop {r4, r5, r6, r7}	@ 00000334 f0bc
.org 0x336
	pop {r3}	@ 00000336 08bc
.org 0x338
	mov lr, r3	@ 00000338 9e46
.org 0x33a
	bx lr	@ 0000033a 7047
