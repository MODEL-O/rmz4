@ FUN_081251b8  entry 0x081251b8  size 36
.thumb
.org 0x1251b8
FUN_081251b8:
	push {lr}	@ 001251b8 00b5
.org 0x1251ba
	ldr r1, [pc, #32]	@ 001251ba 0849
.org 0x1251bc
	adds r2, r0, r1	@ 001251bc 4218
.org 0x1251be
	ldr r0, [r2, #20]	@ 001251be 5069
.org 0x1251c0
	cmp r0, #0	@ 001251c0 0028
.org 0x1251c2
	beq.n 0x1251cc	@ 001251c2 03d0
.org 0x1251c4
	subs r0, #1	@ 001251c4 0138
.org 0x1251c6
	str r0, [r2, #20]	@ 001251c6 5061
.org 0x1251c8
	cmp r0, #0	@ 001251c8 0028
.org 0x1251ca
	bne.n 0x1251d6	@ 001251ca 04d1
.org 0x1251cc
	ldrb r0, [r2, #24]	@ 001251cc 107e
.org 0x1251ce
	adds r0, #1	@ 001251ce 0130
.org 0x1251d0
	movs r1, #0	@ 001251d0 0021
.org 0x1251d2
	strb r0, [r2, #24]	@ 001251d2 1076
.org 0x1251d4
	strb r1, [r2, #25]	@ 001251d4 5176
.org 0x1251d6
	movs r0, #1	@ 001251d6 0120
.org 0x1251d8
	pop {r1}	@ 001251d8 02bc
.org 0x1251da
	bx r1	@ 001251da 0847
