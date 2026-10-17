@ FUN_0807eb38  entry 0x0807eb38  size 116
.thumb
.org 0x7eb38
FUN_0807eb38:
	push {r4, r5, lr}	@ 0007eb38 30b5
.org 0x7eb3a
	sub sp, #16	@ 0007eb3a 84b0
.org 0x7eb3c
	adds r3, r0, #0	@ 0007eb3c 031c
.org 0x7eb3e
	lsls r1, r1, #24	@ 0007eb3e 0906
.org 0x7eb40
	lsrs r2, r1, #24	@ 0007eb40 0a0e
.org 0x7eb42
	movs r5, #0	@ 0007eb42 0025
.org 0x7eb44
	movs r4, #0	@ 0007eb44 0024
.org 0x7eb46
	cmp r4, r2	@ 0007eb46 9442
.org 0x7eb48
	bge.n 0x7eb60	@ 0007eb48 0ada
.org 0x7eb4a
	mov r0, sp	@ 0007eb4a 6846
.org 0x7eb4c
	adds r1, r0, r4	@ 0007eb4c 0119
.org 0x7eb4e
	adds r0, r3, r4	@ 0007eb4e 1819
.org 0x7eb50
	ldrb r0, [r0, #0]	@ 0007eb50 0078
.org 0x7eb52
	strb r0, [r1, #0]	@ 0007eb52 0870
.org 0x7eb54
	adds r0, r0, r5	@ 0007eb54 4019
.org 0x7eb56
	lsls r0, r0, #24	@ 0007eb56 0006
.org 0x7eb58
	lsrs r5, r0, #24	@ 0007eb58 050e
.org 0x7eb5a
	adds r4, #1	@ 0007eb5a 0134
.org 0x7eb5c
	cmp r4, r2	@ 0007eb5c 9442
.org 0x7eb5e
	blt.n 0x7eb4a	@ 0007eb5e f4db
.org 0x7eb60
	lsls r0, r5, #24	@ 0007eb60 2806
.org 0x7eb62
	asrs r3, r0, #24	@ 0007eb62 0316
.org 0x7eb64
	cmp r3, #0	@ 0007eb64 002b
.org 0x7eb66
	bne.n 0x7eb6e	@ 0007eb66 02d1
.org 0x7eb68
	movs r0, #1	@ 0007eb68 0120
.org 0x7eb6a
	negs r0, r0	@ 0007eb6a 4042
.org 0x7eb6c
	b.n 0x7eba4	@ 0007eb6c 1ae0
.org 0x7eb6e
	ldr r2, [pc, #60]	@ 0007eb6e 0f4a
.org 0x7eb70
	ldr r1, [r2, #0]	@ 0007eb70 1168
.org 0x7eb72
	ldr r0, [pc, #60]	@ 0007eb72 0f48
.org 0x7eb74
	muls r0, r1	@ 0007eb74 4843
.org 0x7eb76
	ldr r1, [pc, #60]	@ 0007eb76 0f49
.org 0x7eb78
	adds r0, r0, r1	@ 0007eb78 4018
.org 0x7eb7a
	lsls r0, r0, #1	@ 0007eb7a 4000
.org 0x7eb7c
	lsrs r1, r0, #1	@ 0007eb7c 4108
.org 0x7eb7e
	str r1, [r2, #0]	@ 0007eb7e 1160
.org 0x7eb80
	lsrs r0, r0, #17	@ 0007eb80 400c
.org 0x7eb82
	adds r1, r3, #0	@ 0007eb82 191c
.org 0x7eb84
	bl 0x129198	@ 0007eb84 aaf008fb
.org 0x7eb88
	adds r1, r0, #0	@ 0007eb88 011c
.org 0x7eb8a
	subs r4, #1	@ 0007eb8a 013c
.org 0x7eb8c
	cmp r4, #0	@ 0007eb8c 002c
.org 0x7eb8e
	blt.n 0x7eba2	@ 0007eb8e 08db
.org 0x7eb90
	mov r2, sp	@ 0007eb90 6a46
.org 0x7eb92
	adds r0, r2, r4	@ 0007eb92 1019
.org 0x7eb94
	ldrb r0, [r0, #0]	@ 0007eb94 0078
.org 0x7eb96
	subs r0, r5, r0	@ 0007eb96 281a
.org 0x7eb98
	lsls r0, r0, #24	@ 0007eb98 0006
.org 0x7eb9a
	lsrs r5, r0, #24	@ 0007eb9a 050e
.org 0x7eb9c
	asrs r0, r0, #24	@ 0007eb9c 0016
.org 0x7eb9e
	cmp r1, r0	@ 0007eb9e 8142
.org 0x7eba0
	blt.n 0x7eb8a	@ 0007eba0 f3db
.org 0x7eba2
	adds r0, r4, #0	@ 0007eba2 201c
.org 0x7eba4
	add sp, #16	@ 0007eba4 04b0
.org 0x7eba6
	pop {r4, r5}	@ 0007eba6 30bc
.org 0x7eba8
	pop {r1}	@ 0007eba8 02bc
.org 0x7ebaa
	bx r1	@ 0007ebaa 0847
