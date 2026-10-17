@ FUN_080c7dc0  entry 0x080c7dc0  size 16
.thumb
.org 0xc7dc0
FUN_080c7dc0:
	push {lr}	@ 000c7dc0 00b5
.org 0xc7dc2
	ldr r2, [r0, #0]	@ 000c7dc2 0268
.org 0xc7dc4
	ldr r1, [r0, #4]	@ 000c7dc4 4168
.org 0xc7dc6
	adds r0, r2, #0	@ 000c7dc6 101c
.org 0xc7dc8
	bl 0x8748	@ 000c7dc8 40f7befc
.org 0xc7dcc
	pop {r1}	@ 000c7dcc 02bc
.org 0xc7dce
	bx r1	@ 000c7dce 0847
