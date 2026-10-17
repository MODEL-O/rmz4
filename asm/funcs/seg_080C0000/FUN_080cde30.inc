@ FUN_080cde30  entry 0x080cde30  size 28
.thumb
.org 0xcde30
FUN_080cde30:
	push {lr}	@ 000cde30 00b5
.org 0xcde32
	ldr r1, [r0, #40]	@ 000cde32 816a
.org 0xcde34
	adds r1, #215	@ 000cde34 d731
.org 0xcde36
	movs r2, #1	@ 000cde36 0122
.org 0xcde38
	strb r2, [r1, #0]	@ 000cde38 0a70
.org 0xcde3a
	ldr r2, [pc, #16]	@ 000cde3a 044a
.org 0xcde3c
	ldrb r1, [r0, #16]	@ 000cde3c 017c
.org 0xcde3e
	lsls r1, r1, #2	@ 000cde3e 8900
.org 0xcde40
	adds r1, r1, r2	@ 000cde40 8918
.org 0xcde42
	ldr r1, [r1, #0]	@ 000cde42 0968
.org 0xcde44
	bl 0x128f80	@ 000cde44 5bf09cf8
.org 0xcde48
	pop {r0}	@ 000cde48 01bc
.org 0xcde4a
	bx r0	@ 000cde4a 0047
