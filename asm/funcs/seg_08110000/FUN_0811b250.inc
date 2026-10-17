@ FUN_0811b250  entry 0x0811b250  size 120
.thumb
.org 0x11b250
FUN_0811b250:
	push {r4, r5, r6, lr}	@ 0011b250 70b5
.org 0x11b252
	mov r6, r8	@ 0011b252 4646
.org 0x11b254
	push {r6}	@ 0011b254 40b4
.org 0x11b256
	sub sp, #4	@ 0011b256 81b0
.org 0x11b258
	adds r6, r0, #0	@ 0011b258 061c
.org 0x11b25a
	movs r1, #222	@ 0011b25a de21
.org 0x11b25c
	lsls r1, r1, #4	@ 0011b25c 0901
.org 0x11b25e
	adds r0, r6, r1	@ 0011b25e 7018
.org 0x11b260
	movs r5, #0	@ 0011b260 0025
.org 0x11b262
	strb r5, [r0, #0]	@ 0011b262 0570
.org 0x11b264
	strb r5, [r0, #1]	@ 0011b264 4570
.org 0x11b266
	ldr r0, [pc, #96]	@ 0011b266 1848
.org 0x11b268
	ldr r1, [pc, #96]	@ 0011b268 1849
.org 0x11b26a
	mov r8, r1	@ 0011b26a 8846
.org 0x11b26c
	ldrh r2, [r1, #0]	@ 0011b26c 0a88
.org 0x11b26e
	movs r1, #12	@ 0011b26e 0c21
.org 0x11b270
	ands r1, r2	@ 0011b270 1140
.org 0x11b272
	lsls r1, r1, #12	@ 0011b272 0903
.org 0x11b274
	bl 0x1d30	@ 0011b274 e6f65cfd
.org 0x11b278
	ldr r0, [pc, #84]	@ 0011b278 1548
.org 0x11b27a
	movs r1, #0	@ 0011b27a 0021
.org 0x11b27c
	bl 0x2208	@ 0011b27c e6f6c4ff
.org 0x11b280
	ldr r0, [pc, #80]	@ 0011b280 1448
.org 0x11b282
	adds r4, r6, r0	@ 0011b282 3418
.org 0x11b284
	ldr r1, [pc, #80]	@ 0011b284 1449
.org 0x11b286
	str r5, [sp, #0]	@ 0011b286 0095
.org 0x11b288
	adds r0, r4, #0	@ 0011b288 201c
.org 0x11b28a
	movs r2, #22	@ 0011b28a 1622
.org 0x11b28c
	movs r3, #0	@ 0011b28c 0023
.org 0x11b28e
	bl 0x27b8	@ 0011b28e e7f693fa
.org 0x11b292
	adds r0, r6, #0	@ 0011b292 301c
.org 0x11b294
	adds r1, r4, #0	@ 0011b294 211c
.org 0x11b296
	bl 0x11ba00	@ 0011b296 00f0b3fb
.org 0x11b29a
	mov r1, r8	@ 0011b29a 4146
.org 0x11b29c
	ldrh r0, [r1, #0]	@ 0011b29c 0888
.org 0x11b29e
	movs r1, #248	@ 0011b29e f821
.org 0x11b2a0
	lsls r1, r1, #5	@ 0011b2a0 4901
.org 0x11b2a2
	ands r1, r0	@ 0011b2a2 0140
.org 0x11b2a4
	lsls r1, r1, #3	@ 0011b2a4 c900
.org 0x11b2a6
	movs r2, #128	@ 0011b2a6 8022
.org 0x11b2a8
	lsls r2, r2, #5	@ 0011b2a8 5201
.org 0x11b2aa
	adds r0, r4, #0	@ 0011b2aa 201c
.org 0x11b2ac
	bl 0x1f1c	@ 0011b2ac e6f636fe
.org 0x11b2b0
	movs r0, #51	@ 0011b2b0 3320
.org 0x11b2b2
	movs r1, #0	@ 0011b2b2 0021
.org 0x11b2b4
	bl 0x249c	@ 0011b2b4 e7f6f2f8
.org 0x11b2b8
	movs r0, #2	@ 0011b2b8 0220
.org 0x11b2ba
	strb r0, [r6, #2]	@ 0011b2ba b070
.org 0x11b2bc
	add sp, #4	@ 0011b2bc 01b0
.org 0x11b2be
	pop {r3}	@ 0011b2be 08bc
.org 0x11b2c0
	mov r8, r3	@ 0011b2c0 9846
.org 0x11b2c2
	pop {r4, r5, r6}	@ 0011b2c2 70bc
.org 0x11b2c4
	pop {r0}	@ 0011b2c4 01bc
.org 0x11b2c6
	bx r0	@ 0011b2c6 0047
