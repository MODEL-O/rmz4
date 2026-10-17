@ FUN_080690ec  entry 0x080690ec  size 158
.thumb
.org 0x690ec
FUN_080690ec:
	push {r4, r5, lr}	@ 000690ec 30b5
.org 0x690ee
	adds r4, r0, #0	@ 000690ee 041c
.org 0x690f0
	adds r5, r4, #0	@ 000690f0 251c
.org 0x690f2
	adds r5, #140	@ 000690f2 8c35
.org 0x690f4
	ldr r0, [r5, #0]	@ 000690f4 2868
.org 0x690f6
	movs r1, #1	@ 000690f6 0121
.org 0x690f8
	ands r0, r1	@ 000690f8 0840
.org 0x690fa
	cmp r0, #0	@ 000690fa 0028
.org 0x690fc
	beq.n 0x69104	@ 000690fc 02d0
.org 0x690fe
	movs r0, #82	@ 000690fe 5220
.org 0x69100
	bl 0x6984	@ 00069100 9df740fc
.org 0x69104
	ldr r0, [r5, #0]	@ 00069104 2868
.org 0x69106
	movs r1, #128	@ 00069106 8021
.org 0x69108
	lsls r1, r1, #2	@ 00069108 8900
.org 0x6910a
	ands r0, r1	@ 0006910a 0840
.org 0x6910c
	cmp r0, #0	@ 0006910c 0028
.org 0x6910e
	bne.n 0x6911c	@ 0006910e 05d1
.org 0x69110
	adds r0, r4, #0	@ 00069110 201c
.org 0x69112
	adds r0, #164	@ 00069112 a430
.org 0x69114
	movs r1, #0	@ 00069114 0021
.org 0x69116
	ldrsh r0, [r0, r1]	@ 00069116 405e
.org 0x69118
	cmp r0, #0	@ 00069118 0028
.org 0x6911a
	bne.n 0x6914c	@ 0006911a 17d1
.org 0x6911c
	ldr r0, [pc, #36]	@ 0006911c 0948
.org 0x6911e
	ldrh r1, [r0, #8]	@ 0006911e 0189
.org 0x69120
	movs r0, #8	@ 00069120 0820
.org 0x69122
	ands r0, r1	@ 00069122 0840
.org 0x69124
	cmp r0, #0	@ 00069124 0028
.org 0x69126
	bne.n 0x6914c	@ 00069126 11d1
.org 0x69128
	ldr r1, [pc, #28]	@ 00069128 0749
.org 0x6912a
	ldrb r0, [r4, #9]	@ 0006912a 607a
.org 0x6912c
	lsls r0, r0, #2	@ 0006912c 8000
.org 0x6912e
	adds r0, r0, r1	@ 0006912e 4018
.org 0x69130
	movs r1, #2	@ 00069130 0221
.org 0x69132
	str r1, [r4, #12]	@ 00069132 e160
.org 0x69134
	ldr r0, [r0, #0]	@ 00069134 0068
.org 0x69136
	ldr r0, [r0, #8]	@ 00069136 8068
.org 0x69138
	str r0, [r4, #20]	@ 00069138 6061
.org 0x6913a
	adds r0, r4, #0	@ 0006913a 201c
.org 0x6913c
	bl 0x697f0	@ 0006913c 00f058fb
.org 0x69140
	b.n 0x6918e	@ 00069140 25e0
.org 0x69142
	.byte 0x00	@ 00069142 data
.org 0x69143
	.byte 0x00	@ 00069143 data
.org 0x69144
	.byte 0x10,0xe9,0x02,0x02	@ 00069144 data
.org 0x69148
	.byte 0x70,0x7d,0x85,0x08	@ 00069148 data
.org 0x6914c
	adds r0, r4, #0	@ 0006914c 201c
.org 0x6914e
	adds r0, #140	@ 0006914e 8c30
.org 0x69150
	ldr r0, [r0, #0]	@ 00069150 0068
.org 0x69152
	movs r1, #1	@ 00069152 0121
.org 0x69154
	ands r0, r1	@ 00069154 0840
.org 0x69156
	cmp r0, #0	@ 00069156 0028
.org 0x69158
	beq.n 0x6916c	@ 00069158 08d0
.org 0x6915a
	ldr r0, [r4, #44]	@ 0006915a e06a
.org 0x6915c
	cmp r0, #0	@ 0006915c 0028
.org 0x6915e
	bne.n 0x69172	@ 0006915e 08d1
.org 0x69160
	ldr r2, [pc, #48]	@ 00069160 0c4a
.org 0x69162
	movs r0, #18	@ 00069162 1220
.org 0x69164
	adds r1, r4, #0	@ 00069164 211c
.org 0x69166
	bl 0x2adac	@ 00069166 c1f721fe
.org 0x6916a
	str r0, [r4, #44]	@ 0006916a e062
.org 0x6916c
	ldr r0, [r4, #44]	@ 0006916c e06a
.org 0x6916e
	cmp r0, #0	@ 0006916e 0028
.org 0x69170
	beq.n 0x6917e	@ 00069170 05d0
.org 0x69172
	bl 0x2b3e4	@ 00069172 c2f737f9
.org 0x69176
	cmp r0, #0	@ 00069176 0028
.org 0x69178
	beq.n 0x6917e	@ 00069178 01d0
.org 0x6917a
	movs r0, #0	@ 0006917a 0020
.org 0x6917c
	str r0, [r4, #44]	@ 0006917c e062
.org 0x6917e
	ldr r0, [pc, #24]	@ 0006917e 0648
.org 0x69180
	ldrb r1, [r4, #13]	@ 00069180 617b
.org 0x69182
	lsls r1, r1, #2	@ 00069182 8900
.org 0x69184
	adds r1, r1, r0	@ 00069184 0918
.org 0x69186
	ldr r1, [r1, #0]	@ 00069186 0968
.org 0x69188
	adds r0, r4, #0	@ 00069188 201c
