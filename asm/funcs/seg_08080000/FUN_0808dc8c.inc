@ FUN_0808dc8c  entry 0x0808dc8c  size 20
.thumb
.org 0x8dc8c
FUN_0808dc8c:
	push {lr}	@ 0008dc8c 00b5
.org 0x8dc8e
	ldr r2, [pc, #16]	@ 0008dc8e 044a
.org 0x8dc90
	ldrb r1, [r0, #16]	@ 0008dc90 017c
.org 0x8dc92
	lsls r1, r1, #2	@ 0008dc92 8900
.org 0x8dc94
	adds r1, r1, r2	@ 0008dc94 8918
.org 0x8dc96
	ldr r1, [r1, #0]	@ 0008dc96 0968
.org 0x8dc98
	bl 0x128f80	@ 0008dc98 9bf072f9
.org 0x8dc9c
	pop {r0}	@ 0008dc9c 01bc
.org 0x8dc9e
	bx r0	@ 0008dc9e 0047
