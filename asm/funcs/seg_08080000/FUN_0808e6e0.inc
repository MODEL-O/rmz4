@ FUN_0808e6e0  entry 0x0808e6e0  size 20
.thumb
.org 0x8e6e0
FUN_0808e6e0:
	push {lr}	@ 0008e6e0 00b5
.org 0x8e6e2
	ldr r2, [pc, #16]	@ 0008e6e2 044a
.org 0x8e6e4
	ldrb r1, [r0, #16]	@ 0008e6e4 017c
.org 0x8e6e6
	lsls r1, r1, #2	@ 0008e6e6 8900
.org 0x8e6e8
	adds r1, r1, r2	@ 0008e6e8 8918
.org 0x8e6ea
	ldr r1, [r1, #0]	@ 0008e6ea 0968
.org 0x8e6ec
	bl 0x128f80	@ 0008e6ec 9af048fc
.org 0x8e6f0
	pop {r0}	@ 0008e6f0 01bc
.org 0x8e6f2
	bx r0	@ 0008e6f2 0047
