@ FUN_080645f4  entry 0x080645f4  size 20
.thumb
.org 0x645f4
FUN_080645f4:
	push {lr}	@ 000645f4 00b5
.org 0x645f6
	ldr r2, [pc, #16]	@ 000645f6 044a
.org 0x645f8
	ldrb r1, [r0, #14]	@ 000645f8 817b
.org 0x645fa
	lsls r1, r1, #2	@ 000645fa 8900
.org 0x645fc
	adds r1, r1, r2	@ 000645fc 8918
.org 0x645fe
	ldr r1, [r1, #0]	@ 000645fe 0968
.org 0x64600
	bl 0x128f80	@ 00064600 c4f0befc
.org 0x64604
	pop {r0}	@ 00064604 01bc
.org 0x64606
	bx r0	@ 00064606 0047
