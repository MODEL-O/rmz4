@ FUN_08040aa8  entry 0x08040aa8  size 48
.thumb
.org 0x40aa8
FUN_08040aa8:
	adds r2, r0, #0	@ 00040aa8 021c
.org 0x40aaa
	adds r0, #140	@ 00040aaa 8c30
.org 0x40aac
	movs r1, #0	@ 00040aac 0021
.org 0x40aae
	str r1, [r0, #0]	@ 00040aae 0160
.org 0x40ab0
	adds r0, #4	@ 00040ab0 0430
.org 0x40ab2
	str r1, [r0, #0]	@ 00040ab2 0160
.org 0x40ab4
	adds r0, #4	@ 00040ab4 0430
.org 0x40ab6
	strb r1, [r0, #0]	@ 00040ab6 0170
.org 0x40ab8
	ldrb r1, [r2, #10]	@ 00040ab8 917a
.org 0x40aba
	movs r0, #251	@ 00040aba fb20
.org 0x40abc
	ands r0, r1	@ 00040abc 0840
.org 0x40abe
	movs r1, #254	@ 00040abe fe21
.org 0x40ac0
	ands r0, r1	@ 00040ac0 0840
.org 0x40ac2
	strb r0, [r2, #10]	@ 00040ac2 9072
.org 0x40ac4
	ldr r1, [pc, #16]	@ 00040ac4 0449
.org 0x40ac6
	ldrb r0, [r2, #9]	@ 00040ac6 507a
.org 0x40ac8
	lsls r0, r0, #2	@ 00040ac8 8000
.org 0x40aca
	adds r0, r0, r1	@ 00040aca 4018
.org 0x40acc
	movs r1, #4	@ 00040acc 0421
.org 0x40ace
	str r1, [r2, #12]	@ 00040ace d160
.org 0x40ad0
	ldr r0, [r0, #0]	@ 00040ad0 0068
.org 0x40ad2
	ldr r0, [r0, #16]	@ 00040ad2 0069
.org 0x40ad4
	str r0, [r2, #20]	@ 00040ad4 5061
.org 0x40ad6
	bx lr	@ 00040ad6 7047
