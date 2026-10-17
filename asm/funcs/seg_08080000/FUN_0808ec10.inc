@ FUN_0808ec10  entry 0x0808ec10  size 20
.thumb
.org 0x8ec10
FUN_0808ec10:
	push {lr}	@ 0008ec10 00b5
.org 0x8ec12
	ldr r2, [pc, #16]	@ 0008ec12 044a
.org 0x8ec14
	ldrb r1, [r0, #14]	@ 0008ec14 817b
.org 0x8ec16
	lsls r1, r1, #2	@ 0008ec16 8900
.org 0x8ec18
	adds r1, r1, r2	@ 0008ec18 8918
.org 0x8ec1a
	ldr r1, [r1, #0]	@ 0008ec1a 0968
.org 0x8ec1c
	bl 0x128f80	@ 0008ec1c 9af0b0f9
.org 0x8ec20
	pop {r0}	@ 0008ec20 01bc
.org 0x8ec22
	bx r0	@ 0008ec22 0047
