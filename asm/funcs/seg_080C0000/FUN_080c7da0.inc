@ FUN_080c7da0  entry 0x080c7da0  size 16
.thumb
.org 0xc7da0
FUN_080c7da0:
	push {lr}	@ 000c7da0 00b5
.org 0xc7da2
	ldr r2, [r0, #0]	@ 000c7da2 0268
.org 0xc7da4
	ldr r1, [r0, #4]	@ 000c7da4 4168
.org 0xc7da6
	adds r0, r2, #0	@ 000c7da6 101c
.org 0xc7da8
	bl 0x8988	@ 000c7da8 40f7eefd
.org 0xc7dac
	pop {r1}	@ 000c7dac 02bc
.org 0xc7dae
	bx r1	@ 000c7dae 0847
