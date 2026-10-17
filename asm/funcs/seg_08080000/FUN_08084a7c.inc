@ FUN_08084a7c  entry 0x08084a7c  size 64
.thumb
.org 0x84a7c
FUN_08084a7c:
	push {r4, lr}	@ 00084a7c 10b5
.org 0x84a7e
	adds r4, r0, #0	@ 00084a7e 041c
.org 0x84a80
	ldr r0, [r4, #20]	@ 00084a80 6069
.org 0x84a82
	movs r1, #1	@ 00084a82 0121
.org 0x84a84
	ands r0, r1	@ 00084a84 0840
.org 0x84a86
	cmp r0, #0	@ 00084a86 0028
.org 0x84a88
	beq.n 0x84ab6	@ 00084a88 15d0
.org 0x84a8a
	movs r0, #15	@ 00084a8a 0f20
.org 0x84a8c
	bl 0x6984	@ 00084a8c 81f77aff
.org 0x84a90
	ldr r1, [r4, #20]	@ 00084a90 6169
.org 0x84a92
	movs r0, #128	@ 00084a92 8020
.org 0x84a94
	lsls r0, r0, #2	@ 00084a94 8000
.org 0x84a96
	ands r0, r1	@ 00084a96 0840
.org 0x84a98
	cmp r0, #0	@ 00084a98 0028
.org 0x84a9a
	beq.n 0x84ab6	@ 00084a9a 0cd0
.org 0x84a9c
	movs r0, #128	@ 00084a9c 8020
.org 0x84a9e
	lsls r0, r0, #10	@ 00084a9e 8002
.org 0x84aa0
	ands r1, r0	@ 00084aa0 0140
.org 0x84aa2
	cmp r1, #0	@ 00084aa2 0029
.org 0x84aa4
	beq.n 0x84ab6	@ 00084aa4 07d0
.org 0x84aa6
	ldr r0, [pc, #20]	@ 00084aa6 0548
.org 0x84aa8
	ldr r0, [r0, #0]	@ 00084aa8 0068
.org 0x84aaa
	cmp r0, #0	@ 00084aaa 0028
.org 0x84aac
	beq.n 0x84ab6	@ 00084aac 03d0
.org 0x84aae
	movs r1, #3	@ 00084aae 0321
.org 0x84ab0
	movs r2, #3	@ 00084ab0 0322
.org 0x84ab2
	bl 0x3a578	@ 00084ab2 b5f761fd
.org 0x84ab6
	pop {r4}	@ 00084ab6 10bc
.org 0x84ab8
	pop {r0}	@ 00084ab8 01bc
.org 0x84aba
	bx r0	@ 00084aba 0047
