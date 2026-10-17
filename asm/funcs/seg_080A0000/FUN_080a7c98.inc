@ FUN_080a7c98  entry 0x080a7c98  size 72
.thumb
.org 0xa7c98
FUN_080a7c98:
	push {lr}	@ 000a7c98 00b5
.org 0xa7c9a
	adds r2, r0, #0	@ 000a7c9a 021c
.org 0xa7c9c
	ldr r1, [r2, #40]	@ 000a7c9c 916a
.org 0xa7c9e
	ldrb r0, [r1, #12]	@ 000a7c9e 087b
.org 0xa7ca0
	cmp r0, #1	@ 000a7ca0 0128
.org 0xa7ca2
	bls.n 0xa7cc4	@ 000a7ca2 0fd9
.org 0xa7ca4
	ldr r1, [pc, #24]	@ 000a7ca4 0649
.org 0xa7ca6
	ldrb r0, [r2, #9]	@ 000a7ca6 507a
.org 0xa7ca8
	lsls r0, r0, #2	@ 000a7ca8 8000
.org 0xa7caa
	adds r0, r0, r1	@ 000a7caa 4018
.org 0xa7cac
	movs r1, #2	@ 000a7cac 0221
.org 0xa7cae
	str r1, [r2, #12]	@ 000a7cae d160
.org 0xa7cb0
	ldr r0, [r0, #0]	@ 000a7cb0 0068
.org 0xa7cb2
	ldr r0, [r0, #8]	@ 000a7cb2 8068
.org 0xa7cb4
	str r0, [r2, #20]	@ 000a7cb4 5061
.org 0xa7cb6
	adds r0, r2, #0	@ 000a7cb6 101c
.org 0xa7cb8
	bl 0xa7cec	@ 000a7cb8 00f018f8
.org 0xa7cbc
	b.n 0xa7ce2	@ 000a7cbc 11e0
.org 0xa7cbe
	.byte 0x00	@ 000a7cbe data
.org 0xa7cbf
	.byte 0x00	@ 000a7cbf data
.org 0xa7cc0
	.byte 0x40,0xdb,0x85,0x08	@ 000a7cc0 data
.org 0xa7cc4
	ldrb r0, [r1, #13]	@ 000a7cc4 487b
.org 0xa7cc6
	cmp r0, #0	@ 000a7cc6 0028
.org 0xa7cc8
	bne.n 0xa7cd2	@ 000a7cc8 03d1
.org 0xa7cca
	adds r0, r2, #0	@ 000a7cca 101c
.org 0xa7ccc
	bl 0x1cff0	@ 000a7ccc 75f790f9
.org 0xa7cd0
	b.n 0xa7ce2	@ 000a7cd0 07e0
.org 0xa7cd2
	ldr r0, [pc, #20]	@ 000a7cd2 0548
.org 0xa7cd4
	ldrb r1, [r2, #13]	@ 000a7cd4 517b
.org 0xa7cd6
	lsls r1, r1, #2	@ 000a7cd6 8900
.org 0xa7cd8
	adds r1, r1, r0	@ 000a7cd8 0918
.org 0xa7cda
	ldr r1, [r1, #0]	@ 000a7cda 0968
.org 0xa7cdc
	adds r0, r2, #0	@ 000a7cdc 101c
.org 0xa7cde
	bl 0x128f80	@ 000a7cde 81f04ff9
