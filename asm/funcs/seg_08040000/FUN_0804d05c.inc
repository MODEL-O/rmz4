@ FUN_0804d05c  entry 0x0804d05c  size 46
.thumb
.org 0x4d05c
FUN_0804d05c:
	push {lr}	@ 0004d05c 00b5
.org 0x4d05e
	ldr r2, [r0, #84]	@ 0004d05e 426d
.org 0x4d060
	ldr r1, [r0, #88]	@ 0004d060 816d
.org 0x4d062
	adds r0, r2, #0	@ 0004d062 101c
.org 0x4d064
	bl 0x7c7c	@ 0004d064 baf70afe
.org 0x4d068
	lsls r0, r0, #16	@ 0004d068 0004
.org 0x4d06a
	lsrs r0, r0, #16	@ 0004d06a 000c
.org 0x4d06c
	adds r1, r0, #0	@ 0004d06c 011c
.org 0x4d06e
	movs r0, #15	@ 0004d06e 0f20
.org 0x4d070
	ands r0, r1	@ 0004d070 0840
.org 0x4d072
	cmp r0, #15	@ 0004d072 0f28
.org 0x4d074
	beq.n 0x4d084	@ 0004d074 06d0
.org 0x4d076
	movs r0, #128	@ 0004d076 8020
.org 0x4d078
	lsls r0, r0, #8	@ 0004d078 0002
.org 0x4d07a
	ands r0, r1	@ 0004d07a 0840
.org 0x4d07c
	cmp r0, #0	@ 0004d07c 0028
.org 0x4d07e
	bne.n 0x4d084	@ 0004d07e 01d1
.org 0x4d080
	adds r0, r1, #0	@ 0004d080 081c
.org 0x4d082
	b.n 0x4d086	@ 0004d082 00e0
.org 0x4d084
	movs r0, #0	@ 0004d084 0020
.org 0x4d086
	pop {r1}	@ 0004d086 02bc
.org 0x4d088
	bx r1	@ 0004d088 0847
