@ FUN_08005328  entry 0x08005328  size 18
.thumb
.org 0x5328
FUN_08005328:
	push {r4, lr}	@ 00005328 10b5
.org 0x532a
	ldr r4, [sp, #8]	@ 0000532a 029c
.org 0x532c
	str r1, [r0, #0]	@ 0000532c 0160
.org 0x532e
	str r2, [r0, #4]	@ 0000532e 4260
.org 0x5330
	str r3, [r0, #8]	@ 00005330 8360
.org 0x5332
	str r4, [r0, #12]	@ 00005332 c460
.org 0x5334
	pop {r4}	@ 00005334 10bc
.org 0x5336
	pop {r0}	@ 00005336 01bc
.org 0x5338
	bx r0	@ 00005338 0047
