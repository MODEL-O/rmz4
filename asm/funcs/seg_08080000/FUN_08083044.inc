@ FUN_08083044  entry 0x08083044  size 470
.thumb
.org 0x83044
FUN_08083044:
	push {r4, r5, lr}	@ 00083044 30b5
.org 0x83046
	sub sp, #8	@ 00083046 82b0
.org 0x83048
	adds r4, r0, #0	@ 00083048 041c
.org 0x8304a
	ldrb r0, [r4, #14]	@ 0008304a a07b
.org 0x8304c
	cmp r0, #1	@ 0008304c 0128
.org 0x8304e
	bne.n 0x83052	@ 0008304e 00d1
.org 0x83050
	b.n 0x83168	@ 00083050 8ae0
.org 0x83052
	cmp r0, #1	@ 00083052 0128
.org 0x83054
	bgt.n 0x8305c	@ 00083054 02dc
.org 0x83056
	cmp r0, #0	@ 00083056 0028
.org 0x83058
	beq.n 0x83064	@ 00083058 04d0
.org 0x8305a
	b.n 0x83232	@ 0008305a eae0
.org 0x8305c
	cmp r0, #2	@ 0008305c 0228
.org 0x8305e
	bne.n 0x83062	@ 0008305e 00d1
.org 0x83060
	b.n 0x8320c	@ 00083060 d4e0
.org 0x83062
	b.n 0x83232	@ 00083062 e6e0
.org 0x83064
	movs r5, #0	@ 00083064 0025
.org 0x83066
	adds r0, r4, #0	@ 00083066 201c
.org 0x83068
	adds r0, #190	@ 00083068 be30
.org 0x8306a
	ldrb r0, [r0, #0]	@ 0008306a 0078
.org 0x8306c
	cmp r0, #2	@ 0008306c 0228
.org 0x8306e
	beq.n 0x8309c	@ 0008306e 15d0
.org 0x83070
	cmp r0, #2	@ 00083070 0228
.org 0x83072
	bgt.n 0x8307a	@ 00083072 02dc
.org 0x83074
	cmp r0, #1	@ 00083074 0128
.org 0x83076
	beq.n 0x83084	@ 00083076 05d0
.org 0x83078
	b.n 0x8311c	@ 00083078 50e0
.org 0x8307a
	cmp r0, #3	@ 0008307a 0328
.org 0x8307c
	beq.n 0x830b4	@ 0008307c 1ad0
.org 0x8307e
	cmp r0, #4	@ 0008307e 0428
.org 0x83080
	beq.n 0x830d8	@ 00083080 2ad0
.org 0x83082
	b.n 0x8311c	@ 00083082 4be0
.org 0x83084
	ldr r5, [pc, #16]	@ 00083084 044d
.org 0x83086
	ldrb r1, [r4, #10]	@ 00083086 a17a
.org 0x83088
	movs r0, #32	@ 00083088 2020
.org 0x8308a
	ands r0, r1	@ 0008308a 0840
.org 0x8308c
	cmp r0, #0	@ 0008308c 0028
.org 0x8308e
	beq.n 0x8311c	@ 0008308e 45d0
.org 0x83090
	movs r5, #144	@ 00083090 9025
.org 0x83092
	lsls r5, r5, #5	@ 00083092 6d01
.org 0x83094
	b.n 0x8311c	@ 00083094 42e0
.org 0x83096
	.byte 0x00	@ 00083096 data
.org 0x83097
	.byte 0x00	@ 00083097 data
.org 0x83098
	.byte 0x00,0xee,0xff,0xff	@ 00083098 data
.org 0x8309c
	ldr r5, [pc, #16]	@ 0008309c 044d
.org 0x8309e
	ldrb r1, [r4, #10]	@ 0008309e a17a
.org 0x830a0
	movs r0, #32	@ 000830a0 2020
.org 0x830a2
	ands r0, r1	@ 000830a2 0840
.org 0x830a4
	cmp r0, #0	@ 000830a4 0028
.org 0x830a6
	beq.n 0x8311c	@ 000830a6 39d0
.org 0x830a8
	movs r5, #192	@ 000830a8 c025
.org 0x830aa
	lsls r5, r5, #5	@ 000830aa 6d01
.org 0x830ac
	b.n 0x8311c	@ 000830ac 36e0
.org 0x830ae
	.byte 0x00	@ 000830ae data
.org 0x830af
	.byte 0x00	@ 000830af data
.org 0x830b0
	.byte 0x00,0xe8,0xff,0xff	@ 000830b0 data
.org 0x830b4
	ldr r5, [pc, #28]	@ 000830b4 074d
.org 0x830b6
	ldrb r1, [r4, #10]	@ 000830b6 a17a
.org 0x830b8
	movs r0, #32	@ 000830b8 2020
.org 0x830ba
	ands r0, r1	@ 000830ba 0840
.org 0x830bc
	cmp r0, #0	@ 000830bc 0028
.org 0x830be
	beq.n 0x830c4	@ 000830be 01d0
.org 0x830c0
	movs r5, #140	@ 000830c0 8c25
.org 0x830c2
	lsls r5, r5, #6	@ 000830c2 ad01
.org 0x830c4
	lsrs r0, r1, #5	@ 000830c4 4809
.org 0x830c6
	movs r2, #1	@ 000830c6 0122
.org 0x830c8
	bics r2, r0	@ 000830c8 8243
.org 0x830ca
	cmp r2, #0	@ 000830ca 002a
.org 0x830cc
	beq.n 0x830fc	@ 000830cc 16d0
.org 0x830ce
	movs r0, #32	@ 000830ce 2020
.org 0x830d0
	orrs r0, r1	@ 000830d0 0843
.org 0x830d2
	b.n 0x83100	@ 000830d2 15e0
.org 0x830d4
	.byte 0x00,0xdd,0xff,0xff	@ 000830d4 data
.org 0x830d8
	ldr r5, [pc, #28]	@ 000830d8 074d
.org 0x830da
	ldrb r1, [r4, #10]	@ 000830da a17a
.org 0x830dc
	movs r0, #32	@ 000830dc 2020
.org 0x830de
	ands r0, r1	@ 000830de 0840
.org 0x830e0
	cmp r0, #0	@ 000830e0 0028
.org 0x830e2
	beq.n 0x830e8	@ 000830e2 01d0
.org 0x830e4
	movs r5, #172	@ 000830e4 ac25
.org 0x830e6
	lsls r5, r5, #6	@ 000830e6 ad01
.org 0x830e8
	lsrs r0, r1, #5	@ 000830e8 4809
.org 0x830ea
	movs r2, #1	@ 000830ea 0122
.org 0x830ec
	bics r2, r0	@ 000830ec 8243
.org 0x830ee
	cmp r2, #0	@ 000830ee 002a
.org 0x830f0
	beq.n 0x830fc	@ 000830f0 04d0
.org 0x830f2
	movs r0, #32	@ 000830f2 2020
.org 0x830f4
	orrs r0, r1	@ 000830f4 0843
.org 0x830f6
	b.n 0x83100	@ 000830f6 03e0
.org 0x830f8
	.byte 0x00,0xd5,0xff,0xff	@ 000830f8 data
.org 0x830fc
	movs r0, #223	@ 000830fc df20
.org 0x830fe
	ands r0, r1	@ 000830fe 0840
.org 0x83100
	strb r0, [r4, #10]	@ 00083100 a072
.org 0x83102
	adds r0, r2, #0	@ 00083102 101c
.org 0x83104
	adds r1, r4, #0	@ 00083104 211c
.org 0x83106
	adds r1, #77	@ 00083106 4d31
.org 0x83108
	strb r0, [r1, #0]	@ 00083108 0870
.org 0x8310a
	adds r3, r4, #0	@ 0008310a 231c
.org 0x8310c
	adds r3, #74	@ 0008310c 4a33
.org 0x8310e
	lsls r0, r0, #5	@ 0008310e 4001
.org 0x83110
	ldrb r2, [r3, #0]	@ 00083110 1a78
.org 0x83112
	movs r1, #33	@ 00083112 2121
.org 0x83114
	negs r1, r1	@ 00083114 4942
.org 0x83116
	ands r1, r2	@ 00083116 1140
.org 0x83118
	orrs r1, r0	@ 00083118 0143
.org 0x8311a
	strb r1, [r3, #0]	@ 0008311a 1970
.org 0x8311c
	adds r0, r4, #0	@ 0008311c 201c
.org 0x8311e
	movs r1, #0	@ 0008311e 0021
.org 0x83120
	adds r2, r5, #0	@ 00083120 2a1c
.org 0x83122
	bl 0x8368c	@ 00083122 00f0b3fa
.org 0x83126
	adds r0, r4, #0	@ 00083126 201c
.org 0x83128
	adds r0, #140	@ 00083128 8c30
.org 0x8312a
	movs r1, #0	@ 0008312a 0021
.org 0x8312c
	str r1, [r0, #0]	@ 0008312c 0160
.org 0x8312e
	adds r0, #4	@ 0008312e 0430
.org 0x83130
	str r1, [r0, #0]	@ 00083130 0160
.org 0x83132
	adds r0, #4	@ 00083132 0430
.org 0x83134
	strb r1, [r0, #0]	@ 00083134 0170
.org 0x83136
	ldrb r1, [r4, #10]	@ 00083136 a17a
.org 0x83138
	movs r0, #251	@ 00083138 fb20
.org 0x8313a
	ands r0, r1	@ 0008313a 0840
.org 0x8313c
	strb r0, [r4, #10]	@ 0008313c a072
.org 0x8313e
	movs r2, #0	@ 0008313e 0022
.org 0x83140
	adds r0, r4, #0	@ 00083140 201c
.org 0x83142
	adds r0, #180	@ 00083142 b430
.org 0x83144
	ldr r0, [r0, #0]	@ 00083144 0068
.org 0x83146
	cmp r0, #0	@ 00083146 0028
.org 0x83148
	ble.n 0x8314c	@ 00083148 00dd
.org 0x8314a
	movs r2, #1	@ 0008314a 0122
.org 0x8314c
	lsls r1, r2, #2	@ 0008314c 9100
.org 0x8314e
	adds r1, r1, r2	@ 0008314e 8918
.org 0x83150
	lsls r1, r1, #8	@ 00083150 0902
.org 0x83152
	movs r0, #160	@ 00083152 a020
.org 0x83154
	lsls r0, r0, #2	@ 00083154 8000
.org 0x83156
	subs r0, r0, r1	@ 00083156 401a
.org 0x83158
	str r0, [r4, #92]	@ 00083158 e065
.org 0x8315a
	ldr r0, [pc, #164]	@ 0008315a 2948
.org 0x8315c
	str r0, [r4, #96]	@ 0008315c 2066
.org 0x8315e
	movs r0, #20	@ 0008315e 1420
.org 0x83160
	strb r0, [r4, #18]	@ 00083160 a074
.org 0x83162
	ldrb r0, [r4, #14]	@ 00083162 a07b
.org 0x83164
	adds r0, #1	@ 00083164 0130
.org 0x83166
	strb r0, [r4, #14]	@ 00083166 a073
.org 0x83168
	ldr r0, [r4, #84]	@ 00083168 606d
.org 0x8316a
	ldr r1, [r4, #92]	@ 0008316a e16d
.org 0x8316c
	adds r0, r0, r1	@ 0008316c 4018
.org 0x8316e
	str r0, [r4, #84]	@ 0008316e 6065
.org 0x83170
	ldr r0, [r4, #88]	@ 00083170 a06d
.org 0x83172
	ldr r1, [r4, #96]	@ 00083172 216e
.org 0x83174
	adds r0, r0, r1	@ 00083174 4018
.org 0x83176
	str r0, [r4, #88]	@ 00083176 a065
.org 0x83178
	adds r1, #64	@ 00083178 4031
.org 0x8317a
	str r1, [r4, #96]	@ 0008317a 2166
.org 0x8317c
	movs r0, #224	@ 0008317c e020
.org 0x8317e
	lsls r0, r0, #3	@ 0008317e c000
.org 0x83180
	cmp r1, r0	@ 00083180 8142
.org 0x83182
	ble.n 0x83186	@ 00083182 00dd
.org 0x83184
	str r0, [r4, #96]	@ 00083184 2066
.org 0x83186
	adds r0, r4, #0	@ 00083186 201c
.org 0x83188
	bl 0x1cff0	@ 00083188 99f732ff
.org 0x8318c
	ldrb r0, [r4, #18]	@ 0008318c a07c
.org 0x8318e
	subs r0, #1	@ 0008318e 0138
.org 0x83190
	strb r0, [r4, #18]	@ 00083190 a074
.org 0x83192
	lsls r0, r0, #24	@ 00083192 0006
.org 0x83194
	cmp r0, #0	@ 00083194 0028
.org 0x83196
	beq.n 0x831a6	@ 00083196 06d0
.org 0x83198
	ldr r0, [r4, #84]	@ 00083198 606d
.org 0x8319a
	ldr r1, [r4, #88]	@ 0008319a a16d
.org 0x8319c
	bl 0x7c7c	@ 0008319c 84f76efd
.org 0x831a0
	lsls r0, r0, #16	@ 000831a0 0004
.org 0x831a2
	cmp r0, #0	@ 000831a2 0028
.org 0x831a4
	beq.n 0x83232	@ 000831a4 45d0
.org 0x831a6
	ldrb r1, [r4, #10]	@ 000831a6 a17a
.org 0x831a8
	movs r0, #254	@ 000831a8 fe20
.org 0x831aa
	ands r0, r1	@ 000831aa 0840
.org 0x831ac
	strb r0, [r4, #10]	@ 000831ac a072
.org 0x831ae
	ldr r0, [r4, #84]	@ 000831ae 606d
.org 0x831b0
	str r0, [sp, #0]	@ 000831b0 0090
.org 0x831b2
	ldr r0, [r4, #88]	@ 000831b2 a06d
.org 0x831b4
	movs r1, #128	@ 000831b4 8021
.org 0x831b6
	lsls r1, r1, #1	@ 000831b6 4900
.org 0x831b8
	adds r0, r0, r1	@ 000831b8 4018
.org 0x831ba
	str r0, [sp, #4]	@ 000831ba 0190
.org 0x831bc
	movs r0, #1	@ 000831bc 0120
.org 0x831be
	mov r1, sp	@ 000831be 6946
.org 0x831c0
	bl 0xd0c88	@ 000831c0 4df062fd
.org 0x831c4
	adds r0, r4, #0	@ 000831c4 201c
.org 0x831c6
	mov r1, sp	@ 000831c6 6946
.org 0x831c8
	movs r2, #0	@ 000831c8 0022
.org 0x831ca
	bl 0xd621c	@ 000831ca 53f027f8
.org 0x831ce
	movs r0, #42	@ 000831ce 2a20
.org 0x831d0
	bl 0x2b10	@ 000831d0 7ff79efc
.org 0x831d4
	adds r5, r4, #0	@ 000831d4 251c
.org 0x831d6
	adds r5, #84	@ 000831d6 5435
.org 0x831d8
	movs r0, #4	@ 000831d8 0420
.org 0x831da
	movs r1, #8	@ 000831da 0821
.org 0x831dc
	adds r2, r5, #0	@ 000831dc 2a1c
.org 0x831de
	bl 0x2ab88	@ 000831de a7f7d3fc
.org 0x831e2
	ldr r2, [pc, #32]	@ 000831e2 084a
.org 0x831e4
	ldrh r1, [r2, #12]	@ 000831e4 9189
.org 0x831e6
	ldr r0, [pc, #32]	@ 000831e6 0848
.org 0x831e8
	cmp r1, r0	@ 000831e8 8142
.org 0x831ea
	bhi.n 0x831f0	@ 000831ea 01d8
.org 0x831ec
	adds r0, r1, #1	@ 000831ec 481c
.org 0x831ee
	strh r0, [r2, #12]	@ 000831ee 9081
.org 0x831f0
	adds r0, r4, #0	@ 000831f0 201c
.org 0x831f2
	adds r1, r5, #0	@ 000831f2 291c
.org 0x831f4
	bl 0x2abe0	@ 000831f4 a7f7f4fc
.org 0x831f8
	ldrb r0, [r4, #14]	@ 000831f8 a07b
.org 0x831fa
	adds r0, #1	@ 000831fa 0130
.org 0x831fc
	strb r0, [r4, #14]	@ 000831fc a073
.org 0x831fe
	b.n 0x83232	@ 000831fe 18e0
.org 0x83200
	.byte 0x80,0xfb,0xff,0xff	@ 00083200 data
.org 0x83204
	.byte 0xe0,0xe8,0x02,0x02	@ 00083204 data
.org 0x83208
	.byte 0x0e,0x27,0x00,0x00	@ 00083208 data
.org 0x8320c
	ldrb r1, [r4, #10]	@ 0008320c a17a
.org 0x8320e
	movs r0, #254	@ 0008320e fe20
.org 0x83210
	ands r0, r1	@ 00083210 0840
.org 0x83212
	strb r0, [r4, #10]	@ 00083212 a072
.org 0x83214
	ldrb r0, [r4, #18]	@ 00083214 a07c
.org 0x83216
	cmp r0, #0	@ 00083216 0028
.org 0x83218
	beq.n 0x83220	@ 00083218 02d0
