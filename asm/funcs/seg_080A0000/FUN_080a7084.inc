@ FUN_080a7084  entry 0x080a7084  size 280
.thumb
.org 0xa7084
FUN_080a7084:
	push {r4, r5, lr}	@ 000a7084 30b5
.org 0xa7086
	adds r4, r0, #0	@ 000a7086 041c
.org 0xa7088
	ldrb r0, [r4, #14]	@ 000a7088 a07b
.org 0xa708a
	cmp r0, #0	@ 000a708a 0028
.org 0xa708c
	bne.n 0xa70be	@ 000a708c 17d1
.org 0xa708e
	ldr r1, [pc, #28]	@ 000a708e 0749
.org 0xa7090
	adds r0, r4, #0	@ 000a7090 201c
.org 0xa7092
	bl 0x1cf00	@ 000a7092 75f735ff
.org 0xa7096
	ldrb r1, [r4, #10]	@ 000a7096 a17a
.org 0xa7098
	movs r0, #16	@ 000a7098 1020
.org 0xa709a
	ands r0, r1	@ 000a709a 0840
.org 0xa709c
	cmp r0, #0	@ 000a709c 0028
.org 0xa709e
	beq.n 0xa70b0	@ 000a709e 07d0
.org 0xa70a0
	movs r0, #224	@ 000a70a0 e020
.org 0xa70a2
	lsls r0, r0, #1	@ 000a70a2 4000
.org 0xa70a4
	str r0, [r4, #92]	@ 000a70a4 e065
.org 0xa70a6
	movs r0, #128	@ 000a70a6 8020
.org 0xa70a8
	lsls r0, r0, #5	@ 000a70a8 4001
.org 0xa70aa
	b.n 0xa70b6	@ 000a70aa 04e0
.org 0xa70ac
	.byte 0x03,0x8b,0x00,0x00	@ 000a70ac data
.org 0xa70b0
	ldr r0, [pc, #128]	@ 000a70b0 2048
.org 0xa70b2
	str r0, [r4, #92]	@ 000a70b2 e065
.org 0xa70b4
	ldr r0, [pc, #128]	@ 000a70b4 2048
.org 0xa70b6
	str r0, [r4, #100]	@ 000a70b6 6066
.org 0xa70b8
	ldrb r0, [r4, #14]	@ 000a70b8 a07b
.org 0xa70ba
	adds r0, #1	@ 000a70ba 0130
.org 0xa70bc
	strb r0, [r4, #14]	@ 000a70bc a073
.org 0xa70be
	adds r0, r4, #0	@ 000a70be 201c
.org 0xa70c0
	bl 0x1cff0	@ 000a70c0 75f796ff
.org 0xa70c4
	adds r0, r4, #0	@ 000a70c4 201c
.org 0xa70c6
	adds r0, #113	@ 000a70c6 7130
.org 0xa70c8
	ldrb r0, [r0, #0]	@ 000a70c8 0078
.org 0xa70ca
	lsls r0, r0, #24	@ 000a70ca 0006
.org 0xa70cc
	asrs r0, r0, #24	@ 000a70cc 0016
.org 0xa70ce
	cmp r0, #2	@ 000a70ce 0228
.org 0xa70d0
	beq.n 0xa70d6	@ 000a70d0 01d0
.org 0xa70d2
	cmp r0, #6	@ 000a70d2 0628
.org 0xa70d4
	bne.n 0xa70ea	@ 000a70d4 09d1
.org 0xa70d6
	adds r0, r4, #0	@ 000a70d6 201c
.org 0xa70d8
	adds r0, #114	@ 000a70d8 7230
.org 0xa70da
	ldrb r0, [r0, #0]	@ 000a70da 0078
.org 0xa70dc
	lsls r0, r0, #24	@ 000a70dc 0006
.org 0xa70de
	asrs r0, r0, #24	@ 000a70de 0016
.org 0xa70e0
	cmp r0, #1	@ 000a70e0 0128
.org 0xa70e2
	bgt.n 0xa70ea	@ 000a70e2 02dc
.org 0xa70e4
	ldr r0, [pc, #84]	@ 000a70e4 1548
.org 0xa70e6
	bl 0x2b10	@ 000a70e6 5bf713fd
.org 0xa70ea
	ldr r0, [r4, #84]	@ 000a70ea 606d
.org 0xa70ec
	ldr r1, [r4, #92]	@ 000a70ec e16d
.org 0xa70ee
	adds r0, r0, r1	@ 000a70ee 4018
.org 0xa70f0
	str r0, [r4, #84]	@ 000a70f0 6065
.org 0xa70f2
	ldr r1, [r4, #88]	@ 000a70f2 a16d
.org 0xa70f4
	bl 0x8534	@ 000a70f4 61f71efa
.org 0xa70f8
	adds r3, r0, #0	@ 000a70f8 031c
.org 0xa70fa
	str r3, [r4, #88]	@ 000a70fa a365
.org 0xa70fc
	ldrb r5, [r4, #17]	@ 000a70fc 657c
.org 0xa70fe
	cmp r5, #0	@ 000a70fe 002d
.org 0xa7100
	bne.n 0xa7144	@ 000a7100 20d1
.org 0xa7102
	ldr r0, [pc, #60]	@ 000a7102 0f48
.org 0xa7104
	ldr r2, [r0, #0]	@ 000a7104 0268
.org 0xa7106
	ldr r0, [r2, #84]	@ 000a7106 506d
.org 0xa7108
	ldr r1, [r4, #84]	@ 000a7108 616d
.org 0xa710a
	subs r0, r0, r1	@ 000a710a 401a
.org 0xa710c
	movs r1, #160	@ 000a710c a021
.org 0xa710e
	lsls r1, r1, #6	@ 000a710e 8901
.org 0xa7110
	adds r0, r0, r1	@ 000a7110 4018
.org 0xa7112
	movs r1, #160	@ 000a7112 a021
.org 0xa7114
	lsls r1, r1, #7	@ 000a7114 c901
.org 0xa7116
	cmp r0, r1	@ 000a7116 8842
.org 0xa7118
	bhi.n 0xa716c	@ 000a7118 28d8
.org 0xa711a
	ldr r0, [r2, #88]	@ 000a711a 906d
.org 0xa711c
	subs r0, r0, r3	@ 000a711c c01a
.org 0xa711e
	movs r2, #192	@ 000a711e c022
.org 0xa7120
	lsls r2, r2, #6	@ 000a7120 9201
.org 0xa7122
	adds r0, r0, r2	@ 000a7122 8018
.org 0xa7124
	movs r1, #192	@ 000a7124 c021
.org 0xa7126
	lsls r1, r1, #7	@ 000a7126 c901
.org 0xa7128
	cmp r0, r1	@ 000a7128 8842
.org 0xa712a
	bhi.n 0xa716c	@ 000a712a 1fd8
.org 0xa712c
	movs r0, #2	@ 000a712c 0220
.org 0xa712e
	strb r0, [r4, #13]	@ 000a712e 6073
.org 0xa7130
	strb r5, [r4, #14]	@ 000a7130 a573
.org 0xa7132
	b.n 0xa71aa	@ 000a7132 3ae0
.org 0xa7134
	.byte 0x40,0xfe,0xff,0xff	@ 000a7134 data
.org 0xa7138
	.byte 0x00,0xf0,0xff,0xff	@ 000a7138 data
.org 0xa713c
	.byte 0x37,0x01,0x00,0x00	@ 000a713c data
.org 0xa7140
	.byte 0xf0,0xdb,0x02,0x02	@ 000a7140 data
.org 0xa7144
	adds r0, r4, #0	@ 000a7144 201c
.org 0xa7146
	adds r0, #180	@ 000a7146 b430
.org 0xa7148
	ldr r0, [r0, #0]	@ 000a7148 0068
.org 0xa714a
	ldr r1, [r4, #84]	@ 000a714a 616d
.org 0xa714c
	subs r2, r0, r1	@ 000a714c 421a
.org 0xa714e
	cmp r2, #0	@ 000a714e 002a
.org 0xa7150
	blt.n 0xa715c	@ 000a7150 04db
.org 0xa7152
	movs r0, #140	@ 000a7152 8c20
.org 0xa7154
	lsls r0, r0, #7	@ 000a7154 c001
.org 0xa7156
	cmp r2, r0	@ 000a7156 8242
.org 0xa7158
	bgt.n 0xa7166	@ 000a7158 05dc
.org 0xa715a
	b.n 0xa716c	@ 000a715a 07e0
.org 0xa715c
	subs r1, r1, r0	@ 000a715c 091a
.org 0xa715e
	movs r0, #140	@ 000a715e 8c20
.org 0xa7160
	lsls r0, r0, #7	@ 000a7160 c001
.org 0xa7162
	cmp r1, r0	@ 000a7162 8142
.org 0xa7164
	ble.n 0xa716c	@ 000a7164 02dd
.org 0xa7166
	movs r1, #0	@ 000a7166 0021
.org 0xa7168
	movs r0, #2	@ 000a7168 0220
.org 0xa716a
	b.n 0xa71a6	@ 000a716a 1ce0
.org 0xa716c
	ldr r0, [r4, #84]	@ 000a716c 606d
.org 0xa716e
	ldr r1, [r4, #100]	@ 000a716e 616e
.org 0xa7170
	adds r0, r0, r1	@ 000a7170 4018
.org 0xa7172
	ldr r1, [r4, #88]	@ 000a7172 a16d
.org 0xa7174
	ldr r2, [pc, #56]	@ 000a7174 0e4a
.org 0xa7176
	adds r1, r1, r2	@ 000a7176 8918
.org 0xa7178
	bl 0x7c7c	@ 000a7178 60f780fd
.org 0xa717c
	lsls r0, r0, #16	@ 000a717c 0004
.org 0xa717e
	cmp r0, #0	@ 000a717e 0028
.org 0xa7180
	beq.n 0xa718a	@ 000a7180 03d0
.org 0xa7182
	movs r1, #0	@ 000a7182 0021
.org 0xa7184
	movs r0, #4	@ 000a7184 0420
.org 0xa7186
	strb r0, [r4, #13]	@ 000a7186 6073
.org 0xa7188
	strb r1, [r4, #14]	@ 000a7188 a173
.org 0xa718a
	ldr r0, [r4, #84]	@ 000a718a 606d
.org 0xa718c
	ldr r1, [r4, #100]	@ 000a718c 616e
.org 0xa718e
	adds r0, r0, r1	@ 000a718e 4018
.org 0xa7190
	ldr r1, [r4, #88]	@ 000a7190 a16d
.org 0xa7192
	movs r2, #128	@ 000a7192 8022
.org 0xa7194
	lsls r2, r2, #5	@ 000a7194 5201
.org 0xa7196
	adds r1, r1, r2	@ 000a7196 8918
.org 0xa7198
	bl 0x7c7c	@ 000a7198 60f770fd
