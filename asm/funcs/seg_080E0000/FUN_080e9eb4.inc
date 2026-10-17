@ FUN_080e9eb4  entry 0x080e9eb4  size 28
.thumb
.org 0xe9eb4
FUN_080e9eb4:
	push {r4, r5, lr}	@ 000e9eb4 30b5
.org 0xe9eb6
	adds r5, r0, #0	@ 000e9eb6 051c
.org 0xe9eb8
	ldrb r0, [r5, #14]	@ 000e9eb8 a87b
.org 0xe9eba
	cmp r0, #4	@ 000e9eba 0428
.org 0xe9ebc
	bls.n 0xe9ec0	@ 000e9ebc 00d9
.org 0xe9ebe
	b.n 0xea0aa	@ 000e9ebe f4e0
.org 0xe9ec0
	lsls r0, r0, #2	@ 000e9ec0 8000
.org 0xe9ec2
	ldr r1, [pc, #8]	@ 000e9ec2 0249
.org 0xe9ec4
	adds r0, r0, r1	@ 000e9ec4 4018
.org 0xe9ec6
	ldr r0, [r0, #0]	@ 000e9ec6 0068
.org 0xe9ec8
	mov pc, r0	@ 000e9ec8 8746
.org 0xe9eca
	.byte 0x00	@ 000e9eca data
.org 0xe9ecb
	.byte 0x00	@ 000e9ecb data
.org 0xe9ecc
	.byte 0xd0,0x9e,0x0e,0x08	@ 000e9ecc data
