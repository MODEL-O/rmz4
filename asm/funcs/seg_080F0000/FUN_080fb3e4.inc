@ FUN_080fb3e4  entry 0x080fb3e4  size 88
.thumb
.org 0xfb3e4
FUN_080fb3e4:
	push {r4, lr}	@ 000fb3e4 10b5
.org 0xfb3e6
	adds r4, r0, #0	@ 000fb3e6 041c
.org 0xfb3e8
	ldrb r0, [r4, #14]	@ 000fb3e8 a07b
.org 0xfb3ea
	cmp r0, #0	@ 000fb3ea 0028
.org 0xfb3ec
	bne.n 0xfb42a	@ 000fb3ec 1dd1
.org 0xfb3ee
	ldr r0, [pc, #20]	@ 000fb3ee 0548
.org 0xfb3f0
	ldr r1, [pc, #20]	@ 000fb3f0 0549
.org 0xfb3f2
	adds r0, r0, r1	@ 000fb3f2 4018
.org 0xfb3f4
	ldrb r1, [r0, #0]	@ 000fb3f4 0178
.org 0xfb3f6
	movs r0, #15	@ 000fb3f6 0f20
.org 0xfb3f8
	ands r0, r1	@ 000fb3f8 0840
.org 0xfb3fa
	cmp r0, #0	@ 000fb3fa 0028
.org 0xfb3fc
	bne.n 0xfb40c	@ 000fb3fc 06d1
.org 0xfb3fe
	movs r0, #100	@ 000fb3fe 6420
.org 0xfb400
	b.n 0xfb40e	@ 000fb400 05e0
.org 0xfb402
	.byte 0x00	@ 000fb402 data
.org 0xfb403
	.byte 0x00	@ 000fb403 data
.org 0xfb404
	.byte 0xb0,0x0a,0x00,0x02	@ 000fb404 data
.org 0xfb408
	.byte 0x10,0xc0,0x02,0x00	@ 000fb408 data
.org 0xfb40c
	movs r0, #200	@ 000fb40c c820
.org 0xfb40e
	strb r0, [r4, #18]	@ 000fb40e a074
.org 0xfb410
	adds r0, r4, #0	@ 000fb410 201c
.org 0xfb412
	adds r0, #116	@ 000fb412 7430
.org 0xfb414
	ldr r1, [pc, #48]	@ 000fb414 0c49
.org 0xfb416
	bl 0x5784	@ 000fb416 0af7b5f9
.org 0xfb41a
	movs r1, #150	@ 000fb41a 9621
.org 0xfb41c
	lsls r1, r1, #8	@ 000fb41c 0902
.org 0xfb41e
	adds r0, r4, #0	@ 000fb41e 201c
.org 0xfb420
	bl 0x1cf00	@ 000fb420 21f76efd
.org 0xfb424
	ldrb r0, [r4, #14]	@ 000fb424 a07b
.org 0xfb426
	adds r0, #1	@ 000fb426 0130
.org 0xfb428
	strb r0, [r4, #14]	@ 000fb428 a073
.org 0xfb42a
	ldrb r0, [r4, #18]	@ 000fb42a a07c
.org 0xfb42c
	subs r0, #1	@ 000fb42c 0138
.org 0xfb42e
	strb r0, [r4, #18]	@ 000fb42e a074
.org 0xfb430
	lsls r0, r0, #24	@ 000fb430 0006
.org 0xfb432
	lsrs r0, r0, #24	@ 000fb432 000e
.org 0xfb434
	cmp r0, #255	@ 000fb434 ff28
.org 0xfb436
	bne.n 0xfb440	@ 000fb436 03d1
.org 0xfb438
	movs r0, #2	@ 000fb438 0220
.org 0xfb43a
	strb r0, [r4, #13]	@ 000fb43a 6073
