@ FUN_080380fc  entry 0x080380fc  size 12
.thumb
.org 0x380fc
FUN_080380fc:
	movs r1, #32	@ 000380fc 2021
.org 0x380fe
	strb r1, [r0, #8]	@ 000380fe 0172
.org 0x38100
	strb r1, [r0, #9]	@ 00038100 4172
.org 0x38102
	movs r1, #3	@ 00038102 0321
.org 0x38104
	strb r1, [r0, #19]	@ 00038104 c174
.org 0x38106
	bx lr	@ 00038106 7047
