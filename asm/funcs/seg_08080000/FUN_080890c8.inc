@ FUN_080890c8  entry 0x080890c8  size 284
.thumb
.org 0x890c8
FUN_080890c8:
	push {r4, r5, r6, r7, lr}	@ 000890c8 f0b5
.org 0x890ca
	mov r7, sl	@ 000890ca 5746
.org 0x890cc
	mov r6, r9	@ 000890cc 4e46
.org 0x890ce
	mov r5, r8	@ 000890ce 4546
.org 0x890d0
	push {r5, r6, r7}	@ 000890d0 e0b4
.org 0x890d2
	adds r7, r0, #0	@ 000890d2 071c
.org 0x890d4
	bl 0x1cc9c	@ 000890d4 93f7e2fd
.org 0x890d8
	ldrb r1, [r7, #10]	@ 000890d8 b97a
.org 0x890da
	movs r0, #1	@ 000890da 0120
.org 0x890dc
	movs r2, #0	@ 000890dc 0022
.org 0x890de
	mov sl, r2	@ 000890de 9246
.org 0x890e0
	movs r6, #0	@ 000890e0 0026
.org 0x890e2
	orrs r0, r1	@ 000890e2 0843
.org 0x890e4
	movs r1, #2	@ 000890e4 0221
.org 0x890e6
	orrs r0, r1	@ 000890e6 0843
.org 0x890e8
	strb r0, [r7, #10]	@ 000890e8 b872
.org 0x890ea
	adds r5, r7, #0	@ 000890ea 3d1c
.org 0x890ec
	adds r5, #192	@ 000890ec c035
.org 0x890ee
	strb r6, [r5, #0]	@ 000890ee 2e70
.org 0x890f0
	ldrb r0, [r7, #10]	@ 000890f0 b87a
.org 0x890f2
	movs r1, #4	@ 000890f2 0421
.org 0x890f4
	orrs r0, r1	@ 000890f4 0843
.org 0x890f6
	strb r0, [r7, #10]	@ 000890f6 b872
.org 0x890f8
	adds r4, r7, #0	@ 000890f8 3c1c
.org 0x890fa
	adds r4, #116	@ 000890fa 7434
.org 0x890fc
	ldr r0, [pc, #88]	@ 000890fc 1648
.org 0x890fe
	mov r9, r0	@ 000890fe 8146
.org 0x89100
	ldrb r0, [r5, #0]	@ 00089100 2878
.org 0x89102
	add r0, r9	@ 00089102 4844
.org 0x89104
	ldrb r0, [r0, #0]	@ 00089104 0078
.org 0x89106
	lsls r1, r0, #1	@ 00089106 4100
.org 0x89108
	adds r1, r1, r0	@ 00089108 0918
.org 0x8910a
	lsls r1, r1, #3	@ 0008910a c900
.org 0x8910c
	ldr r2, [pc, #76]	@ 0008910c 134a
.org 0x8910e
	mov r8, r2	@ 0008910e 9046
.org 0x89110
	add r1, r8	@ 00089110 4144
.org 0x89112
	adds r2, r7, #0	@ 00089112 3a1c
.org 0x89114
	adds r2, #84	@ 00089114 5432
.org 0x89116
	adds r0, r4, #0	@ 00089116 201c
.org 0x89118
	movs r3, #10	@ 00089118 0a23
.org 0x8911a
	bl 0x5760	@ 0008911a 7cf721fb
.org 0x8911e
	str r7, [r4, #44]	@ 0008911e e762
.org 0x89120
	str r6, [r4, #36]	@ 00089120 6662
.org 0x89122
	ldrb r0, [r5, #0]	@ 00089122 2878
.org 0x89124
	add r0, r9	@ 00089124 4844
.org 0x89126
	ldrb r0, [r0, #0]	@ 00089126 0078
.org 0x89128
	lsls r1, r0, #1	@ 00089128 4100
.org 0x8912a
	adds r1, r1, r0	@ 0008912a 0918
.org 0x8912c
	lsls r1, r1, #3	@ 0008912c c900
.org 0x8912e
	add r1, r8	@ 0008912e 4144
.org 0x89130
	adds r0, r4, #0	@ 00089130 201c
.org 0x89132
	bl 0x5784	@ 00089132 7cf727fb
.org 0x89136
	ldr r0, [pc, #40]	@ 00089136 0a48
.org 0x89138
	str r0, [r4, #36]	@ 00089138 6062
.org 0x8913a
	adds r1, r7, #0	@ 0008913a 391c
.org 0x8913c
	adds r1, #184	@ 0008913c b831
.org 0x8913e
	ldr r0, [r7, #84]	@ 0008913e 786d
.org 0x89140
	str r0, [r1, #0]	@ 00089140 0860
.org 0x89142
	adds r0, r7, #0	@ 00089142 381c
.org 0x89144
	adds r0, #92	@ 00089144 5c30
.org 0x89146
	str r6, [r0, #4]	@ 00089146 4660
.org 0x89148
	str r6, [r7, #92]	@ 00089148 fe65
.org 0x8914a
	ldrb r2, [r7, #17]	@ 0008914a 7a7c
.org 0x8914c
	cmp r2, #0	@ 0008914c 002a
.org 0x8914e
	beq.n 0x89164	@ 0008914e 09d0
.org 0x89150
	ldrb r0, [r7, #10]	@ 00089150 b87a
.org 0x89152
	movs r1, #16	@ 00089152 1021
.org 0x89154
	orrs r0, r1	@ 00089154 0843
.org 0x89156
	b.n 0x8916a	@ 00089156 08e0
.org 0x89158
	.byte 0xac,0xf2,0x85,0x08	@ 00089158 data
.org 0x8915c
	.byte 0x44,0xf1,0x85,0x08	@ 0008915c data
.org 0x89160
	.byte 0xad,0x92,0x08,0x08	@ 00089160 data
.org 0x89164
	ldrb r1, [r7, #10]	@ 00089164 b97a
.org 0x89166
	movs r0, #239	@ 00089166 ef20
.org 0x89168
	ands r0, r1	@ 00089168 0840
.org 0x8916a
	strb r0, [r7, #10]	@ 0008916a b872
.org 0x8916c
	movs r5, #1	@ 0008916c 0125
.org 0x8916e
	adds r1, r5, #0	@ 0008916e 291c
.org 0x89170
	ands r1, r2	@ 00089170 1140
.org 0x89172
	adds r0, r7, #0	@ 00089172 381c
.org 0x89174
	adds r0, #76	@ 00089174 4c30
.org 0x89176
	movs r4, #0	@ 00089176 0024
.org 0x89178
	strb r1, [r0, #0]	@ 00089178 0170
.org 0x8917a
	adds r3, r7, #0	@ 0008917a 3b1c
.org 0x8917c
	adds r3, #74	@ 0008917c 4a33
.org 0x8917e
	lsls r1, r1, #4	@ 0008917e 0901
.org 0x89180
	ldrb r2, [r3, #0]	@ 00089180 1a78
.org 0x89182
	movs r0, #17	@ 00089182 1120
.org 0x89184
	negs r0, r0	@ 00089184 4042
.org 0x89186
	ands r0, r2	@ 00089186 1040
.org 0x89188
	orrs r0, r1	@ 00089188 0843
.org 0x8918a
	strb r0, [r3, #0]	@ 0008918a 1870
.org 0x8918c
	adds r0, r7, #0	@ 0008918c 381c
.org 0x8918e
	adds r0, #188	@ 0008918e bc30
.org 0x89190
	str r4, [r0, #0]	@ 00089190 0460
.org 0x89192
	strb r4, [r7, #18]	@ 00089192 bc74
.org 0x89194
	adds r0, #5	@ 00089194 0530
.org 0x89196
	strb r4, [r0, #0]	@ 00089196 0470
.org 0x89198
	ldr r0, [r7, #84]	@ 00089198 786d
.org 0x8919a
	ldr r1, [r7, #88]	@ 0008919a b96d
.org 0x8919c
	bl 0x864c	@ 0008919c 7ff756fa
.org 0x891a0
	str r0, [r7, #88]	@ 000891a0 b865
.org 0x891a2
	adds r0, r7, #0	@ 000891a2 381c
.org 0x891a4
	bl 0x7f90c	@ 000891a4 f6f7b2fb
.org 0x891a8
	cmp r0, #0	@ 000891a8 0028
.org 0x891aa
	beq.n 0x891c6	@ 000891aa 0cd0
.org 0x891ac
	adds r0, r7, #0	@ 000891ac 381c
.org 0x891ae
	adds r0, #192	@ 000891ae c030
.org 0x891b0
	ldrb r1, [r0, #0]	@ 000891b0 0178
.org 0x891b2
	movs r2, #248	@ 000891b2 f822
.org 0x891b4
	lsls r2, r2, #5	@ 000891b4 5201
.org 0x891b6
	adds r0, r2, #0	@ 000891b6 101c
.org 0x891b8
	orrs r1, r0	@ 000891b8 0143
.org 0x891ba
	adds r0, r7, #0	@ 000891ba 381c
.org 0x891bc
	bl 0x1cf00	@ 000891bc 93f7a0fe
.org 0x891c0
	adds r0, r7, #0	@ 000891c0 381c
.org 0x891c2
	bl 0x1cff0	@ 000891c2 93f715ff
.org 0x891c6
	ldr r1, [pc, #40]	@ 000891c6 0a49
.org 0x891c8
	ldrb r0, [r7, #9]	@ 000891c8 787a
.org 0x891ca
	lsls r0, r0, #2	@ 000891ca 8000
.org 0x891cc
	adds r0, r0, r1	@ 000891cc 4018
.org 0x891ce
	str r5, [r7, #12]	@ 000891ce fd60
.org 0x891d0
	ldr r0, [r0, #0]	@ 000891d0 0068
.org 0x891d2
	ldr r0, [r0, #4]	@ 000891d2 4068
.org 0x891d4
	str r0, [r7, #20]	@ 000891d4 7861
.org 0x891d6
	strb r4, [r7, #13]	@ 000891d6 7c73
.org 0x891d8
	strb r4, [r7, #14]	@ 000891d8 bc73
.org 0x891da
	strb r4, [r7, #15]	@ 000891da fc73
.org 0x891dc
	adds r0, r7, #0	@ 000891dc 381c
.org 0x891de
	bl 0x891f4	@ 000891de 00f009f8
.org 0x891e2
	pop {r3, r4, r5}	@ 000891e2 38bc
