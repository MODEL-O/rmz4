@ FUN_081133b0  entry 0x081133b0  size 256
.thumb
.org 0x1133b0
FUN_081133b0:
	push {r4, r5, r6, lr}	@ 001133b0 70b5
.org 0x1133b2
	sub sp, #8	@ 001133b2 82b0
.org 0x1133b4
	adds r5, r0, #0	@ 001133b4 051c
.org 0x1133b6
	ldrb r0, [r5, #3]	@ 001133b6 e878
.org 0x1133b8
	cmp r0, #0	@ 001133b8 0028
.org 0x1133ba
	bne.n 0x1133ca	@ 001133ba 06d1
.org 0x1133bc
	bl 0x2a1c	@ 001133bc eff62efb
.org 0x1133c0
	movs r0, #32	@ 001133c0 2020
.org 0x1133c2
	strh r0, [r5, #4]	@ 001133c2 a880
.org 0x1133c4
	ldrb r0, [r5, #3]	@ 001133c4 e878
.org 0x1133c6
	adds r0, #1	@ 001133c6 0130
.org 0x1133c8
	strb r0, [r5, #3]	@ 001133c8 e870
.org 0x1133ca
	ldrh r2, [r5, #4]	@ 001133ca aa88
.org 0x1133cc
	subs r2, #2	@ 001133cc 023a
.org 0x1133ce
	movs r6, #0	@ 001133ce 0026
.org 0x1133d0
	adds r1, r2, #0	@ 001133d0 111c
.org 0x1133d2
	strh r2, [r5, #4]	@ 001133d2 aa80
.org 0x1133d4
	ldr r4, [pc, #68]	@ 001133d4 114c
.org 0x1133d6
	ldr r3, [pc, #72]	@ 001133d6 124b
.org 0x1133d8
	adds r0, r4, r3	@ 001133d8 e018
.org 0x1133da
	strb r1, [r0, #0]	@ 001133da 0170
.org 0x1133dc
	movs r0, #255	@ 001133dc ff20
.org 0x1133de
	ands r0, r1	@ 001133de 0840
.org 0x1133e0
	subs r3, #1	@ 001133e0 013b
.org 0x1133e2
	adds r1, r4, r3	@ 001133e2 e118
.org 0x1133e4
	strb r0, [r1, #0]	@ 001133e4 0870
.org 0x1133e6
	subs r3, #1	@ 001133e6 013b
.org 0x1133e8
	adds r1, r4, r3	@ 001133e8 e118
.org 0x1133ea
	strb r0, [r1, #0]	@ 001133ea 0870
.org 0x1133ec
	lsls r2, r2, #16	@ 001133ec 1204
.org 0x1133ee
	cmp r2, #0	@ 001133ee 002a
.org 0x1133f0
	bne.n 0x113430	@ 001133f0 1ed1
.org 0x1133f2
	adds r0, r5, #0	@ 001133f2 281c
.org 0x1133f4
	bl 0x112a24	@ 001133f4 fff716fb
.org 0x1133f8
	strh r6, [r4, #0]	@ 001133f8 2680
.org 0x1133fa
	ldr r2, [pc, #40]	@ 001133fa 0a4a
.org 0x1133fc
	ldrh r1, [r2, #0]	@ 001133fc 1188
.org 0x1133fe
	ldr r0, [pc, #40]	@ 001133fe 0a48
.org 0x113400
	ands r0, r1	@ 00113400 0840
.org 0x113402
	strh r0, [r2, #0]	@ 00113402 1080
.org 0x113404
	ldr r0, [pc, #36]	@ 00113404 0948
.org 0x113406
	strh r6, [r0, #0]	@ 00113406 0680
.org 0x113408
	bl 0x243c	@ 00113408 eff618f8
.org 0x11340c
	bl 0x1128c0	@ 0011340c fff758fa
.org 0x113410
	adds r0, r5, #0	@ 00113410 281c
.org 0x113412
	movs r1, #1	@ 00113412 0121
.org 0x113414
	bl 0x1126ac	@ 00113414 fff74af9
.org 0x113418
	b.n 0x1134be	@ 00113418 51e0
.org 0x11341a
	.byte 0x00	@ 0011341a data
.org 0x11341b
	.byte 0x00	@ 0011341b data
.org 0x11341c
	.byte 0xc0,0x2a,0x00,0x03	@ 0011341c data
.org 0x113420
	.byte 0x02,0x04,0x00,0x00	@ 00113420 data
.org 0x113424
	.byte 0x00,0x0a,0x00,0x02	@ 00113424 data
.org 0x113428
	.byte 0xff,0xc1,0x00,0x00	@ 00113428 data
.org 0x11342c
	.byte 0x60,0x0a,0x00,0x02	@ 0011342c data
.org 0x113430
	movs r0, #154	@ 00113430 9a20
.org 0x113432
	lsls r0, r0, #4	@ 00113432 0001
.org 0x113434
	adds r4, r5, r0	@ 00113434 2c18
.org 0x113436
	adds r0, r4, #0	@ 00113436 201c
.org 0x113438
	bl 0x3470	@ 00113438 f0f61af8
.org 0x11343c
	bl 0x560c	@ 0011343c f2f6e6f8
.org 0x113440
	ldr r1, [pc, #132]	@ 00113440 2149
.org 0x113442
	movs r0, #0	@ 00113442 0020
.org 0x113444
	strb r0, [r1, #0]	@ 00113444 0870
.org 0x113446
	ldr r1, [pc, #132]	@ 00113446 2149
.org 0x113448
	str r6, [sp, #0]	@ 00113448 0096
.org 0x11344a
	ldr r2, [pc, #132]	@ 0011344a 214a
.org 0x11344c
	mov r0, sp	@ 0011344c 6846
.org 0x11344e
	bl 0x128be0	@ 0011344e 15f0c7fb
.org 0x113452
	movs r0, #1	@ 00113452 0120
.org 0x113454
	bl 0x1f2e0	@ 00113454 0bf744ff
.org 0x113458
	ldr r0, [pc, #120]	@ 00113458 1e48
.org 0x11345a
	ldr r0, [r0, #0]	@ 0011345a 0068
.org 0x11345c
	adds r1, r4, #0	@ 0011345c 211c
.org 0x11345e
	bl 0x1ca0c	@ 0011345e 09f7d5fa
.org 0x113462
	ldr r0, [pc, #116]	@ 00113462 1d48
.org 0x113464
	ldr r0, [r0, #0]	@ 00113464 0068
.org 0x113466
	adds r1, r4, #0	@ 00113466 211c
.org 0x113468
	bl 0x1ca0c	@ 00113468 09f7d0fa
.org 0x11346c
	ldr r0, [pc, #108]	@ 0011346c 1b48
.org 0x11346e
	ldr r0, [r0, #0]	@ 0011346e 0068
.org 0x113470
	adds r1, r4, #0	@ 00113470 211c
.org 0x113472
	bl 0x1ca0c	@ 00113472 09f7cbfa
.org 0x113476
	ldr r0, [pc, #104]	@ 00113476 1a48
.org 0x113478
	ldr r0, [r0, #0]	@ 00113478 0068
.org 0x11347a
	adds r1, r4, #0	@ 0011347a 211c
.org 0x11347c
	bl 0x1ca0c	@ 0011347c 09f7c6fa
.org 0x113480
	ldr r0, [pc, #96]	@ 00113480 1848
.org 0x113482
	ldr r0, [r0, #0]	@ 00113482 0068
.org 0x113484
	adds r1, r4, #0	@ 00113484 211c
.org 0x113486
	bl 0x1c924	@ 00113486 09f74dfa
.org 0x11348a
	adds r0, r4, #0	@ 0011348a 201c
.org 0x11348c
	bl 0x3a7dc	@ 0011348c 27f7a6f9
.org 0x113490
	ldr r0, [pc, #84]	@ 00113490 1548
.org 0x113492
	ldr r0, [r0, #0]	@ 00113492 0068
.org 0x113494
	adds r1, r4, #0	@ 00113494 211c
.org 0x113496
	bl 0x1c924	@ 00113496 09f745fa
.org 0x11349a
	ldr r0, [pc, #80]	@ 0011349a 1448
.org 0x11349c
	ldr r0, [r0, #0]	@ 0011349c 0068
.org 0x11349e
	adds r1, r4, #0	@ 0011349e 211c
.org 0x1134a0
	bl 0x1c924	@ 001134a0 09f740fa
.org 0x1134a4
	ldr r0, [pc, #72]	@ 001134a4 1248
.org 0x1134a6
	ldr r0, [r0, #0]	@ 001134a6 0068
.org 0x1134a8
	adds r1, r4, #0	@ 001134a8 211c
.org 0x1134aa
	bl 0x1ca0c	@ 001134aa 09f7affa
.org 0x1134ae
	movs r0, #1	@ 001134ae 0120
