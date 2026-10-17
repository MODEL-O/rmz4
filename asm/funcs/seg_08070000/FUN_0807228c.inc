@ FUN_0807228c  entry 0x0807228c  size 28
.thumb
.org 0x7228c
FUN_0807228c:
	push {lr}	@ 0007228c 00b5
.org 0x7228e
	movs r2, #0	@ 0007228e 0022
.org 0x72290
	movs r1, #25	@ 00072290 1921
.org 0x72292
	strb r1, [r0, #14]	@ 00072292 8173
.org 0x72294
	strb r2, [r0, #15]	@ 00072294 c273
.org 0x72296
	ldr r2, [pc, #16]	@ 00072296 044a
.org 0x72298
	ldrb r1, [r0, #13]	@ 00072298 417b
.org 0x7229a
	lsls r1, r1, #2	@ 0007229a 8900
.org 0x7229c
	adds r1, r1, r2	@ 0007229c 8918
.org 0x7229e
	ldr r1, [r1, #0]	@ 0007229e 0968
.org 0x722a0
	bl 0x128f80	@ 000722a0 b6f06efe
.org 0x722a4
	pop {r0}	@ 000722a4 01bc
.org 0x722a6
	bx r0	@ 000722a6 0047
