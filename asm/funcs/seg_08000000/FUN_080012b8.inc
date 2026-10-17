@ FUN_080012b8  entry 0x080012b8  size 40
.thumb
.org 0x12b8
FUN_080012b8:
	lsls r3, r0, #1	@ 000012b8 4300
.org 0x12ba
	adds r0, r3, r0	@ 000012ba 1818
.org 0x12bc
	lsls r0, r0, #3	@ 000012bc c000
.org 0x12be
	ldr r2, [pc, #32]	@ 000012be 084a
.org 0x12c0
	adds r0, r0, r2	@ 000012c0 8018
.org 0x12c2
	str r1, [r0, #4]	@ 000012c2 4160
.org 0x12c4
	ldr r1, [pc, #28]	@ 000012c4 0749
.org 0x12c6
	adds r3, r3, r1	@ 000012c6 5b18
.org 0x12c8
	ldr r1, [pc, #28]	@ 000012c8 0749
.org 0x12ca
	adds r2, r2, r1	@ 000012ca 5218
.org 0x12cc
	ldrh r3, [r3, #0]	@ 000012cc 1b88
.org 0x12ce
	adds r2, r2, r3	@ 000012ce d218
.org 0x12d0
	str r2, [r0, #8]	@ 000012d0 8260
.org 0x12d2
	movs r2, #0	@ 000012d2 0022
.org 0x12d4
	movs r1, #0	@ 000012d4 0021
.org 0x12d6
	strh r1, [r0, #2]	@ 000012d6 4180
.org 0x12d8
	strb r2, [r0, #1]	@ 000012d8 4270
.org 0x12da
	movs r1, #2	@ 000012da 0221
.org 0x12dc
	strb r1, [r0, #0]	@ 000012dc 0170
.org 0x12de
	bx lr	@ 000012de 7047
