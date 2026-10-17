@ FUN_08104694  entry 0x08104694  size 52
.thumb
.org 0x104694
FUN_08104694:
	push {r4, lr}	@ 00104694 10b5
.org 0x104696
	adds r4, r0, #0	@ 00104696 041c
.org 0x104698
	ldr r0, [r4, #88]	@ 00104698 a06d
.org 0x10469a
	ldr r1, [r4, #96]	@ 0010469a 216e
.org 0x10469c
	adds r0, r0, r1	@ 0010469c 4018
.org 0x10469e
	str r0, [r4, #88]	@ 0010469e a065
.org 0x1046a0
	adds r0, r4, #0	@ 001046a0 201c
.org 0x1046a2
	bl 0x1cff0	@ 001046a2 18f7a5fc
.org 0x1046a6
	ldr r1, [pc, #32]	@ 001046a6 0849
.org 0x1046a8
	ldr r0, [r4, #88]	@ 001046a8 a06d
.org 0x1046aa
	movs r2, #160	@ 001046aa a022
.org 0x1046ac
	lsls r2, r2, #7	@ 001046ac d201
.org 0x1046ae
	adds r0, r0, r2	@ 001046ae 8018
.org 0x1046b0
	ldr r1, [r1, #60]	@ 001046b0 c96b
.org 0x1046b2
	subs r1, r1, r0	@ 001046b2 091a
.org 0x1046b4
	movs r0, #128	@ 001046b4 8020
.org 0x1046b6
	lsls r0, r0, #6	@ 001046b6 8001
.org 0x1046b8
	cmp r1, r0	@ 001046b8 8142
.org 0x1046ba
	ble.n 0x1046c2	@ 001046ba 02dd
.org 0x1046bc
	adds r0, r4, #0	@ 001046bc 201c
.org 0x1046be
	bl 0xe954c	@ 001046be e4f745ff
.org 0x1046c2
	pop {r4}	@ 001046c2 10bc
.org 0x1046c4
	pop {r0}	@ 001046c4 01bc
.org 0x1046c6
	bx r0	@ 001046c6 0047
