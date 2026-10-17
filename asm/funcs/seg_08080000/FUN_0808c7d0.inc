@ FUN_0808c7d0  entry 0x0808c7d0  size 20
.thumb
.org 0x8c7d0
FUN_0808c7d0:
	push {lr}	@ 0008c7d0 00b5
.org 0x8c7d2
	ldr r2, [pc, #16]	@ 0008c7d2 044a
.org 0x8c7d4
	ldrb r1, [r0, #14]	@ 0008c7d4 817b
.org 0x8c7d6
	lsls r1, r1, #2	@ 0008c7d6 8900
.org 0x8c7d8
	adds r1, r1, r2	@ 0008c7d8 8918
.org 0x8c7da
	ldr r1, [r1, #0]	@ 0008c7da 0968
.org 0x8c7dc
	bl 0x128f80	@ 0008c7dc 9cf0d0fb
.org 0x8c7e0
	pop {r0}	@ 0008c7e0 01bc
.org 0x8c7e2
	bx r0	@ 0008c7e2 0047
