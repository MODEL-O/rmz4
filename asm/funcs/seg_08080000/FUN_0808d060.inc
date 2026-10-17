@ FUN_0808d060  entry 0x0808d060  size 20
.thumb
.org 0x8d060
FUN_0808d060:
	push {lr}	@ 0008d060 00b5
.org 0x8d062
	ldr r2, [pc, #16]	@ 0008d062 044a
.org 0x8d064
	ldrb r1, [r0, #13]	@ 0008d064 417b
.org 0x8d066
	lsls r1, r1, #2	@ 0008d066 8900
.org 0x8d068
	adds r1, r1, r2	@ 0008d068 8918
.org 0x8d06a
	ldr r1, [r1, #0]	@ 0008d06a 0968
.org 0x8d06c
	bl 0x128f80	@ 0008d06c 9bf088ff
.org 0x8d070
	pop {r0}	@ 0008d070 01bc
.org 0x8d072
	bx r0	@ 0008d072 0047
