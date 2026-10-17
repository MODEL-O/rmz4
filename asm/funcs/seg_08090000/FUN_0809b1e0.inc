@ FUN_0809b1e0  entry 0x0809b1e0  size 96
.thumb
.org 0x9b1e0
FUN_0809b1e0:
	push {r4, r5, r6, lr}	@ 0009b1e0 70b5
.org 0x9b1e2
	adds r4, r0, #0	@ 0009b1e2 041c
.org 0x9b1e4
	ldr r1, [r4, #40]	@ 0009b1e4 a16a
.org 0x9b1e6
	ldrb r0, [r4, #15]	@ 0009b1e6 e07b
.org 0x9b1e8
	cmp r0, #0	@ 0009b1e8 0028
.org 0x9b1ea
	bne.n 0x9b222	@ 0009b1ea 1ad1
.org 0x9b1ec
	adds r0, r4, #0	@ 0009b1ec 201c
.org 0x9b1ee
	adds r0, #183	@ 0009b1ee b730
.org 0x9b1f0
	movs r6, #1	@ 0009b1f0 0126
.org 0x9b1f2
	strb r6, [r0, #0]	@ 0009b1f2 0670
.org 0x9b1f4
	adds r5, r4, #0	@ 0009b1f4 251c
.org 0x9b1f6
	adds r5, #182	@ 0009b1f6 b635
.org 0x9b1f8
	ldrb r0, [r5, #0]	@ 0009b1f8 2878
.org 0x9b1fa
	cmp r0, #0	@ 0009b1fa 0028
.org 0x9b1fc
	bne.n 0x9b208	@ 0009b1fc 04d1
.org 0x9b1fe
	adds r0, r1, #0	@ 0009b1fe 081c
.org 0x9b200
	adds r1, r4, #0	@ 0009b200 211c
.org 0x9b202
	bl 0x663dc	@ 0009b202 cbf7ebf8
.org 0x9b206
	strb r6, [r5, #0]	@ 0009b206 2e70
.org 0x9b208
	adds r0, r4, #0	@ 0009b208 201c
.org 0x9b20a
	adds r0, #116	@ 0009b20a 7430
.org 0x9b20c
	ldr r1, [pc, #48]	@ 0009b20c 0c49
.org 0x9b20e
	ldr r1, [r1, #4]	@ 0009b20e 4968
.org 0x9b210
	bl 0x5784	@ 0009b210 6af7b8fa
.org 0x9b214
	ldr r1, [pc, #44]	@ 0009b214 0b49
.org 0x9b216
	adds r0, r4, #0	@ 0009b216 201c
.org 0x9b218
	bl 0x1cf00	@ 0009b218 81f772fe
.org 0x9b21c
	ldrb r0, [r4, #15]	@ 0009b21c e07b
.org 0x9b21e
	adds r0, #1	@ 0009b21e 0130
.org 0x9b220
	strb r0, [r4, #15]	@ 0009b220 e073
.org 0x9b222
	adds r0, r4, #0	@ 0009b222 201c
.org 0x9b224
	bl 0x1cff0	@ 0009b224 81f7e4fe
.org 0x9b228
	adds r0, r4, #0	@ 0009b228 201c
.org 0x9b22a
	adds r0, #115	@ 0009b22a 7330
.org 0x9b22c
	ldrb r1, [r0, #0]	@ 0009b22c 0178
.org 0x9b22e
	cmp r1, #3	@ 0009b22e 0329
.org 0x9b230
	bne.n 0x9b23a	@ 0009b230 03d1
.org 0x9b232
	movs r0, #0	@ 0009b232 0020
.org 0x9b234
	strb r1, [r4, #13]	@ 0009b234 6173
.org 0x9b236
	strb r0, [r4, #14]	@ 0009b236 a073
.org 0x9b238
	strb r0, [r4, #15]	@ 0009b238 e073
.org 0x9b23a
	pop {r4, r5, r6}	@ 0009b23a 70bc
.org 0x9b23c
	pop {r0}	@ 0009b23c 01bc
.org 0x9b23e
	bx r0	@ 0009b23e 0047
