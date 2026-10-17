@ FUN_080c6288  entry 0x080c6288  size 20
.thumb
.org 0xc6288
FUN_080c6288:
	ldr r2, [pc, #16]	@ 000c6288 044a
.org 0xc628a
	ldrb r1, [r0, #9]	@ 000c628a 417a
.org 0xc628c
	lsls r1, r1, #2	@ 000c628c 8900
.org 0xc628e
	adds r1, r1, r2	@ 000c628e 8918
.org 0xc6290
	movs r2, #4	@ 000c6290 0422
.org 0xc6292
	str r2, [r0, #12]	@ 000c6292 c260
.org 0xc6294
	ldr r1, [r1, #0]	@ 000c6294 0968
.org 0xc6296
	ldr r1, [r1, #16]	@ 000c6296 0969
.org 0xc6298
	str r1, [r0, #20]	@ 000c6298 4161
.org 0xc629a
	bx lr	@ 000c629a 7047
