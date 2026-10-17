@ FUN_08119ba4  entry 0x08119ba4  size 20
.thumb
.org 0x119ba4
FUN_08119ba4:
	push {lr}	@ 00119ba4 00b5
.org 0x119ba6
	ldr r2, [pc, #16]	@ 00119ba6 044a
.org 0x119ba8
	ldrb r1, [r0, #2]	@ 00119ba8 8178
.org 0x119baa
	lsls r1, r1, #2	@ 00119baa 8900
.org 0x119bac
	adds r1, r1, r2	@ 00119bac 8918
.org 0x119bae
	ldr r1, [r1, #0]	@ 00119bae 0968
.org 0x119bb0
	bl 0x128f80	@ 00119bb0 0ff0e6f9
.org 0x119bb4
	pop {r0}	@ 00119bb4 01bc
.org 0x119bb6
	bx r0	@ 00119bb6 0047
