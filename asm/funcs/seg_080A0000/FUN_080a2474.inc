@ FUN_080a2474  entry 0x080a2474  size 20
.thumb
.org 0xa2474
FUN_080a2474:
	push {lr}	@ 000a2474 00b5
.org 0xa2476
	ldr r2, [pc, #16]	@ 000a2476 044a
.org 0xa2478
	ldrb r1, [r0, #16]	@ 000a2478 017c
.org 0xa247a
	lsls r1, r1, #2	@ 000a247a 8900
.org 0xa247c
	adds r1, r1, r2	@ 000a247c 8918
.org 0xa247e
	ldr r1, [r1, #0]	@ 000a247e 0968
.org 0xa2480
	bl 0x128f80	@ 000a2480 86f07efd
.org 0xa2484
	pop {r0}	@ 000a2484 01bc
.org 0xa2486
	bx r0	@ 000a2486 0047
