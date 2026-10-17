@ FUN_0807f954  entry 0x0807f954  size 64
.thumb
.org 0x7f954
FUN_0807f954:
	push {r4, r5, lr}	@ 0007f954 30b5
.org 0x7f956
	lsls r0, r0, #24	@ 0007f956 0006
.org 0x7f958
	lsrs r5, r0, #24	@ 0007f958 050e
.org 0x7f95a
	ldr r0, [pc, #36]	@ 0007f95a 0948
.org 0x7f95c
	ldr r4, [r0, #0]	@ 0007f95c 0468
.org 0x7f95e
	adds r0, r4, #0	@ 0007f95e 201c
.org 0x7f960
	bl 0x54c4	@ 0007f960 85f7b0fd
.org 0x7f964
	ldr r0, [r4, #12]	@ 0007f964 e068
.org 0x7f966
	ldr r0, [r0, #4]	@ 0007f966 4068
.org 0x7f968
	str r0, [r4, #12]	@ 0007f968 e060
.org 0x7f96a
	adds r1, r0, #0	@ 0007f96a 011c
.org 0x7f96c
	adds r0, r4, #0	@ 0007f96c 201c
.org 0x7f96e
	adds r0, #20	@ 0007f96e 1430
.org 0x7f970
	cmp r1, r0	@ 0007f970 8142
.org 0x7f972
	beq.n 0x7f990	@ 0007f972 0dd0
.org 0x7f974
	adds r2, r0, #0	@ 0007f974 021c
.org 0x7f976
	ldrb r0, [r1, #16]	@ 0007f976 087c
.org 0x7f978
	cmp r0, r5	@ 0007f978 a842
.org 0x7f97a
	bne.n 0x7f984	@ 0007f97a 03d1
.org 0x7f97c
	adds r0, r1, #0	@ 0007f97c 081c
.org 0x7f97e
	b.n 0x7f992	@ 0007f97e 08e0
.org 0x7f980
	.byte 0x84,0xed,0x02,0x02	@ 0007f980 data
.org 0x7f984
	ldr r0, [r4, #12]	@ 0007f984 e068
.org 0x7f986
	ldr r0, [r0, #4]	@ 0007f986 4068
.org 0x7f988
	str r0, [r4, #12]	@ 0007f988 e060
.org 0x7f98a
	adds r1, r0, #0	@ 0007f98a 011c
.org 0x7f98c
	cmp r1, r2	@ 0007f98c 9142
.org 0x7f98e
	bne.n 0x7f976	@ 0007f98e f2d1
.org 0x7f990
	movs r0, #0	@ 0007f990 0020
.org 0x7f992
	pop {r4, r5}	@ 0007f992 30bc
