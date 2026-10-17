@ FUN_080c5514  entry 0x080c5514  size 20
.thumb
.org 0xc5514
FUN_080c5514:
	push {lr}	@ 000c5514 00b5
.org 0xc5516
	ldr r2, [pc, #16]	@ 000c5516 044a
.org 0xc5518
	ldrb r1, [r0, #16]	@ 000c5518 017c
.org 0xc551a
	lsls r1, r1, #2	@ 000c551a 8900
.org 0xc551c
	adds r1, r1, r2	@ 000c551c 8918
.org 0xc551e
	ldr r1, [r1, #0]	@ 000c551e 0968
.org 0xc5520
	bl 0x128f80	@ 000c5520 63f02efd
.org 0xc5524
	pop {r0}	@ 000c5524 01bc
.org 0xc5526
	bx r0	@ 000c5526 0047
