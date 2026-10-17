@ FUN_0808f0d8  entry 0x0808f0d8  size 20
.thumb
.org 0x8f0d8
FUN_0808f0d8:
	push {lr}	@ 0008f0d8 00b5
.org 0x8f0da
	ldr r2, [pc, #16]	@ 0008f0da 044a
.org 0x8f0dc
	ldrb r1, [r0, #14]	@ 0008f0dc 817b
.org 0x8f0de
	lsls r1, r1, #2	@ 0008f0de 8900
.org 0x8f0e0
	adds r1, r1, r2	@ 0008f0e0 8918
.org 0x8f0e2
	ldr r1, [r1, #0]	@ 0008f0e2 0968
.org 0x8f0e4
	bl 0x128f80	@ 0008f0e4 99f04cff
.org 0x8f0e8
	pop {r0}	@ 0008f0e8 01bc
.org 0x8f0ea
	bx r0	@ 0008f0ea 0047
