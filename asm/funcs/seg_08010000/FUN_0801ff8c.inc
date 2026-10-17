@ FUN_0801ff8c  entry 0x0801ff8c  size 80
.thumb
.org 0x1ff8c
FUN_0801ff8c:
	push {r4, r5, r6, lr}	@ 0001ff8c 70b5
.org 0x1ff8e
	adds r5, r0, #0	@ 0001ff8e 051c
.org 0x1ff90
	adds r4, r1, #0	@ 0001ff90 0c1c
.org 0x1ff92
	cmp r5, #0	@ 0001ff92 002d
.org 0x1ff94
	beq.n 0x1ffd6	@ 0001ff94 1fd0
.org 0x1ff96
	ldr r0, [pc, #68]	@ 0001ff96 1148
.org 0x1ff98
	mov ip, r0	@ 0001ff98 8446
.org 0x1ff9a
	movs r6, #210	@ 0001ff9a d226
.org 0x1ff9c
	lsls r6, r6, #1	@ 0001ff9c 7600
.org 0x1ff9e
	add r6, ip	@ 0001ff9e 6644
.org 0x1ffa0
	ldrh r3, [r6, #0]	@ 0001ffa0 3388
.org 0x1ffa2
	cmp r3, #15	@ 0001ffa2 0f2b
.org 0x1ffa4
	bgt.n 0x1ffd6	@ 0001ffa4 17dc
.org 0x1ffa6
	lsls r1, r3, #1	@ 0001ffa6 5900
.org 0x1ffa8
	adds r1, r1, r3	@ 0001ffa8 c918
.org 0x1ffaa
	lsls r1, r1, #2	@ 0001ffaa 8900
.org 0x1ffac
	adds r0, #212	@ 0001ffac d430
.org 0x1ffae
	adds r0, r1, r0	@ 0001ffae 0818
.org 0x1ffb0
	ldr r2, [r4, #0]	@ 0001ffb0 2268
.org 0x1ffb2
	str r2, [r0, #0]	@ 0001ffb2 0260
.org 0x1ffb4
	mov r0, ip	@ 0001ffb4 6046
.org 0x1ffb6
	adds r0, #216	@ 0001ffb6 d830
.org 0x1ffb8
	adds r0, r1, r0	@ 0001ffb8 0818
.org 0x1ffba
	ldr r2, [r4, #4]	@ 0001ffba 6268
.org 0x1ffbc
	str r2, [r0, #0]	@ 0001ffbc 0260
.org 0x1ffbe
	mov r2, ip	@ 0001ffbe 6246
.org 0x1ffc0
	adds r2, #208	@ 0001ffc0 d032
.org 0x1ffc2
	adds r1, r1, r2	@ 0001ffc2 8918
.org 0x1ffc4
	str r5, [r1, #0]	@ 0001ffc4 0d60
.org 0x1ffc6
	adds r3, #1	@ 0001ffc6 0133
.org 0x1ffc8
	lsls r0, r3, #1	@ 0001ffc8 5800
.org 0x1ffca
	adds r0, r0, r3	@ 0001ffca c018
.org 0x1ffcc
	lsls r0, r0, #2	@ 0001ffcc 8000
.org 0x1ffce
	adds r0, r0, r2	@ 0001ffce 8018
.org 0x1ffd0
	movs r1, #0	@ 0001ffd0 0021
.org 0x1ffd2
	str r1, [r0, #0]	@ 0001ffd2 0160
.org 0x1ffd4
	strh r3, [r6, #0]	@ 0001ffd4 3380
.org 0x1ffd6
	pop {r4, r5, r6}	@ 0001ffd6 70bc
.org 0x1ffd8
	pop {r0}	@ 0001ffd8 01bc
.org 0x1ffda
	bx r0	@ 0001ffda 0047
