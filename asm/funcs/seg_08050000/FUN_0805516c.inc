@ FUN_0805516c  entry 0x0805516c  size 26
.thumb
.org 0x5516c
FUN_0805516c:
	lsls r2, r2, #24	@ 0005516c 1206
.org 0x5516e
	movs r3, #0	@ 0005516e 0023
.org 0x55170
	str r3, [r0, #96]	@ 00055170 0366
.org 0x55172
	lsrs r2, r2, #23	@ 00055172 d20d
.org 0x55174
	subs r2, #1	@ 00055174 013a
.org 0x55176
	muls r1, r2	@ 00055176 5143
.org 0x55178
	str r1, [r0, #104]	@ 00055178 8166
.org 0x5517a
	adds r0, #182	@ 0005517a b630
.org 0x5517c
	ldrb r2, [r0, #0]	@ 0005517c 0278
.org 0x5517e
	movs r1, #247	@ 0005517e f721
.org 0x55180
	ands r1, r2	@ 00055180 1140
.org 0x55182
	strb r1, [r0, #0]	@ 00055182 0170
.org 0x55184
	bx lr	@ 00055184 7047
