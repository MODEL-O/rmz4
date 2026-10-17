@ FUN_0808f3a8  entry 0x0808f3a8  size 20
.thumb
.org 0x8f3a8
FUN_0808f3a8:
	push {lr}	@ 0008f3a8 00b5
.org 0x8f3aa
	ldr r2, [pc, #16]	@ 0008f3aa 044a
.org 0x8f3ac
	ldrb r1, [r0, #14]	@ 0008f3ac 817b
.org 0x8f3ae
	lsls r1, r1, #2	@ 0008f3ae 8900
.org 0x8f3b0
	adds r1, r1, r2	@ 0008f3b0 8918
.org 0x8f3b2
	ldr r1, [r1, #0]	@ 0008f3b2 0968
.org 0x8f3b4
	bl 0x128f80	@ 0008f3b4 99f0e4fd
.org 0x8f3b8
	pop {r0}	@ 0008f3b8 01bc
.org 0x8f3ba
	bx r0	@ 0008f3ba 0047
