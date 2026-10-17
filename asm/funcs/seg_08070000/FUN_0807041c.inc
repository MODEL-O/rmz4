@ FUN_0807041c  entry 0x0807041c  size 20
.thumb
.org 0x7041c
FUN_0807041c:
	push {lr}	@ 0007041c 00b5
.org 0x7041e
	ldr r2, [pc, #16]	@ 0007041e 044a
.org 0x70420
	ldrb r1, [r0, #14]	@ 00070420 817b
.org 0x70422
	lsls r1, r1, #2	@ 00070422 8900
.org 0x70424
	adds r1, r1, r2	@ 00070424 8918
.org 0x70426
	ldr r1, [r1, #0]	@ 00070426 0968
.org 0x70428
	bl 0x128f80	@ 00070428 b8f0aafd
.org 0x7042c
	pop {r0}	@ 0007042c 01bc
.org 0x7042e
	bx r0	@ 0007042e 0047
