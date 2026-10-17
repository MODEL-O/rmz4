@ FUN_0804c710  entry 0x0804c710  size 20
.thumb
.org 0x4c710
FUN_0804c710:
	push {lr}	@ 0004c710 00b5
.org 0x4c712
	ldr r2, [pc, #16]	@ 0004c712 044a
.org 0x4c714
	ldrb r1, [r0, #16]	@ 0004c714 017c
.org 0x4c716
	lsls r1, r1, #2	@ 0004c716 8900
.org 0x4c718
	adds r1, r1, r2	@ 0004c718 8918
.org 0x4c71a
	ldr r1, [r1, #0]	@ 0004c71a 0968
.org 0x4c71c
	bl 0x128f80	@ 0004c71c dcf030fc
.org 0x4c720
	pop {r0}	@ 0004c720 01bc
.org 0x4c722
	bx r0	@ 0004c722 0047
