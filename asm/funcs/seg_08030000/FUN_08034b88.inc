@ FUN_08034b88  entry 0x08034b88  size 102
.thumb
.org 0x34b88
FUN_08034b88:
	push {r4, lr}	@ 00034b88 10b5
.org 0x34b8a
	adds r4, r0, #0	@ 00034b8a 041c
.org 0x34b8c
	bl 0x3a19c	@ 00034b8c 05f006fb
.org 0x34b90
	adds r1, r0, #0	@ 00034b90 011c
.org 0x34b92
	cmp r1, #0	@ 00034b92 0029
.org 0x34b94
	bne.n 0x34ba0	@ 00034b94 04d1
.org 0x34b96
	movs r2, #128	@ 00034b96 8022
.org 0x34b98
	lsls r2, r2, #1	@ 00034b98 5200
.org 0x34b9a
	adds r0, r4, r2	@ 00034b9a a018
.org 0x34b9c
	strb r1, [r0, #0]	@ 00034b9c 0170
.org 0x34b9e
	b.n 0x34be8	@ 00034b9e 23e0
.org 0x34ba0
	adds r0, r4, #0	@ 00034ba0 201c
.org 0x34ba2
	adds r0, #252	@ 00034ba2 fc30
.org 0x34ba4
	ldrh r1, [r0, #0]	@ 00034ba4 0188
.org 0x34ba6
	movs r0, #128	@ 00034ba6 8020
.org 0x34ba8
	lsls r0, r0, #1	@ 00034ba8 4000
.org 0x34baa
	cmp r1, r0	@ 00034baa 8142
.org 0x34bac
	bne.n 0x34bd0	@ 00034bac 10d1
.org 0x34bae
	movs r1, #144	@ 00034bae 9021
.org 0x34bb0
	lsls r1, r1, #4	@ 00034bb0 0901
.org 0x34bb2
	adds r0, r4, #0	@ 00034bb2 201c
.org 0x34bb4
	adds r0, #113	@ 00034bb4 7130
.org 0x34bb6
	movs r2, #0	@ 00034bb6 0022
.org 0x34bb8
	ldrsb r2, [r0, r2]	@ 00034bb8 8256
.org 0x34bba
	lsls r2, r2, #16	@ 00034bba 1204
.org 0x34bbc
	lsrs r2, r2, #16	@ 00034bbc 120c
.org 0x34bbe
	adds r0, #1	@ 00034bbe 0130
.org 0x34bc0
	movs r3, #0	@ 00034bc0 0023
.org 0x34bc2
	ldrsb r3, [r0, r3]	@ 00034bc2 c356
.org 0x34bc4
	lsls r3, r3, #16	@ 00034bc4 1b04
.org 0x34bc6
	lsrs r3, r3, #16	@ 00034bc6 1b0c
.org 0x34bc8
	adds r0, r4, #0	@ 00034bc8 201c
.org 0x34bca
	bl 0x1cfc8	@ 00034bca e8f7fdf9
.org 0x34bce
	b.n 0x34bda	@ 00034bce 04e0
.org 0x34bd0
	movs r1, #144	@ 00034bd0 9021
.org 0x34bd2
	lsls r1, r1, #4	@ 00034bd2 0901
.org 0x34bd4
	adds r0, r4, #0	@ 00034bd4 201c
.org 0x34bd6
	bl 0x1cf00	@ 00034bd6 e8f793f9
.org 0x34bda
	ldr r0, [pc, #20]	@ 00034bda 0548
.org 0x34bdc
	adds r1, r4, r0	@ 00034bdc 2118
.org 0x34bde
	movs r0, #1	@ 00034bde 0120
.org 0x34be0
	strb r0, [r1, #0]	@ 00034be0 0870
.org 0x34be2
	adds r0, r4, #0	@ 00034be2 201c
.org 0x34be4
	bl 0x34bf4	@ 00034be4 00f006f8
.org 0x34be8
	pop {r4}	@ 00034be8 10bc
.org 0x34bea
	pop {r0}	@ 00034bea 01bc
.org 0x34bec
	bx r0	@ 00034bec 0047
