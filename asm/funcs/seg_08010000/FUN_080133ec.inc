@ FUN_080133ec  entry 0x080133ec  size 66
.thumb
.org 0x133ec
FUN_080133ec:
	push {lr}	@ 000133ec 00b5
.org 0x133ee
	ldr r2, [pc, #36]	@ 000133ee 094a
.org 0x133f0
	ldrh r1, [r2, #20]	@ 000133f0 918a
.org 0x133f2
	movs r0, #1	@ 000133f2 0120
.org 0x133f4
	ands r0, r1	@ 000133f4 0840
.org 0x133f6
	cmp r0, #0	@ 000133f6 0028
.org 0x133f8
	beq.n 0x13418	@ 000133f8 0ed0
.org 0x133fa
	movs r0, #162	@ 000133fa a220
.org 0x133fc
	lsls r0, r0, #1	@ 000133fc 4000
.org 0x133fe
	adds r1, r2, r0	@ 000133fe 1118
.org 0x13400
	movs r0, #240	@ 00013400 f020
.org 0x13402
	lsls r0, r0, #8	@ 00013402 0002
.org 0x13404
	str r0, [r1, #0]	@ 00013404 0860
.org 0x13406
	movs r0, #164	@ 00013406 a420
.org 0x13408
	lsls r0, r0, #1	@ 00013408 4000
.org 0x1340a
	adds r1, r2, r0	@ 0001340a 1118
.org 0x1340c
	movs r0, #240	@ 0001340c f020
.org 0x1340e
	lsls r0, r0, #14	@ 0001340e 8003
.org 0x13410
	b.n 0x1342e	@ 00013410 0de0
.org 0x13412
	.byte 0x00	@ 00013412 data
.org 0x13413
	.byte 0x00	@ 00013413 data
.org 0x13414
	.byte 0x10,0xe9,0x02,0x02	@ 00013414 data
.org 0x13418
	movs r0, #162	@ 00013418 a220
.org 0x1341a
	lsls r0, r0, #1	@ 0001341a 4000
.org 0x1341c
	adds r1, r2, r0	@ 0001341c 1118
.org 0x1341e
	movs r0, #255	@ 0001341e ff20
.org 0x13420
	lsls r0, r0, #12	@ 00013420 0003
.org 0x13422
	str r0, [r1, #0]	@ 00013422 0860
.org 0x13424
	movs r0, #164	@ 00013424 a420
.org 0x13426
	lsls r0, r0, #1	@ 00013426 4000
.org 0x13428
	adds r1, r2, r0	@ 00013428 1118
.org 0x1342a
	movs r0, #138	@ 0001342a 8a20
.org 0x1342c
	lsls r0, r0, #13	@ 0001342c 4003
