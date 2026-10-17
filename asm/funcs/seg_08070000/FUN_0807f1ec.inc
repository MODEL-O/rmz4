@ FUN_0807f1ec  entry 0x0807f1ec  size 82
.thumb
.org 0x7f1ec
FUN_0807f1ec:
	push {r4, lr}	@ 0007f1ec 10b5
.org 0x7f1ee
	adds r4, r0, #0	@ 0007f1ee 041c
.org 0x7f1f0
	ldrb r0, [r4, #14]	@ 0007f1f0 a07b
.org 0x7f1f2
	cmp r0, #0	@ 0007f1f2 0028
.org 0x7f1f4
	bne.n 0x7f21a	@ 0007f1f4 11d1
.org 0x7f1f6
	ldrb r0, [r4, #30]	@ 0007f1f6 a07f
.org 0x7f1f8
	lsls r0, r0, #8	@ 0007f1f8 0002
.org 0x7f1fa
	adds r1, r4, #0	@ 0007f1fa 211c
.org 0x7f1fc
	adds r1, #112	@ 0007f1fc 7031
.org 0x7f1fe
	ldrb r1, [r1, #0]	@ 0007f1fe 0978
.org 0x7f200
	orrs r0, r1	@ 0007f200 0843
.org 0x7f202
	movs r1, #200	@ 0007f202 c821
.org 0x7f204
	lsls r1, r1, #8	@ 0007f204 0902
.org 0x7f206
	cmp r0, r1	@ 0007f206 8842
.org 0x7f208
	beq.n 0x7f210	@ 0007f208 02d0
.org 0x7f20a
	adds r0, r4, #0	@ 0007f20a 201c
.org 0x7f20c
	bl 0x1cf00	@ 0007f20c 9df778fe
.org 0x7f210
	movs r0, #4	@ 0007f210 0420
.org 0x7f212
	strb r0, [r4, #18]	@ 0007f212 a074
.org 0x7f214
	ldrb r0, [r4, #14]	@ 0007f214 a07b
.org 0x7f216
	adds r0, #1	@ 0007f216 0130
.org 0x7f218
	strb r0, [r4, #14]	@ 0007f218 a073
.org 0x7f21a
	adds r0, r4, #0	@ 0007f21a 201c
.org 0x7f21c
	bl 0x1cff0	@ 0007f21c 9df7e8fe
.org 0x7f220
	ldr r0, [pc, #28]	@ 0007f220 0748
.org 0x7f222
	ldrb r0, [r0, #18]	@ 0007f222 807c
.org 0x7f224
	movs r2, #1	@ 0007f224 0122
.org 0x7f226
	ands r2, r0	@ 0007f226 0240
.org 0x7f228
	cmp r2, #0	@ 0007f228 002a
.org 0x7f22a
	bne.n 0x7f238	@ 0007f22a 05d1
.org 0x7f22c
	movs r0, #4	@ 0007f22c 0420
.org 0x7f22e
	strb r0, [r4, #13]	@ 0007f22e 6073
.org 0x7f230
	adds r1, r4, #0	@ 0007f230 211c
.org 0x7f232
	adds r1, #215	@ 0007f232 d731
.org 0x7f234
	strb r0, [r1, #0]	@ 0007f234 0870
.org 0x7f236
	strb r2, [r4, #14]	@ 0007f236 a273
.org 0x7f238
	pop {r4}	@ 0007f238 10bc
.org 0x7f23a
	pop {r0}	@ 0007f23a 01bc
.org 0x7f23c
	bx r0	@ 0007f23c 0047
