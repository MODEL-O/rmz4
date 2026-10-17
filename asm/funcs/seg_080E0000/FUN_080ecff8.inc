@ FUN_080ecff8  entry 0x080ecff8  size 102
.thumb
.org 0xecff8
FUN_080ecff8:
	push {r4, lr}	@ 000ecff8 10b5
.org 0xecffa
	adds r4, r0, #0	@ 000ecffa 041c
.org 0xecffc
	ldrb r0, [r4, #13]	@ 000ecffc 607b
.org 0xecffe
	cmp r0, #0	@ 000ecffe 0028
.org 0xed000
	beq.n 0xed008	@ 000ed000 02d0
.org 0xed002
	cmp r0, #1	@ 000ed002 0128
.org 0xed004
	beq.n 0xed030	@ 000ed004 14d0
.org 0xed006
	b.n 0xed058	@ 000ed006 27e0
.org 0xed008
	adds r0, r4, #0	@ 000ed008 201c
.org 0xed00a
	bl 0x1cff0	@ 000ed00a 2ff7f1ff
.org 0xed00e
	ldr r0, [pc, #80]	@ 000ed00e 1448
.org 0xed010
	ldrb r1, [r0, #10]	@ 000ed010 817a
.org 0xed012
	movs r0, #8	@ 000ed012 0820
.org 0xed014
	ands r0, r1	@ 000ed014 0840
.org 0xed016
	cmp r0, #0	@ 000ed016 0028
.org 0xed018
	beq.n 0xed058	@ 000ed018 1ed0
.org 0xed01a
	ldrb r1, [r4, #11]	@ 000ed01a e17a
.org 0xed01c
	movs r0, #247	@ 000ed01c f720
.org 0xed01e
	ands r0, r1	@ 000ed01e 0840
.org 0xed020
	strb r0, [r4, #11]	@ 000ed020 e072
.org 0xed022
	ldr r1, [pc, #64]	@ 000ed022 1049
.org 0xed024
	adds r0, r4, #0	@ 000ed024 201c
.org 0xed026
	bl 0x1cf00	@ 000ed026 2ff76bff
.org 0xed02a
	ldrb r0, [r4, #13]	@ 000ed02a 607b
.org 0xed02c
	adds r0, #1	@ 000ed02c 0130
.org 0xed02e
	strb r0, [r4, #13]	@ 000ed02e 6073
.org 0xed030
	adds r0, r4, #0	@ 000ed030 201c
.org 0xed032
	bl 0x1cff0	@ 000ed032 2ff7ddff
.org 0xed036
	adds r0, r4, #0	@ 000ed036 201c
.org 0xed038
	adds r0, #115	@ 000ed038 7330
.org 0xed03a
	ldrb r0, [r0, #0]	@ 000ed03a 0078
.org 0xed03c
	cmp r0, #3	@ 000ed03c 0328
.org 0xed03e
	bne.n 0xed058	@ 000ed03e 0bd1
.org 0xed040
	ldr r1, [pc, #36]	@ 000ed040 0949
.org 0xed042
	ldrb r0, [r4, #9]	@ 000ed042 607a
.org 0xed044
	lsls r0, r0, #2	@ 000ed044 8000
.org 0xed046
	adds r0, r0, r1	@ 000ed046 4018
.org 0xed048
	movs r1, #2	@ 000ed048 0221
.org 0xed04a
	str r1, [r4, #12]	@ 000ed04a e160
.org 0xed04c
	ldr r0, [r0, #0]	@ 000ed04c 0068
.org 0xed04e
	ldr r0, [r0, #8]	@ 000ed04e 8068
.org 0xed050
	str r0, [r4, #20]	@ 000ed050 6061
.org 0xed052
	adds r0, r4, #0	@ 000ed052 201c
.org 0xed054
	bl 0xecf58	@ 000ed054 fff780ff
.org 0xed058
	pop {r4}	@ 000ed058 10bc
.org 0xed05a
	pop {r0}	@ 000ed05a 01bc
.org 0xed05c
	bx r0	@ 000ed05c 0047
