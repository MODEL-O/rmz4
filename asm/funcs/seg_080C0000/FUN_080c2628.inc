@ FUN_080c2628  entry 0x080c2628  size 20
.thumb
.org 0xc2628
FUN_080c2628:
	push {lr}	@ 000c2628 00b5
.org 0xc262a
	ldr r2, [pc, #16]	@ 000c262a 044a
.org 0xc262c
	ldrb r1, [r0, #16]	@ 000c262c 017c
.org 0xc262e
	lsls r1, r1, #2	@ 000c262e 8900
.org 0xc2630
	adds r1, r1, r2	@ 000c2630 8918
.org 0xc2632
	ldr r1, [r1, #0]	@ 000c2632 0968
.org 0xc2634
	bl 0x128f80	@ 000c2634 66f0a4fc
.org 0xc2638
	pop {r0}	@ 000c2638 01bc
.org 0xc263a
	bx r0	@ 000c263a 0047
