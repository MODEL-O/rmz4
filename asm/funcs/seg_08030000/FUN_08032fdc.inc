@ FUN_08032fdc  entry 0x08032fdc  size 30
.thumb
.org 0x32fdc
FUN_08032fdc:
	push {lr}	@ 00032fdc 00b5
.org 0x32fde
	movs r1, #186	@ 00032fde ba21
.org 0x32fe0
	lsls r1, r1, #1	@ 00032fe0 4900
.org 0x32fe2
	adds r2, r0, r1	@ 00032fe2 4218
.org 0x32fe4
	movs r1, #5	@ 00032fe4 0521
.org 0x32fe6
	strb r1, [r2, #0]	@ 00032fe6 1170
.org 0x32fe8
	ldr r2, [pc, #16]	@ 00032fe8 044a
.org 0x32fea
	ldrb r1, [r0, #14]	@ 00032fea 817b
.org 0x32fec
	lsls r1, r1, #2	@ 00032fec 8900
.org 0x32fee
	adds r1, r1, r2	@ 00032fee 8918
.org 0x32ff0
	ldr r1, [r1, #0]	@ 00032ff0 0968
.org 0x32ff2
	bl 0x128f80	@ 00032ff2 f5f0c5ff
.org 0x32ff6
	pop {r0}	@ 00032ff6 01bc
.org 0x32ff8
	bx r0	@ 00032ff8 0047
