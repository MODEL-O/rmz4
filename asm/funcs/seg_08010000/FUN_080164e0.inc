@ FUN_080164e0  entry 0x080164e0  size 52
.thumb
.org 0x164e0
FUN_080164e0:
	push {r4, r5, lr}	@ 000164e0 30b5
.org 0x164e2
	ldr r3, [r0, #92]	@ 000164e2 c36d
.org 0x164e4
	lsls r3, r3, #16	@ 000164e4 1b04
.org 0x164e6
	lsrs r3, r3, #20	@ 000164e6 1b0d
.org 0x164e8
	lsls r3, r3, #2	@ 000164e8 9b00
.org 0x164ea
	ldr r4, [pc, #40]	@ 000164ea 0a4c
.org 0x164ec
	adds r5, r3, r4	@ 000164ec 1d19
.org 0x164ee
	ldr r2, [r0, #52]	@ 000164ee 426b
.org 0x164f0
	ldr r1, [r0, #68]	@ 000164f0 416c
.org 0x164f2
	muls r2, r1	@ 000164f2 4a43
.org 0x164f4
	asrs r2, r2, #8	@ 000164f4 1212
.org 0x164f6
	ldr r1, [r0, #76]	@ 000164f6 c16c
.org 0x164f8
	adds r1, r1, r2	@ 000164f8 8918
.org 0x164fa
	strh r1, [r5, #0]	@ 000164fa 2980
.org 0x164fc
	adds r4, #2	@ 000164fc 0234
.org 0x164fe
	adds r3, r3, r4	@ 000164fe 1b19
.org 0x16500
	ldr r2, [r0, #56]	@ 00016500 826b
.org 0x16502
	ldr r1, [r0, #72]	@ 00016502 816c
.org 0x16504
	muls r1, r2	@ 00016504 5143
.org 0x16506
	asrs r1, r1, #8	@ 00016506 0912
.org 0x16508
	ldr r0, [r0, #80]	@ 00016508 006d
.org 0x1650a
	adds r0, r0, r1	@ 0001650a 4018
.org 0x1650c
	strh r0, [r3, #0]	@ 0001650c 1880
.org 0x1650e
	pop {r4, r5}	@ 0001650e 30bc
.org 0x16510
	pop {r0}	@ 00016510 01bc
.org 0x16512
	bx r0	@ 00016512 0047
