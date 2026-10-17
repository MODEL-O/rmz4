@ FUN_080c1b90  entry 0x080c1b90  size 64
.thumb
.org 0xc1b90
FUN_080c1b90:
	push {lr}	@ 000c1b90 00b5
.org 0xc1b92
	adds r2, r0, #0	@ 000c1b92 021c
.org 0xc1b94
	adds r0, #140	@ 000c1b94 8c30
.org 0xc1b96
	ldr r0, [r0, #0]	@ 000c1b96 0068
.org 0xc1b98
	movs r1, #128	@ 000c1b98 8021
.org 0xc1b9a
	lsls r1, r1, #2	@ 000c1b9a 8900
.org 0xc1b9c
	ands r0, r1	@ 000c1b9c 0840
.org 0xc1b9e
	cmp r0, #0	@ 000c1b9e 0028
.org 0xc1ba0
	beq.n 0xc1bc0	@ 000c1ba0 0ed0
.org 0xc1ba2
	ldr r1, [pc, #24]	@ 000c1ba2 0649
.org 0xc1ba4
	ldrb r0, [r2, #9]	@ 000c1ba4 507a
.org 0xc1ba6
	lsls r0, r0, #2	@ 000c1ba6 8000
.org 0xc1ba8
	adds r0, r0, r1	@ 000c1ba8 4018
.org 0xc1baa
	movs r1, #2	@ 000c1baa 0221
.org 0xc1bac
	str r1, [r2, #12]	@ 000c1bac d160
.org 0xc1bae
	ldr r0, [r0, #0]	@ 000c1bae 0068
.org 0xc1bb0
	ldr r0, [r0, #8]	@ 000c1bb0 8068
.org 0xc1bb2
	str r0, [r2, #20]	@ 000c1bb2 5061
.org 0xc1bb4
	adds r0, r2, #0	@ 000c1bb4 101c
.org 0xc1bb6
	bl 0xc1bd8	@ 000c1bb6 00f00ff8
.org 0xc1bba
	b.n 0xc1bd0	@ 000c1bba 09e0
.org 0xc1bbc
	.byte 0xf4,0x49,0x86,0x08	@ 000c1bbc data
.org 0xc1bc0
	ldr r0, [pc, #16]	@ 000c1bc0 0448
.org 0xc1bc2
	ldrb r1, [r2, #16]	@ 000c1bc2 117c
.org 0xc1bc4
	lsls r1, r1, #2	@ 000c1bc4 8900
.org 0xc1bc6
	adds r1, r1, r0	@ 000c1bc6 0918
.org 0xc1bc8
	ldr r1, [r1, #0]	@ 000c1bc8 0968
.org 0xc1bca
	adds r0, r2, #0	@ 000c1bca 101c
.org 0xc1bcc
	bl 0x128f80	@ 000c1bcc 67f0d8f9
