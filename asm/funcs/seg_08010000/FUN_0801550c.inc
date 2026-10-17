@ FUN_0801550c  entry 0x0801550c  size 34
.thumb
.org 0x1550c
FUN_0801550c:
	push {lr}	@ 0001550c 00b5
.org 0x1550e
	adds r1, r0, #0	@ 0001550e 011c
.org 0x15510
	ldrb r3, [r1, #14]	@ 00015510 8b7b
.org 0x15512
	adds r2, r3, #0	@ 00015512 1a1c
.org 0x15514
	cmp r2, #0	@ 00015514 002a
.org 0x15516
	bne.n 0x1552a	@ 00015516 08d1
.org 0x15518
	movs r0, #240	@ 00015518 f020
.org 0x1551a
	str r0, [r1, #76]	@ 0001551a c864
.org 0x1551c
	str r2, [r1, #80]	@ 0001551c 0a65
.org 0x1551e
	movs r0, #128	@ 0001551e 8020
.org 0x15520
	str r0, [r1, #68]	@ 00015520 4864
.org 0x15522
	adds r0, #128	@ 00015522 8030
.org 0x15524
	str r0, [r1, #72]	@ 00015524 8864
.org 0x15526
	adds r0, r3, #1	@ 00015526 581c
.org 0x15528
	strb r0, [r1, #14]	@ 00015528 8873
.org 0x1552a
	pop {r0}	@ 0001552a 01bc
.org 0x1552c
	bx r0	@ 0001552c 0047
