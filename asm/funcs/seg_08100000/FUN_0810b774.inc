@ FUN_0810b774  entry 0x0810b774  size 58
.thumb
.org 0x10b774
FUN_0810b774:
	push {lr}	@ 0010b774 00b5
.org 0x10b776
	adds r2, r0, #0	@ 0010b776 021c
.org 0x10b778
	ldr r0, [r2, #44]	@ 0010b778 d06a
.org 0x10b77a
	ldrb r0, [r0, #0]	@ 0010b77a 0078
.org 0x10b77c
	cmp r0, #0	@ 0010b77c 0028
.org 0x10b77e
	beq.n 0x10b7a0	@ 0010b77e 0fd0
.org 0x10b780
	ldr r1, [pc, #24]	@ 0010b780 0649
.org 0x10b782
	ldrb r0, [r2, #9]	@ 0010b782 507a
.org 0x10b784
	lsls r0, r0, #2	@ 0010b784 8000
.org 0x10b786
	adds r0, r0, r1	@ 0010b786 4018
.org 0x10b788
	movs r1, #2	@ 0010b788 0221
.org 0x10b78a
	str r1, [r2, #12]	@ 0010b78a d160
.org 0x10b78c
	ldr r0, [r0, #0]	@ 0010b78c 0068
.org 0x10b78e
	ldr r0, [r0, #8]	@ 0010b78e 8068
.org 0x10b790
	str r0, [r2, #20]	@ 0010b790 5061
.org 0x10b792
	adds r0, r2, #0	@ 0010b792 101c
.org 0x10b794
	bl 0x10b7b8	@ 0010b794 00f010f8
.org 0x10b798
	b.n 0x10b7b0	@ 0010b798 0ae0
.org 0x10b79a
	.byte 0x00	@ 0010b79a data
.org 0x10b79b
	.byte 0x00	@ 0010b79b data
.org 0x10b79c
	.byte 0xf8,0xca,0x86,0x08	@ 0010b79c data
.org 0x10b7a0
	ldr r0, [pc, #16]	@ 0010b7a0 0448
.org 0x10b7a2
	ldrb r1, [r2, #16]	@ 0010b7a2 117c
.org 0x10b7a4
	lsls r1, r1, #2	@ 0010b7a4 8900
.org 0x10b7a6
	adds r1, r1, r0	@ 0010b7a6 0918
.org 0x10b7a8
	ldr r1, [r1, #0]	@ 0010b7a8 0968
.org 0x10b7aa
	adds r0, r2, #0	@ 0010b7aa 101c
.org 0x10b7ac
	bl 0x128f80	@ 0010b7ac 1df0e8fb
