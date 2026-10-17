@ FUN_080d70f0  entry 0x080d70f0  size 162
.thumb
.org 0xd70f0
FUN_080d70f0:
	push {r4, r5, r6, r7, lr}	@ 000d70f0 f0b5
.org 0xd70f2
	adds r4, r0, #0	@ 000d70f2 041c
.org 0xd70f4
	adds r5, r4, #0	@ 000d70f4 251c
.org 0xd70f6
	adds r5, #84	@ 000d70f6 5435
.org 0xd70f8
	ldr r6, [pc, #28]	@ 000d70f8 074e
.org 0xd70fa
	ldrb r1, [r4, #10]	@ 000d70fa a17a
.org 0xd70fc
	movs r2, #16	@ 000d70fc 1022
.org 0xd70fe
	adds r0, r2, #0	@ 000d70fe 101c
.org 0xd7100
	ands r0, r1	@ 000d7100 0840
.org 0xd7102
	lsls r0, r0, #24	@ 000d7102 0006
.org 0xd7104
	lsrs r0, r0, #24	@ 000d7104 000e
.org 0xd7106
	negs r1, r0	@ 000d7106 4142
.org 0xd7108
	asrs r1, r1, #31	@ 000d7108 c917
.org 0xd710a
	ands r1, r2	@ 000d710a 1140
.org 0xd710c
	cmp r0, #0	@ 000d710c 0028
.org 0xd710e
	beq.n 0xd711c	@ 000d710e 05d0
.org 0xd7110
	movs r3, #1	@ 000d7110 0123
.org 0xd7112
	orrs r3, r1	@ 000d7112 0b43
.org 0xd7114
	b.n 0xd7120	@ 000d7114 04e0
.org 0xd7116
	.byte 0x00	@ 000d7116 data
.org 0xd7117
	.byte 0x00	@ 000d7117 data
.org 0xd7118
	.byte 0x54,0xea,0x85,0x08	@ 000d7118 data
.org 0xd711c
	lsls r0, r1, #24	@ 000d711c 0806
.org 0xd711e
	lsrs r3, r0, #24	@ 000d711e 030e
.org 0xd7120
	adds r0, r5, #0	@ 000d7120 281c
.org 0xd7122
	adds r1, r6, #0	@ 000d7122 311c
.org 0xd7124
	movs r2, #0	@ 000d7124 0022
.org 0xd7126
	bl 0xd4c8c	@ 000d7126 fdf7b1fd
.org 0xd712a
	adds r6, r4, #0	@ 000d712a 261c
.org 0xd712c
	adds r6, #84	@ 000d712c 5436
.org 0xd712e
	ldr r7, [pc, #32]	@ 000d712e 084f
.org 0xd7130
	ldrb r1, [r4, #10]	@ 000d7130 a17a
.org 0xd7132
	movs r2, #16	@ 000d7132 1022
.org 0xd7134
	adds r0, r2, #0	@ 000d7134 101c
.org 0xd7136
	ands r0, r1	@ 000d7136 0840
.org 0xd7138
	lsls r0, r0, #24	@ 000d7138 0006
.org 0xd713a
	lsrs r0, r0, #24	@ 000d713a 000e
.org 0xd713c
	negs r1, r0	@ 000d713c 4142
.org 0xd713e
	asrs r1, r1, #31	@ 000d713e c917
.org 0xd7140
	ands r1, r2	@ 000d7140 1140
.org 0xd7142
	adds r5, r6, #0	@ 000d7142 351c
.org 0xd7144
	cmp r0, #0	@ 000d7144 0028
.org 0xd7146
	beq.n 0xd7154	@ 000d7146 05d0
.org 0xd7148
	movs r3, #1	@ 000d7148 0123
.org 0xd714a
	orrs r3, r1	@ 000d714a 0b43
.org 0xd714c
	b.n 0xd7158	@ 000d714c 04e0
.org 0xd714e
	.byte 0x00	@ 000d714e data
.org 0xd714f
	.byte 0x00	@ 000d714f data
.org 0xd7150
	.byte 0x70,0xea,0x85,0x08	@ 000d7150 data
.org 0xd7154
	lsls r0, r1, #24	@ 000d7154 0806
.org 0xd7156
	lsrs r3, r0, #24	@ 000d7156 030e
.org 0xd7158
	adds r0, r6, #0	@ 000d7158 301c
.org 0xd715a
	adds r1, r7, #0	@ 000d715a 391c
.org 0xd715c
	movs r2, #0	@ 000d715c 0022
.org 0xd715e
	bl 0xd4c8c	@ 000d715e fdf795fd
.org 0xd7162
	movs r0, #1	@ 000d7162 0120
.org 0xd7164
	adds r1, r5, #0	@ 000d7164 291c
.org 0xd7166
	bl 0xd0c88	@ 000d7166 f9f78ffd
.org 0xd716a
	ldrb r1, [r4, #10]	@ 000d716a a17a
.org 0xd716c
	movs r0, #16	@ 000d716c 1020
.org 0xd716e
	ands r0, r1	@ 000d716e 0840
.org 0xd7170
	cmp r0, #0	@ 000d7170 0028
.org 0xd7172
	beq.n 0xd717e	@ 000d7172 04d0
.org 0xd7174
	movs r0, #2	@ 000d7174 0220
.org 0xd7176
	adds r1, r5, #0	@ 000d7176 291c
.org 0xd7178
	bl 0xd0c88	@ 000d7178 f9f786fd
.org 0xd717c
	b.n 0xd7186	@ 000d717c 03e0
.org 0xd717e
	movs r0, #2	@ 000d717e 0220
.org 0xd7180
	adds r1, r5, #0	@ 000d7180 291c
.org 0xd7182
	bl 0xd0c88	@ 000d7182 f9f781fd
.org 0xd7186
	ldr r1, [pc, #24]	@ 000d7186 0649
.org 0xd7188
	ldrb r0, [r4, #9]	@ 000d7188 607a
.org 0xd718a
	lsls r0, r0, #2	@ 000d718a 8000
.org 0xd718c
	adds r0, r0, r1	@ 000d718c 4018
.org 0xd718e
	movs r1, #4	@ 000d718e 0421
.org 0xd7190
	str r1, [r4, #12]	@ 000d7190 e160
