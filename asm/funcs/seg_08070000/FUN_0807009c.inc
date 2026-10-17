@ FUN_0807009c  entry 0x0807009c  size 50
.thumb
.org 0x7009c
FUN_0807009c:
	push {r4, lr}	@ 0007009c 10b5
.org 0x7009e
	adds r4, r0, #0	@ 0007009e 041c
.org 0x700a0
	ldr r0, [r4, #20]	@ 000700a0 6069
.org 0x700a2
	movs r1, #1	@ 000700a2 0121
.org 0x700a4
	ands r0, r1	@ 000700a4 0840
.org 0x700a6
	cmp r0, #0	@ 000700a6 0028
.org 0x700a8
	beq.n 0x700c8	@ 000700a8 0ed0
.org 0x700aa
	movs r0, #73	@ 000700aa 4920
.org 0x700ac
	bl 0x6984	@ 000700ac 96f76afc
.org 0x700b0
	ldr r0, [r4, #12]	@ 000700b0 e068
.org 0x700b2
	ldr r1, [r0, #44]	@ 000700b2 c16a
.org 0x700b4
	ldr r0, [r4, #44]	@ 000700b4 e06a
.org 0x700b6
	adds r2, r0, #0	@ 000700b6 021c
.org 0x700b8
	adds r2, #180	@ 000700b8 b432
.org 0x700ba
	movs r3, #0	@ 000700ba 0023
.org 0x700bc
	ldr r1, [r1, #84]	@ 000700bc 496d
.org 0x700be
	ldr r0, [r0, #84]	@ 000700be 406d
.org 0x700c0
	cmp r1, r0	@ 000700c0 8142
.org 0x700c2
	ble.n 0x700c6	@ 000700c2 00dd
.org 0x700c4
	movs r3, #1	@ 000700c4 0123
.org 0x700c6
	strb r3, [r2, #24]	@ 000700c6 1376
.org 0x700c8
	pop {r4}	@ 000700c8 10bc
.org 0x700ca
	pop {r0}	@ 000700ca 01bc
.org 0x700cc
	bx r0	@ 000700cc 0047
