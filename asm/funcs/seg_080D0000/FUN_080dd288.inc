@ FUN_080dd288  entry 0x080dd288  size 48
.thumb
.org 0xdd288
FUN_080dd288:
	push {r4, lr}	@ 000dd288 10b5
.org 0xdd28a
	adds r4, r0, #0	@ 000dd28a 041c
.org 0xdd28c
	bl 0x1cff0	@ 000dd28c 3ff7b0fe
.org 0xdd290
	adds r0, r4, #0	@ 000dd290 201c
.org 0xdd292
	adds r0, #115	@ 000dd292 7330
.org 0xdd294
	ldrb r0, [r0, #0]	@ 000dd294 0078
.org 0xdd296
	cmp r0, #3	@ 000dd296 0328
.org 0xdd298
	bne.n 0xdd2b2	@ 000dd298 0bd1
.org 0xdd29a
	ldr r1, [pc, #28]	@ 000dd29a 0749
.org 0xdd29c
	ldrb r0, [r4, #9]	@ 000dd29c 607a
.org 0xdd29e
	lsls r0, r0, #2	@ 000dd29e 8000
.org 0xdd2a0
	adds r0, r0, r1	@ 000dd2a0 4018
.org 0xdd2a2
	movs r1, #2	@ 000dd2a2 0221
.org 0xdd2a4
	str r1, [r4, #12]	@ 000dd2a4 e160
.org 0xdd2a6
	ldr r0, [r0, #0]	@ 000dd2a6 0068
.org 0xdd2a8
	ldr r0, [r0, #8]	@ 000dd2a8 8068
.org 0xdd2aa
	str r0, [r4, #20]	@ 000dd2aa 6061
.org 0xdd2ac
	adds r0, r4, #0	@ 000dd2ac 201c
.org 0xdd2ae
	bl 0xdcdf0	@ 000dd2ae fff79ffd
.org 0xdd2b2
	pop {r4}	@ 000dd2b2 10bc
.org 0xdd2b4
	pop {r0}	@ 000dd2b4 01bc
.org 0xdd2b6
	bx r0	@ 000dd2b6 0047
