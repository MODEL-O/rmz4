@ FUN_0809c34c  entry 0x0809c34c  size 20
.thumb
.org 0x9c34c
FUN_0809c34c:
	push {lr}	@ 0009c34c 00b5
.org 0x9c34e
	ldr r2, [pc, #16]	@ 0009c34e 044a
.org 0x9c350
	ldrb r1, [r0, #16]	@ 0009c350 017c
.org 0x9c352
	lsls r1, r1, #2	@ 0009c352 8900
.org 0x9c354
	adds r1, r1, r2	@ 0009c354 8918
.org 0x9c356
	ldr r1, [r1, #0]	@ 0009c356 0968
.org 0x9c358
	bl 0x128f80	@ 0009c358 8cf012fe
.org 0x9c35c
	pop {r0}	@ 0009c35c 01bc
.org 0x9c35e
	bx r0	@ 0009c35e 0047
