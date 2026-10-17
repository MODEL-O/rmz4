@ FUN_0809f1f8  entry 0x0809f1f8  size 72
.thumb
.org 0x9f1f8
FUN_0809f1f8:
	push {r4, r5, r6, lr}	@ 0009f1f8 70b5
.org 0x9f1fa
	adds r4, r0, #0	@ 0009f1fa 041c
.org 0x9f1fc
	ldr r0, [r4, #20]	@ 0009f1fc 6069
.org 0x9f1fe
	movs r6, #1	@ 0009f1fe 0126
.org 0x9f200
	ands r0, r6	@ 0009f200 3040
.org 0x9f202
	cmp r0, #0	@ 0009f202 0028
.org 0x9f204
	beq.n 0x9f23a	@ 0009f204 19d0
.org 0x9f206
	ldr r5, [r4, #44]	@ 0009f206 e56a
.org 0x9f208
	movs r0, #8	@ 0009f208 0820
.org 0x9f20a
	bl 0x6984	@ 0009f20a 67f7bbfb
.org 0x9f20e
	ldr r1, [r4, #20]	@ 0009f20e 6169
.org 0x9f210
	movs r0, #128	@ 0009f210 8020
.org 0x9f212
	lsls r0, r0, #2	@ 0009f212 8000
.org 0x9f214
	ands r0, r1	@ 0009f214 0840
.org 0x9f216
	cmp r0, #0	@ 0009f216 0028
.org 0x9f218
	beq.n 0x9f23a	@ 0009f218 0fd0
.org 0x9f21a
	movs r0, #128	@ 0009f21a 8020
.org 0x9f21c
	lsls r0, r0, #10	@ 0009f21c 8002
.org 0x9f21e
	ands r1, r0	@ 0009f21e 0140
.org 0x9f220
	cmp r1, #0	@ 0009f220 0029
.org 0x9f222
	beq.n 0x9f23a	@ 0009f222 0ad0
.org 0x9f224
	adds r0, r5, #0	@ 0009f224 281c
.org 0x9f226
	adds r0, #185	@ 0009f226 b930
.org 0x9f228
	strb r6, [r0, #0]	@ 0009f228 0670
.org 0x9f22a
	ldr r0, [pc, #20]	@ 0009f22a 0548
.org 0x9f22c
	ldr r0, [r0, #0]	@ 0009f22c 0068
.org 0x9f22e
	cmp r0, #0	@ 0009f22e 0028
.org 0x9f230
	beq.n 0x9f23a	@ 0009f230 03d0
.org 0x9f232
	movs r1, #3	@ 0009f232 0321
.org 0x9f234
	movs r2, #14	@ 0009f234 0e22
.org 0x9f236
	bl 0x3a578	@ 0009f236 9bf79ff9
.org 0x9f23a
	pop {r4, r5, r6}	@ 0009f23a 70bc
.org 0x9f23c
	pop {r0}	@ 0009f23c 01bc
.org 0x9f23e
	bx r0	@ 0009f23e 0047
