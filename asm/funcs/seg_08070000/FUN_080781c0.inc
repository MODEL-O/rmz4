@ FUN_080781c0  entry 0x080781c0  size 128
.thumb
.org 0x781c0
FUN_080781c0:
	push {r4, lr}	@ 000781c0 10b5
.org 0x781c2
	adds r4, r0, #0	@ 000781c2 041c
.org 0x781c4
	ldrb r0, [r4, #15]	@ 000781c4 e07b
.org 0x781c6
	cmp r0, #0	@ 000781c6 0028
.org 0x781c8
	bne.n 0x781dc	@ 000781c8 08d1
.org 0x781ca
	adds r0, r4, #0	@ 000781ca 201c
.org 0x781cc
	movs r1, #2	@ 000781cc 0221
.org 0x781ce
	bl 0x78fdc	@ 000781ce 00f005ff
.org 0x781d2
	movs r0, #32	@ 000781d2 2020
.org 0x781d4
	strb r0, [r4, #18]	@ 000781d4 a074
.org 0x781d6
	ldrb r0, [r4, #15]	@ 000781d6 e07b
.org 0x781d8
	adds r0, #1	@ 000781d8 0130
.org 0x781da
	strb r0, [r4, #15]	@ 000781da e073
.org 0x781dc
	adds r0, r4, #0	@ 000781dc 201c
.org 0x781de
	bl 0x1cff0	@ 000781de a4f707ff
.org 0x781e2
	adds r0, r4, #0	@ 000781e2 201c
.org 0x781e4
	adds r0, #116	@ 000781e4 7430
.org 0x781e6
	ldr r3, [pc, #88]	@ 000781e6 164b
.org 0x781e8
	ldr r2, [pc, #88]	@ 000781e8 164a
.org 0x781ea
	adds r1, r4, #0	@ 000781ea 211c
.org 0x781ec
	adds r1, #196	@ 000781ec c431
.org 0x781ee
	ldrb r1, [r1, #0]	@ 000781ee 0978
.org 0x781f0
	lsls r1, r1, #1	@ 000781f0 4900
.org 0x781f2
	adds r1, r1, r2	@ 000781f2 8918
.org 0x781f4
	ldrh r2, [r1, #0]	@ 000781f4 0a88
.org 0x781f6
	lsls r2, r2, #2	@ 000781f6 9200
.org 0x781f8
	adds r2, r2, r3	@ 000781f8 d218
.org 0x781fa
	adds r1, r4, #0	@ 000781fa 211c
.org 0x781fc
	adds r1, #113	@ 000781fc 7131
.org 0x781fe
	ldrb r1, [r1, #0]	@ 000781fe 0978
.org 0x78200
	lsls r1, r1, #24	@ 00078200 0906
.org 0x78202
	asrs r1, r1, #24	@ 00078202 0916
.org 0x78204
	ldr r2, [r2, #0]	@ 00078204 1268
.org 0x78206
	lsls r1, r1, #2	@ 00078206 8900
.org 0x78208
	adds r1, r1, r2	@ 00078208 8918
.org 0x7820a
	ldr r1, [r1, #0]	@ 0007820a 0968
.org 0x7820c
	bl 0x5784	@ 0007820c 8df7bafa
.org 0x78210
	adds r0, r4, #0	@ 00078210 201c
.org 0x78212
	bl 0x78f28	@ 00078212 00f089fe
.org 0x78216
	ldrb r0, [r4, #18]	@ 00078216 a07c
.org 0x78218
	cmp r0, #0	@ 00078218 0028
.org 0x7821a
	beq.n 0x78226	@ 0007821a 04d0
.org 0x7821c
	subs r0, #1	@ 0007821c 0138
.org 0x7821e
	strb r0, [r4, #18]	@ 0007821e a074
.org 0x78220
	lsls r0, r0, #24	@ 00078220 0006
.org 0x78222
	cmp r0, #0	@ 00078222 0028
.org 0x78224
	bne.n 0x7823a	@ 00078224 09d1
.org 0x78226
	adds r0, r4, #0	@ 00078226 201c
.org 0x78228
	adds r0, #115	@ 00078228 7330
.org 0x7822a
	ldrb r0, [r0, #0]	@ 0007822a 0078
.org 0x7822c
	cmp r0, #4	@ 0007822c 0428
.org 0x7822e
	bne.n 0x7823a	@ 0007822e 04d1
.org 0x78230
	ldrb r0, [r4, #14]	@ 00078230 a07b
.org 0x78232
	adds r0, #1	@ 00078232 0130
.org 0x78234
	movs r1, #0	@ 00078234 0021
.org 0x78236
	strb r0, [r4, #14]	@ 00078236 a073
.org 0x78238
	strb r1, [r4, #15]	@ 00078238 e173
.org 0x7823a
	pop {r4}	@ 0007823a 10bc
.org 0x7823c
	pop {r0}	@ 0007823c 01bc
.org 0x7823e
	bx r0	@ 0007823e 0047
