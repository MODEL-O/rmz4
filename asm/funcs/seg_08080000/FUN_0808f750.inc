@ FUN_0808f750  entry 0x0808f750  size 20
.thumb
.org 0x8f750
FUN_0808f750:
	push {lr}	@ 0008f750 00b5
.org 0x8f752
	ldr r2, [pc, #16]	@ 0008f752 044a
.org 0x8f754
	ldrb r1, [r0, #13]	@ 0008f754 417b
.org 0x8f756
	lsls r1, r1, #2	@ 0008f756 8900
.org 0x8f758
	adds r1, r1, r2	@ 0008f758 8918
.org 0x8f75a
	ldr r1, [r1, #0]	@ 0008f75a 0968
.org 0x8f75c
	bl 0x128f80	@ 0008f75c 99f010fc
.org 0x8f760
	pop {r0}	@ 0008f760 01bc
.org 0x8f762
	bx r0	@ 0008f762 0047
