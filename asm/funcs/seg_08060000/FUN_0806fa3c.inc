@ FUN_0806fa3c  entry 0x0806fa3c  size 48
.thumb
.org 0x6fa3c
FUN_0806fa3c:
	push {r4, lr}	@ 0006fa3c 10b5
.org 0x6fa3e
	adds r4, r0, #0	@ 0006fa3e 041c
.org 0x6fa40
	adds r0, #180	@ 0006fa40 b430
.org 0x6fa42
	ldrb r0, [r0, #25]	@ 0006fa42 407e
.org 0x6fa44
	cmp r0, #0	@ 0006fa44 0028
.org 0x6fa46
	beq.n 0x6fa60	@ 0006fa46 0bd0
.org 0x6fa48
	movs r0, #114	@ 0006fa48 7220
.org 0x6fa4a
	bl 0x2624	@ 0006fa4a 92f7ebfd
.org 0x6fa4e
	movs r0, #148	@ 0006fa4e 9420
.org 0x6fa50
	bl 0x2624	@ 0006fa50 92f7e8fd
.org 0x6fa54
	movs r0, #115	@ 0006fa54 7320
.org 0x6fa56
	bl 0x2624	@ 0006fa56 92f7e5fd
.org 0x6fa5a
	movs r0, #219	@ 0006fa5a db20
.org 0x6fa5c
	bl 0x2624	@ 0006fa5c 92f7e2fd
.org 0x6fa60
	adds r0, r4, #0	@ 0006fa60 201c
.org 0x6fa62
	bl 0x5036c	@ 0006fa62 e0f783fc
.org 0x6fa66
	pop {r4}	@ 0006fa66 10bc
.org 0x6fa68
	pop {r0}	@ 0006fa68 01bc
.org 0x6fa6a
	bx r0	@ 0006fa6a 0047
