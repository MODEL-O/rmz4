@ FUN_080e7cc0  entry 0x080e7cc0  size 20
.thumb
.org 0xe7cc0
FUN_080e7cc0:
	push {r4, lr}	@ 000e7cc0 10b5
.org 0xe7cc2
	adds r4, r0, #0	@ 000e7cc2 041c
.org 0xe7cc4
	ldr r1, [pc, #12]	@ 000e7cc4 0349
.org 0xe7cc6
	bl 0x1cf00	@ 000e7cc6 35f71bf9
.org 0xe7cca
	movs r0, #1	@ 000e7cca 0120
.org 0xe7ccc
	strb r0, [r4, #13]	@ 000e7ccc 6073
.org 0xe7cce
	pop {r4}	@ 000e7cce 10bc
.org 0xe7cd0
	pop {r0}	@ 000e7cd0 01bc
.org 0xe7cd2
	bx r0	@ 000e7cd2 0047
