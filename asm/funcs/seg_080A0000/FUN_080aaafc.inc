@ FUN_080aaafc  entry 0x080aaafc  size 48
.thumb
.org 0xaaafc
FUN_080aaafc:
	push {r4, r5, lr}	@ 000aaafc 30b5
.org 0xaaafe
	adds r4, r0, #0	@ 000aaafe 041c
.org 0xaab00
	adds r5, r4, #0	@ 000aab00 251c
.org 0xaab02
	adds r5, #192	@ 000aab02 c035
.org 0xaab04
	ldr r0, [r5, #0]	@ 000aab04 2868
.org 0xaab06
	bl 0x2b3e4	@ 000aab06 80f76dfc
.org 0xaab0a
	cmp r0, #0	@ 000aab0a 0028
.org 0xaab0c
	beq.n 0xaab26	@ 000aab0c 0bd0
.org 0xaab0e
	adds r0, r4, #0	@ 000aab0e 201c
.org 0xaab10
	adds r0, #116	@ 000aab10 7430
.org 0xaab12
	ldr r1, [pc, #24]	@ 000aab12 0649
.org 0xaab14
	bl 0x5784	@ 000aab14 5af736fe
.org 0xaab18
	movs r1, #0	@ 000aab18 0021
.org 0xaab1a
	str r1, [r5, #0]	@ 000aab1a 2960
.org 0xaab1c
	movs r0, #2	@ 000aab1c 0220
.org 0xaab1e
	strb r0, [r4, #13]	@ 000aab1e 6073
.org 0xaab20
	strb r1, [r4, #14]	@ 000aab20 a173
.org 0xaab22
	movs r0, #32	@ 000aab22 2020
.org 0xaab24
	strb r0, [r4, #19]	@ 000aab24 e074
.org 0xaab26
	pop {r4, r5}	@ 000aab26 30bc
.org 0xaab28
	pop {r0}	@ 000aab28 01bc
.org 0xaab2a
	bx r0	@ 000aab2a 0047
