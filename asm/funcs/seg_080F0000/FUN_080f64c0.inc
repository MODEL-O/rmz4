@ FUN_080f64c0  entry 0x080f64c0  size 32
.thumb
.org 0xf64c0
FUN_080f64c0:
	push {r4, lr}	@ 000f64c0 10b5
.org 0xf64c2
	adds r4, r0, #0	@ 000f64c2 041c
.org 0xf64c4
	ldr r1, [pc, #24]	@ 000f64c4 0649
.org 0xf64c6
	ldrb r0, [r4, #13]	@ 000f64c6 607b
.org 0xf64c8
	lsls r0, r0, #2	@ 000f64c8 8000
.org 0xf64ca
	adds r0, r0, r1	@ 000f64ca 4018
.org 0xf64cc
	ldr r1, [r0, #0]	@ 000f64cc 0168
.org 0xf64ce
	adds r0, r4, #0	@ 000f64ce 201c
.org 0xf64d0
	bl 0x128f80	@ 000f64d0 32f056fd
.org 0xf64d4
	adds r0, r4, #0	@ 000f64d4 201c
.org 0xf64d6
	bl 0x1cff0	@ 000f64d6 26f78bfd
.org 0xf64da
	pop {r4}	@ 000f64da 10bc
.org 0xf64dc
	pop {r0}	@ 000f64dc 01bc
.org 0xf64de
	bx r0	@ 000f64de 0047
