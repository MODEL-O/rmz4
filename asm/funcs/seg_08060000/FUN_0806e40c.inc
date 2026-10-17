@ FUN_0806e40c  entry 0x0806e40c  size 20
.thumb
.org 0x6e40c
FUN_0806e40c:
	push {lr}	@ 0006e40c 00b5
.org 0x6e40e
	ldr r2, [pc, #16]	@ 0006e40e 044a
.org 0x6e410
	ldrb r1, [r0, #14]	@ 0006e410 817b
.org 0x6e412
	lsls r1, r1, #2	@ 0006e412 8900
.org 0x6e414
	adds r1, r1, r2	@ 0006e414 8918
.org 0x6e416
	ldr r1, [r1, #0]	@ 0006e416 0968
.org 0x6e418
	bl 0x128f80	@ 0006e418 baf0b2fd
.org 0x6e41c
	pop {r0}	@ 0006e41c 01bc
.org 0x6e41e
	bx r0	@ 0006e41e 0047
