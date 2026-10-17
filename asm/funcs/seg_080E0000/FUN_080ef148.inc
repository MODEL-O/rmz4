@ FUN_080ef148  entry 0x080ef148  size 38
.thumb
.org 0xef148
FUN_080ef148:
	push {lr}	@ 000ef148 00b5
.org 0xef14a
	adds r2, r0, #0	@ 000ef14a 021c
.org 0xef14c
	ldrb r1, [r2, #13]	@ 000ef14c 517b
.org 0xef14e
	cmp r1, #0	@ 000ef14e 0029
.org 0xef150
	bne.n 0xef15c	@ 000ef150 04d1
.org 0xef152
	movs r0, #224	@ 000ef152 e020
.org 0xef154
	lsls r0, r0, #3	@ 000ef154 c000
.org 0xef156
	str r0, [r2, #92]	@ 000ef156 d065
.org 0xef158
	adds r0, r1, #1	@ 000ef158 481c
.org 0xef15a
	strb r0, [r2, #13]	@ 000ef15a 5073
.org 0xef15c
	ldr r0, [r2, #84]	@ 000ef15c 506d
.org 0xef15e
	ldr r1, [r2, #92]	@ 000ef15e d16d
.org 0xef160
	adds r0, r0, r1	@ 000ef160 4018
.org 0xef162
	str r0, [r2, #84]	@ 000ef162 5065
.org 0xef164
	adds r0, r2, #0	@ 000ef164 101c
.org 0xef166
	bl 0x1cff0	@ 000ef166 2df743ff
.org 0xef16a
	pop {r0}	@ 000ef16a 01bc
.org 0xef16c
	bx r0	@ 000ef16c 0047
