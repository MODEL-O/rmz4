@ FUN_08112f6c  entry 0x08112f6c  size 908
.thumb
.org 0x112f6c
FUN_08112f6c:
	push {r4, r5, r6, r7, lr}	@ 00112f6c f0b5
.org 0x112f6e
	mov r7, sl	@ 00112f6e 5746
.org 0x112f70
	mov r6, r9	@ 00112f70 4e46
.org 0x112f72
	mov r5, r8	@ 00112f72 4546
.org 0x112f74
	push {r5, r6, r7}	@ 00112f74 e0b4
.org 0x112f76
	sub sp, #12	@ 00112f76 83b0
.org 0x112f78
	adds r7, r0, #0	@ 00112f78 071c
.org 0x112f7a
	ldr r0, [pc, #140]	@ 00112f7a 2348
.org 0x112f7c
	ldrb r0, [r0, #0]	@ 00112f7c 0078
.org 0x112f7e
	mov sl, r0	@ 00112f7e 8246
.org 0x112f80
	movs r1, #0	@ 00112f80 0021
.org 0x112f82
	ldr r2, [pc, #136]	@ 00112f82 224a
.org 0x112f84
	adds r0, r7, r2	@ 00112f84 b818
.org 0x112f86
	ldrh r0, [r0, #0]	@ 00112f86 0088
.org 0x112f88
	cmp r0, #0	@ 00112f88 0028
.org 0x112f8a
	bne.n 0x112f9c	@ 00112f8a 07d1
.org 0x112f8c
	ldr r0, [pc, #128]	@ 00112f8c 2048
.org 0x112f8e
	ldr r0, [r0, #0]	@ 00112f8e 0068
.org 0x112f90
	cmp r0, #0	@ 00112f90 0028
.org 0x112f92
	bne.n 0x112f9c	@ 00112f92 03d1
.org 0x112f94
	ldr r0, [pc, #124]	@ 00112f94 1f48
.org 0x112f96
	ldrb r0, [r0, #0]	@ 00112f96 0078
.org 0x112f98
	cmp r0, #0	@ 00112f98 0028
.org 0x112f9a
	beq.n 0x112f9e	@ 00112f9a 00d0
.org 0x112f9c
	movs r1, #1	@ 00112f9c 0121
.org 0x112f9e
	str r1, [sp, #8]	@ 00112f9e 0291
.org 0x112fa0
	ldr r3, [pc, #116]	@ 00112fa0 1d4b
.org 0x112fa2
	adds r1, r7, r3	@ 00112fa2 f918
.org 0x112fa4
	ldr r0, [r1, #0]	@ 00112fa4 0868
.org 0x112fa6
	adds r0, #1	@ 00112fa6 0130
.org 0x112fa8
	str r0, [r1, #0]	@ 00112fa8 0860
.org 0x112faa
	movs r1, #154	@ 00112faa 9a21
.org 0x112fac
	lsls r1, r1, #4	@ 00112fac 0901
.org 0x112fae
	adds r0, r7, r1	@ 00112fae 7818
.org 0x112fb0
	bl 0x3470	@ 00112fb0 f0f65efa
.org 0x112fb4
	ldr r1, [pc, #100]	@ 00112fb4 1949
.org 0x112fb6
	movs r0, #0	@ 00112fb6 0020
.org 0x112fb8
	strb r0, [r1, #0]	@ 00112fb8 0870
.org 0x112fba
	movs r0, #0	@ 00112fba 0020
.org 0x112fbc
	ldr r1, [pc, #96]	@ 00112fbc 1849
.org 0x112fbe
	str r0, [sp, #0]	@ 00112fbe 0090
.org 0x112fc0
	ldr r2, [pc, #96]	@ 00112fc0 184a
.org 0x112fc2
	mov r0, sp	@ 00112fc2 6846
.org 0x112fc4
	bl 0x128be0	@ 00112fc4 15f00cfe
.org 0x112fc8
	ldr r5, [pc, #92]	@ 00112fc8 174d
.org 0x112fca
	ldrb r1, [r5, #8]	@ 00112fca 297a
.org 0x112fcc
	movs r0, #128	@ 00112fcc 8020
.org 0x112fce
	ands r0, r1	@ 00112fce 0840
.org 0x112fd0
	cmp r0, #0	@ 00112fd0 0028
.org 0x112fd2
	beq.n 0x113084	@ 00112fd2 57d0
.org 0x112fd4
	ldr r2, [sp, #8]	@ 00112fd4 029a
.org 0x112fd6
	cmp r2, #0	@ 00112fd6 002a
.org 0x112fd8
	bne.n 0x113084	@ 00112fd8 54d1
.org 0x112fda
	mov r3, sl	@ 00112fda 5346
.org 0x112fdc
	cmp r3, #0	@ 00112fdc 002b
.org 0x112fde
	bne.n 0x113084	@ 00112fde 51d1
.org 0x112fe0
	ldr r4, [pc, #72]	@ 00112fe0 124c
.org 0x112fe2
	ldrh r1, [r4, #0]	@ 00112fe2 2188
.org 0x112fe4
	adds r2, r1, #0	@ 00112fe4 0a1c
.org 0x112fe6
	cmp r2, #0	@ 00112fe6 002a
.org 0x112fe8
	beq.n 0x113068	@ 00112fe8 3ed0
.org 0x112fea
	movs r0, #128	@ 00112fea 8020
.org 0x112fec
	lsls r0, r0, #8	@ 00112fec 0002
.org 0x112fee
	ands r0, r1	@ 00112fee 0840
.org 0x112ff0
	cmp r0, #0	@ 00112ff0 0028
.org 0x112ff2
	beq.n 0x113034	@ 00112ff2 1fd0
.org 0x112ff4
	bl 0x2a1c	@ 00112ff4 eff612fd
.org 0x112ff8
	movs r0, #37	@ 00112ff8 2520
.org 0x112ffa
	bl 0x2b10	@ 00112ffa eff689fd
.org 0x112ffe
	ldrh r1, [r4, #0]	@ 00112ffe 2188
.org 0x113000
	ldr r0, [pc, #44]	@ 00113000 0b48
.org 0x113002
	ands r0, r1	@ 00113002 0840
.org 0x113004
	strh r0, [r4, #0]	@ 00113004 2080
.org 0x113006
	b.n 0x113058	@ 00113006 27e0
.org 0x113008
	.byte 0x00,0xdc,0x02,0x02	@ 00113008 data
.org 0x11300c
	.byte 0xdc,0x1e,0x00,0x00	@ 0011300c data
.org 0x113010
	.byte 0x30,0xdc,0x02,0x02	@ 00113010 data
.org 0x113014
	.byte 0xf4,0xdb,0x02,0x02	@ 00113014 data
.org 0x113018
	.byte 0xd8,0x1e,0x00,0x00	@ 00113018 data
.org 0x11301c
	.byte 0x04,0xdc,0x02,0x02	@ 0011301c data
.org 0x113020
	.byte 0x10,0xdc,0x02,0x02	@ 00113020 data
.org 0x113024
	.byte 0x08,0x00,0x00,0x01	@ 00113024 data
.org 0x113028
	.byte 0xb0,0xe8,0x02,0x02	@ 00113028 data
.org 0x11302c
	.byte 0xec,0xdb,0x02,0x02	@ 0011302c data
.org 0x113030
	.byte 0xff,0x7f,0x00,0x00	@ 00113030 data
.org 0x113034
	cmp r2, #179	@ 00113034 b32a
.org 0x113036
	bhi.n 0x113058	@ 00113036 0fd8
.org 0x113038
	movs r0, #37	@ 00113038 2520
.org 0x11303a
	bl 0x2bb4	@ 0011303a eff6bbfd
.org 0x11303e
	cmp r0, #0	@ 0011303e 0028
.org 0x113040
	beq.n 0x113048	@ 00113040 02d0
.org 0x113042
	movs r0, #37	@ 00113042 2520
.org 0x113044
	bl 0x2b5c	@ 00113044 eff68afd
.org 0x113048
	movs r0, #38	@ 00113048 2620
.org 0x11304a
	bl 0x2bb4	@ 0011304a eff6b3fd
.org 0x11304e
	cmp r0, #0	@ 0011304e 0028
.org 0x113050
	bne.n 0x113058	@ 00113050 02d1
.org 0x113052
	movs r0, #38	@ 00113052 2620
.org 0x113054
	bl 0x2b10	@ 00113054 eff65cfd
.org 0x113058
	ldr r1, [pc, #8]	@ 00113058 0249
.org 0x11305a
	ldrh r0, [r1, #0]	@ 0011305a 0888
.org 0x11305c
	subs r0, #1	@ 0011305c 0138
.org 0x11305e
	strh r0, [r1, #0]	@ 0011305e 0880
.org 0x113060
	b.n 0x113084	@ 00113060 10e0
.org 0x113062
	.byte 0x00	@ 00113062 data
.org 0x113063
	.byte 0x00	@ 00113063 data
.org 0x113064
	.byte 0xec,0xdb,0x02,0x02	@ 00113064 data
.org 0x113068
	bl 0x2a50	@ 00113068 eff6f2fc
.org 0x11306c
	ldrb r0, [r5, #8]	@ 0011306c 287a
.org 0x11306e
	movs r1, #127	@ 0011306e 7f21
.org 0x113070
	ands r1, r0	@ 00113070 0140
.org 0x113072
	strb r1, [r5, #8]	@ 00113072 2972
.org 0x113074
	movs r0, #38	@ 00113074 2620
.org 0x113076
	bl 0x2bb4	@ 00113076 eff69dfd
.org 0x11307a
	cmp r0, #0	@ 0011307a 0028
.org 0x11307c
	beq.n 0x113084	@ 0011307c 02d0
.org 0x11307e
	movs r0, #38	@ 0011307e 2620
.org 0x113080
	bl 0x2b5c	@ 00113080 eff66cfd
.org 0x113084
	movs r0, #0	@ 00113084 0020
.org 0x113086
	ldr r1, [sp, #8]	@ 00113086 0299
.org 0x113088
	cmp r1, #0	@ 00113088 0029
.org 0x11308a
	bne.n 0x113092	@ 0011308a 02d1
.org 0x11308c
	mov r2, sl	@ 0011308c 5246
.org 0x11308e
	cmp r2, #0	@ 0011308e 002a
.org 0x113090
	beq.n 0x113094	@ 00113090 00d0
.org 0x113092
	movs r0, #1	@ 00113092 0120
.org 0x113094
	bl 0x1f2e0	@ 00113094 0cf724f9
.org 0x113098
	cmp r0, #0	@ 00113098 0028
.org 0x11309a
	beq.n 0x1130c4	@ 0011309a 13d0
.org 0x11309c
	ldr r2, [pc, #28]	@ 0011309c 074a
.org 0x11309e
	ldrh r1, [r2, #0]	@ 0011309e 1188
.org 0x1130a0
	ldr r0, [pc, #28]	@ 001130a0 0748
.org 0x1130a2
	ands r0, r1	@ 001130a2 0840
.org 0x1130a4
	movs r3, #128	@ 001130a4 8023
.org 0x1130a6
	lsls r3, r3, #1	@ 001130a6 5b00
.org 0x1130a8
	adds r1, r3, #0	@ 001130a8 191c
.org 0x1130aa
	orrs r0, r1	@ 001130aa 0843
.org 0x1130ac
	strh r0, [r2, #0]	@ 001130ac 1080
.org 0x1130ae
	movs r1, #128	@ 001130ae 8021
.org 0x1130b0
	lsls r1, r1, #4	@ 001130b0 0901
.org 0x1130b2
	adds r0, r7, #0	@ 001130b2 381c
.org 0x1130b4
	bl 0x1126ac	@ 001130b4 fff7fafa
.org 0x1130b8
	b.n 0x113354	@ 001130b8 4ce1
.org 0x1130ba
	.byte 0x00	@ 001130ba data
.org 0x1130bb
	.byte 0x00	@ 001130bb data
.org 0x1130bc
	.byte 0x00,0x0a,0x00,0x02	@ 001130bc data
.org 0x1130c0
	.byte 0xff,0xf0,0x00,0x00	@ 001130c0 data
.org 0x1130c4
	ldr r0, [sp, #8]	@ 001130c4 0298
.org 0x1130c6
	cmp r0, #0	@ 001130c6 0028
.org 0x1130c8
	beq.n 0x1130cc	@ 001130c8 00d0
.org 0x1130ca
	b.n 0x1131cc	@ 001130ca 7fe0
.org 0x1130cc
	ldr r1, [pc, #204]	@ 001130cc 3349
.org 0x1130ce
	ldrh r2, [r1, #8]	@ 001130ce 0a89
.org 0x1130d0
	movs r3, #1	@ 001130d0 0123
.org 0x1130d2
	adds r0, r3, #0	@ 001130d2 181c
.org 0x1130d4
	ands r0, r2	@ 001130d4 1040
.org 0x1130d6
	cmp r0, #0	@ 001130d6 0028
.org 0x1130d8
	beq.n 0x113108	@ 001130d8 16d0
.org 0x1130da
	ldrb r1, [r1, #18]	@ 001130da 897c
.org 0x1130dc
	adds r0, r3, #0	@ 001130dc 181c
.org 0x1130de
	ands r0, r1	@ 001130de 0840
.org 0x1130e0
	cmp r0, #0	@ 001130e0 0028
.org 0x1130e2
	bne.n 0x113108	@ 001130e2 11d1
.org 0x1130e4
	movs r0, #4	@ 001130e4 0420
.org 0x1130e6
	ands r0, r2	@ 001130e6 1040
.org 0x1130e8
	cmp r0, #0	@ 001130e8 0028
.org 0x1130ea
	bne.n 0x113108	@ 001130ea 0dd1
.org 0x1130ec
	ldr r2, [pc, #176]	@ 001130ec 2c4a
.org 0x1130ee
	ldr r1, [r2, #8]	@ 001130ee 9168
.org 0x1130f0
	ldr r0, [pc, #176]	@ 001130f0 2c48
.org 0x1130f2
	cmp r1, r0	@ 001130f2 8142
.org 0x1130f4
	bhi.n 0x1130fa	@ 001130f4 01d8
.org 0x1130f6
	adds r0, r1, #1	@ 001130f6 481c
.org 0x1130f8
	str r0, [r2, #8]	@ 001130f8 9060
.org 0x1130fa
	ldr r2, [r2, #0]	@ 001130fa 1268
.org 0x1130fc
	ldr r1, [r2, #8]	@ 001130fc 9168
.org 0x1130fe
	ldr r0, [pc, #168]	@ 001130fe 2a48
.org 0x113100
	cmp r1, r0	@ 00113100 8142
.org 0x113102
	bhi.n 0x113108	@ 00113102 01d8
.org 0x113104
	adds r0, r1, #1	@ 00113104 481c
.org 0x113106
	str r0, [r2, #8]	@ 00113106 9060
.org 0x113108
	bl 0x2ad78	@ 00113108 17f736fe
.org 0x11310c
	mov r1, sl	@ 0011310c 5146
.org 0x11310e
	cmp r1, #0	@ 0011310e 0029
.org 0x113110
	bne.n 0x113146	@ 00113110 19d1
.org 0x113112
	ldr r0, [pc, #152]	@ 00113112 2648
.org 0x113114
	ldr r0, [r0, #0]	@ 00113114 0068
.org 0x113116
	bl 0x1c7cc	@ 00113116 09f759fb
.org 0x11311a
	ldr r0, [pc, #148]	@ 0011311a 2548
.org 0x11311c
	ldr r0, [r0, #0]	@ 0011311c 0068
.org 0x11311e
	bl 0x1c7cc	@ 0011311e 09f755fb
.org 0x113122
	ldr r0, [pc, #144]	@ 00113122 2448
.org 0x113124
	ldr r0, [r0, #0]	@ 00113124 0068
.org 0x113126
	bl 0x1c7cc	@ 00113126 09f751fb
.org 0x11312a
	ldr r0, [pc, #140]	@ 0011312a 2348
.org 0x11312c
	ldr r0, [r0, #0]	@ 0011312c 0068
.org 0x11312e
	bl 0x1c79c	@ 0011312e 09f735fb
.org 0x113132
	bl 0xbd36c	@ 00113132 aaf71bf9
.org 0x113136
	ldr r0, [pc, #132]	@ 00113136 2148
.org 0x113138
	ldr r0, [r0, #0]	@ 00113138 0068
.org 0x11313a
	bl 0x1c79c	@ 0011313a 09f72ffb
.org 0x11313e
	ldr r0, [pc, #128]	@ 0011313e 2048
.org 0x113140
	ldr r0, [r0, #0]	@ 00113140 0068
.org 0x113142
	bl 0x1c79c	@ 00113142 09f72bfb
.org 0x113146
	ldr r4, [pc, #124]	@ 00113146 1f4c
.org 0x113148
	ldr r0, [r4, #0]	@ 00113148 2068
.org 0x11314a
	bl 0x1c7cc	@ 0011314a 09f73ffb
.org 0x11314e
	bl 0xd0be0	@ 0011314e bdf747fd
.org 0x113152
	bl 0x560c	@ 00113152 f2f65bfa
.org 0x113156
	mov r2, sl	@ 00113156 5246
.org 0x113158
	cmp r2, #0	@ 00113158 002a
.org 0x11315a
	bne.n 0x1131d0	@ 0011315a 39d1
.org 0x11315c
	ldr r0, [pc, #76]	@ 0011315c 1348
.org 0x11315e
	ldr r0, [r0, #0]	@ 0011315e 0068
.org 0x113160
	bl 0x1c80c	@ 00113160 09f754fb
.org 0x113164
	ldr r0, [pc, #72]	@ 00113164 1248
.org 0x113166
	ldr r0, [r0, #0]	@ 00113166 0068
.org 0x113168
	bl 0x1c80c	@ 00113168 09f750fb
.org 0x11316c
	ldr r0, [pc, #68]	@ 0011316c 1148
.org 0x11316e
	ldr r0, [r0, #0]	@ 0011316e 0068
.org 0x113170
	bl 0x1c80c	@ 00113170 09f74cfb
.org 0x113174
	ldr r0, [pc, #64]	@ 00113174 1048
.org 0x113176
	ldr r0, [r0, #0]	@ 00113176 0068
.org 0x113178
	bl 0x1c80c	@ 00113178 09f748fb
.org 0x11317c
	ldr r0, [pc, #72]	@ 0011317c 1248
.org 0x11317e
	ldr r0, [r0, #0]	@ 0011317e 0068
.org 0x113180
	bl 0x1c80c	@ 00113180 09f744fb
.org 0x113184
	ldr r0, [pc, #52]	@ 00113184 0d48
.org 0x113186
	ldr r0, [r0, #0]	@ 00113186 0068
.org 0x113188
	bl 0x1c80c	@ 00113188 09f740fb
.org 0x11318c
	ldr r0, [pc, #48]	@ 0011318c 0c48
.org 0x11318e
	ldr r0, [r0, #0]	@ 0011318e 0068
.org 0x113190
	bl 0x1c80c	@ 00113190 09f73cfb
.org 0x113194
	ldr r0, [r4, #0]	@ 00113194 2068
.org 0x113196
	bl 0x1c80c	@ 00113196 09f739fb
.org 0x11319a
	b.n 0x1131d0	@ 0011319a 19e0
.org 0x11319c
	.byte 0x10,0xe9,0x02,0x02	@ 0011319c data
.org 0x1131a0
	.byte 0xe0,0xe8,0x02,0x02	@ 001131a0 data
.org 0x1131a4
	.byte 0x3e,0x7e,0x05,0x00	@ 001131a4 data
.org 0x1131a8
	.byte 0xfe,0x96,0x49,0x01	@ 001131a8 data
.org 0x1131ac
	.byte 0xa0,0xed,0x02,0x02	@ 001131ac data
.org 0x1131b0
	.byte 0x8c,0xed,0x02,0x02	@ 001131b0 data
.org 0x1131b4
	.byte 0x90,0xed,0x02,0x02	@ 001131b4 data
.org 0x1131b8
	.byte 0x84,0xed,0x02,0x02	@ 001131b8 data
.org 0x1131bc
	.byte 0x88,0xed,0x02,0x02	@ 001131bc data
.org 0x1131c0
	.byte 0xa4,0xed,0x02,0x02	@ 001131c0 data
.org 0x1131c4
	.byte 0xb0,0xed,0x02,0x02	@ 001131c4 data
.org 0x1131c8
	.byte 0x94,0xed,0x02,0x02	@ 001131c8 data
.org 0x1131cc
	bl 0x560c	@ 001131cc f2f61efa
.org 0x1131d0
	adds r0, r7, #0	@ 001131d0 381c
.org 0x1131d2
	bl 0x114b28	@ 001131d2 01f0a9fc
.org 0x1131d6
	bl 0x5650	@ 001131d6 f2f63bfa
.org 0x1131da
	ldr r4, [pc, #392]	@ 001131da 624c
.org 0x1131dc
	ldr r0, [r4, #0]	@ 001131dc 2068
.org 0x1131de
	bl 0x1c874	@ 001131de 09f749fb
.org 0x1131e2
	ldr r5, [pc, #388]	@ 001131e2 614d
.org 0x1131e4
	ldr r0, [r5, #0]	@ 001131e4 2868
.org 0x1131e6
	bl 0x1c874	@ 001131e6 09f745fb
.org 0x1131ea
	ldr r6, [pc, #384]	@ 001131ea 604e
.org 0x1131ec
	ldr r0, [r6, #0]	@ 001131ec 3068
.org 0x1131ee
	bl 0x1c874	@ 001131ee 09f741fb
.org 0x1131f2
	ldr r3, [pc, #380]	@ 001131f2 5f4b
.org 0x1131f4
	mov r8, r3	@ 001131f4 9846
.org 0x1131f6
	ldr r0, [r3, #0]	@ 001131f6 1868
.org 0x1131f8
	bl 0x1c874	@ 001131f8 09f73cfb
.org 0x1131fc
	ldr r0, [pc, #372]	@ 001131fc 5d48
.org 0x1131fe
	mov r9, r0	@ 001131fe 8146
.org 0x113200
	ldr r0, [r0, #0]	@ 00113200 0068
.org 0x113202
	bl 0x1c874	@ 00113202 09f737fb
.org 0x113206
	ldr r0, [r4, #0]	@ 00113206 2068
.org 0x113208
	movs r1, #154	@ 00113208 9a21
.org 0x11320a
	lsls r1, r1, #4	@ 0011320a 0901
.org 0x11320c
	adds r4, r7, r1	@ 0011320c 7c18
.org 0x11320e
	adds r1, r4, #0	@ 0011320e 211c
.org 0x113210
	bl 0x1ca0c	@ 00113210 09f7fcfb
.org 0x113214
	ldr r0, [r5, #0]	@ 00113214 2868
.org 0x113216
	adds r1, r4, #0	@ 00113216 211c
.org 0x113218
	bl 0x1ca0c	@ 00113218 09f7f8fb
.org 0x11321c
	ldr r0, [r6, #0]	@ 0011321c 3068
.org 0x11321e
	adds r1, r4, #0	@ 0011321e 211c
.org 0x113220
	bl 0x1ca0c	@ 00113220 09f7f4fb
.org 0x113224
	mov r2, r8	@ 00113224 4246
.org 0x113226
	ldr r0, [r2, #0]	@ 00113226 1068
.org 0x113228
	adds r1, r4, #0	@ 00113228 211c
.org 0x11322a
	bl 0x1ca0c	@ 0011322a 09f7effb
.org 0x11322e
	ldr r0, [pc, #328]	@ 0011322e 5248
.org 0x113230
	ldr r0, [r0, #0]	@ 00113230 0068
.org 0x113232
	adds r1, r4, #0	@ 00113232 211c
.org 0x113234
	bl 0x1c924	@ 00113234 09f776fb
.org 0x113238
	adds r0, r4, #0	@ 00113238 201c
.org 0x11323a
	bl 0x3a7dc	@ 0011323a 27f7cffa
.org 0x11323e
	ldr r0, [pc, #316]	@ 0011323e 4f48
.org 0x113240
	ldr r0, [r0, #0]	@ 00113240 0068
.org 0x113242
	adds r1, r4, #0	@ 00113242 211c
.org 0x113244
	bl 0x1c924	@ 00113244 09f76efb
.org 0x113248
	ldr r0, [pc, #308]	@ 00113248 4d48
.org 0x11324a
	ldr r0, [r0, #0]	@ 0011324a 0068
.org 0x11324c
	adds r1, r4, #0	@ 0011324c 211c
.org 0x11324e
	bl 0x1c924	@ 0011324e 09f769fb
.org 0x113252
	mov r3, r9	@ 00113252 4b46
.org 0x113254
	ldr r0, [r3, #0]	@ 00113254 1868
.org 0x113256
	adds r1, r4, #0	@ 00113256 211c
.org 0x113258
	bl 0x1ca0c	@ 00113258 09f7d8fb
.org 0x11325c
	adds r0, r7, #0	@ 0011325c 381c
.org 0x11325e
	bl 0x114c18	@ 0011325e 01f0dbfc
.org 0x113262
	bl 0x10e4cc	@ 00113262 fbf733f9
.org 0x113266
	adds r0, r7, #0	@ 00113266 381c
.org 0x113268
	bl 0x114c74	@ 00113268 01f004fd
.org 0x11326c
	ldr r0, [pc, #276]	@ 0011326c 4548
.org 0x11326e
	ldrh r1, [r0, #4]	@ 0011326e 8188
.org 0x113270
	movs r0, #8	@ 00113270 0820
.org 0x113272
	ands r0, r1	@ 00113272 0840
.org 0x113274
	cmp r0, #0	@ 00113274 0028
.org 0x113276
	beq.n 0x11330c	@ 00113276 49d0
.org 0x113278
	ldr r1, [r7, #0]	@ 00113278 3968
.org 0x11327a
	movs r0, #128	@ 0011327a 8020
.org 0x11327c
	lsls r0, r0, #3	@ 0011327c c000
.org 0x11327e
	cmp r1, r0	@ 0011327e 8142
.org 0x113280
	bne.n 0x11330c	@ 00113280 44d1
.org 0x113282
	ldr r1, [pc, #260]	@ 00113282 4149
.org 0x113284
	adds r0, r7, r1	@ 00113284 7818
.org 0x113286
	ldr r2, [r0, #0]	@ 00113286 0268
.org 0x113288
	adds r0, r2, #0	@ 00113288 101c
.org 0x11328a
	adds r0, #140	@ 0011328a 8c30
.org 0x11328c
	ldr r0, [r0, #0]	@ 0011328c 0068
.org 0x11328e
	movs r1, #128	@ 0011328e 8021
.org 0x113290
	lsls r1, r1, #2	@ 00113290 8900
.org 0x113292
	ands r0, r1	@ 00113292 0840
.org 0x113294
	cmp r0, #0	@ 00113294 0028
.org 0x113296
	bne.n 0x11330c	@ 00113296 39d1
.org 0x113298
	adds r0, r2, #0	@ 00113298 101c
.org 0x11329a
	adds r0, #164	@ 0011329a a430
.org 0x11329c
	movs r2, #0	@ 0011329c 0022
.org 0x11329e
	ldrsh r0, [r0, r2]	@ 0011329e 805e
.org 0x1132a0
	cmp r0, #0	@ 001132a0 0028
.org 0x1132a2
	beq.n 0x11330c	@ 001132a2 33d0
.org 0x1132a4
	ldr r1, [pc, #228]	@ 001132a4 3949
.org 0x1132a6
	ldrh r0, [r1, #2]	@ 001132a6 4888
.org 0x1132a8
	cmp r0, #0	@ 001132a8 0028
.org 0x1132aa
	beq.n 0x1132b2	@ 001132aa 02d0
.org 0x1132ac
	ldrb r0, [r1, #4]	@ 001132ac 0879
.org 0x1132ae
	cmp r0, #0	@ 001132ae 0028
.org 0x1132b0
	bne.n 0x11330c	@ 001132b0 2cd1
.org 0x1132b2
	ldr r2, [pc, #220]	@ 001132b2 374a
.org 0x1132b4
	ldrh r1, [r2, #8]	@ 001132b4 1189
.org 0x1132b6
	movs r0, #64	@ 001132b6 4020
.org 0x1132b8
	ands r0, r1	@ 001132b8 0840
.org 0x1132ba
	cmp r0, #0	@ 001132ba 0028
.org 0x1132bc
	bne.n 0x11330c	@ 001132bc 26d1
.org 0x1132be
	movs r3, #1	@ 001132be 0123
.org 0x1132c0
	adds r0, r3, #0	@ 001132c0 181c
.org 0x1132c2
	ands r0, r1	@ 001132c2 0840
.org 0x1132c4
	cmp r0, #0	@ 001132c4 0028
.org 0x1132c6
	beq.n 0x11330c	@ 001132c6 21d0
.org 0x1132c8
	ldrb r1, [r2, #18]	@ 001132c8 917c
.org 0x1132ca
	adds r0, r3, #0	@ 001132ca 181c
.org 0x1132cc
	ands r0, r1	@ 001132cc 0840
.org 0x1132ce
	cmp r0, #0	@ 001132ce 0028
.org 0x1132d0
	bne.n 0x11330c	@ 001132d0 1cd1
.org 0x1132d2
	movs r1, #170	@ 001132d2 aa21
.org 0x1132d4
	lsls r1, r1, #1	@ 001132d4 4900
.org 0x1132d6
	adds r0, r2, r1	@ 001132d6 5018
.org 0x1132d8
	ldr r0, [r0, #0]	@ 001132d8 0068
.org 0x1132da
	cmp r0, #0	@ 001132da 0028
.org 0x1132dc
	bne.n 0x11330c	@ 001132dc 16d1
.org 0x1132de
	ldr r0, [pc, #180]	@ 001132de 2d48
.org 0x1132e0
	ldrb r0, [r0, #2]	@ 001132e0 8078
.org 0x1132e2
	cmp r0, #0	@ 001132e2 0028
.org 0x1132e4
	bne.n 0x11330c	@ 001132e4 12d1
.org 0x1132e6
	mov r2, sl	@ 001132e6 5246
.org 0x1132e8
	cmp r2, #0	@ 001132e8 002a
.org 0x1132ea
	bne.n 0x11330c	@ 001132ea 0fd1
.org 0x1132ec
	ldr r0, [pc, #168]	@ 001132ec 2a48
.org 0x1132ee
	ldrh r0, [r0, #0]	@ 001132ee 0088
.org 0x1132f0
	cmp r0, #0	@ 001132f0 0028
.org 0x1132f2
	bne.n 0x11330c	@ 001132f2 0bd1
.org 0x1132f4
	ldr r0, [pc, #164]	@ 001132f4 2948
.org 0x1132f6
	ldr r0, [r0, #0]	@ 001132f6 0068
