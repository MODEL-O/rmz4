@ FUN_0808a0f8  entry 0x0808a0f8  size 20
.thumb
.org 0x8a0f8
FUN_0808a0f8:
	push {lr}	@ 0008a0f8 00b5
.org 0x8a0fa
	ldr r2, [pc, #16]	@ 0008a0fa 044a
.org 0x8a0fc
	ldrb r1, [r0, #13]	@ 0008a0fc 417b
.org 0x8a0fe
	lsls r1, r1, #2	@ 0008a0fe 8900
.org 0x8a100
	adds r1, r1, r2	@ 0008a100 8918
.org 0x8a102
	ldr r1, [r1, #0]	@ 0008a102 0968
.org 0x8a104
	bl 0x128f80	@ 0008a104 9ef03cff
.org 0x8a108
	pop {r0}	@ 0008a108 01bc
.org 0x8a10a
	bx r0	@ 0008a10a 0047
