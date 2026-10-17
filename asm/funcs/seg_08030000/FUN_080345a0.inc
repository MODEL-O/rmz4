@ FUN_080345a0  entry 0x080345a0  size 46
.thumb
.org 0x345a0
FUN_080345a0:
	push {r4, lr}	@ 000345a0 10b5
.org 0x345a2
	adds r4, r0, #0	@ 000345a2 041c
.org 0x345a4
	ldr r1, [pc, #40]	@ 000345a4 0a49
.org 0x345a6
	bl 0x1cf00	@ 000345a6 e8f7abfc
.org 0x345aa
	adds r0, r4, #0	@ 000345aa 201c
.org 0x345ac
	bl 0x3a308	@ 000345ac 05f0acfe
.org 0x345b0
	ldr r0, [pc, #32]	@ 000345b0 0848
.org 0x345b2
	adds r2, r4, r0	@ 000345b2 2218
.org 0x345b4
	movs r1, #0	@ 000345b4 0021
.org 0x345b6
	movs r0, #1	@ 000345b6 0120
.org 0x345b8
	strb r0, [r2, #0]	@ 000345b8 1070
.org 0x345ba
	movs r2, #129	@ 000345ba 8122
.org 0x345bc
	lsls r2, r2, #1	@ 000345bc 5200
.org 0x345be
	adds r0, r4, r2	@ 000345be a018
.org 0x345c0
	strb r1, [r0, #0]	@ 000345c0 0170
.org 0x345c2
	adds r0, r4, #0	@ 000345c2 201c
.org 0x345c4
	bl 0x345d8	@ 000345c4 00f008f8
.org 0x345c8
	pop {r4}	@ 000345c8 10bc
.org 0x345ca
	pop {r0}	@ 000345ca 01bc
.org 0x345cc
	bx r0	@ 000345cc 0047
