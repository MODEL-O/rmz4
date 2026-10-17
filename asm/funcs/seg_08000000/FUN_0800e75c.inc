@ FUN_0800e75c  entry 0x0800e75c  size 26
.thumb
.org 0xe75c
FUN_0800e75c:
	.byte 0x00,0xb5	@ 0000e75c (raw)
.org 0xe75e
	adds r3, r0, #0	@ 0000e75e 031c
.org 0xe760
	ldrb r2, [r3, #14]	@ 0000e760 9a7b
.org 0xe762
	cmp r2, #0	@ 0000e762 002a
.org 0xe764
	bne.n 0xe772	@ 0000e764 05d1
.org 0xe766
	ldr r0, [pc, #16]	@ 0000e766 0448
.org 0xe768
	movs r1, #165	@ 0000e768 a521
.org 0xe76a
	lsls r1, r1, #12	@ 0000e76a 0903
.org 0xe76c
	str r1, [r0, #0]	@ 0000e76c 0160
.org 0xe76e
	adds r0, r2, #1	@ 0000e76e 501c
.org 0xe770
	strb r0, [r3, #14]	@ 0000e770 9873
.org 0xe772
	pop {r0}	@ 0000e772 01bc
.org 0xe774
	bx r0	@ 0000e774 0047
