@ FUN_081226ec  entry 0x081226ec  size 64
.thumb
.org 0x1226ec
FUN_081226ec:
	push {r4, r5, lr}	@ 001226ec 30b5
.org 0x1226ee
	adds r5, r0, #0	@ 001226ee 051c
.org 0x1226f0
	ldr r0, [pc, #56]	@ 001226f0 0e48
.org 0x1226f2
	adds r2, r5, r0	@ 001226f2 2a18
.org 0x1226f4
	ldr r0, [pc, #56]	@ 001226f4 0e48
.org 0x1226f6
	ldrh r1, [r0, #0]	@ 001226f6 0188
.org 0x1226f8
	ldr r0, [pc, #56]	@ 001226f8 0e48
.org 0x1226fa
	ands r0, r1	@ 001226fa 0840
.org 0x1226fc
	lsls r0, r0, #8	@ 001226fc 0002
.org 0x1226fe
	movs r1, #240	@ 001226fe f021
.org 0x122700
	lsls r1, r1, #7	@ 00122700 c901
.org 0x122702
	adds r0, r0, r1	@ 00122702 4018
.org 0x122704
	str r0, [r2, #0]	@ 00122704 1060
.org 0x122706
	ldr r0, [pc, #48]	@ 00122706 0c48
.org 0x122708
	adds r5, r5, r0	@ 00122708 2d18
.org 0x12270a
	adds r0, r5, #0	@ 0012270a 281c
.org 0x12270c
	bl 0x3470	@ 0012270c e0f6b0fe
.org 0x122710
	ldr r4, [pc, #40]	@ 00122710 0a4c
.org 0x122712
	ldr r0, [r4, #0]	@ 00122712 2068
.org 0x122714
	bl 0x1c79c	@ 00122714 faf642f8
.org 0x122718
	ldr r0, [r4, #0]	@ 00122718 2068
.org 0x12271a
	adds r1, r5, #0	@ 0012271a 291c
.org 0x12271c
	bl 0x1c924	@ 0012271c faf602f9
.org 0x122720
	adds r0, r5, #0	@ 00122720 281c
.org 0x122722
	bl 0x3420	@ 00122722 e0f67dfe
.org 0x122726
	pop {r4, r5}	@ 00122726 30bc
.org 0x122728
	pop {r0}	@ 00122728 01bc
.org 0x12272a
	bx r0	@ 0012272a 0047
