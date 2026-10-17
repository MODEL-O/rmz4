@ FUN_080f7644  entry 0x080f7644  size 20
.thumb
.org 0xf7644
FUN_080f7644:
	push {lr}	@ 000f7644 00b5
.org 0xf7646
	ldr r2, [pc, #16]	@ 000f7646 044a
.org 0xf7648
	ldrb r1, [r0, #16]	@ 000f7648 017c
.org 0xf764a
	lsls r1, r1, #2	@ 000f764a 8900
.org 0xf764c
	adds r1, r1, r2	@ 000f764c 8918
.org 0xf764e
	ldr r1, [r1, #0]	@ 000f764e 0968
.org 0xf7650
	bl 0x128f80	@ 000f7650 31f096fc
.org 0xf7654
	pop {r0}	@ 000f7654 01bc
.org 0xf7656
	bx r0	@ 000f7656 0047
