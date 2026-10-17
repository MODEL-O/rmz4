@ FUN_080070c8  entry 0x080070c8  size 322
.thumb
.org 0x70c8
FUN_080070c8:
	push {r4, r5, r6, r7, lr}	@ 000070c8 f0b5
.org 0x70ca
	adds r5, r0, #0	@ 000070ca 051c
.org 0x70cc
	adds r6, r1, #0	@ 000070cc 0e1c
.org 0x70ce
	movs r0, #0	@ 000070ce 0020
.org 0x70d0
	str r0, [r6, #4]	@ 000070d0 7060
.org 0x70d2
	str r0, [r6, #0]	@ 000070d2 3060
.org 0x70d4
	ldr r0, [r5, #0]	@ 000070d4 2868
.org 0x70d6
	ldr r1, [r5, #4]	@ 000070d6 6968
.org 0x70d8
	bl 0x7770	@ 000070d8 00f04afb
.org 0x70dc
	lsls r0, r0, #24	@ 000070dc 0006
.org 0x70de
	lsrs r7, r0, #24	@ 000070de 070e
.org 0x70e0
	cmp r7, #12	@ 000070e0 0c2f
.org 0x70e2
	bhi.n 0x7190	@ 000070e2 55d8
.org 0x70e4
	ldr r0, [r5, #0]	@ 000070e4 2868
.org 0x70e6
	ldr r1, [pc, #160]	@ 000070e6 2849
.org 0x70e8
	adds r0, r0, r1	@ 000070e8 4018
.org 0x70ea
	ldr r1, [r5, #4]	@ 000070ea 6968
.org 0x70ec
	bl 0x7770	@ 000070ec 00f040fb
.org 0x70f0
	subs r0, #1	@ 000070f0 0138
.org 0x70f2
	subs r0, r7, r0	@ 000070f2 381a
.org 0x70f4
	lsls r0, r0, #24	@ 000070f4 0006
.org 0x70f6
	lsrs r0, r0, #24	@ 000070f6 000e
.org 0x70f8
	cmp r0, #2	@ 000070f8 0228
.org 0x70fa
	bls.n 0x710e	@ 000070fa 08d9
.org 0x70fc
	ldr r4, [r6, #0]	@ 000070fc 3468
.org 0x70fe
	movs r1, #240	@ 000070fe f021
.org 0x7100
	lsls r1, r1, #7	@ 00007100 c901
.org 0x7102
	adds r4, r4, r1	@ 00007102 6418
.org 0x7104
	ldr r0, [r5, #0]	@ 00007104 2868
.org 0x7106
	bl 0x129050	@ 00007106 21f1a3ff
.org 0x710a
	subs r4, r4, r0	@ 0000710a 241a
.org 0x710c
	str r4, [r6, #0]	@ 0000710c 3460
.org 0x710e
	ldr r0, [r5, #0]	@ 0000710e 2868
.org 0x7110
	movs r4, #240	@ 00007110 f024
.org 0x7112
	lsls r4, r4, #7	@ 00007112 e401
.org 0x7114
	adds r0, r0, r4	@ 00007114 0019
.org 0x7116
	ldr r1, [r5, #4]	@ 00007116 6968
.org 0x7118
	bl 0x7770	@ 00007118 00f02afb
.org 0x711c
	subs r0, #1	@ 0000711c 0138
.org 0x711e
	subs r0, r7, r0	@ 0000711e 381a
.org 0x7120
	lsls r0, r0, #24	@ 00007120 0006
.org 0x7122
	lsrs r0, r0, #24	@ 00007122 000e
.org 0x7124
	cmp r0, #2	@ 00007124 0228
.org 0x7126
	bls.n 0x7136	@ 00007126 06d9
.org 0x7128
	ldr r0, [r5, #0]	@ 00007128 2868
.org 0x712a
	adds r1, r4, #0	@ 0000712a 211c
.org 0x712c
	bl 0x129050	@ 0000712c 21f190ff
.org 0x7130
	ldr r1, [r6, #0]	@ 00007130 3168
.org 0x7132
	subs r1, r1, r0	@ 00007132 091a
.org 0x7134
	str r1, [r6, #0]	@ 00007134 3160
.org 0x7136
	ldr r0, [r5, #0]	@ 00007136 2868
.org 0x7138
	ldr r1, [r5, #4]	@ 00007138 6968
.org 0x713a
	ldr r2, [pc, #80]	@ 0000713a 144a
.org 0x713c
	adds r1, r1, r2	@ 0000713c 8918
.org 0x713e
	bl 0x7770	@ 0000713e 00f017fb
.org 0x7142
	subs r0, #1	@ 00007142 0138
.org 0x7144
	subs r0, r7, r0	@ 00007144 381a
.org 0x7146
	lsls r0, r0, #24	@ 00007146 0006
.org 0x7148
	lsrs r0, r0, #24	@ 00007148 000e
.org 0x714a
	cmp r0, #2	@ 0000714a 0228
.org 0x714c
	bls.n 0x7160	@ 0000714c 08d9
.org 0x714e
	ldr r4, [r6, #4]	@ 0000714e 7468
.org 0x7150
	movs r1, #160	@ 00007150 a021
.org 0x7152
	lsls r1, r1, #7	@ 00007152 c901
.org 0x7154
	adds r4, r4, r1	@ 00007154 6418
.org 0x7156
	ldr r0, [r5, #4]	@ 00007156 6868
.org 0x7158
	bl 0x129050	@ 00007158 21f17aff
.org 0x715c
	subs r4, r4, r0	@ 0000715c 241a
.org 0x715e
	str r4, [r6, #4]	@ 0000715e 7460
.org 0x7160
	ldr r0, [r5, #0]	@ 00007160 2868
.org 0x7162
	ldr r1, [r5, #4]	@ 00007162 6968
.org 0x7164
	movs r4, #160	@ 00007164 a024
.org 0x7166
	lsls r4, r4, #7	@ 00007166 e401
.org 0x7168
	adds r1, r1, r4	@ 00007168 0919
.org 0x716a
	bl 0x7770	@ 0000716a 00f001fb
.org 0x716e
	subs r0, #1	@ 0000716e 0138
.org 0x7170
	subs r0, r7, r0	@ 00007170 381a
.org 0x7172
	lsls r0, r0, #24	@ 00007172 0006
.org 0x7174
	lsrs r0, r0, #24	@ 00007174 000e
.org 0x7176
	cmp r0, #2	@ 00007176 0228
.org 0x7178
	bls.n 0x7214	@ 00007178 4cd9
.org 0x717a
	ldr r0, [r5, #4]	@ 0000717a 6868
.org 0x717c
	adds r1, r4, #0	@ 0000717c 211c
.org 0x717e
	bl 0x129050	@ 0000717e 21f167ff
.org 0x7182
	ldr r1, [r6, #4]	@ 00007182 7168
.org 0x7184
	b.n 0x7210	@ 00007184 44e0
.org 0x7186
	.byte 0x00	@ 00007186 data
.org 0x7187
	.byte 0x00	@ 00007187 data
.org 0x7188
	.byte 0x00,0x88,0xff,0xff	@ 00007188 data
.org 0x718c
	.byte 0x00,0xb0,0xff,0xff	@ 0000718c data
.org 0x7190
	adds r0, r7, #0	@ 00007190 381c
.org 0x7192
	subs r0, #13	@ 00007192 0d38
.org 0x7194
	lsls r0, r0, #24	@ 00007194 0006
.org 0x7196
	lsrs r0, r0, #24	@ 00007196 000e
.org 0x7198
	cmp r0, #1	@ 00007198 0128
.org 0x719a
	bhi.n 0x7204	@ 0000719a 33d8
.org 0x719c
	ldr r0, [r5, #0]	@ 0000719c 2868
.org 0x719e
	ldr r1, [pc, #96]	@ 0000719e 1849
.org 0x71a0
	adds r0, r0, r1	@ 000071a0 4018
.org 0x71a2
	ldr r1, [r5, #4]	@ 000071a2 6968
.org 0x71a4
	bl 0x7770	@ 000071a4 00f0e4fa
.org 0x71a8
	lsls r0, r0, #24	@ 000071a8 0006
.org 0x71aa
	lsrs r0, r0, #24	@ 000071aa 000e
.org 0x71ac
	cmp r7, r0	@ 000071ac 8742
.org 0x71ae
	beq.n 0x71c6	@ 000071ae 0ad0
.org 0x71b0
	cmp r0, #15	@ 000071b0 0f28
.org 0x71b2
	beq.n 0x71c6	@ 000071b2 08d0
.org 0x71b4
	ldr r4, [r6, #0]	@ 000071b4 3468
.org 0x71b6
	movs r1, #240	@ 000071b6 f021
.org 0x71b8
	lsls r1, r1, #7	@ 000071b8 c901
.org 0x71ba
	adds r4, r4, r1	@ 000071ba 6418
.org 0x71bc
	ldr r0, [r5, #0]	@ 000071bc 2868
.org 0x71be
	bl 0x129050	@ 000071be 21f147ff
.org 0x71c2
	subs r4, r4, r0	@ 000071c2 241a
.org 0x71c4
	str r4, [r6, #0]	@ 000071c4 3460
.org 0x71c6
	ldr r0, [r5, #0]	@ 000071c6 2868
.org 0x71c8
	movs r4, #240	@ 000071c8 f024
.org 0x71ca
	lsls r4, r4, #7	@ 000071ca e401
.org 0x71cc
	adds r0, r0, r4	@ 000071cc 0019
.org 0x71ce
	ldr r1, [r5, #4]	@ 000071ce 6968
.org 0x71d0
	bl 0x7770	@ 000071d0 00f0cefa
.org 0x71d4
	lsls r0, r0, #24	@ 000071d4 0006
.org 0x71d6
	lsrs r0, r0, #24	@ 000071d6 000e
.org 0x71d8
	cmp r7, r0	@ 000071d8 8742
.org 0x71da
	beq.n 0x71ee	@ 000071da 08d0
.org 0x71dc
	cmp r0, #15	@ 000071dc 0f28
.org 0x71de
	beq.n 0x71ee	@ 000071de 06d0
.org 0x71e0
	ldr r0, [r5, #0]	@ 000071e0 2868
.org 0x71e2
	adds r1, r4, #0	@ 000071e2 211c
.org 0x71e4
	bl 0x129050	@ 000071e4 21f134ff
.org 0x71e8
	ldr r1, [r6, #0]	@ 000071e8 3168
.org 0x71ea
	subs r1, r1, r0	@ 000071ea 091a
.org 0x71ec
	str r1, [r6, #0]	@ 000071ec 3160
.org 0x71ee
	ldr r0, [r5, #4]	@ 000071ee 6868
.org 0x71f0
	movs r1, #160	@ 000071f0 a021
.org 0x71f2
	lsls r1, r1, #8	@ 000071f2 0902
.org 0x71f4
	bl 0x129050	@ 000071f4 21f12cff
.org 0x71f8
	movs r1, #240	@ 000071f8 f021
.org 0x71fa
	lsls r1, r1, #8	@ 000071fa 0902
.org 0x71fc
	b.n 0x7210	@ 000071fc 08e0
.org 0x71fe
	.byte 0x00	@ 000071fe data
.org 0x71ff
	.byte 0x00	@ 000071ff data
.org 0x7200
	.byte 0x00,0x88,0xff,0xff	@ 00007200 data
.org 0x7204
	ldr r0, [r5, #4]	@ 00007204 6868
.org 0x7206
	movs r1, #160	@ 00007206 a021
.org 0x7208
	lsls r1, r1, #8	@ 00007208 0902
