@ FUN_080f762c  entry 0x080f762c  size 20
.thumb
.org 0xf762c
FUN_080f762c:
	push {lr}	@ 000f762c 00b5
.org 0xf762e
	ldr r2, [pc, #16]	@ 000f762e 044a
.org 0xf7630
	ldrb r1, [r0, #16]	@ 000f7630 017c
.org 0xf7632
	lsls r1, r1, #2	@ 000f7632 8900
.org 0xf7634
	adds r1, r1, r2	@ 000f7634 8918
.org 0xf7636
	ldr r1, [r1, #0]	@ 000f7636 0968
.org 0xf7638
	bl 0x128f80	@ 000f7638 31f0a2fc
.org 0xf763c
	pop {r0}	@ 000f763c 01bc
.org 0xf763e
	bx r0	@ 000f763e 0047
