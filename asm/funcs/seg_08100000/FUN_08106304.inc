@ FUN_08106304  entry 0x08106304  size 28
.thumb
.org 0x106304
FUN_08106304:
	push {r4, r5, lr}	@ 00106304 30b5
.org 0x106306
	adds r5, r0, #0	@ 00106306 051c
.org 0x106308
	ldrb r0, [r5, #13]	@ 00106308 687b
.org 0x10630a
	cmp r0, #10	@ 0010630a 0a28
.org 0x10630c
	bls.n 0x106310	@ 0010630c 00d9
.org 0x10630e
	b.n 0x1065c6	@ 0010630e 5ae1
.org 0x106310
	lsls r0, r0, #2	@ 00106310 8000
.org 0x106312
	ldr r1, [pc, #8]	@ 00106312 0249
.org 0x106314
	adds r0, r0, r1	@ 00106314 4018
.org 0x106316
	ldr r0, [r0, #0]	@ 00106316 0068
.org 0x106318
	mov pc, r0	@ 00106318 8746
.org 0x10631a
	.byte 0x00	@ 0010631a data
.org 0x10631b
	.byte 0x00	@ 0010631b data
.org 0x10631c
	.byte 0x20,0x63,0x10,0x08	@ 0010631c data
