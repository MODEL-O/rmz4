@ FUN_08069234  entry 0x08069234  size 240
.thumb
.org 0x69234
FUN_08069234:
	push {r4, r5, r6, r7, lr}	@ 00069234 f0b5
.org 0x69236
	mov r7, sl	@ 00069236 5746
.org 0x69238
	mov r6, r9	@ 00069238 4e46
.org 0x6923a
	mov r5, r8	@ 0006923a 4546
.org 0x6923c
	push {r5, r6, r7}	@ 0006923c e0b4
.org 0x6923e
	adds r5, r0, #0	@ 0006923e 051c
.org 0x69240
	adds r0, #180	@ 00069240 b430
.org 0x69242
	ldr r0, [r0, #0]	@ 00069242 0068
.org 0x69244
	mov r8, r0	@ 00069244 8046
.org 0x69246
	adds r0, r5, #0	@ 00069246 281c
.org 0x69248
	adds r0, #184	@ 00069248 b830
.org 0x6924a
	ldr r0, [r0, #0]	@ 0006924a 0068
.org 0x6924c
	mov r9, r0	@ 0006924c 8146
.org 0x6924e
	adds r0, r5, #0	@ 0006924e 281c
.org 0x69250
	adds r0, #188	@ 00069250 bc30
.org 0x69252
	ldr r0, [r0, #0]	@ 00069252 0068
.org 0x69254
	mov sl, r0	@ 00069254 8246
.org 0x69256
	adds r0, r5, #0	@ 00069256 281c
.org 0x69258
	adds r0, #192	@ 00069258 c030
.org 0x6925a
	ldr r7, [r0, #0]	@ 0006925a 0768
.org 0x6925c
	ldrb r6, [r5, #15]	@ 0006925c ee7b
.org 0x6925e
	cmp r6, #0	@ 0006925e 002e
.org 0x69260
	bne.n 0x692a4	@ 00069260 20d1
.org 0x69262
	ldrb r1, [r7, #10]	@ 00069262 b97a
.org 0x69264
	movs r0, #1	@ 00069264 0120
.org 0x69266
	orrs r0, r1	@ 00069266 0843
.org 0x69268
	strb r0, [r7, #10]	@ 00069268 b872
.org 0x6926a
	ldr r4, [pc, #140]	@ 0006926a 234c
.org 0x6926c
	ldrh r1, [r4, #4]	@ 0006926c a188
.org 0x6926e
	mov r0, r8	@ 0006926e 4046
.org 0x69270
	bl 0x1cf00	@ 00069270 b3f746fe
.org 0x69274
	ldrh r1, [r4, #12]	@ 00069274 a189
.org 0x69276
	mov r0, r9	@ 00069276 4846
.org 0x69278
	bl 0x1cf00	@ 00069278 b3f742fe
.org 0x6927c
	ldrh r1, [r4, #28]	@ 0006927c a18b
.org 0x6927e
	mov r0, sl	@ 0006927e 5046
.org 0x69280
	bl 0x1cf00	@ 00069280 b3f73efe
.org 0x69284
	ldrh r1, [r4, #40]	@ 00069284 218d
.org 0x69286
	adds r0, r7, #0	@ 00069286 381c
.org 0x69288
	bl 0x1cf00	@ 00069288 b3f73afe
.org 0x6928c
	adds r0, r5, #0	@ 0006928c 281c
.org 0x6928e
	adds r0, #199	@ 0006928e c730
.org 0x69290
	strb r6, [r0, #0]	@ 00069290 0670
.org 0x69292
	subs r0, #2	@ 00069292 0238
.org 0x69294
	strb r6, [r0, #0]	@ 00069294 0670
.org 0x69296
	subs r0, #33	@ 00069296 2138
.org 0x69298
	ldrh r1, [r0, #0]	@ 00069298 0188
.org 0x6929a
	adds r0, #36	@ 0006929a 2430
.org 0x6929c
	strh r1, [r0, #0]	@ 0006929c 0180
.org 0x6929e
	ldrb r0, [r5, #15]	@ 0006929e e87b
.org 0x692a0
	adds r0, #1	@ 000692a0 0130
.org 0x692a2
	strb r0, [r5, #15]	@ 000692a2 e873
.org 0x692a4
	mov r0, r8	@ 000692a4 4046
.org 0x692a6
	bl 0x1cff0	@ 000692a6 b3f7a3fe
.org 0x692aa
	mov r0, r9	@ 000692aa 4846
.org 0x692ac
	bl 0x1cff0	@ 000692ac b3f7a0fe
.org 0x692b0
	mov r0, sl	@ 000692b0 5046
.org 0x692b2
	bl 0x1cff0	@ 000692b2 b3f79dfe
.org 0x692b6
	adds r0, r7, #0	@ 000692b6 381c
.org 0x692b8
	bl 0x1cff0	@ 000692b8 b3f79afe
.org 0x692bc
	movs r1, #192	@ 000692bc c021
.org 0x692be
	lsls r1, r1, #1	@ 000692be 4900
.org 0x692c0
	adds r0, r5, #0	@ 000692c0 281c
.org 0x692c2
	bl 0x6a028	@ 000692c2 00f0b1fe
.org 0x692c6
	adds r0, r5, #0	@ 000692c6 281c
.org 0x692c8
	bl 0x6a5c8	@ 000692c8 01f07ef9
.org 0x692cc
	adds r0, r5, #0	@ 000692cc 281c
.org 0x692ce
	bl 0x6a660	@ 000692ce 01f0c7f9
.org 0x692d2
	adds r0, r5, #0	@ 000692d2 281c
.org 0x692d4
	bl 0x6ad2c	@ 000692d4 01f02afd
.org 0x692d8
	adds r0, r5, #0	@ 000692d8 281c
.org 0x692da
	adds r0, #197	@ 000692da c530
.org 0x692dc
	ldrb r0, [r0, #0]	@ 000692dc 0078
.org 0x692de
	cmp r0, #1	@ 000692de 0128
.org 0x692e0
	beq.n 0x69300	@ 000692e0 0ed0
.org 0x692e2
	ldr r0, [pc, #24]	@ 000692e2 0648
.org 0x692e4
	ldrh r1, [r0, #8]	@ 000692e4 0189
.org 0x692e6
	movs r0, #8	@ 000692e6 0820
.org 0x692e8
	ands r0, r1	@ 000692e8 0840
.org 0x692ea
	cmp r0, #0	@ 000692ea 0028
.org 0x692ec
	beq.n 0x69300	@ 000692ec 08d0
.org 0x692ee
	movs r0, #0	@ 000692ee 0020
.org 0x692f0
	strb r0, [r5, #13]	@ 000692f0 6873
.org 0x692f2
	strb r0, [r5, #14]	@ 000692f2 a873
.org 0x692f4
	strb r0, [r5, #15]	@ 000692f4 e873
.org 0x692f6
	b.n 0x6931e	@ 000692f6 12e0
.org 0x692f8
	.byte 0x58,0xb6,0x85,0x08	@ 000692f8 data
.org 0x692fc
	.byte 0x10,0xe9,0x02,0x02	@ 000692fc data
.org 0x69300
	adds r0, r5, #0	@ 00069300 281c
.org 0x69302
	adds r0, #164	@ 00069302 a430
.org 0x69304
	movs r2, #0	@ 00069304 0022
.org 0x69306
	ldrsh r1, [r0, r2]	@ 00069306 815e
.org 0x69308
	adds r0, #36	@ 00069308 2430
.org 0x6930a
	movs r2, #0	@ 0006930a 0022
.org 0x6930c
	ldrsh r0, [r0, r2]	@ 0006930c 805e
.org 0x6930e
	subs r0, #9	@ 0006930e 0938
.org 0x69310
	cmp r1, r0	@ 00069310 8142
.org 0x69312
	bgt.n 0x6931e	@ 00069312 04dc
.org 0x69314
	movs r1, #0	@ 00069314 0021
.org 0x69316
	movs r0, #2	@ 00069316 0220
.org 0x69318
	strb r0, [r5, #13]	@ 00069318 6873
.org 0x6931a
	strb r1, [r5, #14]	@ 0006931a a973
.org 0x6931c
	strb r1, [r5, #15]	@ 0006931c e973
.org 0x6931e
	pop {r3, r4, r5}	@ 0006931e 38bc
.org 0x69320
	mov r8, r3	@ 00069320 9846
.org 0x69322
	mov r9, r4	@ 00069322 a146
