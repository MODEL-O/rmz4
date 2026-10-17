@ FUN_080eae0c  entry 0x080eae0c  size 28
.thumb
.org 0xeae0c
FUN_080eae0c:
	push {r4, r5, r6, lr}	@ 000eae0c 70b5
.org 0xeae0e
	adds r5, r0, #0	@ 000eae0e 051c
.org 0xeae10
	ldrb r0, [r5, #14]	@ 000eae10 a87b
.org 0xeae12
	cmp r0, #4	@ 000eae12 0428
.org 0xeae14
	bls.n 0xeae18	@ 000eae14 00d9
.org 0xeae16
	b.n 0xeaff8	@ 000eae16 efe0
.org 0xeae18
	lsls r0, r0, #2	@ 000eae18 8000
.org 0xeae1a
	ldr r1, [pc, #8]	@ 000eae1a 0249
.org 0xeae1c
	adds r0, r0, r1	@ 000eae1c 4018
.org 0xeae1e
	ldr r0, [r0, #0]	@ 000eae1e 0068
.org 0xeae20
	mov pc, r0	@ 000eae20 8746
.org 0xeae22
	.byte 0x00	@ 000eae22 data
.org 0xeae23
	.byte 0x00	@ 000eae23 data
.org 0xeae24
	.byte 0x28,0xae,0x0e,0x08	@ 000eae24 data
