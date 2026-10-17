@ FUN_0806ea80  entry 0x0806ea80  size 70
.thumb
.org 0x6ea80
FUN_0806ea80:
	push {r4, r5, lr}	@ 0006ea80 30b5
.org 0x6ea82
	adds r4, r0, #0	@ 0006ea82 041c
.org 0x6ea84
	ldrb r0, [r4, #15]	@ 0006ea84 e07b
.org 0x6ea86
	cmp r0, #0	@ 0006ea86 0028
.org 0x6ea88
	bne.n 0x6ea9e	@ 0006ea88 09d1
.org 0x6ea8a
	adds r0, r4, #0	@ 0006ea8a 201c
.org 0x6ea8c
	adds r0, #116	@ 0006ea8c 7430
.org 0x6ea8e
	ldr r1, [pc, #56]	@ 0006ea8e 0e49
.org 0x6ea90
	bl 0x5784	@ 0006ea90 96f778fe
.org 0x6ea94
	movs r0, #192	@ 0006ea94 c020
.org 0x6ea96
	strb r0, [r4, #18]	@ 0006ea96 a074
.org 0x6ea98
	ldrb r0, [r4, #15]	@ 0006ea98 e07b
.org 0x6ea9a
	adds r0, #1	@ 0006ea9a 0130
.org 0x6ea9c
	strb r0, [r4, #15]	@ 0006ea9c e073
.org 0x6ea9e
	movs r0, #119	@ 0006ea9e 7720
.org 0x6eaa0
	bl 0x25d8	@ 0006eaa0 93f79afd
.org 0x6eaa4
	ldrb r0, [r4, #18]	@ 0006eaa4 a07c
.org 0x6eaa6
	subs r0, #1	@ 0006eaa6 0138
.org 0x6eaa8
	strb r0, [r4, #18]	@ 0006eaa8 a074
.org 0x6eaaa
	lsls r0, r0, #24	@ 0006eaaa 0006
.org 0x6eaac
	lsrs r5, r0, #24	@ 0006eaac 050e
.org 0x6eaae
	cmp r5, #0	@ 0006eaae 002d
.org 0x6eab0
	bne.n 0x6eac0	@ 0006eab0 06d1
.org 0x6eab2
	movs r0, #119	@ 0006eab2 7720
.org 0x6eab4
	bl 0x2624	@ 0006eab4 93f7b6fd
.org 0x6eab8
	movs r0, #1	@ 0006eab8 0120
.org 0x6eaba
	strb r0, [r4, #13]	@ 0006eaba 6073
.org 0x6eabc
	strb r5, [r4, #14]	@ 0006eabc a573
.org 0x6eabe
	strb r5, [r4, #15]	@ 0006eabe e573
.org 0x6eac0
	pop {r4, r5}	@ 0006eac0 30bc
.org 0x6eac2
	pop {r0}	@ 0006eac2 01bc
.org 0x6eac4
	bx r0	@ 0006eac4 0047
