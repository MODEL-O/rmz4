@ FUN_0808b844  entry 0x0808b844  size 20
.thumb
.org 0x8b844
FUN_0808b844:
	push {lr}	@ 0008b844 00b5
.org 0x8b846
	ldr r2, [pc, #16]	@ 0008b846 044a
.org 0x8b848
	ldrb r1, [r0, #13]	@ 0008b848 417b
.org 0x8b84a
	lsls r1, r1, #2	@ 0008b84a 8900
.org 0x8b84c
	adds r1, r1, r2	@ 0008b84c 8918
.org 0x8b84e
	ldr r1, [r1, #0]	@ 0008b84e 0968
.org 0x8b850
	bl 0x128f80	@ 0008b850 9df096fb
.org 0x8b854
	pop {r0}	@ 0008b854 01bc
.org 0x8b856
	bx r0	@ 0008b856 0047
