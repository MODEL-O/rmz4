@ FUN_08078128  entry 0x08078128  size 142
.thumb
.org 0x78128
FUN_08078128:
	push {r4, lr}	@ 00078128 10b5
.org 0x7812a
	adds r4, r0, #0	@ 0007812a 041c
.org 0x7812c
	ldrb r0, [r4, #15]	@ 0007812c e07b
.org 0x7812e
	cmp r0, #0	@ 0007812e 0028
.org 0x78130
	bne.n 0x78154	@ 00078130 10d1
.org 0x78132
	adds r2, r4, #0	@ 00078132 221c
.org 0x78134
	adds r2, #200	@ 00078134 c832
.org 0x78136
	ldr r0, [r2, #0]	@ 00078136 1068
.org 0x78138
	adds r0, #181	@ 00078138 b530
.org 0x7813a
	movs r1, #2	@ 0007813a 0221
.org 0x7813c
	strb r1, [r0, #0]	@ 0007813c 0170
.org 0x7813e
	ldr r0, [r2, #0]	@ 0007813e 1068
.org 0x78140
	adds r0, #182	@ 00078140 b630
.org 0x78142
	movs r1, #1	@ 00078142 0121
.org 0x78144
	strb r1, [r0, #0]	@ 00078144 0170
.org 0x78146
	adds r0, r4, #0	@ 00078146 201c
.org 0x78148
	movs r1, #0	@ 00078148 0021
.org 0x7814a
	bl 0x78fdc	@ 0007814a 00f047ff
.org 0x7814e
	ldrb r0, [r4, #15]	@ 0007814e e07b
.org 0x78150
	adds r0, #1	@ 00078150 0130
.org 0x78152
	strb r0, [r4, #15]	@ 00078152 e073
.org 0x78154
	adds r0, r4, #0	@ 00078154 201c
.org 0x78156
	bl 0x1cff0	@ 00078156 a4f74bff
.org 0x7815a
	adds r0, r4, #0	@ 0007815a 201c
.org 0x7815c
	adds r0, #116	@ 0007815c 7430
.org 0x7815e
	ldr r3, [pc, #88]	@ 0007815e 164b
.org 0x78160
	ldr r2, [pc, #88]	@ 00078160 164a
.org 0x78162
	adds r1, r4, #0	@ 00078162 211c
.org 0x78164
	adds r1, #196	@ 00078164 c431
.org 0x78166
	ldrb r1, [r1, #0]	@ 00078166 0978
.org 0x78168
	lsls r1, r1, #1	@ 00078168 4900
.org 0x7816a
	adds r1, r1, r2	@ 0007816a 8918
.org 0x7816c
	ldrh r2, [r1, #0]	@ 0007816c 0a88
.org 0x7816e
	lsls r2, r2, #2	@ 0007816e 9200
.org 0x78170
	adds r2, r2, r3	@ 00078170 d218
.org 0x78172
	adds r1, r4, #0	@ 00078172 211c
.org 0x78174
	adds r1, #113	@ 00078174 7131
.org 0x78176
	ldrb r1, [r1, #0]	@ 00078176 0978
.org 0x78178
	lsls r1, r1, #24	@ 00078178 0906
.org 0x7817a
	asrs r1, r1, #24	@ 0007817a 0916
.org 0x7817c
	ldr r2, [r2, #0]	@ 0007817c 1268
.org 0x7817e
	lsls r1, r1, #2	@ 0007817e 8900
.org 0x78180
	adds r1, r1, r2	@ 00078180 8918
.org 0x78182
	ldr r1, [r1, #0]	@ 00078182 0968
.org 0x78184
	bl 0x5784	@ 00078184 8df7fefa
.org 0x78188
	adds r0, r4, #0	@ 00078188 201c
.org 0x7818a
	bl 0x78f28	@ 0007818a 00f0cdfe
.org 0x7818e
	adds r0, r4, #0	@ 0007818e 201c
.org 0x78190
	adds r0, #200	@ 00078190 c830
.org 0x78192
	ldr r1, [r0, #0]	@ 00078192 0168
.org 0x78194
	adds r0, r1, #0	@ 00078194 081c
.org 0x78196
	adds r0, #180	@ 00078196 b430
.org 0x78198
	ldrb r0, [r0, #0]	@ 00078198 0078
.org 0x7819a
	cmp r0, #0	@ 0007819a 0028
.org 0x7819c
	beq.n 0x781b0	@ 0007819c 08d0
.org 0x7819e
	adds r0, r1, #0	@ 0007819e 081c
.org 0x781a0
	adds r0, #182	@ 000781a0 b630
.org 0x781a2
	ldrb r1, [r0, #0]	@ 000781a2 0178
.org 0x781a4
	cmp r1, #0	@ 000781a4 0029
.org 0x781a6
	bne.n 0x781b0	@ 000781a6 03d1
.org 0x781a8
	ldrb r0, [r4, #14]	@ 000781a8 a07b
.org 0x781aa
	adds r0, #1	@ 000781aa 0130
.org 0x781ac
	strb r0, [r4, #14]	@ 000781ac a073
.org 0x781ae
	strb r1, [r4, #15]	@ 000781ae e173
.org 0x781b0
	pop {r4}	@ 000781b0 10bc
.org 0x781b2
	pop {r0}	@ 000781b2 01bc
.org 0x781b4
	bx r0	@ 000781b4 0047
