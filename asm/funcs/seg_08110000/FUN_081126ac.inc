@ FUN_081126ac  entry 0x081126ac  size 10
.thumb
.org 0x1126ac
FUN_081126ac:
	str r1, [r0, #0]	@ 001126ac 0160
.org 0x1126ae
	movs r1, #0	@ 001126ae 0021
.org 0x1126b0
	str r1, [r0, #4]	@ 001126b0 4160
.org 0x1126b2
	str r1, [r0, #8]	@ 001126b2 8160
.org 0x1126b4
	bx lr	@ 001126b4 7047
