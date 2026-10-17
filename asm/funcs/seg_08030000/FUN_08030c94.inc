@ FUN_08030c94  entry 0x08030c94  size 106
.thumb
.org 0x30c94
FUN_08030c94:
	push {r4, r5, lr}	@ 00030c94 30b5
.org 0x30c96
	adds r4, r0, #0	@ 00030c96 041c
.org 0x30c98
	adds r5, r4, #0	@ 00030c98 251c
.org 0x30c9a
	adds r5, #180	@ 00030c9a b435
.org 0x30c9c
	movs r1, #150	@ 00030c9c 9621
.org 0x30c9e
	lsls r1, r1, #2	@ 00030c9e 8900
.org 0x30ca0
	adds r0, r4, r1	@ 00030ca0 6018
.org 0x30ca2
	ldr r0, [r0, #0]	@ 00030ca2 0068
.org 0x30ca4
	movs r1, #4	@ 00030ca4 0421
.org 0x30ca6
	ands r0, r1	@ 00030ca6 0840
.org 0x30ca8
	cmp r0, #0	@ 00030ca8 0028
.org 0x30caa
	beq.n 0x30cee	@ 00030caa 20d0
.org 0x30cac
	movs r0, #157	@ 00030cac 9d20
.org 0x30cae
	lsls r0, r0, #1	@ 00030cae 4000
.org 0x30cb0
	adds r2, r4, r0	@ 00030cb0 2218
.org 0x30cb2
	movs r1, #0	@ 00030cb2 0021
.org 0x30cb4
	movs r0, #28	@ 00030cb4 1c20
.org 0x30cb6
	strb r0, [r2, #0]	@ 00030cb6 1070
.org 0x30cb8
	ldr r2, [pc, #68]	@ 00030cb8 114a
.org 0x30cba
	adds r0, r4, r2	@ 00030cba a018
.org 0x30cbc
	strb r1, [r0, #0]	@ 00030cbc 0170
.org 0x30cbe
	movs r1, #192	@ 00030cbe c021
.org 0x30cc0
	lsls r1, r1, #2	@ 00030cc0 8900
.org 0x30cc2
	adds r0, r4, #0	@ 00030cc2 201c
.org 0x30cc4
	bl 0x1cf00	@ 00030cc4 ecf71cf9
.org 0x30cc8
	adds r0, r4, #0	@ 00030cc8 201c
.org 0x30cca
	adds r0, #84	@ 00030cca 5430
.org 0x30ccc
	ldrb r2, [r4, #10]	@ 00030ccc a27a
.org 0x30cce
	lsrs r2, r2, #4	@ 00030cce 1209
.org 0x30cd0
	movs r1, #1	@ 00030cd0 0121
.org 0x30cd2
	ands r2, r1	@ 00030cd2 0a40
.org 0x30cd4
	movs r1, #0	@ 00030cd4 0021
.org 0x30cd6
	bl 0xd1bcc	@ 00030cd6 a0f079ff
.org 0x30cda
	ldr r0, [r5, #84]	@ 00030cda 686d
.org 0x30cdc
	cmp r0, #0	@ 00030cdc 0028
.org 0x30cde
	bne.n 0x30ce8	@ 00030cde 03d1
.org 0x30ce0
	adds r0, r4, #0	@ 00030ce0 201c
.org 0x30ce2
	bl 0xd2690	@ 00030ce2 a1f0d5fc
.org 0x30ce6
	str r0, [r5, #84]	@ 00030ce6 6865
.org 0x30ce8
	movs r0, #8	@ 00030ce8 0820
.org 0x30cea
	bl 0x2b10	@ 00030cea d1f711ff
.org 0x30cee
	movs r0, #1	@ 00030cee 0120
.org 0x30cf0
	strb r0, [r4, #15]	@ 00030cf0 e073
.org 0x30cf2
	adds r0, r4, #0	@ 00030cf2 201c
.org 0x30cf4
	bl 0x30d04	@ 00030cf4 00f006f8
.org 0x30cf8
	pop {r4, r5}	@ 00030cf8 30bc
.org 0x30cfa
	pop {r0}	@ 00030cfa 01bc
.org 0x30cfc
	bx r0	@ 00030cfc 0047
