@ FUN_080be240  entry 0x080be240  size 176
.thumb
.org 0xbe240
FUN_080be240:
	push {r4, r5, r6, r7, lr}	@ 000be240 f0b5
.org 0xbe242
	mov r7, r8	@ 000be242 4746
.org 0xbe244
	push {r7}	@ 000be244 80b4
.org 0xbe246
	adds r7, r0, #0	@ 000be246 071c
.org 0xbe248
	adds r5, r1, #0	@ 000be248 0d1c
.org 0xbe24a
	lsls r2, r2, #24	@ 000be24a 1206
.org 0xbe24c
	lsrs r6, r2, #24	@ 000be24c 160e
.org 0xbe24e
	lsls r3, r3, #24	@ 000be24e 1b06
.org 0xbe250
	lsrs r3, r3, #24	@ 000be250 1b0e
.org 0xbe252
	mov r8, r3	@ 000be252 9846
.org 0xbe254
	ldr r0, [pc, #104]	@ 000be254 1a48
.org 0xbe256
	ldr r0, [r0, #0]	@ 000be256 0068
.org 0xbe258
	bl 0x5500	@ 000be258 47f752f9
.org 0xbe25c
	mov ip, r0	@ 000be25c 8446
.org 0xbe25e
	cmp r0, #0	@ 000be25e 0028
.org 0xbe260
	beq.n 0xbe2f2	@ 000be260 47d0
.org 0xbe262
	mov r1, ip	@ 000be262 6146
.org 0xbe264
	adds r1, #37	@ 000be264 2531
.org 0xbe266
	movs r2, #0	@ 000be266 0022
.org 0xbe268
	movs r0, #8	@ 000be268 0820
.org 0xbe26a
	strb r0, [r1, #0]	@ 000be26a 0870
.org 0xbe26c
	ldr r1, [pc, #84]	@ 000be26c 1549
.org 0xbe26e
	movs r0, #3	@ 000be26e 0320
.org 0xbe270
	mov r3, ip	@ 000be270 6346
.org 0xbe272
	strb r0, [r3, #9]	@ 000be272 5872
.org 0xbe274
	ldr r0, [r1, #12]	@ 000be274 c868
.org 0xbe276
	ldr r0, [r0, #0]	@ 000be276 0068
.org 0xbe278
	str r0, [r3, #20]	@ 000be278 5861
.org 0xbe27a
	movs r4, #0	@ 000be27a 0024
.org 0xbe27c
	strh r2, [r3, #32]	@ 000be27c 1a84
.org 0xbe27e
	mov r0, ip	@ 000be27e 6046
.org 0xbe280
	adds r0, #34	@ 000be280 2230
.org 0xbe282
	strb r4, [r0, #0]	@ 000be282 0470
.org 0xbe284
	ldr r2, [pc, #64]	@ 000be284 104a
.org 0xbe286
	lsls r3, r6, #3	@ 000be286 f300
.org 0xbe288
	adds r1, r3, r2	@ 000be288 9918
.org 0xbe28a
	ldr r0, [r5, #0]	@ 000be28a 2868
.org 0xbe28c
	ldr r1, [r1, #0]	@ 000be28c 0968
.org 0xbe28e
	adds r0, r0, r1	@ 000be28e 4018
.org 0xbe290
	mov r1, ip	@ 000be290 6146
.org 0xbe292
	str r0, [r1, #84]	@ 000be292 4865
.org 0xbe294
	adds r2, #4	@ 000be294 0432
.org 0xbe296
	adds r3, r3, r2	@ 000be296 9b18
.org 0xbe298
	ldr r0, [r5, #4]	@ 000be298 6868
.org 0xbe29a
	ldr r1, [r3, #0]	@ 000be29a 1968
.org 0xbe29c
	adds r0, r0, r1	@ 000be29c 4018
.org 0xbe29e
	mov r3, ip	@ 000be29e 6346
.org 0xbe2a0
	str r0, [r3, #88]	@ 000be2a0 9865
.org 0xbe2a2
	str r7, [r3, #40]	@ 000be2a2 9f62
.org 0xbe2a4
	mov r0, ip	@ 000be2a4 6046
.org 0xbe2a6
	adds r0, #180	@ 000be2a6 b430
.org 0xbe2a8
	str r7, [r0, #0]	@ 000be2a8 0760
.org 0xbe2aa
	mov r0, r8	@ 000be2aa 4046
.org 0xbe2ac
	strb r0, [r3, #16]	@ 000be2ac 1874
.org 0xbe2ae
	strb r4, [r3, #17]	@ 000be2ae 5c74
.org 0xbe2b0
	adds r2, r6, #0	@ 000be2b0 321c
.org 0xbe2b2
	cmp r2, #0	@ 000be2b2 002a
.org 0xbe2b4
	beq.n 0xbe2cc	@ 000be2b4 0ad0
.org 0xbe2b6
	ldrb r0, [r3, #10]	@ 000be2b6 987a
.org 0xbe2b8
	movs r1, #16	@ 000be2b8 1021
.org 0xbe2ba
	orrs r0, r1	@ 000be2ba 0843
.org 0xbe2bc
	b.n 0xbe2d4	@ 000be2bc 0ae0
.org 0xbe2be
	.byte 0x00	@ 000be2be data
.org 0xbe2bf
	.byte 0x00	@ 000be2bf data
.org 0xbe2c0
	.byte 0x94,0xed,0x02,0x02	@ 000be2c0 data
.org 0xbe2c4
	.byte 0xf4,0x49,0x86,0x08	@ 000be2c4 data
.org 0xbe2c8
	.byte 0xa8,0x4d,0x86,0x08	@ 000be2c8 data
.org 0xbe2cc
	mov r3, ip	@ 000be2cc 6346
.org 0xbe2ce
	ldrb r1, [r3, #10]	@ 000be2ce 997a
.org 0xbe2d0
	movs r0, #239	@ 000be2d0 ef20
.org 0xbe2d2
	ands r0, r1	@ 000be2d2 0840
.org 0xbe2d4
	strb r0, [r3, #10]	@ 000be2d4 9872
.org 0xbe2d6
	movs r1, #1	@ 000be2d6 0121
.org 0xbe2d8
	ands r1, r2	@ 000be2d8 1140
.org 0xbe2da
	mov r0, ip	@ 000be2da 6046
.org 0xbe2dc
	adds r0, #76	@ 000be2dc 4c30
.org 0xbe2de
	strb r1, [r0, #0]	@ 000be2de 0170
.org 0xbe2e0
	mov r3, ip	@ 000be2e0 6346
.org 0xbe2e2
	adds r3, #74	@ 000be2e2 4a33
.org 0xbe2e4
	lsls r1, r1, #4	@ 000be2e4 0901
.org 0xbe2e6
	ldrb r2, [r3, #0]	@ 000be2e6 1a78
.org 0xbe2e8
	movs r0, #17	@ 000be2e8 1120
.org 0xbe2ea
	negs r0, r0	@ 000be2ea 4042
.org 0xbe2ec
	ands r0, r2	@ 000be2ec 1040
.org 0xbe2ee
	orrs r0, r1	@ 000be2ee 0843
