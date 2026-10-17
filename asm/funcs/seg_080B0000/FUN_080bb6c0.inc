@ FUN_080bb6c0  entry 0x080bb6c0  size 52
.thumb
.org 0xbb6c0
FUN_080bb6c0:
	push {r4, lr}	@ 000bb6c0 10b5
.org 0xbb6c2
	adds r4, r0, #0	@ 000bb6c2 041c
.org 0xbb6c4
	ldr r2, [r4, #40]	@ 000bb6c4 a26a
.org 0xbb6c6
	ldr r1, [pc, #44]	@ 000bb6c6 0b49
.org 0xbb6c8
	movs r0, #0	@ 000bb6c8 0020
.org 0xbb6ca
	strh r0, [r1, #0]	@ 000bb6ca 0880
.org 0xbb6cc
	adds r3, r4, #0	@ 000bb6cc 231c
.org 0xbb6ce
	adds r3, #69	@ 000bb6ce 4533
.org 0xbb6d0
	ldrb r1, [r3, #0]	@ 000bb6d0 1978
.org 0xbb6d2
	subs r0, #13	@ 000bb6d2 0d38
.org 0xbb6d4
	ands r0, r1	@ 000bb6d4 0840
.org 0xbb6d6
	strb r0, [r3, #0]	@ 000bb6d6 1870
.org 0xbb6d8
	adds r2, #204	@ 000bb6d8 cc32
.org 0xbb6da
	ldrh r1, [r2, #0]	@ 000bb6da 1188
.org 0xbb6dc
	movs r3, #0	@ 000bb6dc 0023
.org 0xbb6de
	ldrsh r0, [r2, r3]	@ 000bb6de d05e
.org 0xbb6e0
	cmp r0, #0	@ 000bb6e0 0028
.org 0xbb6e2
	beq.n 0xbb6e8	@ 000bb6e2 01d0
.org 0xbb6e4
	subs r0, r1, #1	@ 000bb6e4 481e
.org 0xbb6e6
	strh r0, [r2, #0]	@ 000bb6e6 1080
.org 0xbb6e8
	adds r0, r4, #0	@ 000bb6e8 201c
.org 0xbb6ea
	bl 0x7f8ec	@ 000bb6ea c4f7fff8
.org 0xbb6ee
	pop {r4}	@ 000bb6ee 10bc
.org 0xbb6f0
	pop {r0}	@ 000bb6f0 01bc
.org 0xbb6f2
	bx r0	@ 000bb6f2 0047
