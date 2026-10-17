@ FUN_080937c0  entry 0x080937c0  size 38
.thumb
.org 0x937c0
FUN_080937c0:
	push {r4, lr}	@ 000937c0 10b5
.org 0x937c2
	adds r4, r0, #0	@ 000937c2 041c
.org 0x937c4
	bl 0x94db4	@ 000937c4 01f0f6fa
.org 0x937c8
	adds r1, r4, #0	@ 000937c8 211c
.org 0x937ca
	adds r1, #184	@ 000937ca b831
.org 0x937cc
	movs r2, #0	@ 000937cc 0022
.org 0x937ce
	strb r0, [r1, #0]	@ 000937ce 0870
.org 0x937d0
	movs r0, #1	@ 000937d0 0120
.org 0x937d2
	strb r0, [r4, #14]	@ 000937d2 a073
.org 0x937d4
	strb r2, [r4, #15]	@ 000937d4 e273
.org 0x937d6
	ldr r0, [pc, #16]	@ 000937d6 0448
.org 0x937d8
	ldr r1, [r0, #4]	@ 000937d8 4168
.org 0x937da
	adds r0, r4, #0	@ 000937da 201c
.org 0x937dc
	bl 0x128f80	@ 000937dc 95f0d0fb
.org 0x937e0
	pop {r4}	@ 000937e0 10bc
.org 0x937e2
	pop {r0}	@ 000937e2 01bc
.org 0x937e4
	bx r0	@ 000937e4 0047
