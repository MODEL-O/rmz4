@ FUN_080f2eb8  entry 0x080f2eb8  size 40
.thumb
.org 0xf2eb8
FUN_080f2eb8:
	push {r4, r5, r6, r7, lr}	@ 000f2eb8 f0b5
.org 0xf2eba
	mov r7, r9	@ 000f2eba 4f46
.org 0xf2ebc
	mov r6, r8	@ 000f2ebc 4646
.org 0xf2ebe
	push {r6, r7}	@ 000f2ebe c0b4
.org 0xf2ec0
	adds r6, r0, #0	@ 000f2ec0 061c
.org 0xf2ec2
	ldrb r0, [r6, #13]	@ 000f2ec2 707b
.org 0xf2ec4
	cmp r0, #34	@ 000f2ec4 2228
.org 0xf2ec6
	bls.n 0xf2eca	@ 000f2ec6 00d9
.org 0xf2ec8
	b.n 0xf35b4	@ 000f2ec8 74e3
.org 0xf2eca
	lsls r0, r0, #2	@ 000f2eca 8000
.org 0xf2ecc
	ldr r1, [pc, #4]	@ 000f2ecc 0149
.org 0xf2ece
	adds r0, r0, r1	@ 000f2ece 4018
.org 0xf2ed0
	ldr r0, [r0, #0]	@ 000f2ed0 0068
.org 0xf2ed2
	mov pc, r0	@ 000f2ed2 8746
.org 0xf2ed4
	.byte 0xd8,0x2e,0x0f,0x08	@ 000f2ed4 data
.org 0xf2ed8
	.byte 0x64,0x2f,0x0f,0x08	@ 000f2ed8 data
.org 0xf2edc
	.byte 0xb0,0x2f,0x0f,0x08	@ 000f2edc data
