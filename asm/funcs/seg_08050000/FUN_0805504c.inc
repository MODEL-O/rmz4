@ FUN_0805504c  entry 0x0805504c  size 26
.thumb
.org 0x5504c
FUN_0805504c:
	lsls r2, r2, #24	@ 0005504c 1206
.org 0x5504e
	movs r3, #0	@ 0005504e 0023
.org 0x55050
	str r3, [r0, #92]	@ 00055050 c365
.org 0x55052
	lsrs r2, r2, #23	@ 00055052 d20d
.org 0x55054
	subs r2, #1	@ 00055054 013a
.org 0x55056
	muls r1, r2	@ 00055056 5143
.org 0x55058
	str r1, [r0, #100]	@ 00055058 4166
.org 0x5505a
	adds r0, #182	@ 0005505a b630
.org 0x5505c
	ldrb r2, [r0, #0]	@ 0005505c 0278
.org 0x5505e
	movs r1, #251	@ 0005505e fb21
.org 0x55060
	ands r1, r2	@ 00055060 1140
.org 0x55062
	strb r1, [r0, #0]	@ 00055062 0170
.org 0x55064
	bx lr	@ 00055064 7047
