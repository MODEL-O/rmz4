@ FUN_080009f8  entry 0x080009f8  size 10
.thumb
.org 0x9f8
FUN_080009f8:
	push {lr}	@ 000009f8 00b5
.org 0x9fa
	bl 0x29dc	@ 000009fa 01f0efff
.org 0x9fe
	pop {r0}	@ 000009fe 01bc
.org 0xa00
	bx r0	@ 00000a00 0047
