@ FUN_0810d568  entry 0x0810d568  size 30
.thumb
.org 0x10d568
FUN_0810d568:
	push {lr}	@ 0010d568 00b5
.org 0x10d56a
	ldr r0, [pc, #28]	@ 0010d56a 0748
.org 0x10d56c
	ldr r1, [pc, #28]	@ 0010d56c 0749
.org 0x10d56e
	ldrh r2, [r1, #0]	@ 0010d56e 0a88
.org 0x10d570
	movs r1, #12	@ 0010d570 0c21
.org 0x10d572
	ands r1, r2	@ 0010d572 1140
.org 0x10d574
	lsls r1, r1, #12	@ 0010d574 0903
.org 0x10d576
	ldr r2, [pc, #24]	@ 0010d576 064a
.org 0x10d578
	adds r1, r1, r2	@ 0010d578 8918
.org 0x10d57a
	movs r2, #128	@ 0010d57a 8022
.org 0x10d57c
	lsls r2, r2, #2	@ 0010d57c 9200
.org 0x10d57e
	bl 0x128be0	@ 0010d57e 1bf02ffb
.org 0x10d582
	pop {r0}	@ 0010d582 01bc
.org 0x10d584
	bx r0	@ 0010d584 0047
