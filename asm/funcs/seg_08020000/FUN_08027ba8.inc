@ FUN_08027ba8  entry 0x08027ba8  size 48
.thumb
.org 0x27ba8
FUN_08027ba8:
	push {r4, lr}	@ 00027ba8 10b5
.org 0x27baa
	movs r1, #168	@ 00027baa a821
.org 0x27bac
	lsls r1, r1, #1	@ 00027bac 4900
.org 0x27bae
	adds r0, r0, r1	@ 00027bae 4018
.org 0x27bb0
	ldr r4, [r0, #0]	@ 00027bb0 0468
.org 0x27bb2
	cmp r4, #0	@ 00027bb2 002c
.org 0x27bb4
	beq.n 0x27bd2	@ 00027bb4 0dd0
.org 0x27bb6
	asrs r1, r4, #16	@ 00027bb6 2114
.org 0x27bb8
	lsls r1, r1, #24	@ 00027bb8 0906
.org 0x27bba
	lsrs r1, r1, #24	@ 00027bba 090e
.org 0x27bbc
	lsrs r2, r4, #24	@ 00027bbc 220e
.org 0x27bbe
	ldr r3, [pc, #24]	@ 00027bbe 064b
.org 0x27bc0
	ldr r0, [pc, #24]	@ 00027bc0 0648
.org 0x27bc2
	ands r4, r0	@ 00027bc2 0440
.org 0x27bc4
	lsls r0, r4, #1	@ 00027bc4 6000
.org 0x27bc6
	adds r0, r0, r3	@ 00027bc6 c018
.org 0x27bc8
	ldrh r0, [r0, #0]	@ 00027bc8 0088
.org 0x27bca
	ldr r3, [pc, #20]	@ 00027bca 054b
.org 0x27bcc
	adds r0, r0, r3	@ 00027bcc c018
.org 0x27bce
	bl 0x10d85c	@ 00027bce e5f045fe
.org 0x27bd2
	pop {r4}	@ 00027bd2 10bc
.org 0x27bd4
	pop {r0}	@ 00027bd4 01bc
.org 0x27bd6
	bx r0	@ 00027bd6 0047
