@ FUN_080d319c  entry 0x080d319c  size 48
.thumb
.org 0xd319c
FUN_080d319c:
	push {r4, r5, r6, lr}	@ 000d319c 70b5
.org 0xd319e
	adds r6, r1, #0	@ 000d319e 0e1c
.org 0xd31a0
	lsls r2, r2, #24	@ 000d31a0 1206
.org 0xd31a2
	cmp r2, #0	@ 000d31a2 002a
.org 0xd31a4
	beq.n 0xd31ac	@ 000d31a4 02d0
.org 0xd31a6
	movs r1, #128	@ 000d31a6 8021
.org 0xd31a8
	lsls r1, r1, #6	@ 000d31a8 8901
.org 0xd31aa
	b.n 0xd31ae	@ 000d31aa 00e0
.org 0xd31ac
	ldr r1, [pc, #28]	@ 000d31ac 0749
.org 0xd31ae
	adds r4, r0, r1	@ 000d31ae 4418
.org 0xd31b0
	adds r0, r4, #0	@ 000d31b0 201c
.org 0xd31b2
	adds r1, r6, #0	@ 000d31b2 311c
.org 0xd31b4
	bl 0x8534	@ 000d31b4 35f7bef9
.org 0xd31b8
	adds r5, r0, #0	@ 000d31b8 051c
.org 0xd31ba
	subs r1, r5, r6	@ 000d31ba a91b
.org 0xd31bc
	cmp r1, #0	@ 000d31bc 0029
.org 0xd31be
	bge.n 0xd31c2	@ 000d31be 00da
.org 0xd31c0
	negs r1, r1	@ 000d31c0 4942
.org 0xd31c2
	movs r0, #240	@ 000d31c2 f020
.org 0xd31c4
	lsls r0, r0, #4	@ 000d31c4 0001
.org 0xd31c6
	pop {r4, r5, r6}	@ 000d31c6 70bc
.org 0xd31c8
	pop {r0}	@ 000d31c8 01bc
.org 0xd31ca
	bx r0	@ 000d31ca 0047
