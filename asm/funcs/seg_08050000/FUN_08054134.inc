@ FUN_08054134  entry 0x08054134  size 126
.thumb
.org 0x54134
FUN_08054134:
	push {r4, lr}	@ 00054134 10b5
.org 0x54136
	adds r4, r0, #0	@ 00054136 041c
.org 0x54138
	ldrb r0, [r4, #15]	@ 00054138 e07b
.org 0x5413a
	cmp r0, #0	@ 0005413a 0028
.org 0x5413c
	bne.n 0x54172	@ 0005413c 19d1
.org 0x5413e
	adds r2, r4, #0	@ 0005413e 221c
.org 0x54140
	adds r2, #196	@ 00054140 c432
.org 0x54142
	ldr r0, [r2, #0]	@ 00054142 1068
.org 0x54144
	adds r0, #184	@ 00054144 b830
.org 0x54146
	movs r1, #2	@ 00054146 0221
.org 0x54148
	strb r1, [r0, #0]	@ 00054148 0170
.org 0x5414a
	ldr r0, [r2, #0]	@ 0005414a 1068
.org 0x5414c
	adds r0, #188	@ 0005414c bc30
.org 0x5414e
	movs r3, #40	@ 0005414e 2823
.org 0x54150
	strh r3, [r0, #0]	@ 00054150 0380
.org 0x54152
	adds r2, #4	@ 00054152 0432
.org 0x54154
	ldr r0, [r2, #0]	@ 00054154 1068
.org 0x54156
	adds r0, #184	@ 00054156 b830
.org 0x54158
	movs r1, #6	@ 00054158 0621
.org 0x5415a
	strb r1, [r0, #0]	@ 0005415a 0170
.org 0x5415c
	ldr r0, [r2, #0]	@ 0005415c 1068
.org 0x5415e
	adds r0, #188	@ 0005415e bc30
.org 0x54160
	strh r3, [r0, #0]	@ 00054160 0380
.org 0x54162
	movs r1, #176	@ 00054162 b021
.org 0x54164
	lsls r1, r1, #6	@ 00054164 8901
.org 0x54166
	adds r0, r4, #0	@ 00054166 201c
.org 0x54168
	bl 0x1cf00	@ 00054168 c8f7cafe
.org 0x5416c
	ldrb r0, [r4, #15]	@ 0005416c e07b
.org 0x5416e
	adds r0, #1	@ 0005416e 0130
.org 0x54170
	strb r0, [r4, #15]	@ 00054170 e073
.org 0x54172
	adds r0, r4, #0	@ 00054172 201c
.org 0x54174
	bl 0x1cff0	@ 00054174 c8f73cff
.org 0x54178
	adds r0, r4, #0	@ 00054178 201c
.org 0x5417a
	bl 0x54fb0	@ 0005417a 00f019ff
.org 0x5417e
	adds r0, r4, #0	@ 0005417e 201c
.org 0x54180
	movs r1, #0	@ 00054180 0021
.org 0x54182
	bl 0x55068	@ 00054182 00f071ff
.org 0x54186
	adds r0, r4, #0	@ 00054186 201c
.org 0x54188
	adds r0, #196	@ 00054188 c430
.org 0x5418a
	ldr r0, [r0, #0]	@ 0005418a 0068
.org 0x5418c
	adds r0, #188	@ 0005418c bc30
.org 0x5418e
	movs r1, #0	@ 0005418e 0021
.org 0x54190
	ldrsh r0, [r0, r1]	@ 00054190 405e
.org 0x54192
	cmp r0, #0	@ 00054192 0028
.org 0x54194
	bne.n 0x541ac	@ 00054194 0ad1
.org 0x54196
	adds r0, r4, #0	@ 00054196 201c
.org 0x54198
	adds r0, #200	@ 00054198 c830
.org 0x5419a
	ldr r0, [r0, #0]	@ 0005419a 0068
.org 0x5419c
	adds r0, #188	@ 0005419c bc30
.org 0x5419e
	movs r2, #0	@ 0005419e 0022
.org 0x541a0
	ldrsh r1, [r0, r2]	@ 000541a0 815e
.org 0x541a2
	cmp r1, #0	@ 000541a2 0029
.org 0x541a4
	bne.n 0x541ac	@ 000541a4 02d1
.org 0x541a6
	movs r0, #2	@ 000541a6 0220
.org 0x541a8
	strb r0, [r4, #14]	@ 000541a8 a073
.org 0x541aa
	strb r1, [r4, #15]	@ 000541aa e173
.org 0x541ac
	pop {r4}	@ 000541ac 10bc
.org 0x541ae
	pop {r0}	@ 000541ae 01bc
.org 0x541b0
	bx r0	@ 000541b0 0047
