@ FUN_080b11b8  entry 0x080b11b8  size 48
.thumb
.org 0xb11b8
FUN_080b11b8:
	push {r4, r5, r6, lr}	@ 000b11b8 70b5
.org 0xb11ba
	adds r4, r0, #0	@ 000b11ba 041c
.org 0xb11bc
	adds r5, r4, #0	@ 000b11bc 251c
.org 0xb11be
	adds r5, #116	@ 000b11be 7435
.org 0xb11c0
	ldr r6, [pc, #36]	@ 000b11c0 094e
.org 0xb11c2
	adds r0, r5, #0	@ 000b11c2 281c
.org 0xb11c4
	adds r1, r6, #0	@ 000b11c4 311c
.org 0xb11c6
	bl 0x5784	@ 000b11c6 54f7ddfa
.org 0xb11ca
	ldr r0, [r4, #40]	@ 000b11ca a06a
.org 0xb11cc
	bl 0x2b3e4	@ 000b11cc 7af70af9
.org 0xb11d0
	cmp r0, #0	@ 000b11d0 0028
.org 0xb11d2
	beq.n 0xb11e2	@ 000b11d2 06d0
.org 0xb11d4
	adds r1, r6, #0	@ 000b11d4 311c
.org 0xb11d6
	subs r1, #24	@ 000b11d6 1839
.org 0xb11d8
	adds r0, r5, #0	@ 000b11d8 281c
.org 0xb11da
	bl 0x5784	@ 000b11da 54f7d3fa
.org 0xb11de
	movs r0, #0	@ 000b11de 0020
.org 0xb11e0
	str r0, [r4, #40]	@ 000b11e0 a062
.org 0xb11e2
	pop {r4, r5, r6}	@ 000b11e2 70bc
.org 0xb11e4
	pop {r0}	@ 000b11e4 01bc
.org 0xb11e6
	bx r0	@ 000b11e6 0047
