@ FUN_08001330  entry 0x08001330  size 32
.thumb
.org 0x1330
FUN_08001330:
	push {lr}	@ 00001330 00b5
.org 0x1332
	adds r2, r0, #0	@ 00001332 021c
.org 0x1334
	cmp r1, #0	@ 00001334 0029
.org 0x1336
	beq.n 0x134c	@ 00001336 09d0
.org 0x1338
	strh r1, [r2, #2]	@ 00001338 5180
.org 0x133a
	movs r0, #4	@ 0000133a 0420
.org 0x133c
	strb r0, [r2, #0]	@ 0000133c 1070
.org 0x133e
	adds r0, r2, #4	@ 0000133e 101d
.org 0x1340
	adds r1, r2, #0	@ 00001340 111c
.org 0x1342
	adds r1, #8	@ 00001342 0831
.org 0x1344
	ldr r2, [pc, #8]	@ 00001344 024a
.org 0x1346
	ldr r2, [r2, #0]	@ 00001346 1268
.org 0x1348
	bl 0x300	@ 00001348 fef7daff
.org 0x134c
	pop {r0}	@ 0000134c 01bc
.org 0x134e
	bx r0	@ 0000134e 0047
