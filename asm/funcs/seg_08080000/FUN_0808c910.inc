@ FUN_0808c910  entry 0x0808c910  size 20
.thumb
.org 0x8c910
FUN_0808c910:
	push {lr}	@ 0008c910 00b5
.org 0x8c912
	ldr r2, [pc, #16]	@ 0008c912 044a
.org 0x8c914
	ldrb r1, [r0, #13]	@ 0008c914 417b
.org 0x8c916
	lsls r1, r1, #2	@ 0008c916 8900
.org 0x8c918
	adds r1, r1, r2	@ 0008c918 8918
.org 0x8c91a
	ldr r1, [r1, #0]	@ 0008c91a 0968
.org 0x8c91c
	bl 0x128f80	@ 0008c91c 9cf030fb
.org 0x8c920
	pop {r0}	@ 0008c920 01bc
.org 0x8c922
	bx r0	@ 0008c922 0047
