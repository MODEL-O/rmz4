@ FUN_0800155c  entry 0x0800155c  size 20
.thumb
.org 0x155c
FUN_0800155c:
	push {lr}	@ 0000155c 00b5
.org 0x155e
	movs r0, #64	@ 0000155e 4020
.org 0x1560
	bl 0x128bf8	@ 00001560 27f14afb
.org 0x1564
	ldr r1, [pc, #8]	@ 00001564 0249
.org 0x1566
	movs r0, #0	@ 00001566 0020
.org 0x1568
	strb r0, [r1, #0]	@ 00001568 0870
.org 0x156a
	strh r0, [r1, #2]	@ 0000156a 4880
.org 0x156c
	pop {r0}	@ 0000156c 01bc
.org 0x156e
	bx r0	@ 0000156e 0047
