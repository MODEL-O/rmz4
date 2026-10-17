@ FUN_08033388  entry 0x08033388  size 30
.thumb
.org 0x33388
FUN_08033388:
	push {lr}	@ 00033388 00b5
.org 0x3338a
	adds r2, r0, #0	@ 0003338a 021c
.org 0x3338c
	movs r1, #150	@ 0003338c 9621
.org 0x3338e
	lsls r1, r1, #2	@ 0003338e 8900
.org 0x33390
	adds r0, r2, r1	@ 00033390 5018
.org 0x33392
	ldr r1, [r0, #0]	@ 00033392 0168
.org 0x33394
	movs r0, #128	@ 00033394 8020
.org 0x33396
	ands r1, r0	@ 00033396 0140
.org 0x33398
	cmp r1, #0	@ 00033398 0029
.org 0x3339a
	bne.n 0x333a2	@ 0003339a 02d1
.org 0x3339c
	movs r0, #2	@ 0003339c 0220
.org 0x3339e
	strb r0, [r2, #14]	@ 0003339e 9073
.org 0x333a0
	strb r1, [r2, #15]	@ 000333a0 d173
.org 0x333a2
	pop {r0}	@ 000333a2 01bc
.org 0x333a4
	bx r0	@ 000333a4 0047
