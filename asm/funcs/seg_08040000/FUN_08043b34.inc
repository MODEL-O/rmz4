@ FUN_08043b34  entry 0x08043b34  size 48
.thumb
.org 0x43b34
FUN_08043b34:
	adds r2, r0, #0	@ 00043b34 021c
.org 0x43b36
	adds r0, #140	@ 00043b36 8c30
.org 0x43b38
	movs r1, #0	@ 00043b38 0021
.org 0x43b3a
	str r1, [r0, #0]	@ 00043b3a 0160
.org 0x43b3c
	adds r0, #4	@ 00043b3c 0430
.org 0x43b3e
	str r1, [r0, #0]	@ 00043b3e 0160
.org 0x43b40
	adds r0, #4	@ 00043b40 0430
.org 0x43b42
	strb r1, [r0, #0]	@ 00043b42 0170
.org 0x43b44
	ldrb r1, [r2, #10]	@ 00043b44 917a
.org 0x43b46
	movs r0, #251	@ 00043b46 fb20
.org 0x43b48
	ands r0, r1	@ 00043b48 0840
.org 0x43b4a
	movs r1, #254	@ 00043b4a fe21
.org 0x43b4c
	ands r0, r1	@ 00043b4c 0840
.org 0x43b4e
	strb r0, [r2, #10]	@ 00043b4e 9072
.org 0x43b50
	ldr r1, [pc, #16]	@ 00043b50 0449
.org 0x43b52
	ldrb r0, [r2, #9]	@ 00043b52 507a
.org 0x43b54
	lsls r0, r0, #2	@ 00043b54 8000
.org 0x43b56
	adds r0, r0, r1	@ 00043b56 4018
.org 0x43b58
	movs r1, #4	@ 00043b58 0421
.org 0x43b5a
	str r1, [r2, #12]	@ 00043b5a d160
.org 0x43b5c
	ldr r0, [r0, #0]	@ 00043b5c 0068
.org 0x43b5e
	ldr r0, [r0, #16]	@ 00043b5e 0069
.org 0x43b60
	str r0, [r2, #20]	@ 00043b60 5061
.org 0x43b62
	bx lr	@ 00043b62 7047
