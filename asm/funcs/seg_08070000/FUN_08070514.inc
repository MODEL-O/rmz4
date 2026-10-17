@ FUN_08070514  entry 0x08070514  size 30
.thumb
.org 0x70514
FUN_08070514:
	push {r4, lr}	@ 00070514 10b5
.org 0x70516
	adds r4, r0, #0	@ 00070516 041c
.org 0x70518
	bl 0x73bcc	@ 00070518 03f058fb
.org 0x7051c
	ldr r1, [pc, #20]	@ 0007051c 0549
.org 0x7051e
	ldrb r0, [r4, #13]	@ 0007051e 607b
.org 0x70520
	lsls r0, r0, #2	@ 00070520 8000
.org 0x70522
	adds r0, r0, r1	@ 00070522 4018
.org 0x70524
	ldr r1, [r0, #0]	@ 00070524 0168
.org 0x70526
	adds r0, r4, #0	@ 00070526 201c
.org 0x70528
	bl 0x128f80	@ 00070528 b8f02afd
.org 0x7052c
	pop {r4}	@ 0007052c 10bc
.org 0x7052e
	pop {r0}	@ 0007052e 01bc
.org 0x70530
	bx r0	@ 00070530 0047
