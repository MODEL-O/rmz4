@ FUN_08098c8c  entry 0x08098c8c  size 170
.thumb
.org 0x98c8c
FUN_08098c8c:
	push {r4, r5, lr}	@ 00098c8c 30b5
.org 0x98c8e
	adds r4, r0, #0	@ 00098c8e 041c
.org 0x98c90
	ldrb r5, [r4, #15]	@ 00098c90 e57b
.org 0x98c92
	cmp r5, #0	@ 00098c92 002d
.org 0x98c94
	bne.n 0x98cc0	@ 00098c94 14d1
.org 0x98c96
	ldr r1, [pc, #160]	@ 00098c96 2849
.org 0x98c98
	bl 0x1cf00	@ 00098c98 84f732f9
.org 0x98c9c
	adds r0, r4, #0	@ 00098c9c 201c
.org 0x98c9e
	adds r0, #84	@ 00098c9e 5430
.org 0x98ca0
	adds r1, r4, #0	@ 00098ca0 211c
.org 0x98ca2
	adds r1, #188	@ 00098ca2 bc31
.org 0x98ca4
	ldrb r2, [r1, #0]	@ 00098ca4 0a78
.org 0x98ca6
	ldrb r3, [r4, #10]	@ 00098ca6 a37a
.org 0x98ca8
	lsrs r3, r3, #4	@ 00098ca8 1b09
.org 0x98caa
	movs r1, #1	@ 00098caa 0121
.org 0x98cac
	ands r3, r1	@ 00098cac 0b40
.org 0x98cae
	movs r1, #7	@ 00098cae 0721
.org 0x98cb0
	bl 0xdd574	@ 00098cb0 44f060fc
.org 0x98cb4
	str r5, [r4, #96]	@ 00098cb4 2566
.org 0x98cb6
	movs r0, #32	@ 00098cb6 2020
.org 0x98cb8
	strb r0, [r4, #18]	@ 00098cb8 a074
.org 0x98cba
	ldrb r0, [r4, #15]	@ 00098cba e07b
.org 0x98cbc
	adds r0, #1	@ 00098cbc 0130
.org 0x98cbe
	strb r0, [r4, #15]	@ 00098cbe e073
.org 0x98cc0
	adds r0, r4, #0	@ 00098cc0 201c
.org 0x98cc2
	bl 0x1cff0	@ 00098cc2 84f795f9
.org 0x98cc6
	ldr r1, [r4, #88]	@ 00098cc6 a16d
.org 0x98cc8
	ldr r0, [r4, #96]	@ 00098cc8 206e
.org 0x98cca
	adds r1, r1, r0	@ 00098cca 0918
.org 0x98ccc
	str r1, [r4, #88]	@ 00098ccc a165
.org 0x98cce
	adds r0, #64	@ 00098cce 4030
.org 0x98cd0
	str r0, [r4, #96]	@ 00098cd0 2066
.org 0x98cd2
	ldrb r0, [r4, #18]	@ 00098cd2 a07c
.org 0x98cd4
	subs r0, #1	@ 00098cd4 0138
.org 0x98cd6
	strb r0, [r4, #18]	@ 00098cd6 a074
.org 0x98cd8
	lsls r0, r0, #24	@ 00098cd8 0006
.org 0x98cda
	lsrs r0, r0, #24	@ 00098cda 000e
.org 0x98cdc
	cmp r0, #255	@ 00098cdc ff28
.org 0x98cde
	beq.n 0x98cec	@ 00098cde 05d0
.org 0x98ce0
	ldr r0, [r4, #84]	@ 00098ce0 606d
.org 0x98ce2
	bl 0x7c7c	@ 00098ce2 6ef7cbff
.org 0x98ce6
	lsls r0, r0, #16	@ 00098ce6 0004
.org 0x98ce8
	cmp r0, #0	@ 00098ce8 0028
.org 0x98cea
	beq.n 0x98d30	@ 00098cea 21d0
.org 0x98cec
	adds r5, r4, #0	@ 00098cec 251c
.org 0x98cee
	adds r5, #84	@ 00098cee 5435
.org 0x98cf0
	movs r0, #2	@ 00098cf0 0220
.org 0x98cf2
	adds r1, r5, #0	@ 00098cf2 291c
.org 0x98cf4
	bl 0xd0c88	@ 00098cf4 37f0c8ff
.org 0x98cf8
	movs r0, #42	@ 00098cf8 2a20
.org 0x98cfa
	bl 0x2b10	@ 00098cfa 69f709ff
.org 0x98cfe
	movs r0, #3	@ 00098cfe 0320
.org 0x98d00
	movs r1, #36	@ 00098d00 2421
.org 0x98d02
	adds r2, r5, #0	@ 00098d02 2a1c
.org 0x98d04
	bl 0x2ab88	@ 00098d04 91f740ff
.org 0x98d08
	ldr r2, [pc, #48]	@ 00098d08 0c4a
.org 0x98d0a
	ldrh r1, [r2, #12]	@ 00098d0a 9189
.org 0x98d0c
	ldr r0, [pc, #48]	@ 00098d0c 0c48
.org 0x98d0e
	cmp r1, r0	@ 00098d0e 8142
.org 0x98d10
	bhi.n 0x98d16	@ 00098d10 01d8
.org 0x98d12
	adds r0, r1, #1	@ 00098d12 481c
.org 0x98d14
	strh r0, [r2, #12]	@ 00098d14 9081
.org 0x98d16
	adds r0, r4, #0	@ 00098d16 201c
.org 0x98d18
	adds r1, r5, #0	@ 00098d18 291c
.org 0x98d1a
	bl 0x2abe0	@ 00098d1a 91f761ff
.org 0x98d1e
	ldr r1, [pc, #36]	@ 00098d1e 0949
.org 0x98d20
	ldrb r0, [r4, #9]	@ 00098d20 607a
.org 0x98d22
	lsls r0, r0, #2	@ 00098d22 8000
.org 0x98d24
	adds r0, r0, r1	@ 00098d24 4018
.org 0x98d26
	movs r1, #4	@ 00098d26 0421
.org 0x98d28
	str r1, [r4, #12]	@ 00098d28 e160
.org 0x98d2a
	ldr r0, [r0, #0]	@ 00098d2a 0068
.org 0x98d2c
	ldr r0, [r0, #16]	@ 00098d2c 0069
.org 0x98d2e
	str r0, [r4, #20]	@ 00098d2e 6061
.org 0x98d30
	pop {r4, r5}	@ 00098d30 30bc
.org 0x98d32
	pop {r0}	@ 00098d32 01bc
.org 0x98d34
	bx r0	@ 00098d34 0047
