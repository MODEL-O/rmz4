@ FUN_080ad690  entry 0x080ad690  size 50
.thumb
.org 0xad690
FUN_080ad690:
	push {lr}	@ 000ad690 00b5
.org 0xad692
	adds r2, r0, #0	@ 000ad692 021c
.org 0xad694
	ldr r1, [r2, #40]	@ 000ad694 916a
.org 0xad696
	ldrb r0, [r1, #12]	@ 000ad696 087b
.org 0xad698
	cmp r0, #1	@ 000ad698 0128
.org 0xad69a
	bls.n 0xad6bc	@ 000ad69a 0fd9
.org 0xad69c
	ldr r1, [pc, #24]	@ 000ad69c 0649
.org 0xad69e
	ldrb r0, [r2, #9]	@ 000ad69e 507a
.org 0xad6a0
	lsls r0, r0, #2	@ 000ad6a0 8000
.org 0xad6a2
	adds r0, r0, r1	@ 000ad6a2 4018
.org 0xad6a4
	movs r1, #2	@ 000ad6a4 0221
.org 0xad6a6
	str r1, [r2, #12]	@ 000ad6a6 d160
.org 0xad6a8
	ldr r0, [r0, #0]	@ 000ad6a8 0068
.org 0xad6aa
	ldr r0, [r0, #8]	@ 000ad6aa 8068
.org 0xad6ac
	str r0, [r2, #20]	@ 000ad6ac 5061
.org 0xad6ae
	adds r0, r2, #0	@ 000ad6ae 101c
.org 0xad6b0
	bl 0xad750	@ 000ad6b0 00f04ef8
.org 0xad6b4
	b.n 0xad6c4	@ 000ad6b4 06e0
.org 0xad6b6
	.byte 0x00	@ 000ad6b6 data
.org 0xad6b7
	.byte 0x00	@ 000ad6b7 data
.org 0xad6b8
	.byte 0x40,0xdb,0x85,0x08	@ 000ad6b8 data
.org 0xad6bc
	ldr r0, [r1, #84]	@ 000ad6bc 486d
.org 0xad6be
	ldr r1, [r1, #88]	@ 000ad6be 896d
.org 0xad6c0
	str r0, [r2, #84]	@ 000ad6c0 5065
