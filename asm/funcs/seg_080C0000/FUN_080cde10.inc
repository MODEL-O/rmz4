@ FUN_080cde10  entry 0x080cde10  size 28
.thumb
.org 0xcde10
FUN_080cde10:
	push {lr}	@ 000cde10 00b5
.org 0xcde12
	ldr r1, [r0, #40]	@ 000cde12 816a
.org 0xcde14
	adds r1, #215	@ 000cde14 d731
.org 0xcde16
	movs r2, #1	@ 000cde16 0122
.org 0xcde18
	strb r2, [r1, #0]	@ 000cde18 0a70
.org 0xcde1a
	ldr r2, [pc, #16]	@ 000cde1a 044a
.org 0xcde1c
	ldrb r1, [r0, #16]	@ 000cde1c 017c
.org 0xcde1e
	lsls r1, r1, #2	@ 000cde1e 8900
.org 0xcde20
	adds r1, r1, r2	@ 000cde20 8918
.org 0xcde22
	ldr r1, [r1, #0]	@ 000cde22 0968
.org 0xcde24
	bl 0x128f80	@ 000cde24 5bf0acf8
.org 0xcde28
	pop {r0}	@ 000cde28 01bc
.org 0xcde2a
	bx r0	@ 000cde2a 0047
