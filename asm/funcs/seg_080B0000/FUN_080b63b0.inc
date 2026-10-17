@ FUN_080b63b0  entry 0x080b63b0  size 36
.thumb
.org 0xb63b0
FUN_080b63b0:
	push {r4, lr}	@ 000b63b0 10b5
.org 0xb63b2
	adds r4, r0, #0	@ 000b63b2 041c
.org 0xb63b4
	ldrb r0, [r4, #15]	@ 000b63b4 e07b
.org 0xb63b6
	cmp r0, #0	@ 000b63b6 0028
.org 0xb63b8
	bne.n 0xb63c8	@ 000b63b8 06d1
.org 0xb63ba
	ldr r1, [pc, #24]	@ 000b63ba 0649
.org 0xb63bc
	adds r0, r4, #0	@ 000b63bc 201c
.org 0xb63be
	bl 0x1cf00	@ 000b63be 66f79ffd
.org 0xb63c2
	ldrb r0, [r4, #15]	@ 000b63c2 e07b
.org 0xb63c4
	adds r0, #1	@ 000b63c4 0130
.org 0xb63c6
	strb r0, [r4, #15]	@ 000b63c6 e073
.org 0xb63c8
	adds r0, r4, #0	@ 000b63c8 201c
.org 0xb63ca
	bl 0x1cff0	@ 000b63ca 66f711fe
.org 0xb63ce
	pop {r4}	@ 000b63ce 10bc
.org 0xb63d0
	pop {r0}	@ 000b63d0 01bc
.org 0xb63d2
	bx r0	@ 000b63d2 0047
