@ FUN_080d8978  entry 0x080d8978  size 28
.thumb
.org 0xd8978
FUN_080d8978:
	ldrb r2, [r0, #10]	@ 000d8978 827a
.org 0xd897a
	movs r1, #254	@ 000d897a fe21
.org 0xd897c
	ands r1, r2	@ 000d897c 1140
.org 0xd897e
	strb r1, [r0, #10]	@ 000d897e 8172
.org 0xd8980
	ldr r2, [pc, #16]	@ 000d8980 044a
.org 0xd8982
	ldrb r1, [r0, #9]	@ 000d8982 417a
.org 0xd8984
	lsls r1, r1, #2	@ 000d8984 8900
.org 0xd8986
	adds r1, r1, r2	@ 000d8986 8918
.org 0xd8988
	movs r2, #4	@ 000d8988 0422
.org 0xd898a
	str r2, [r0, #12]	@ 000d898a c260
.org 0xd898c
	ldr r1, [r1, #0]	@ 000d898c 0968
.org 0xd898e
	ldr r1, [r1, #16]	@ 000d898e 0969
.org 0xd8990
	str r1, [r0, #20]	@ 000d8990 4161
.org 0xd8992
	bx lr	@ 000d8992 7047
