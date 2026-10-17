@ FUN_0807c1f4  entry 0x0807c1f4  size 128
.thumb
.org 0x7c1f4
FUN_0807c1f4:
	push {r4, r5, lr}	@ 0007c1f4 30b5
.org 0x7c1f6
	adds r4, r0, #0	@ 0007c1f6 041c
.org 0x7c1f8
	ldrb r0, [r4, #15]	@ 0007c1f8 e07b
.org 0x7c1fa
	cmp r0, #0	@ 0007c1fa 0028
.org 0x7c1fc
	bne.n 0x7c210	@ 0007c1fc 08d1
.org 0x7c1fe
	adds r0, r4, #0	@ 0007c1fe 201c
.org 0x7c200
	movs r1, #1	@ 0007c200 0121
.org 0x7c202
	bl 0x7e8c8	@ 0007c202 02f061fb
.org 0x7c206
	movs r0, #1	@ 0007c206 0120
.org 0x7c208
	strb r0, [r4, #18]	@ 0007c208 a074
.org 0x7c20a
	ldrb r0, [r4, #15]	@ 0007c20a e07b
.org 0x7c20c
	adds r0, #1	@ 0007c20c 0130
.org 0x7c20e
	strb r0, [r4, #15]	@ 0007c20e e073
.org 0x7c210
	adds r5, r4, #0	@ 0007c210 251c
.org 0x7c212
	adds r5, #188	@ 0007c212 bc35
.org 0x7c214
	ldrb r0, [r5, #0]	@ 0007c214 2878
.org 0x7c216
	cmp r0, #0	@ 0007c216 0028
.org 0x7c218
	beq.n 0x7c220	@ 0007c218 02d0
.org 0x7c21a
	adds r0, r4, #0	@ 0007c21a 201c
.org 0x7c21c
	bl 0x1cff0	@ 0007c21c a0f7e8fe
.org 0x7c220
	adds r0, r4, #0	@ 0007c220 201c
.org 0x7c222
	adds r0, #116	@ 0007c222 7430
.org 0x7c224
	ldr r3, [pc, #76]	@ 0007c224 134b
.org 0x7c226
	ldr r2, [pc, #80]	@ 0007c226 144a
.org 0x7c228
	ldrb r1, [r5, #0]	@ 0007c228 2978
.org 0x7c22a
	lsls r1, r1, #1	@ 0007c22a 4900
.org 0x7c22c
	adds r1, r1, r2	@ 0007c22c 8918
.org 0x7c22e
	ldrh r2, [r1, #0]	@ 0007c22e 0a88
.org 0x7c230
	lsls r2, r2, #2	@ 0007c230 9200
.org 0x7c232
	adds r2, r2, r3	@ 0007c232 d218
.org 0x7c234
	adds r1, r4, #0	@ 0007c234 211c
.org 0x7c236
	adds r1, #113	@ 0007c236 7131
.org 0x7c238
	ldrb r1, [r1, #0]	@ 0007c238 0978
.org 0x7c23a
	lsls r1, r1, #24	@ 0007c23a 0906
.org 0x7c23c
	asrs r1, r1, #24	@ 0007c23c 0916
.org 0x7c23e
	ldr r2, [r2, #0]	@ 0007c23e 1268
.org 0x7c240
	lsls r1, r1, #2	@ 0007c240 8900
.org 0x7c242
	adds r1, r1, r2	@ 0007c242 8918
.org 0x7c244
	ldr r1, [r1, #0]	@ 0007c244 0968
.org 0x7c246
	bl 0x5784	@ 0007c246 89f79dfa
.org 0x7c24a
	ldrb r0, [r4, #18]	@ 0007c24a a07c
.org 0x7c24c
	cmp r0, #0	@ 0007c24c 0028
.org 0x7c24e
	beq.n 0x7c25a	@ 0007c24e 04d0
.org 0x7c250
	subs r0, #1	@ 0007c250 0138
.org 0x7c252
	strb r0, [r4, #18]	@ 0007c252 a074
.org 0x7c254
	lsls r0, r0, #24	@ 0007c254 0006
.org 0x7c256
	cmp r0, #0	@ 0007c256 0028
.org 0x7c258
	bne.n 0x7c26e	@ 0007c258 09d1
.org 0x7c25a
	adds r0, r4, #0	@ 0007c25a 201c
.org 0x7c25c
	adds r0, #204	@ 0007c25c cc30
.org 0x7c25e
	movs r2, #0	@ 0007c25e 0022
.org 0x7c260
	ldrsh r1, [r0, r2]	@ 0007c260 815e
.org 0x7c262
	cmp r1, #0	@ 0007c262 0029
.org 0x7c264
	bne.n 0x7c26e	@ 0007c264 03d1
.org 0x7c266
	ldrb r0, [r4, #14]	@ 0007c266 a07b
.org 0x7c268
	adds r0, #1	@ 0007c268 0130
.org 0x7c26a
	strb r0, [r4, #14]	@ 0007c26a a073
.org 0x7c26c
	strb r1, [r4, #15]	@ 0007c26c e173
.org 0x7c26e
	pop {r4, r5}	@ 0007c26e 30bc
.org 0x7c270
	pop {r0}	@ 0007c270 01bc
.org 0x7c272
	bx r0	@ 0007c272 0047
