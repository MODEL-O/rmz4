@ FUN_080aaa0c  entry 0x080aaa0c  size 50
.thumb
.org 0xaaa0c
FUN_080aaa0c:
	push {lr}	@ 000aaa0c 00b5
.org 0xaaa0e
	adds r3, r0, #0	@ 000aaa0e 031c
.org 0xaaa10
	ldr r0, [pc, #36]	@ 000aaa10 0948
.org 0xaaa12
	ldr r2, [r0, #0]	@ 000aaa12 0268
.org 0xaaa14
	ldr r0, [r2, #88]	@ 000aaa14 906d
.org 0xaaa16
	ldr r1, [r3, #88]	@ 000aaa16 996d
.org 0xaaa18
	subs r0, r0, r1	@ 000aaa18 401a
.org 0xaaa1a
	asrs r0, r0, #8	@ 000aaa1a 0012
.org 0xaaa1c
	subs r0, #1	@ 000aaa1c 0138
.org 0xaaa1e
	cmp r0, #110	@ 000aaa1e 6e28
.org 0xaaa20
	bhi.n 0xaaa3c	@ 000aaa20 0cd8
.org 0xaaa22
	ldr r0, [r2, #84]	@ 000aaa22 506d
.org 0xaaa24
	ldr r1, [r3, #84]	@ 000aaa24 596d
.org 0xaaa26
	subs r0, r0, r1	@ 000aaa26 401a
.org 0xaaa28
	asrs r0, r0, #8	@ 000aaa28 0012
.org 0xaaa2a
	cmp r0, #0	@ 000aaa2a 0028
.org 0xaaa2c
	bge.n 0xaaa30	@ 000aaa2c 00da
.org 0xaaa2e
	negs r0, r0	@ 000aaa2e 4042
.org 0xaaa30
	cmp r0, #31	@ 000aaa30 1f28
.org 0xaaa32
	bgt.n 0xaaa3c	@ 000aaa32 03dc
.org 0xaaa34
	movs r0, #1	@ 000aaa34 0120
.org 0xaaa36
	b.n 0xaaa3e	@ 000aaa36 02e0
.org 0xaaa38
	.byte 0xf0,0xdb,0x02,0x02	@ 000aaa38 data
.org 0xaaa3c
	movs r0, #0	@ 000aaa3c 0020
