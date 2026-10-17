@ FUN_08096ca8  entry 0x08096ca8  size 134
.thumb
.org 0x96ca8
FUN_08096ca8:
	push {r4, r5, lr}	@ 00096ca8 30b5
.org 0x96caa
	adds r4, r0, #0	@ 00096caa 041c
.org 0x96cac
	adds r0, #140	@ 00096cac 8c30
.org 0x96cae
	movs r1, #0	@ 00096cae 0021
.org 0x96cb0
	str r1, [r0, #0]	@ 00096cb0 0160
.org 0x96cb2
	adds r0, #4	@ 00096cb2 0430
.org 0x96cb4
	str r1, [r0, #0]	@ 00096cb4 0160
.org 0x96cb6
	adds r0, #4	@ 00096cb6 0430
.org 0x96cb8
	strb r1, [r0, #0]	@ 00096cb8 0170
.org 0x96cba
	ldrb r1, [r4, #10]	@ 00096cba a17a
.org 0x96cbc
	movs r0, #251	@ 00096cbc fb20
.org 0x96cbe
	ands r0, r1	@ 00096cbe 0840
.org 0x96cc0
	strb r0, [r4, #10]	@ 00096cc0 a072
.org 0x96cc2
	ldrb r0, [r4, #19]	@ 00096cc2 e07c
.org 0x96cc4
	cmp r0, #0	@ 00096cc4 0028
.org 0x96cc6
	beq.n 0x96ce4	@ 00096cc6 0dd0
.org 0x96cc8
	subs r0, #1	@ 00096cc8 0138
.org 0x96cca
	strb r0, [r4, #19]	@ 00096cca e074
.org 0x96ccc
	movs r1, #255	@ 00096ccc ff21
.org 0x96cce
	ands r0, r1	@ 00096cce 0840
.org 0x96cd0
	cmp r0, #0	@ 00096cd0 0028
.org 0x96cd2
	bne.n 0x96d28	@ 00096cd2 29d1
.org 0x96cd4
	adds r1, r4, #0	@ 00096cd4 211c
.org 0x96cd6
	adds r1, #84	@ 00096cd6 5431
.org 0x96cd8
	movs r0, #1	@ 00096cd8 0120
.org 0x96cda
	bl 0xd0c88	@ 00096cda 39f0d5ff
.org 0x96cde
	movs r0, #42	@ 00096cde 2a20
.org 0x96ce0
	bl 0x2b10	@ 00096ce0 6bf716ff
.org 0x96ce4
	ldrb r0, [r4, #17]	@ 00096ce4 607c
.org 0x96ce6
	cmp r0, #0	@ 00096ce6 0028
.org 0x96ce8
	bne.n 0x96d0e	@ 00096ce8 11d1
.org 0x96cea
	adds r5, r4, #0	@ 00096cea 251c
.org 0x96cec
	adds r5, #84	@ 00096cec 5435
.org 0x96cee
	movs r0, #3	@ 00096cee 0320
.org 0x96cf0
	movs r1, #37	@ 00096cf0 2521
.org 0x96cf2
	adds r2, r5, #0	@ 00096cf2 2a1c
.org 0x96cf4
	bl 0x2ab88	@ 00096cf4 93f748ff
.org 0x96cf8
	ldr r2, [pc, #52]	@ 00096cf8 0d4a
.org 0x96cfa
	ldrh r1, [r2, #12]	@ 00096cfa 9189
.org 0x96cfc
	ldr r0, [pc, #52]	@ 00096cfc 0d48
.org 0x96cfe
	cmp r1, r0	@ 00096cfe 8142
.org 0x96d00
	bhi.n 0x96d06	@ 00096d00 01d8
.org 0x96d02
	adds r0, r1, #1	@ 00096d02 481c
.org 0x96d04
	strh r0, [r2, #12]	@ 00096d04 9081
.org 0x96d06
	adds r0, r4, #0	@ 00096d06 201c
.org 0x96d08
	adds r1, r5, #0	@ 00096d08 291c
.org 0x96d0a
	bl 0x2abe0	@ 00096d0a 93f769ff
.org 0x96d0e
	ldrb r1, [r4, #10]	@ 00096d0e a17a
.org 0x96d10
	movs r0, #254	@ 00096d10 fe20
.org 0x96d12
	ands r0, r1	@ 00096d12 0840
.org 0x96d14
	strb r0, [r4, #10]	@ 00096d14 a072
.org 0x96d16
	ldr r1, [pc, #32]	@ 00096d16 0849
.org 0x96d18
	ldrb r0, [r4, #9]	@ 00096d18 607a
.org 0x96d1a
	lsls r0, r0, #2	@ 00096d1a 8000
.org 0x96d1c
	adds r0, r0, r1	@ 00096d1c 4018
.org 0x96d1e
	movs r1, #4	@ 00096d1e 0421
.org 0x96d20
	str r1, [r4, #12]	@ 00096d20 e160
.org 0x96d22
	ldr r0, [r0, #0]	@ 00096d22 0068
.org 0x96d24
	ldr r0, [r0, #16]	@ 00096d24 0069
.org 0x96d26
	str r0, [r4, #20]	@ 00096d26 6061
.org 0x96d28
	pop {r4, r5}	@ 00096d28 30bc
.org 0x96d2a
	pop {r0}	@ 00096d2a 01bc
.org 0x96d2c
	bx r0	@ 00096d2c 0047
