@ FUN_08009370  entry 0x08009370  size 162
.thumb
.org 0x9370
FUN_08009370:
	push {r4, r5, r6, r7, lr}	@ 00009370 f0b5
.org 0x9372
	mov r7, sl	@ 00009372 5746
.org 0x9374
	mov r6, r9	@ 00009374 4e46
.org 0x9376
	mov r5, r8	@ 00009376 4546
.org 0x9378
	push {r5, r6, r7}	@ 00009378 e0b4
.org 0x937a
	sub sp, #4	@ 0000937a 81b0
.org 0x937c
	mov sl, r0	@ 0000937c 8246
.org 0x937e
	mov r9, r1	@ 0000937e 8946
.org 0x9380
	movs r5, #0	@ 00009380 0025
.org 0x9382
	ldr r0, [pc, #104]	@ 00009382 1a48
.org 0x9384
	movs r2, #233	@ 00009384 e922
.org 0x9386
	lsls r2, r2, #1	@ 00009386 5200
.org 0x9388
	adds r1, r0, r2	@ 00009388 8118
.org 0x938a
	ldrb r1, [r1, #0]	@ 0000938a 0978
.org 0x938c
	cmp r5, r1	@ 0000938c 8d42
.org 0x938e
	bge.n 0x940c	@ 0000938e 3dda
.org 0x9390
	movs r7, #240	@ 00009390 f027
.org 0x9392
	lsls r7, r7, #1	@ 00009392 7f00
.org 0x9394
	adds r7, r7, r0	@ 00009394 3f18
.org 0x9396
	mov ip, r7	@ 00009396 bc46
.org 0x9398
	adds r2, #10	@ 00009398 0a32
.org 0x939a
	adds r2, r0, r2	@ 0000939a 8218
.org 0x939c
	str r2, [sp, #0]	@ 0000939c 0092
.org 0x939e
	adds r3, r0, #0	@ 0000939e 031c
.org 0x93a0
	movs r6, #0	@ 000093a0 0026
.org 0x93a2
	mov r8, r1	@ 000093a2 8846
.org 0x93a4
	movs r7, #236	@ 000093a4 ec27
.org 0x93a6
	lsls r7, r7, #1	@ 000093a6 7f00
.org 0x93a8
	adds r0, r3, r7	@ 000093a8 d819
.org 0x93aa
	ldrh r1, [r0, #0]	@ 000093aa 0188
.org 0x93ac
	lsls r2, r1, #1	@ 000093ac 4a00
.org 0x93ae
	ldr r0, [sp, #0]	@ 000093ae 0098
.org 0x93b0
	ldr r4, [r0, #0]	@ 000093b0 0468
.org 0x93b2
	mov r7, sl	@ 000093b2 5746
.org 0x93b4
	subs r0, r7, r4	@ 000093b4 381b
.org 0x93b6
	adds r0, r0, r1	@ 000093b6 4018
.org 0x93b8
	cmp r2, r0	@ 000093b8 8242
.org 0x93ba
	bls.n 0x93f8	@ 000093ba 1dd9
.org 0x93bc
	movs r1, #237	@ 000093bc ed21
.org 0x93be
	lsls r1, r1, #1	@ 000093be 4900
.org 0x93c0
	adds r0, r3, r1	@ 000093c0 5818
.org 0x93c2
	ldrh r0, [r0, #0]	@ 000093c2 0088
.org 0x93c4
	lsls r2, r0, #1	@ 000093c4 4200
.org 0x93c6
	mov r7, ip	@ 000093c6 6746
.org 0x93c8
	ldr r1, [r7, #0]	@ 000093c8 3968
.org 0x93ca
	mov r7, r9	@ 000093ca 4f46
.org 0x93cc
	subs r1, r7, r1	@ 000093cc 791a
.org 0x93ce
	adds r1, r1, r0	@ 000093ce 0918
.org 0x93d0
	subs r1, #1	@ 000093d0 0139
.org 0x93d2
	cmp r2, r1	@ 000093d2 8a42
.org 0x93d4
	bls.n 0x93f8	@ 000093d4 10d9
.org 0x93d6
	ldr r1, [pc, #24]	@ 000093d6 0649
.org 0x93d8
	adds r0, r6, r1	@ 000093d8 7018
.org 0x93da
	ldr r0, [r0, #0]	@ 000093da 0068
.org 0x93dc
	subs r0, r4, r0	@ 000093dc 201a
.org 0x93de
	ldr r2, [pc, #20]	@ 000093de 054a
.org 0x93e0
	str r0, [r2, #0]	@ 000093e0 1060
.org 0x93e2
	movs r7, #235	@ 000093e2 eb27
.org 0x93e4
	lsls r7, r7, #1	@ 000093e4 7f00
.org 0x93e6
	adds r0, r3, r7	@ 000093e6 d819
.org 0x93e8
	ldrh r0, [r0, #0]	@ 000093e8 0088
.org 0x93ea
	b.n 0x940e	@ 000093ea 10e0
.org 0x93ec
	.byte 0xb0,0x0a,0x00,0x02	@ 000093ec data
.org 0x93f0
	.byte 0x94,0x0c,0x00,0x02	@ 000093f0 data
.org 0x93f4
	.byte 0x28,0x00,0x00,0x02	@ 000093f4 data
.org 0x93f8
	movs r0, #24	@ 000093f8 1820
.org 0x93fa
	add ip, r0	@ 000093fa 8444
.org 0x93fc
	ldr r1, [sp, #0]	@ 000093fc 0099
.org 0x93fe
	adds r1, #24	@ 000093fe 1831
.org 0x9400
	str r1, [sp, #0]	@ 00009400 0091
.org 0x9402
	adds r3, #24	@ 00009402 1833
.org 0x9404
	adds r6, #24	@ 00009404 1836
.org 0x9406
	adds r5, #1	@ 00009406 0135
.org 0x9408
	cmp r5, r8	@ 00009408 4545
.org 0x940a
	blt.n 0x93a4	@ 0000940a cbdb
.org 0x940c
	movs r0, #0	@ 0000940c 0020
.org 0x940e
	add sp, #4	@ 0000940e 01b0
.org 0x9410
	pop {r3, r4, r5}	@ 00009410 38bc
