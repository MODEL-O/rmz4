@ FUN_08013448  entry 0x08013448  size 66
.thumb
.org 0x13448
FUN_08013448:
	push {lr}	@ 00013448 00b5
.org 0x1344a
	ldr r2, [pc, #36]	@ 0001344a 094a
.org 0x1344c
	ldrh r1, [r2, #20]	@ 0001344c 918a
.org 0x1344e
	movs r0, #1	@ 0001344e 0120
.org 0x13450
	ands r0, r1	@ 00013450 0840
.org 0x13452
	cmp r0, #0	@ 00013452 0028
.org 0x13454
	beq.n 0x13474	@ 00013454 0ed0
.org 0x13456
	movs r0, #162	@ 00013456 a220
.org 0x13458
	lsls r0, r0, #1	@ 00013458 4000
.org 0x1345a
	adds r1, r2, r0	@ 0001345a 1118
.org 0x1345c
	movs r0, #240	@ 0001345c f020
.org 0x1345e
	lsls r0, r0, #8	@ 0001345e 0002
.org 0x13460
	str r0, [r1, #0]	@ 00013460 0860
.org 0x13462
	movs r0, #164	@ 00013462 a420
.org 0x13464
	lsls r0, r0, #1	@ 00013464 4000
.org 0x13466
	adds r1, r2, r0	@ 00013466 1118
.org 0x13468
	movs r0, #240	@ 00013468 f020
.org 0x1346a
	lsls r0, r0, #14	@ 0001346a 8003
.org 0x1346c
	b.n 0x1348a	@ 0001346c 0de0
.org 0x1346e
	.byte 0x00	@ 0001346e data
.org 0x1346f
	.byte 0x00	@ 0001346f data
.org 0x13470
	.byte 0x10,0xe9,0x02,0x02	@ 00013470 data
.org 0x13474
	movs r0, #162	@ 00013474 a220
.org 0x13476
	lsls r0, r0, #1	@ 00013476 4000
.org 0x13478
	adds r1, r2, r0	@ 00013478 1118
.org 0x1347a
	movs r0, #195	@ 0001347a c320
.org 0x1347c
	lsls r0, r0, #12	@ 0001347c 0003
.org 0x1347e
	str r0, [r1, #0]	@ 0001347e 0860
.org 0x13480
	movs r0, #164	@ 00013480 a420
.org 0x13482
	lsls r0, r0, #1	@ 00013482 4000
.org 0x13484
	adds r1, r2, r0	@ 00013484 1118
.org 0x13486
	movs r0, #225	@ 00013486 e120
.org 0x13488
	lsls r0, r0, #12	@ 00013488 0003
