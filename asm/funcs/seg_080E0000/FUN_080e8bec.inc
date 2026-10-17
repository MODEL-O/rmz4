@ FUN_080e8bec  entry 0x080e8bec  size 48
.thumb
.org 0xe8bec
FUN_080e8bec:
	push {lr}	@ 000e8bec 00b5
.org 0xe8bee
	adds r2, r0, #0	@ 000e8bee 021c
.org 0xe8bf0
	adds r0, #115	@ 000e8bf0 7330
.org 0xe8bf2
	ldrb r0, [r0, #0]	@ 000e8bf2 0078
.org 0xe8bf4
	cmp r0, #3	@ 000e8bf4 0328
.org 0xe8bf6
	bne.n 0xe8c18	@ 000e8bf6 0fd1
.org 0xe8bf8
	ldr r1, [pc, #24]	@ 000e8bf8 0649
.org 0xe8bfa
	ldrb r0, [r2, #9]	@ 000e8bfa 507a
.org 0xe8bfc
	lsls r0, r0, #2	@ 000e8bfc 8000
.org 0xe8bfe
	adds r0, r0, r1	@ 000e8bfe 4018
.org 0xe8c00
	movs r1, #2	@ 000e8c00 0221
.org 0xe8c02
	str r1, [r2, #12]	@ 000e8c02 d160
.org 0xe8c04
	ldr r0, [r0, #0]	@ 000e8c04 0068
.org 0xe8c06
	ldr r0, [r0, #8]	@ 000e8c06 8068
.org 0xe8c08
	str r0, [r2, #20]	@ 000e8c08 5061
.org 0xe8c0a
	adds r0, r2, #0	@ 000e8c0a 101c
.org 0xe8c0c
	bl 0xe8c24	@ 000e8c0c 00f00af8
.org 0xe8c10
	b.n 0xe8c1e	@ 000e8c10 05e0
.org 0xe8c12
	.byte 0x00	@ 000e8c12 data
.org 0xe8c13
	.byte 0x00	@ 000e8c13 data
.org 0xe8c14
	.byte 0x64,0x6f,0x86,0x08	@ 000e8c14 data
.org 0xe8c18
	adds r0, r2, #0	@ 000e8c18 101c
.org 0xe8c1a
	bl 0x1cff0	@ 000e8c1a 34f7e9f9
