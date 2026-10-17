@ FUN_080ec1f0  entry 0x080ec1f0  size 280
.thumb
.org 0xec1f0
FUN_080ec1f0:
	push {r4, r5, r6, r7, lr}	@ 000ec1f0 f0b5
.org 0xec1f2
	mov r7, sl	@ 000ec1f2 5746
.org 0xec1f4
	mov r6, r9	@ 000ec1f4 4e46
.org 0xec1f6
	mov r5, r8	@ 000ec1f6 4546
.org 0xec1f8
	push {r5, r6, r7}	@ 000ec1f8 e0b4
.org 0xec1fa
	adds r4, r0, #0	@ 000ec1fa 041c
.org 0xec1fc
	ldrb r0, [r4, #17]	@ 000ec1fc 607c
.org 0xec1fe
	cmp r0, #0	@ 000ec1fe 0028
.org 0xec200
	bne.n 0xec2b8	@ 000ec200 5ad1
.org 0xec202
	movs r0, #227	@ 000ec202 e320
.org 0xec204
	lsls r0, r0, #11	@ 000ec204 c002
.org 0xec206
	str r0, [r4, #84]	@ 000ec206 6065
.org 0xec208
	movs r0, #130	@ 000ec208 8220
.org 0xec20a
	lsls r0, r0, #10	@ 000ec20a 8002
.org 0xec20c
	str r0, [r4, #88]	@ 000ec20c a065
.org 0xec20e
	ldrb r0, [r4, #13]	@ 000ec20e 607b
.org 0xec210
	cmp r0, #0	@ 000ec210 0028
.org 0xec212
	beq.n 0xec2fa	@ 000ec212 72d0
.org 0xec214
	ldr r0, [r4, #100]	@ 000ec214 606e
.org 0xec216
	mov r8, r0	@ 000ec216 8046
.org 0xec218
	ldr r6, [r4, #104]	@ 000ec218 a66e
.org 0xec21a
	ldr r1, [r4, #92]	@ 000ec21a e16d
.org 0xec21c
	mov sl, r1	@ 000ec21c 8a46
.org 0xec21e
	ldr r0, [r4, #96]	@ 000ec21e 206e
.org 0xec220
	mov r9, r0	@ 000ec220 8146
.org 0xec222
	ldrb r0, [r4, #16]	@ 000ec222 207c
.org 0xec224
	cmp r0, #1	@ 000ec224 0128
.org 0xec226
	bne.n 0xec2b2	@ 000ec226 44d1
.org 0xec228
	mov r0, r8	@ 000ec228 4046
.org 0xec22a
	adds r1, r6, #0	@ 000ec22a 311c
.org 0xec22c
	bl 0xc66c	@ 000ec22c 20f71efa
.org 0xec230
	lsls r0, r0, #16	@ 000ec230 0004
.org 0xec232
	cmp r0, #0	@ 000ec232 0028
.org 0xec234
	beq.n 0xec240	@ 000ec234 04d0
.org 0xec236
	adds r0, r4, #0	@ 000ec236 201c
.org 0xec238
	mov r1, r8	@ 000ec238 4146
.org 0xec23a
	adds r2, r6, #0	@ 000ec23a 321c
.org 0xec23c
	bl 0xebe6c	@ 000ec23c fff716fe
.org 0xec240
	mov r5, r8	@ 000ec240 4546
.org 0xec242
	add r5, sl	@ 000ec242 5544
.org 0xec244
	mov r1, r9	@ 000ec244 4946
.org 0xec246
	adds r7, r6, r1	@ 000ec246 7718
.org 0xec248
	adds r0, r5, #0	@ 000ec248 281c
.org 0xec24a
	adds r1, r7, #0	@ 000ec24a 391c
.org 0xec24c
	bl 0xc66c	@ 000ec24c 20f70efa
.org 0xec250
	lsls r0, r0, #16	@ 000ec250 0004
.org 0xec252
	cmp r0, #0	@ 000ec252 0028
.org 0xec254
	beq.n 0xec260	@ 000ec254 04d0
.org 0xec256
	adds r0, r4, #0	@ 000ec256 201c
.org 0xec258
	adds r1, r5, #0	@ 000ec258 291c
.org 0xec25a
	adds r2, r7, #0	@ 000ec25a 3a1c
.org 0xec25c
	bl 0xebe6c	@ 000ec25c fff706fe
.org 0xec260
	mov r0, r9	@ 000ec260 4846
.org 0xec262
	subs r6, r6, r0	@ 000ec262 361a
.org 0xec264
	adds r0, r5, #0	@ 000ec264 281c
.org 0xec266
	adds r1, r6, #0	@ 000ec266 311c
.org 0xec268
	bl 0xc66c	@ 000ec268 20f700fa
.org 0xec26c
	lsls r0, r0, #16	@ 000ec26c 0004
.org 0xec26e
	cmp r0, #0	@ 000ec26e 0028
.org 0xec270
	beq.n 0xec27c	@ 000ec270 04d0
.org 0xec272
	adds r0, r4, #0	@ 000ec272 201c
.org 0xec274
	adds r1, r5, #0	@ 000ec274 291c
.org 0xec276
	adds r2, r6, #0	@ 000ec276 321c
.org 0xec278
	bl 0xebe6c	@ 000ec278 fff7f8fd
.org 0xec27c
	mov r1, r8	@ 000ec27c 4146
.org 0xec27e
	mov r0, sl	@ 000ec27e 5046
.org 0xec280
	subs r5, r1, r0	@ 000ec280 0d1a
.org 0xec282
	adds r0, r5, #0	@ 000ec282 281c
.org 0xec284
	adds r1, r7, #0	@ 000ec284 391c
.org 0xec286
	bl 0xc66c	@ 000ec286 20f7f1f9
.org 0xec28a
	lsls r0, r0, #16	@ 000ec28a 0004
.org 0xec28c
	cmp r0, #0	@ 000ec28c 0028
.org 0xec28e
	beq.n 0xec29a	@ 000ec28e 04d0
.org 0xec290
	adds r0, r4, #0	@ 000ec290 201c
.org 0xec292
	adds r1, r5, #0	@ 000ec292 291c
.org 0xec294
	adds r2, r7, #0	@ 000ec294 3a1c
.org 0xec296
	bl 0xebe6c	@ 000ec296 fff7e9fd
.org 0xec29a
	adds r0, r5, #0	@ 000ec29a 281c
.org 0xec29c
	adds r1, r6, #0	@ 000ec29c 311c
.org 0xec29e
	bl 0xc66c	@ 000ec29e 20f7e5f9
.org 0xec2a2
	lsls r0, r0, #16	@ 000ec2a2 0004
.org 0xec2a4
	cmp r0, #0	@ 000ec2a4 0028
.org 0xec2a6
	beq.n 0xec2b2	@ 000ec2a6 04d0
.org 0xec2a8
	adds r0, r4, #0	@ 000ec2a8 201c
.org 0xec2aa
	adds r1, r5, #0	@ 000ec2aa 291c
.org 0xec2ac
	adds r2, r6, #0	@ 000ec2ac 321c
.org 0xec2ae
	bl 0xebe6c	@ 000ec2ae fff7ddfd
.org 0xec2b2
	movs r0, #0	@ 000ec2b2 0020
.org 0xec2b4
	strb r0, [r4, #13]	@ 000ec2b4 6073
.org 0xec2b6
	b.n 0xec2fa	@ 000ec2b6 20e0
.org 0xec2b8
	adds r0, r4, #0	@ 000ec2b8 201c
.org 0xec2ba
	bl 0xebfc8	@ 000ec2ba fff785fe
.org 0xec2be
	lsls r0, r0, #16	@ 000ec2be 0004
.org 0xec2c0
	asrs r2, r0, #16	@ 000ec2c0 0214
.org 0xec2c2
	cmp r2, #0	@ 000ec2c2 002a
.org 0xec2c4
	bne.n 0xec2fa	@ 000ec2c4 19d1
.org 0xec2c6
	ldrb r1, [r4, #10]	@ 000ec2c6 a17a
.org 0xec2c8
	movs r0, #254	@ 000ec2c8 fe20
.org 0xec2ca
	ands r0, r1	@ 000ec2ca 0840
.org 0xec2cc
	movs r1, #253	@ 000ec2cc fd21
.org 0xec2ce
	ands r0, r1	@ 000ec2ce 0840
.org 0xec2d0
	strb r0, [r4, #10]	@ 000ec2d0 a072
.org 0xec2d2
	adds r0, r4, #0	@ 000ec2d2 201c
.org 0xec2d4
	adds r0, #140	@ 000ec2d4 8c30
.org 0xec2d6
	str r2, [r0, #0]	@ 000ec2d6 0260
.org 0xec2d8
	adds r0, #4	@ 000ec2d8 0430
.org 0xec2da
	str r2, [r0, #0]	@ 000ec2da 0260
.org 0xec2dc
	adds r0, #4	@ 000ec2dc 0430
.org 0xec2de
	strb r2, [r0, #0]	@ 000ec2de 0270
.org 0xec2e0
	ldrb r1, [r4, #10]	@ 000ec2e0 a17a
.org 0xec2e2
	movs r0, #251	@ 000ec2e2 fb20
.org 0xec2e4
	ands r0, r1	@ 000ec2e4 0840
.org 0xec2e6
	strb r0, [r4, #10]	@ 000ec2e6 a072
.org 0xec2e8
	ldr r1, [pc, #28]	@ 000ec2e8 0749
.org 0xec2ea
	ldrb r0, [r4, #9]	@ 000ec2ea 607a
.org 0xec2ec
	lsls r0, r0, #2	@ 000ec2ec 8000
.org 0xec2ee
	adds r0, r0, r1	@ 000ec2ee 4018
.org 0xec2f0
	movs r1, #3	@ 000ec2f0 0321
.org 0xec2f2
	str r1, [r4, #12]	@ 000ec2f2 e160
.org 0xec2f4
	ldr r0, [r0, #0]	@ 000ec2f4 0068
.org 0xec2f6
	ldr r0, [r0, #12]	@ 000ec2f6 c068
.org 0xec2f8
	str r0, [r4, #20]	@ 000ec2f8 6061
.org 0xec2fa
	pop {r3, r4, r5}	@ 000ec2fa 38bc
.org 0xec2fc
	mov r8, r3	@ 000ec2fc 9846
.org 0xec2fe
	mov r9, r4	@ 000ec2fe a146
.org 0xec300
	mov sl, r5	@ 000ec300 aa46
.org 0xec302
	pop {r4, r5, r6, r7}	@ 000ec302 f0bc
.org 0xec304
	pop {r0}	@ 000ec304 01bc
.org 0xec306
	bx r0	@ 000ec306 0047
