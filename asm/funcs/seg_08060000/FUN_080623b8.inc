@ FUN_080623b8  entry 0x080623b8  size 182
.thumb
.org 0x623b8
FUN_080623b8:
	push {r4, r5, r6, lr}	@ 000623b8 70b5
.org 0x623ba
	sub sp, #8	@ 000623ba 82b0
.org 0x623bc
	adds r6, r0, #0	@ 000623bc 061c
.org 0x623be
	ldr r0, [pc, #176]	@ 000623be 2c48
.org 0x623c0
	ldr r1, [r0, #4]	@ 000623c0 4168
.org 0x623c2
	ldr r0, [r0, #0]	@ 000623c2 0068
.org 0x623c4
	str r0, [sp, #0]	@ 000623c4 0090
.org 0x623c6
	str r1, [sp, #4]	@ 000623c6 0191
.org 0x623c8
	ldrb r0, [r6, #15]	@ 000623c8 f07b
.org 0x623ca
	cmp r0, #0	@ 000623ca 0028
.org 0x623cc
	bne.n 0x62402	@ 000623cc 19d1
.org 0x623ce
	adds r2, r6, #0	@ 000623ce 321c
.org 0x623d0
	adds r2, #208	@ 000623d0 d032
.org 0x623d2
	ldr r1, [pc, #160]	@ 000623d2 2849
.org 0x623d4
	ldr r0, [r1, #56]	@ 000623d4 886b
.org 0x623d6
	ldr r3, [pc, #160]	@ 000623d6 284b
.org 0x623d8
	adds r0, r0, r3	@ 000623d8 c018
.org 0x623da
	str r0, [r2, #0]	@ 000623da 1060
.org 0x623dc
	adds r2, #4	@ 000623dc 0432
.org 0x623de
	ldr r0, [r1, #60]	@ 000623de c86b
.org 0x623e0
	ldr r3, [pc, #152]	@ 000623e0 264b
.org 0x623e2
	adds r0, r0, r3	@ 000623e2 c018
.org 0x623e4
	str r0, [r2, #0]	@ 000623e4 1060
.org 0x623e6
	subs r1, #232	@ 000623e6 e839
.org 0x623e8
	ldrh r0, [r1, #0]	@ 000623e8 0888
.org 0x623ea
	movs r1, #0	@ 000623ea 0021
.org 0x623ec
	cmp r0, #16	@ 000623ec 1028
.org 0x623ee
	bne.n 0x623f2	@ 000623ee 00d1
.org 0x623f0
	movs r1, #4	@ 000623f0 0421
.org 0x623f2
	mov r2, sp	@ 000623f2 6a46
.org 0x623f4
	adds r0, r1, r2	@ 000623f4 8818
.org 0x623f6
	ldrh r0, [r0, #0]	@ 000623f6 0088
.org 0x623f8
	bl 0x2b10	@ 000623f8 a0f78afb
.org 0x623fc
	ldrb r0, [r6, #15]	@ 000623fc f07b
.org 0x623fe
	adds r0, #1	@ 000623fe 0130
.org 0x62400
	strb r0, [r6, #15]	@ 00062400 f073
.org 0x62402
	adds r0, r6, #0	@ 00062402 301c
.org 0x62404
	bl 0x1cff0	@ 00062404 baf7f4fd
.org 0x62408
	adds r0, r6, #0	@ 00062408 301c
.org 0x6240a
	adds r0, #116	@ 0006240a 7430
.org 0x6240c
	ldr r4, [pc, #112]	@ 0006240c 1c4c
.org 0x6240e
	ldr r3, [pc, #116]	@ 0006240e 1d4b
.org 0x62410
	adds r1, r6, #0	@ 00062410 311c
.org 0x62412
	adds r1, #180	@ 00062412 b431
.org 0x62414
	ldrb r2, [r1, #0]	@ 00062414 0a78
.org 0x62416
	lsls r1, r2, #1	@ 00062416 5100
.org 0x62418
	adds r1, r1, r3	@ 00062418 c918
.org 0x6241a
	ldrh r1, [r1, #0]	@ 0006241a 0988
.org 0x6241c
	lsls r1, r1, #2	@ 0006241c 8900
.org 0x6241e
	adds r1, r1, r4	@ 0006241e 0919
.org 0x62420
	adds r3, r6, #0	@ 00062420 331c
.org 0x62422
	adds r3, #113	@ 00062422 7133
.org 0x62424
	movs r5, #0	@ 00062424 0025
.org 0x62426
	ldrsb r5, [r3, r5]	@ 00062426 5d57
.org 0x62428
	ldr r1, [r1, #0]	@ 00062428 0968
.org 0x6242a
	lsls r3, r5, #2	@ 0006242a ab00
.org 0x6242c
	adds r3, r3, r1	@ 0006242c 5b18
.org 0x6242e
	ldr r4, [pc, #88]	@ 0006242e 164c
.org 0x62430
	adds r1, r6, #0	@ 00062430 311c
.org 0x62432
	adds r1, #181	@ 00062432 b531
.org 0x62434
	ldrb r1, [r1, #0]	@ 00062434 0978
.org 0x62436
	lsls r1, r1, #2	@ 00062436 8900
.org 0x62438
	adds r1, r1, r4	@ 00062438 0919
.org 0x6243a
	ldr r1, [r1, #0]	@ 0006243a 0968
.org 0x6243c
	lsls r2, r2, #2	@ 0006243c 9200
.org 0x6243e
	adds r2, r2, r1	@ 0006243e 5218
.org 0x62440
	ldr r1, [r2, #0]	@ 00062440 1168
.org 0x62442
	adds r1, r1, r5	@ 00062442 4919
.org 0x62444
	ldrb r1, [r1, #0]	@ 00062444 0978
.org 0x62446
	lsls r2, r1, #1	@ 00062446 4a00
.org 0x62448
	adds r2, r2, r1	@ 00062448 5218
.org 0x6244a
	lsls r2, r2, #3	@ 0006244a d200
.org 0x6244c
	ldr r1, [r3, #0]	@ 0006244c 1968
.org 0x6244e
	adds r1, r1, r2	@ 0006244e 8918
.org 0x62450
	bl 0x5784	@ 00062450 a3f798f9
.org 0x62454
	adds r0, r6, #0	@ 00062454 301c
.org 0x62456
	adds r0, #115	@ 00062456 7330
.org 0x62458
	ldrb r0, [r0, #0]	@ 00062458 0078
.org 0x6245a
	cmp r0, #3	@ 0006245a 0328
.org 0x6245c
	bne.n 0x62466	@ 0006245c 03d1
.org 0x6245e
	movs r1, #0	@ 0006245e 0021
.org 0x62460
	movs r0, #2	@ 00062460 0220
.org 0x62462
	strb r0, [r6, #14]	@ 00062462 b073
.org 0x62464
	strb r1, [r6, #15]	@ 00062464 f173
.org 0x62466
	add sp, #8	@ 00062466 02b0
.org 0x62468
	pop {r4, r5, r6}	@ 00062468 70bc
.org 0x6246a
	pop {r0}	@ 0006246a 01bc
.org 0x6246c
	bx r0	@ 0006246c 0047
