@ FUN_080780e4  entry 0x080780e4  size 64
.thumb
.org 0x780e4
FUN_080780e4:
	push {r4, r5, lr}	@ 000780e4 30b5
.org 0x780e6
	ldrb r4, [r0, #14]	@ 000780e6 847b
.org 0x780e8
	adds r2, r0, #0	@ 000780e8 021c
.org 0x780ea
	adds r2, #200	@ 000780ea c832
.org 0x780ec
	ldr r1, [r2, #0]	@ 000780ec 1168
.org 0x780ee
	adds r1, #181	@ 000780ee b531
.org 0x780f0
	movs r5, #0	@ 000780f0 0025
.org 0x780f2
	movs r3, #1	@ 000780f2 0123
.org 0x780f4
	strb r3, [r1, #0]	@ 000780f4 0b70
.org 0x780f6
	ldr r1, [r2, #0]	@ 000780f6 1168
.org 0x780f8
	adds r1, #182	@ 000780f8 b631
.org 0x780fa
	strb r3, [r1, #0]	@ 000780fa 0b70
.org 0x780fc
	adds r2, #4	@ 000780fc 0432
.org 0x780fe
	ldr r1, [r2, #0]	@ 000780fe 1168
.org 0x78100
	adds r1, #182	@ 00078100 b631
.org 0x78102
	strb r5, [r1, #0]	@ 00078102 0d70
.org 0x78104
	ldr r1, [r2, #0]	@ 00078104 1168
.org 0x78106
	adds r1, #185	@ 00078106 b931
.org 0x78108
	strb r3, [r1, #0]	@ 00078108 0b70
.org 0x7810a
	adds r4, #1	@ 0007810a 0134
.org 0x7810c
	strb r4, [r0, #14]	@ 0007810c 8473
.org 0x7810e
	strb r5, [r0, #15]	@ 0007810e c573
.org 0x78110
	ldr r2, [pc, #16]	@ 00078110 044a
.org 0x78112
	ldrb r1, [r0, #13]	@ 00078112 417b
.org 0x78114
	lsls r1, r1, #2	@ 00078114 8900
.org 0x78116
	adds r1, r1, r2	@ 00078116 8918
.org 0x78118
	ldr r1, [r1, #0]	@ 00078118 0968
.org 0x7811a
	bl 0x128f80	@ 0007811a b0f031ff
.org 0x7811e
	pop {r4, r5}	@ 0007811e 30bc
.org 0x78120
	pop {r0}	@ 00078120 01bc
.org 0x78122
	bx r0	@ 00078122 0047
