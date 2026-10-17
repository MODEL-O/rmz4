@ FUN_0809e1bc  entry 0x0809e1bc  size 18
.thumb
.org 0x9e1bc
FUN_0809e1bc:
	movs r2, #0	@ 0009e1bc 0022
.org 0x9e1be
	movs r1, #4	@ 0009e1be 0421
.org 0x9e1c0
	strb r1, [r0, #13]	@ 0009e1c0 4173
.org 0x9e1c2
	strb r2, [r0, #14]	@ 0009e1c2 8273
.org 0x9e1c4
	movs r1, #50	@ 0009e1c4 3221
.org 0x9e1c6
	strb r1, [r0, #18]	@ 0009e1c6 8174
.org 0x9e1c8
	adds r0, #189	@ 0009e1c8 bd30
.org 0x9e1ca
	strb r2, [r0, #0]	@ 0009e1ca 0270
.org 0x9e1cc
	bx lr	@ 0009e1cc 7047
