@ FUN_080f6fd8  entry 0x080f6fd8  size 66
.thumb
.org 0xf6fd8
FUN_080f6fd8:
	push {r4, r5, lr}	@ 000f6fd8 30b5
.org 0xf6fda
	adds r4, r0, #0	@ 000f6fda 041c
.org 0xf6fdc
	ldr r5, [r4, #40]	@ 000f6fdc a56a
.org 0xf6fde
	ldrb r0, [r4, #15]	@ 000f6fde e07b
.org 0xf6fe0
	cmp r0, #0	@ 000f6fe0 0028
.org 0xf6fe2
	bne.n 0xf6ff4	@ 000f6fe2 07d1
.org 0xf6fe4
	movs r1, #200	@ 000f6fe4 c821
.org 0xf6fe6
	lsls r1, r1, #7	@ 000f6fe6 c901
.org 0xf6fe8
	adds r0, r4, #0	@ 000f6fe8 201c
.org 0xf6fea
	bl 0x1cf00	@ 000f6fea 25f789ff
.org 0xf6fee
	ldrb r0, [r4, #15]	@ 000f6fee e07b
.org 0xf6ff0
	adds r0, #1	@ 000f6ff0 0130
.org 0xf6ff2
	strb r0, [r4, #15]	@ 000f6ff2 e073
.org 0xf6ff4
	adds r0, r4, #0	@ 000f6ff4 201c
.org 0xf6ff6
	bl 0x1cff0	@ 000f6ff6 25f7fbff
.org 0xf6ffa
	adds r0, r4, #0	@ 000f6ffa 201c
.org 0xf6ffc
	bl 0xf74c4	@ 000f6ffc 00f062fa
.org 0xf7000
	adds r0, r5, #0	@ 000f7000 281c
.org 0xf7002
	adds r0, #180	@ 000f7002 b430
.org 0xf7004
	ldrb r0, [r0, #0]	@ 000f7004 0078
.org 0xf7006
	cmp r0, #0	@ 000f7006 0028
.org 0xf7008
	beq.n 0xf7014	@ 000f7008 04d0
.org 0xf700a
	movs r1, #0	@ 000f700a 0021
.org 0xf700c
	movs r0, #1	@ 000f700c 0120
.org 0xf700e
	strb r0, [r4, #13]	@ 000f700e 6073
.org 0xf7010
	strb r1, [r4, #14]	@ 000f7010 a173
.org 0xf7012
	strb r1, [r4, #15]	@ 000f7012 e173
.org 0xf7014
	pop {r4, r5}	@ 000f7014 30bc
.org 0xf7016
	pop {r0}	@ 000f7016 01bc
.org 0xf7018
	bx r0	@ 000f7018 0047
