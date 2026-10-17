@ FUN_081199ac  entry 0x081199ac  size 66
.thumb
.org 0x1199ac
FUN_081199ac:
	push {r4, lr}	@ 001199ac 10b5
.org 0x1199ae
	adds r4, r0, #0	@ 001199ae 041c
.org 0x1199b0
	adds r2, r4, #0	@ 001199b0 221c
.org 0x1199b2
	adds r2, #180	@ 001199b2 b432
.org 0x1199b4
	ldrb r3, [r2, #8]	@ 001199b4 137a
.org 0x1199b6
	cmp r3, #255	@ 001199b6 ff2b
.org 0x1199b8
	beq.n 0x1199cc	@ 001199b8 08d0
.org 0x1199ba
	ldrb r0, [r2, #9]	@ 001199ba 507a
.org 0x1199bc
	adds r1, r0, #0	@ 001199bc 011c
.org 0x1199be
	cmp r1, #255	@ 001199be ff29
.org 0x1199c0
	beq.n 0x1199cc	@ 001199c0 04d0
.org 0x1199c2
	cmp r3, r1	@ 001199c2 8b42
.org 0x1199c4
	bcs.n 0x1199cc	@ 001199c4 02d2
.org 0x1199c6
	adds r1, r3, #0	@ 001199c6 191c
.org 0x1199c8
	strb r0, [r2, #8]	@ 001199c8 1072
.org 0x1199ca
	strb r1, [r2, #9]	@ 001199ca 5172
.org 0x1199cc
	adds r0, r4, #0	@ 001199cc 201c
.org 0x1199ce
	adds r0, #180	@ 001199ce b430
.org 0x1199d0
	ldrb r2, [r0, #10]	@ 001199d0 827a
.org 0x1199d2
	cmp r2, #255	@ 001199d2 ff2a
.org 0x1199d4
	beq.n 0x1199e8	@ 001199d4 08d0
.org 0x1199d6
	ldrb r3, [r0, #11]	@ 001199d6 c37a
.org 0x1199d8
	adds r1, r3, #0	@ 001199d8 191c
.org 0x1199da
	cmp r1, #255	@ 001199da ff29
.org 0x1199dc
	beq.n 0x1199e8	@ 001199dc 04d0
.org 0x1199de
	cmp r2, r1	@ 001199de 8a42
.org 0x1199e0
	bcs.n 0x1199e8	@ 001199e0 02d2
.org 0x1199e2
	adds r1, r2, #0	@ 001199e2 111c
.org 0x1199e4
	strb r3, [r0, #10]	@ 001199e4 8372
.org 0x1199e6
	strb r1, [r0, #11]	@ 001199e6 c172
.org 0x1199e8
	pop {r4}	@ 001199e8 10bc
.org 0x1199ea
	pop {r0}	@ 001199ea 01bc
.org 0x1199ec
	bx r0	@ 001199ec 0047
