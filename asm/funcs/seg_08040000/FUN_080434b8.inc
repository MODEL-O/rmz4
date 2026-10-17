@ FUN_080434b8  entry 0x080434b8  size 40
.thumb
.org 0x434b8
FUN_080434b8:
	push {r4, lr}	@ 000434b8 10b5
.org 0x434ba
	adds r4, r0, #0	@ 000434ba 041c
.org 0x434bc
	adds r0, #189	@ 000434bc bd30
.org 0x434be
	ldrb r0, [r0, #0]	@ 000434be 0078
.org 0x434c0
	cmp r0, #0	@ 000434c0 0028
.org 0x434c2
	beq.n 0x434d4	@ 000434c2 07d0
.org 0x434c4
	adds r1, r4, #0	@ 000434c4 211c
.org 0x434c6
	adds r1, #84	@ 000434c6 5431
.org 0x434c8
	movs r0, #1	@ 000434c8 0120
.org 0x434ca
	bl 0xd0c88	@ 000434ca 8df0ddfb
.org 0x434ce
	movs r0, #53	@ 000434ce 3520
.org 0x434d0
	bl 0x2b10	@ 000434d0 bff71efb
.org 0x434d4
	adds r0, r4, #0	@ 000434d4 201c
.org 0x434d6
	bl 0x3a8b4	@ 000434d6 f7f7edf9
.org 0x434da
	pop {r4}	@ 000434da 10bc
.org 0x434dc
	pop {r0}	@ 000434dc 01bc
.org 0x434de
	bx r0	@ 000434de 0047
