@ FUN_08127f84  entry 0x08127f84  size 60
.thumb
.org 0x127f84
FUN_08127f84:
	push {r4, r5, r6, lr}	@ 00127f84 70b5
.org 0x127f86
	adds r6, r0, #0	@ 00127f86 061c
.org 0x127f88
	ldr r1, [r6, #52]	@ 00127f88 716b
.org 0x127f8a
	ldr r0, [pc, #52]	@ 00127f8a 0d48
.org 0x127f8c
	cmp r1, r0	@ 00127f8c 8142
.org 0x127f8e
	bne.n 0x127fba	@ 00127f8e 14d1
.org 0x127f90
	adds r0, r1, #1	@ 00127f90 481c
.org 0x127f92
	str r0, [r6, #52]	@ 00127f92 7063
.org 0x127f94
	ldr r0, [r6, #4]	@ 00127f94 7068
.org 0x127f96
	movs r1, #128	@ 00127f96 8021
.org 0x127f98
	lsls r1, r1, #24	@ 00127f98 0906
.org 0x127f9a
	orrs r0, r1	@ 00127f9a 0843
.org 0x127f9c
	str r0, [r6, #4]	@ 00127f9c 7060
.org 0x127f9e
	ldrb r4, [r6, #8]	@ 00127f9e 347a
.org 0x127fa0
	ldr r5, [r6, #44]	@ 00127fa0 f56a
.org 0x127fa2
	cmp r4, #0	@ 00127fa2 002c
.org 0x127fa4
	ble.n 0x127fb6	@ 00127fa4 07dd
.org 0x127fa6
	adds r0, r6, #0	@ 00127fa6 301c
.org 0x127fa8
	adds r1, r5, #0	@ 00127fa8 291c
.org 0x127faa
	bl 0x127388	@ 00127faa fff7edf9
.org 0x127fae
	subs r4, #1	@ 00127fae 013c
.org 0x127fb0
	adds r5, #80	@ 00127fb0 5035
.org 0x127fb2
	cmp r4, #0	@ 00127fb2 002c
.org 0x127fb4
	bgt.n 0x127fa6	@ 00127fb4 f7dc
.org 0x127fb6
	ldr r0, [pc, #8]	@ 00127fb6 0248
.org 0x127fb8
	str r0, [r6, #52]	@ 00127fb8 7063
.org 0x127fba
	pop {r4, r5, r6}	@ 00127fba 70bc
.org 0x127fbc
	pop {r0}	@ 00127fbc 01bc
.org 0x127fbe
	bx r0	@ 00127fbe 0047
