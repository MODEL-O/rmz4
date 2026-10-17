@ FUN_080cf010  entry 0x080cf010  size 116
.thumb
.org 0xcf010
FUN_080cf010:
	push {r4, lr}	@ 000cf010 10b5
.org 0xcf012
	adds r4, r0, #0	@ 000cf012 041c
.org 0xcf014
	bl 0x1cc9c	@ 000cf014 4df742fe
.org 0xcf018
	ldrb r1, [r4, #10]	@ 000cf018 a17a
.org 0xcf01a
	movs r0, #1	@ 000cf01a 0120
.org 0xcf01c
	orrs r0, r1	@ 000cf01c 0843
.org 0xcf01e
	movs r1, #2	@ 000cf01e 0221
.org 0xcf020
	orrs r0, r1	@ 000cf020 0843
.org 0xcf022
	strb r0, [r4, #10]	@ 000cf022 a072
.org 0xcf024
	ldr r1, [pc, #56]	@ 000cf024 0e49
.org 0xcf026
	adds r0, r4, #0	@ 000cf026 201c
.org 0xcf028
	bl 0x1cf00	@ 000cf028 4df76aff
.org 0xcf02c
	adds r0, r4, #0	@ 000cf02c 201c
.org 0xcf02e
	bl 0x1cff0	@ 000cf02e 4df7dfff
.org 0xcf032
	movs r2, #0	@ 000cf032 0022
.org 0xcf034
	ldrb r1, [r4, #10]	@ 000cf034 a17a
.org 0xcf036
	movs r0, #239	@ 000cf036 ef20
.org 0xcf038
	ands r0, r1	@ 000cf038 0840
.org 0xcf03a
	strb r0, [r4, #10]	@ 000cf03a a072
.org 0xcf03c
	adds r0, r4, #0	@ 000cf03c 201c
.org 0xcf03e
	adds r0, #76	@ 000cf03e 4c30
.org 0xcf040
	strb r2, [r0, #0]	@ 000cf040 0270
.org 0xcf042
	adds r2, r4, #0	@ 000cf042 221c
.org 0xcf044
	adds r2, #74	@ 000cf044 4a32
.org 0xcf046
	ldrb r1, [r2, #0]	@ 000cf046 1178
.org 0xcf048
	movs r0, #17	@ 000cf048 1120
.org 0xcf04a
	negs r0, r0	@ 000cf04a 4042
.org 0xcf04c
	ands r0, r1	@ 000cf04c 0840
.org 0xcf04e
	strb r0, [r2, #0]	@ 000cf04e 1070
.org 0xcf050
	ldrb r0, [r4, #17]	@ 000cf050 607c
.org 0xcf052
	cmp r0, #0	@ 000cf052 0028
.org 0xcf054
	beq.n 0xcf064	@ 000cf054 06d0
.org 0xcf056
	ldr r0, [r4, #84]	@ 000cf056 606d
.org 0xcf058
	movs r1, #176	@ 000cf058 b021
.org 0xcf05a
	lsls r1, r1, #5	@ 000cf05a 4901
.org 0xcf05c
	b.n 0xcf068	@ 000cf05c 04e0
.org 0xcf05e
	.byte 0x00	@ 000cf05e data
.org 0xcf05f
	.byte 0x00	@ 000cf05f data
.org 0xcf060
	.byte 0x0a,0xc8,0x00,0x00	@ 000cf060 data
.org 0xcf064
	ldr r0, [r4, #84]	@ 000cf064 606d
.org 0xcf066
	ldr r1, [pc, #36]	@ 000cf066 0949
.org 0xcf068
	adds r0, r0, r1	@ 000cf068 4018
.org 0xcf06a
	str r0, [r4, #84]	@ 000cf06a 6065
.org 0xcf06c
	ldr r1, [pc, #32]	@ 000cf06c 0849
.org 0xcf06e
	ldrb r0, [r4, #9]	@ 000cf06e 607a
.org 0xcf070
	lsls r0, r0, #2	@ 000cf070 8000
.org 0xcf072
	adds r0, r0, r1	@ 000cf072 4018
.org 0xcf074
	movs r1, #1	@ 000cf074 0121
.org 0xcf076
	str r1, [r4, #12]	@ 000cf076 e160
.org 0xcf078
	ldr r0, [r0, #0]	@ 000cf078 0068
.org 0xcf07a
	ldr r0, [r0, #4]	@ 000cf07a 4068
.org 0xcf07c
	str r0, [r4, #20]	@ 000cf07c 6061
.org 0xcf07e
	adds r0, r4, #0	@ 000cf07e 201c
.org 0xcf080
	bl 0xceef4	@ 000cf080 fff738ff
