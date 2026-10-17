@ FUN_080b1170  entry 0x080b1170  size 64
.thumb
.org 0xb1170
FUN_080b1170:
	push {r4, lr}	@ 000b1170 10b5
.org 0xb1172
	adds r4, r0, #0	@ 000b1172 041c
.org 0xb1174
	ldr r0, [r4, #40]	@ 000b1174 a06a
.org 0xb1176
	cmp r0, #0	@ 000b1176 0028
.org 0xb1178
	bne.n 0xb11aa	@ 000b1178 17d1
.org 0xb117a
	adds r0, r4, #0	@ 000b117a 201c
.org 0xb117c
	adds r0, #140	@ 000b117c 8c30
.org 0xb117e
	ldr r0, [r0, #0]	@ 000b117e 0068
.org 0xb1180
	movs r1, #1	@ 000b1180 0121
.org 0xb1182
	ands r0, r1	@ 000b1182 0840
.org 0xb1184
	cmp r0, #0	@ 000b1184 0028
.org 0xb1186
	beq.n 0xb11aa	@ 000b1186 10d0
.org 0xb1188
	ldr r2, [pc, #36]	@ 000b1188 094a
.org 0xb118a
	movs r0, #0	@ 000b118a 0020
.org 0xb118c
	adds r1, r4, #0	@ 000b118c 211c
.org 0xb118e
	bl 0x2adac	@ 000b118e 79f70dfe
.org 0xb1192
	str r0, [r4, #40]	@ 000b1192 a062
.org 0xb1194
	cmp r0, #0	@ 000b1194 0028
.org 0xb1196
	beq.n 0xb11aa	@ 000b1196 08d0
.org 0xb1198
	adds r0, r4, #0	@ 000b1198 201c
.org 0xb119a
	adds r0, #116	@ 000b119a 7430
.org 0xb119c
	ldr r1, [pc, #20]	@ 000b119c 0549
.org 0xb119e
	bl 0x5784	@ 000b119e 54f7f1fa
.org 0xb11a2
	adds r1, r4, #0	@ 000b11a2 211c
.org 0xb11a4
	adds r1, #194	@ 000b11a4 c231
.org 0xb11a6
	movs r0, #15	@ 000b11a6 0f20
.org 0xb11a8
	strb r0, [r1, #0]	@ 000b11a8 0870
.org 0xb11aa
	pop {r4}	@ 000b11aa 10bc
.org 0xb11ac
	pop {r0}	@ 000b11ac 01bc
.org 0xb11ae
	bx r0	@ 000b11ae 0047
