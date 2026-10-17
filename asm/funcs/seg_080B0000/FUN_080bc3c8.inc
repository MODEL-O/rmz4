@ FUN_080bc3c8  entry 0x080bc3c8  size 100
.thumb
.org 0xbc3c8
FUN_080bc3c8:
	push {r4, r5, lr}	@ 000bc3c8 30b5
.org 0xbc3ca
	adds r3, r0, #0	@ 000bc3ca 031c
.org 0xbc3cc
	ldr r2, [r3, #40]	@ 000bc3cc 9a6a
.org 0xbc3ce
	ldr r0, [pc, #92]	@ 000bc3ce 1748
.org 0xbc3d0
	movs r4, #0	@ 000bc3d0 0024
.org 0xbc3d2
	strh r4, [r0, #0]	@ 000bc3d2 0480
.org 0xbc3d4
	movs r0, #69	@ 000bc3d4 4520
.org 0xbc3d6
	adds r0, r0, r3	@ 000bc3d6 c018
.org 0xbc3d8
	mov ip, r0	@ 000bc3d8 8446
.org 0xbc3da
	ldrb r1, [r0, #0]	@ 000bc3da 0178
.org 0xbc3dc
	movs r0, #13	@ 000bc3dc 0d20
.org 0xbc3de
	negs r0, r0	@ 000bc3de 4042
.org 0xbc3e0
	ands r0, r1	@ 000bc3e0 0840
.org 0xbc3e2
	mov r1, ip	@ 000bc3e2 6146
.org 0xbc3e4
	strb r0, [r1, #0]	@ 000bc3e4 0870
.org 0xbc3e6
	adds r2, #204	@ 000bc3e6 cc32
.org 0xbc3e8
	ldrh r1, [r2, #0]	@ 000bc3e8 1188
.org 0xbc3ea
	movs r5, #0	@ 000bc3ea 0025
.org 0xbc3ec
	ldrsh r0, [r2, r5]	@ 000bc3ec 505f
.org 0xbc3ee
	cmp r0, #0	@ 000bc3ee 0028
.org 0xbc3f0
	beq.n 0xbc3f6	@ 000bc3f0 01d0
.org 0xbc3f2
	subs r0, r1, #1	@ 000bc3f2 481e
.org 0xbc3f4
	strh r0, [r2, #0]	@ 000bc3f4 1080
.org 0xbc3f6
	adds r0, r3, #0	@ 000bc3f6 181c
.org 0xbc3f8
	adds r0, #140	@ 000bc3f8 8c30
.org 0xbc3fa
	str r4, [r0, #0]	@ 000bc3fa 0460
.org 0xbc3fc
	adds r0, #4	@ 000bc3fc 0430
.org 0xbc3fe
	str r4, [r0, #0]	@ 000bc3fe 0460
.org 0xbc400
	adds r1, r3, #0	@ 000bc400 191c
.org 0xbc402
	adds r1, #148	@ 000bc402 9431
.org 0xbc404
	movs r0, #0	@ 000bc404 0020
.org 0xbc406
	strb r0, [r1, #0]	@ 000bc406 0870
.org 0xbc408
	ldrb r1, [r3, #10]	@ 000bc408 997a
.org 0xbc40a
	movs r0, #251	@ 000bc40a fb20
.org 0xbc40c
	ands r0, r1	@ 000bc40c 0840
.org 0xbc40e
	movs r1, #254	@ 000bc40e fe21
.org 0xbc410
	ands r0, r1	@ 000bc410 0840
.org 0xbc412
	strb r0, [r3, #10]	@ 000bc412 9872
.org 0xbc414
	ldr r1, [pc, #24]	@ 000bc414 0649
.org 0xbc416
	ldrb r0, [r3, #9]	@ 000bc416 587a
.org 0xbc418
	lsls r0, r0, #2	@ 000bc418 8000
.org 0xbc41a
	adds r0, r0, r1	@ 000bc41a 4018
.org 0xbc41c
	movs r1, #4	@ 000bc41c 0421
.org 0xbc41e
	str r1, [r3, #12]	@ 000bc41e d960
.org 0xbc420
	ldr r0, [r0, #0]	@ 000bc420 0068
.org 0xbc422
	ldr r0, [r0, #16]	@ 000bc422 0069
.org 0xbc424
	str r0, [r3, #20]	@ 000bc424 5861
.org 0xbc426
	pop {r4, r5}	@ 000bc426 30bc
.org 0xbc428
	pop {r0}	@ 000bc428 01bc
.org 0xbc42a
	bx r0	@ 000bc42a 0047
