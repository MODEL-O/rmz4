@ FUN_08008264  entry 0x08008264  size 208
.thumb
.org 0x8264
FUN_08008264:
	push {r4, r5, r6, r7, lr}	@ 00008264 f0b5
.org 0x8266
	mov r7, sl	@ 00008266 5746
.org 0x8268
	mov r6, r9	@ 00008268 4e46
.org 0x826a
	mov r5, r8	@ 0000826a 4546
.org 0x826c
	push {r5, r6, r7}	@ 0000826c e0b4
.org 0x826e
	adds r4, r0, #0	@ 0000826e 041c
.org 0x8270
	mov r8, r1	@ 00008270 8846
.org 0x8272
	adds r5, r4, #0	@ 00008272 251c
.org 0x8274
	ldr r6, [pc, #120]	@ 00008274 1e4e
.org 0x8276
	movs r1, #232	@ 00008276 e821
.org 0x8278
	lsls r1, r1, #1	@ 00008278 4900
.org 0x827a
	adds r0, r6, r1	@ 0000827a 7018
.org 0x827c
	ldrh r0, [r0, #0]	@ 0000827c 0088
.org 0x827e
	cmp r0, #4	@ 0000827e 0428
.org 0x8280
	bne.n 0x8296	@ 00008280 09d1
.org 0x8282
	ldr r2, [pc, #112]	@ 00008282 1c4a
.org 0x8284
	adds r0, r4, r2	@ 00008284 a018
.org 0x8286
	movs r1, #240	@ 00008286 f021
.org 0x8288
	lsls r1, r1, #10	@ 00008288 8902
.org 0x828a
	bl 0x129050	@ 0000828a 20f1e1fe
.org 0x828e
	movs r3, #240	@ 0000828e f023
.org 0x8290
	lsls r3, r3, #8	@ 00008290 1b02
.org 0x8292
	adds r4, r0, r3	@ 00008292 c418
.org 0x8294
	adds r5, r4, #0	@ 00008294 251c
.org 0x8296
	movs r7, #0	@ 00008296 0027
.org 0x8298
	mov r0, r8	@ 00008298 4046
.org 0x829a
	asrs r0, r0, #12	@ 0000829a 0013
.org 0x829c
	mov r9, r0	@ 0000829c 8146
.org 0x829e
	movs r1, #220	@ 0000829e dc21
.org 0x82a0
	lsls r1, r1, #1	@ 000082a0 4900
.org 0x82a2
	adds r1, r1, r6	@ 000082a2 8919
.org 0x82a4
	mov sl, r1	@ 000082a4 8a46
.org 0x82a6
	movs r2, #252	@ 000082a6 fc22
.org 0x82a8
	lsls r2, r2, #3	@ 000082a8 d200
.org 0x82aa
	adds r6, r6, r2	@ 000082aa b618
.org 0x82ac
	ldrh r0, [r6, #0]	@ 000082ac 3088
.org 0x82ae
	mov r3, r9	@ 000082ae 4b46
.org 0x82b0
	muls r3, r0	@ 000082b0 4343
.org 0x82b2
	adds r0, r3, #0	@ 000082b2 181c
.org 0x82b4
	asrs r1, r4, #12	@ 000082b4 2113
.org 0x82b6
	adds r0, r0, r1	@ 000082b6 4018
.org 0x82b8
	adds r0, #2	@ 000082b8 0230
.org 0x82ba
	lsls r0, r0, #1	@ 000082ba 4000
.org 0x82bc
	adds r0, r0, r6	@ 000082bc 8019
.org 0x82be
	ldrh r0, [r0, #0]	@ 000082be 0088
.org 0x82c0
	mov r2, sl	@ 000082c0 5246
.org 0x82c2
	ldr r1, [r2, #0]	@ 000082c2 1168
.org 0x82c4
	lsls r0, r0, #1	@ 000082c4 4000
.org 0x82c6
	adds r0, r0, r1	@ 000082c6 4018
.org 0x82c8
	ldrh r0, [r0, #0]	@ 000082c8 0088
.org 0x82ca
	adds r1, r0, #0	@ 000082ca 011c
.org 0x82cc
	movs r2, #15	@ 000082cc 0f22
.org 0x82ce
	ands r2, r1	@ 000082ce 0a40
.org 0x82d0
	cmp r2, #0	@ 000082d0 002a
.org 0x82d2
	beq.n 0x8326	@ 000082d2 28d0
.org 0x82d4
	cmp r2, #15	@ 000082d4 0f2a
.org 0x82d6
	beq.n 0x8326	@ 000082d6 26d0
.org 0x82d8
	movs r3, #132	@ 000082d8 8423
.org 0x82da
	lsls r3, r3, #8	@ 000082da 1b02
.org 0x82dc
	adds r0, r3, #0	@ 000082dc 181c
.org 0x82de
	ands r1, r0	@ 000082de 0140
.org 0x82e0
	cmp r1, #0	@ 000082e0 0029
.org 0x82e2
	bne.n 0x8326	@ 000082e2 20d1
.org 0x82e4
	cmp r2, #1	@ 000082e4 012a
.org 0x82e6
	bne.n 0x82fc	@ 000082e6 09d1
.org 0x82e8
	ldr r0, [pc, #12]	@ 000082e8 0348
.org 0x82ea
	ands r0, r4	@ 000082ea 2040
.org 0x82ec
	subs r4, r0, #1	@ 000082ec 441e
.org 0x82ee
	b.n 0x8334	@ 000082ee 21e0
.org 0x82f0
	.byte 0xb0,0x0a,0x00,0x02	@ 000082f0 data
.org 0x82f4
	.byte 0x00,0x10,0xff,0xff	@ 000082f4 data
.org 0x82f8
	.byte 0x00,0xf0,0xff,0xff	@ 000082f8 data
.org 0x82fc
	ldr r1, [pc, #44]	@ 000082fc 0b49
.org 0x82fe
	lsls r0, r2, #2	@ 000082fe 9000
.org 0x8300
	adds r0, r0, r1	@ 00008300 4018
.org 0x8302
	ldr r2, [pc, #44]	@ 00008302 0b4a
.org 0x8304
	adds r1, r4, #0	@ 00008304 211c
.org 0x8306
	ands r1, r2	@ 00008306 1140
.org 0x8308
	ldr r3, [r0, #0]	@ 00008308 0368
.org 0x830a
	mov r0, r8	@ 0000830a 4046
.org 0x830c
	ands r0, r2	@ 0000830c 1040
.org 0x830e
	bl 0x128f88	@ 0000830e 20f13bfe
.org 0x8312
	cmp r0, #0	@ 00008312 0028
.org 0x8314
	beq.n 0x8326	@ 00008314 07d0
.org 0x8316
	adds r1, r4, #0	@ 00008316 211c
.org 0x8318
	adds r4, r4, r0	@ 00008318 2418
.org 0x831a
	eors r1, r4	@ 0000831a 6140
.org 0x831c
	movs r0, #128	@ 0000831c 8020
.org 0x831e
	lsls r0, r0, #5	@ 0000831e 4001
.org 0x8320
	ands r1, r0	@ 00008320 0140
.org 0x8322
	cmp r1, #0	@ 00008322 0029
.org 0x8324
	bne.n 0x8334	@ 00008324 06d1
.org 0x8326
	subs r0, r4, r5	@ 00008326 601b
.org 0x8328
	b.n 0x833c	@ 00008328 08e0
.org 0x832a
	.byte 0x00	@ 0000832a data
.org 0x832b
	.byte 0x00	@ 0000832b data
.org 0x832c
	.byte 0x54,0xb1,0x82,0x08	@ 0000832c data
.org 0x8330
	.byte 0xff,0x0f,0x00,0x00	@ 00008330 data
