@ FUN_080c7db0  entry 0x080c7db0  size 16
.thumb
.org 0xc7db0
FUN_080c7db0:
	push {lr}	@ 000c7db0 00b5
.org 0xc7db2
	ldr r2, [r0, #0]	@ 000c7db2 0268
.org 0xc7db4
	ldr r1, [r0, #4]	@ 000c7db4 4168
.org 0xc7db6
	adds r0, r2, #0	@ 000c7db6 101c
.org 0xc7db8
	bl 0x8868	@ 000c7db8 40f756fd
.org 0xc7dbc
	pop {r1}	@ 000c7dbc 02bc
.org 0xc7dbe
	bx r1	@ 000c7dbe 0847
