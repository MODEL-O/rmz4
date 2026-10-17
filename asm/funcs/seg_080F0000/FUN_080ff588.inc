@ FUN_080ff588  entry 0x080ff588  size 66
.thumb
.org 0xff588
FUN_080ff588:
	push {r2, r3, r5, r6, lr}	@ 000ff588 6cb5
.org 0xff58a
	lsrs r6, r0, #2	@ 000ff58a 8608
.org 0xff58c
	ldr r0, [r6, #84]	@ 000ff58c 706d
.org 0xff58e
	ldr r1, [r6, #88]	@ 000ff58e b16d
.org 0xff590
	bl 0x8534	@ 000ff590 08f7d0ff
.org 0xff594
	ldr r2, [pc, #52]	@ 000ff594 0d4a
.org 0xff596
	adds r0, r0, r2	@ 000ff596 8018
.org 0xff598
	str r0, [r6, #88]	@ 000ff598 b065
.org 0xff59a
	adds r1, r6, #0	@ 000ff59a 311c
.org 0xff59c
	adds r1, #184	@ 000ff59c b831
.org 0xff59e
	str r0, [r1, #0]	@ 000ff59e 0860
.org 0xff5a0
	adds r1, r6, #0	@ 000ff5a0 311c
.org 0xff5a2
	adds r1, #189	@ 000ff5a2 bd31
.org 0xff5a4
	movs r0, #0	@ 000ff5a4 0020
.org 0xff5a6
	strb r0, [r1, #0]	@ 000ff5a6 0870
.org 0xff5a8
	ldr r1, [pc, #36]	@ 000ff5a8 0949
.org 0xff5aa
	ldrb r0, [r6, #9]	@ 000ff5aa 707a
.org 0xff5ac
	lsls r0, r0, #2	@ 000ff5ac 8000
.org 0xff5ae
	adds r0, r0, r1	@ 000ff5ae 4018
.org 0xff5b0
	movs r1, #1	@ 000ff5b0 0121
.org 0xff5b2
	str r1, [r6, #12]	@ 000ff5b2 f160
.org 0xff5b4
	ldr r0, [r0, #0]	@ 000ff5b4 0068
.org 0xff5b6
	ldr r0, [r0, #4]	@ 000ff5b6 4068
.org 0xff5b8
	str r0, [r6, #20]	@ 000ff5b8 7061
.org 0xff5ba
	adds r0, r6, #0	@ 000ff5ba 301c
.org 0xff5bc
	bl 0xff134	@ 000ff5bc fff7bafd
.org 0xff5c0
	pop {r3}	@ 000ff5c0 08bc
.org 0xff5c2
	mov r8, r3	@ 000ff5c2 9846
.org 0xff5c4
	pop {r4, r5, r6, r7}	@ 000ff5c4 f0bc
.org 0xff5c6
	pop {r0}	@ 000ff5c6 01bc
.org 0xff5c8
	bx r0	@ 000ff5c8 0047
