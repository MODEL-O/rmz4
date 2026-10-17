@ FUN_0808f3c0  entry 0x0808f3c0  size 110
.thumb
.org 0x8f3c0
FUN_0808f3c0:
	push {r4, lr}	@ 0008f3c0 10b5
.org 0x8f3c2
	adds r4, r0, #0	@ 0008f3c2 041c
.org 0x8f3c4
	ldrb r1, [r4, #15]	@ 0008f3c4 e17b
.org 0x8f3c6
	cmp r1, #0	@ 0008f3c6 0029
.org 0x8f3c8
	bne.n 0x8f3d2	@ 0008f3c8 03d1
.org 0x8f3ca
	movs r0, #8	@ 0008f3ca 0820
.org 0x8f3cc
	strb r0, [r4, #18]	@ 0008f3cc a074
.org 0x8f3ce
	adds r0, r1, #1	@ 0008f3ce 481c
.org 0x8f3d0
	strb r0, [r4, #15]	@ 0008f3d0 e073
.org 0x8f3d2
	adds r0, r4, #0	@ 0008f3d2 201c
.org 0x8f3d4
	bl 0x1cff0	@ 0008f3d4 8df70cfe
.org 0x8f3d8
	adds r0, r4, #0	@ 0008f3d8 201c
.org 0x8f3da
	adds r0, #116	@ 0008f3da 7430
.org 0x8f3dc
	ldr r3, [pc, #80]	@ 0008f3dc 144b
.org 0x8f3de
	ldrb r1, [r4, #30]	@ 0008f3de a17f
.org 0x8f3e0
	lsls r1, r1, #8	@ 0008f3e0 0902
.org 0x8f3e2
	adds r2, r4, #0	@ 0008f3e2 221c
.org 0x8f3e4
	adds r2, #112	@ 0008f3e4 7032
.org 0x8f3e6
	ldrb r2, [r2, #0]	@ 0008f3e6 1278
.org 0x8f3e8
	orrs r1, r2	@ 0008f3e8 1143
.org 0x8f3ea
	ldr r2, [pc, #72]	@ 0008f3ea 124a
.org 0x8f3ec
	adds r1, r1, r2	@ 0008f3ec 8918
.org 0x8f3ee
	lsls r1, r1, #2	@ 0008f3ee 8900
.org 0x8f3f0
	adds r1, r1, r3	@ 0008f3f0 c918
.org 0x8f3f2
	adds r2, r4, #0	@ 0008f3f2 221c
.org 0x8f3f4
	adds r2, #113	@ 0008f3f4 7132
.org 0x8f3f6
	ldrb r2, [r2, #0]	@ 0008f3f6 1278
.org 0x8f3f8
	lsls r2, r2, #24	@ 0008f3f8 1206
.org 0x8f3fa
	asrs r2, r2, #24	@ 0008f3fa 1216
.org 0x8f3fc
	ldr r1, [r1, #0]	@ 0008f3fc 0968
.org 0x8f3fe
	lsls r2, r2, #2	@ 0008f3fe 9200
.org 0x8f400
	adds r2, r2, r1	@ 0008f400 5218
.org 0x8f402
	ldr r1, [r2, #0]	@ 0008f402 1168
.org 0x8f404
	ldrb r2, [r1, #0]	@ 0008f404 0a78
.org 0x8f406
	lsls r1, r2, #1	@ 0008f406 5100
.org 0x8f408
	adds r1, r1, r2	@ 0008f408 8918
.org 0x8f40a
	lsls r1, r1, #3	@ 0008f40a c900
.org 0x8f40c
	ldr r2, [pc, #40]	@ 0008f40c 0a4a
.org 0x8f40e
	adds r1, r1, r2	@ 0008f40e 8918
.org 0x8f410
	bl 0x5784	@ 0008f410 76f7b8f9
.org 0x8f414
	ldrb r0, [r4, #18]	@ 0008f414 a07c
.org 0x8f416
	subs r0, #1	@ 0008f416 0138
.org 0x8f418
	strb r0, [r4, #18]	@ 0008f418 a074
.org 0x8f41a
	lsls r0, r0, #24	@ 0008f41a 0006
.org 0x8f41c
	lsrs r1, r0, #24	@ 0008f41c 010e
.org 0x8f41e
	cmp r1, #0	@ 0008f41e 0029
.org 0x8f420
	bne.n 0x8f428	@ 0008f420 02d1
.org 0x8f422
	movs r0, #1	@ 0008f422 0120
.org 0x8f424
	strb r0, [r4, #14]	@ 0008f424 a073
.org 0x8f426
	strb r1, [r4, #15]	@ 0008f426 e173
.org 0x8f428
	pop {r4}	@ 0008f428 10bc
.org 0x8f42a
	pop {r0}	@ 0008f42a 01bc
.org 0x8f42c
	bx r0	@ 0008f42c 0047
