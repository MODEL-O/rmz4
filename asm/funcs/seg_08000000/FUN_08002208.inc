@ FUN_08002208  entry 0x08002208  size 72
.thumb
.org 0x2208
FUN_08002208:
	push {r4, lr}	@ 00002208 10b5
.org 0x220a
	adds r3, r0, #0	@ 0000220a 031c
.org 0x220c
	adds r4, r1, #0	@ 0000220c 0c1c
.org 0x220e
	ldrh r0, [r3, #4]	@ 0000220e 9888
.org 0x2210
	cmp r0, #0	@ 00002210 0028
.org 0x2212
	beq.n 0x2250	@ 00002212 1dd0
.org 0x2214
	ldrb r0, [r3, #7]	@ 00002214 d879
.org 0x2216
	lsls r0, r0, #5	@ 00002216 4001
.org 0x2218
	adds r4, r4, r0	@ 00002218 2418
.org 0x221a
	ldrb r0, [r3, #6]	@ 0000221a 9879
.org 0x221c
	cmp r0, #0	@ 0000221c 0028
.org 0x221e
	beq.n 0x2234	@ 0000221e 09d0
.org 0x2220
	ldr r0, [r3, #0]	@ 00002220 1868
.org 0x2222
	adds r0, r3, r0	@ 00002222 1818
.org 0x2224
	ldr r1, [pc, #8]	@ 00002224 0249
.org 0x2226
	adds r1, r4, r1	@ 00002226 6118
.org 0x2228
	bl 0x128bec	@ 00002228 26f1e0fc
.org 0x222c
	b.n 0x2250	@ 0000222c 10e0
.org 0x222e
	.byte 0x00	@ 0000222e data
.org 0x222f
	.byte 0x00	@ 0000222f data
.org 0x2230
	.byte 0xc0,0x2a,0x00,0x03	@ 00002230 data
.org 0x2234
	ldr r2, [pc, #32]	@ 00002234 084a
.org 0x2236
	ldr r0, [r3, #0]	@ 00002236 1868
.org 0x2238
	adds r0, r3, r0	@ 00002238 1818
.org 0x223a
	str r0, [r2, #0]	@ 0000223a 1060
.org 0x223c
	ldr r0, [pc, #28]	@ 0000223c 0748
.org 0x223e
	adds r0, r4, r0	@ 0000223e 2018
.org 0x2240
	str r0, [r2, #4]	@ 00002240 5060
.org 0x2242
	ldrh r0, [r3, #4]	@ 00002242 9888
.org 0x2244
	lsrs r0, r0, #2	@ 00002244 8008
.org 0x2246
	movs r1, #132	@ 00002246 8421
.org 0x2248
	lsls r1, r1, #24	@ 00002248 0906
.org 0x224a
	orrs r0, r1	@ 0000224a 0843
.org 0x224c
	str r0, [r2, #8]	@ 0000224c 9060
.org 0x224e
	ldr r0, [r2, #8]	@ 0000224e 9068
