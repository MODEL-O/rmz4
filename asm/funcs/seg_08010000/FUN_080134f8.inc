@ FUN_080134f8  entry 0x080134f8  size 54
.thumb
.org 0x134f8
FUN_080134f8:
	push {lr}	@ 000134f8 00b5
.org 0x134fa
	ldr r2, [pc, #36]	@ 000134fa 094a
.org 0x134fc
	ldrh r1, [r2, #20]	@ 000134fc 918a
.org 0x134fe
	movs r0, #1	@ 000134fe 0120
.org 0x13500
	ands r0, r1	@ 00013500 0840
.org 0x13502
	cmp r0, #0	@ 00013502 0028
.org 0x13504
	beq.n 0x13524	@ 00013504 0ed0
.org 0x13506
	movs r0, #162	@ 00013506 a220
.org 0x13508
	lsls r0, r0, #1	@ 00013508 4000
.org 0x1350a
	adds r1, r2, r0	@ 0001350a 1118
.org 0x1350c
	movs r0, #240	@ 0001350c f020
.org 0x1350e
	lsls r0, r0, #8	@ 0001350e 0002
.org 0x13510
	str r0, [r1, #0]	@ 00013510 0860
.org 0x13512
	movs r0, #164	@ 00013512 a420
.org 0x13514
	lsls r0, r0, #1	@ 00013514 4000
.org 0x13516
	adds r1, r2, r0	@ 00013516 1118
.org 0x13518
	movs r0, #240	@ 00013518 f020
.org 0x1351a
	lsls r0, r0, #14	@ 0001351a 8003
.org 0x1351c
	b.n 0x1352e	@ 0001351c 07e0
.org 0x1351e
	.byte 0x00	@ 0001351e data
.org 0x1351f
	.byte 0x00	@ 0001351f data
.org 0x13520
	.byte 0x10,0xe9,0x02,0x02	@ 00013520 data
.org 0x13524
	movs r0, #162	@ 00013524 a220
.org 0x13526
	lsls r0, r0, #1	@ 00013526 4000
.org 0x13528
	adds r1, r2, r0	@ 00013528 1118
.org 0x1352a
	movs r0, #165	@ 0001352a a520
.org 0x1352c
	lsls r0, r0, #12	@ 0001352c 0003
