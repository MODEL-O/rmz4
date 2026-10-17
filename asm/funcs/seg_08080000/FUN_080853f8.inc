@ FUN_080853f8  entry 0x080853f8  size 32
.thumb
.org 0x853f8
FUN_080853f8:
	push {lr}	@ 000853f8 00b5
.org 0x853fa
	ldr r2, [r0, #84]	@ 000853fa 426d
.org 0x853fc
	ldr r1, [r0, #88]	@ 000853fc 816d
.org 0x853fe
	movs r0, #128	@ 000853fe 8020
.org 0x85400
	lsls r0, r0, #4	@ 00085400 0001
.org 0x85402
	adds r1, r1, r0	@ 00085402 0918
.org 0x85404
	adds r0, r2, #0	@ 00085404 101c
.org 0x85406
	bl 0x7db4	@ 00085406 82f7d5fc
.org 0x8540a
	cmp r0, #0	@ 0008540a 0028
.org 0x8540c
	blt.n 0x85412	@ 0008540c 01db
.org 0x8540e
	movs r0, #0	@ 0008540e 0020
.org 0x85410
	b.n 0x85414	@ 00085410 00e0
.org 0x85412
	movs r0, #1	@ 00085412 0120
.org 0x85414
	pop {r1}	@ 00085414 02bc
.org 0x85416
	bx r1	@ 00085416 0847
