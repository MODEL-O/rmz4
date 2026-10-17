@ FUN_08041900  entry 0x08041900  size 34
.thumb
.org 0x41900
FUN_08041900:
	push {r4, r5, lr}	@ 00041900 30b5
.org 0x41902
	adds r4, r0, #0	@ 00041902 041c
.org 0x41904
	ldr r5, [r4, #40]	@ 00041904 a56a
.org 0x41906
	ldr r1, [pc, #28]	@ 00041906 0749
.org 0x41908
	bl 0x1cf00	@ 00041908 dbf7fafa
.org 0x4190c
	movs r0, #68	@ 0004190c 4420
.org 0x4190e
	bl 0x2b10	@ 0004190e c1f7fff8
.org 0x41912
	adds r0, r5, #0	@ 00041912 281c
.org 0x41914
	adds r1, r4, #0	@ 00041914 211c
.org 0x41916
	bl 0x416d4	@ 00041916 fff7ddfe
.org 0x4191a
	str r0, [r4, #44]	@ 0004191a e062
.org 0x4191c
	pop {r4, r5}	@ 0004191c 30bc
.org 0x4191e
	pop {r0}	@ 0004191e 01bc
.org 0x41920
	bx r0	@ 00041920 0047
