@ FUN_080e5b90  entry 0x080e5b90  size 94
.thumb
.org 0xe5b90
FUN_080e5b90:
	push {r4, lr}	@ 000e5b90 10b5
.org 0xe5b92
	adds r4, r0, #0	@ 000e5b92 041c
.org 0xe5b94
	bl 0x1cc9c	@ 000e5b94 37f782f8
.org 0xe5b98
	ldrb r1, [r4, #10]	@ 000e5b98 a17a
.org 0xe5b9a
	movs r0, #1	@ 000e5b9a 0120
.org 0xe5b9c
	orrs r0, r1	@ 000e5b9c 0843
.org 0xe5b9e
	movs r1, #2	@ 000e5b9e 0221
.org 0xe5ba0
	orrs r0, r1	@ 000e5ba0 0843
.org 0xe5ba2
	strb r0, [r4, #10]	@ 000e5ba2 a072
.org 0xe5ba4
	adds r0, r4, #0	@ 000e5ba4 201c
.org 0xe5ba6
	movs r1, #30	@ 000e5ba6 1e21
.org 0xe5ba8
	bl 0x1cf00	@ 000e5ba8 37f7aaf9
.org 0xe5bac
	adds r0, r4, #0	@ 000e5bac 201c
.org 0xe5bae
	bl 0x1cff0	@ 000e5bae 37f71ffa
.org 0xe5bb2
	movs r2, #0	@ 000e5bb2 0022
.org 0xe5bb4
	ldrb r1, [r4, #10]	@ 000e5bb4 a17a
.org 0xe5bb6
	movs r0, #239	@ 000e5bb6 ef20
.org 0xe5bb8
	ands r0, r1	@ 000e5bb8 0840
.org 0xe5bba
	strb r0, [r4, #10]	@ 000e5bba a072
.org 0xe5bbc
	movs r3, #1	@ 000e5bbc 0123
.org 0xe5bbe
	adds r0, r4, #0	@ 000e5bbe 201c
.org 0xe5bc0
	adds r0, #76	@ 000e5bc0 4c30
.org 0xe5bc2
	strb r2, [r0, #0]	@ 000e5bc2 0270
.org 0xe5bc4
	adds r2, r4, #0	@ 000e5bc4 221c
.org 0xe5bc6
	adds r2, #74	@ 000e5bc6 4a32
.org 0xe5bc8
	ldrb r1, [r2, #0]	@ 000e5bc8 1178
.org 0xe5bca
	movs r0, #17	@ 000e5bca 1120
.org 0xe5bcc
	negs r0, r0	@ 000e5bcc 4042
.org 0xe5bce
	ands r0, r1	@ 000e5bce 0840
.org 0xe5bd0
	strb r0, [r2, #0]	@ 000e5bd0 1070
.org 0xe5bd2
	ldr r1, [pc, #28]	@ 000e5bd2 0749
.org 0xe5bd4
	ldrb r0, [r4, #9]	@ 000e5bd4 607a
.org 0xe5bd6
	lsls r0, r0, #2	@ 000e5bd6 8000
.org 0xe5bd8
	adds r0, r0, r1	@ 000e5bd8 4018
.org 0xe5bda
	str r3, [r4, #12]	@ 000e5bda e360
.org 0xe5bdc
	ldr r0, [r0, #0]	@ 000e5bdc 0068
.org 0xe5bde
	ldr r0, [r0, #4]	@ 000e5bde 4068
.org 0xe5be0
	str r0, [r4, #20]	@ 000e5be0 6061
.org 0xe5be2
	adds r0, r4, #0	@ 000e5be2 201c
.org 0xe5be4
	bl 0xe5bf4	@ 000e5be4 00f006f8
.org 0xe5be8
	pop {r4}	@ 000e5be8 10bc
.org 0xe5bea
	pop {r0}	@ 000e5bea 01bc
.org 0xe5bec
	bx r0	@ 000e5bec 0047
