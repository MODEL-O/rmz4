@ FUN_080ecb04  entry 0x080ecb04  size 58
.thumb
.org 0xecb04
FUN_080ecb04:
	push {r4, lr}	@ 000ecb04 10b5
.org 0xecb06
	adds r4, r0, #0	@ 000ecb06 041c
.org 0xecb08
	ldrb r0, [r4, #15]	@ 000ecb08 e07b
.org 0xecb0a
	cmp r0, #0	@ 000ecb0a 0028
.org 0xecb0c
	bne.n 0xecb1e	@ 000ecb0c 07d1
.org 0xecb0e
	movs r1, #156	@ 000ecb0e 9c21
.org 0xecb10
	lsls r1, r1, #6	@ 000ecb10 8901
.org 0xecb12
	adds r0, r4, #0	@ 000ecb12 201c
.org 0xecb14
	bl 0x1cf00	@ 000ecb14 30f7f4f9
.org 0xecb18
	ldrb r0, [r4, #15]	@ 000ecb18 e07b
.org 0xecb1a
	adds r0, #1	@ 000ecb1a 0130
.org 0xecb1c
	strb r0, [r4, #15]	@ 000ecb1c e073
.org 0xecb1e
	adds r0, r4, #0	@ 000ecb1e 201c
.org 0xecb20
	bl 0x1cff0	@ 000ecb20 30f766fa
.org 0xecb24
	adds r0, r4, #0	@ 000ecb24 201c
.org 0xecb26
	adds r0, #180	@ 000ecb26 b430
.org 0xecb28
	ldrb r0, [r0, #0]	@ 000ecb28 0078
.org 0xecb2a
	cmp r0, #0	@ 000ecb2a 0028
.org 0xecb2c
	beq.n 0xecb38	@ 000ecb2c 04d0
.org 0xecb2e
	movs r1, #0	@ 000ecb2e 0021
.org 0xecb30
	movs r0, #1	@ 000ecb30 0120
.org 0xecb32
	strb r0, [r4, #13]	@ 000ecb32 6073
.org 0xecb34
	strb r1, [r4, #14]	@ 000ecb34 a173
.org 0xecb36
	strb r1, [r4, #15]	@ 000ecb36 e173
.org 0xecb38
	pop {r4}	@ 000ecb38 10bc
.org 0xecb3a
	pop {r0}	@ 000ecb3a 01bc
.org 0xecb3c
	bx r0	@ 000ecb3c 0047
