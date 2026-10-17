@ FUN_080b0e80  entry 0x080b0e80  size 76
.thumb
.org 0xb0e80
FUN_080b0e80:
	push {lr}	@ 000b0e80 00b5
.org 0xb0e82
	adds r2, r0, #0	@ 000b0e82 021c
.org 0xb0e84
	ldr r1, [r2, #40]	@ 000b0e84 916a
.org 0xb0e86
	ldrb r3, [r2, #17]	@ 000b0e86 537c
.org 0xb0e88
	ldrb r0, [r1, #12]	@ 000b0e88 087b
.org 0xb0e8a
	cmp r0, #1	@ 000b0e8a 0128
.org 0xb0e8c
	bhi.n 0xb0e9e	@ 000b0e8c 07d8
.org 0xb0e8e
	adds r0, r1, #0	@ 000b0e8e 081c
.org 0xb0e90
	adds r0, #212	@ 000b0e90 d430
.org 0xb0e92
	ldrb r0, [r0, #0]	@ 000b0e92 0078
.org 0xb0e94
	asrs r0, r3	@ 000b0e94 1841
.org 0xb0e96
	movs r1, #1	@ 000b0e96 0121
.org 0xb0e98
	ands r0, r1	@ 000b0e98 0840
.org 0xb0e9a
	cmp r0, #0	@ 000b0e9a 0028
.org 0xb0e9c
	beq.n 0xb0ebc	@ 000b0e9c 0ed0
.org 0xb0e9e
	ldr r1, [pc, #24]	@ 000b0e9e 0649
.org 0xb0ea0
	ldrb r0, [r2, #9]	@ 000b0ea0 507a
.org 0xb0ea2
	lsls r0, r0, #2	@ 000b0ea2 8000
.org 0xb0ea4
	adds r0, r0, r1	@ 000b0ea4 4018
.org 0xb0ea6
	movs r1, #2	@ 000b0ea6 0221
.org 0xb0ea8
	str r1, [r2, #12]	@ 000b0ea8 d160
.org 0xb0eaa
	ldr r0, [r0, #0]	@ 000b0eaa 0068
.org 0xb0eac
	ldr r0, [r0, #8]	@ 000b0eac 8068
.org 0xb0eae
	str r0, [r2, #20]	@ 000b0eae 5061
.org 0xb0eb0
	adds r0, r2, #0	@ 000b0eb0 101c
.org 0xb0eb2
	bl 0xb0fe4	@ 000b0eb2 00f097f8
.org 0xb0eb6
	b.n 0xb0ecc	@ 000b0eb6 09e0
.org 0xb0eb8
	.byte 0x40,0xdb,0x85,0x08	@ 000b0eb8 data
.org 0xb0ebc
	ldr r0, [pc, #16]	@ 000b0ebc 0448
.org 0xb0ebe
	ldrb r1, [r2, #13]	@ 000b0ebe 517b
.org 0xb0ec0
	lsls r1, r1, #2	@ 000b0ec0 8900
.org 0xb0ec2
	adds r1, r1, r0	@ 000b0ec2 0918
.org 0xb0ec4
	ldr r1, [r1, #0]	@ 000b0ec4 0968
.org 0xb0ec6
	adds r0, r2, #0	@ 000b0ec6 101c
.org 0xb0ec8
	bl 0x128f80	@ 000b0ec8 78f05af8
