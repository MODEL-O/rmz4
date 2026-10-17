@ FUN_08018eac  entry 0x08018eac  size 12
.thumb
.org 0x18eac
FUN_08018eac:
	ldr r2, [pc, #8]	@ 00018eac 024a
.org 0x18eae
	ldr r1, [r0, #4]	@ 00018eae 4168
.org 0x18eb0
	ldr r0, [r0, #0]	@ 00018eb0 0068
.org 0x18eb2
	str r0, [r2, #0]	@ 00018eb2 1060
.org 0x18eb4
	str r1, [r2, #4]	@ 00018eb4 5160
.org 0x18eb6
	bx lr	@ 00018eb6 7047
