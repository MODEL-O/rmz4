@ FUN_080a562c  entry 0x080a562c  size 20
.thumb
.org 0xa562c
FUN_080a562c:
	push {lr}	@ 000a562c 00b5
.org 0xa562e
	ldr r2, [pc, #16]	@ 000a562e 044a
.org 0xa5630
	ldrb r1, [r0, #13]	@ 000a5630 417b
.org 0xa5632
	lsls r1, r1, #2	@ 000a5632 8900
.org 0xa5634
	adds r1, r1, r2	@ 000a5634 8918
.org 0xa5636
	ldr r1, [r1, #0]	@ 000a5636 0968
.org 0xa5638
	bl 0x128f80	@ 000a5638 83f0a2fc
.org 0xa563c
	pop {r0}	@ 000a563c 01bc
.org 0xa563e
	bx r0	@ 000a563e 0047
