@ FUN_0810c5c8  entry 0x0810c5c8  size 100
.thumb
.org 0x10c5c8
FUN_0810c5c8:
	push {r4, r5, lr}	@ 0010c5c8 30b5
.org 0x10c5ca
	lsls r0, r0, #24	@ 0010c5ca 0006
.org 0x10c5cc
	lsrs r5, r0, #24	@ 0010c5cc 050e
.org 0x10c5ce
	lsls r1, r1, #24	@ 0010c5ce 0906
.org 0x10c5d0
	lsrs r4, r1, #24	@ 0010c5d0 0c0e
.org 0x10c5d2
	ldr r0, [pc, #88]	@ 0010c5d2 1648
.org 0x10c5d4
	ldr r0, [r0, #0]	@ 0010c5d4 0068
.org 0x10c5d6
	bl 0x5500	@ 0010c5d6 f8f693ff
.org 0x10c5da
	mov ip, r0	@ 0010c5da 8446
.org 0x10c5dc
	cmp r0, #0	@ 0010c5dc 0028
.org 0x10c5de
	beq.n 0x10c624	@ 0010c5de 21d0
.org 0x10c5e0
	mov r1, ip	@ 0010c5e0 6146
.org 0x10c5e2
	adds r1, #37	@ 0010c5e2 2531
.org 0x10c5e4
	movs r3, #0	@ 0010c5e4 0023
.org 0x10c5e6
	movs r0, #16	@ 0010c5e6 1020
.org 0x10c5e8
	strb r0, [r1, #0]	@ 0010c5e8 0870
.org 0x10c5ea
	ldr r1, [pc, #68]	@ 0010c5ea 1149
.org 0x10c5ec
	movs r0, #9	@ 0010c5ec 0920
.org 0x10c5ee
	mov r2, ip	@ 0010c5ee 6246
.org 0x10c5f0
	strb r0, [r2, #9]	@ 0010c5f0 5072
.org 0x10c5f2
	ldr r0, [r1, #36]	@ 0010c5f2 486a
.org 0x10c5f4
	ldr r0, [r0, #0]	@ 0010c5f4 0068
.org 0x10c5f6
	str r0, [r2, #20]	@ 0010c5f6 5061
.org 0x10c5f8
	movs r2, #0	@ 0010c5f8 0022
.org 0x10c5fa
	mov r0, ip	@ 0010c5fa 6046
.org 0x10c5fc
	strh r3, [r0, #32]	@ 0010c5fc 0384
.org 0x10c5fe
	adds r0, #34	@ 0010c5fe 2230
.org 0x10c600
	strb r2, [r0, #0]	@ 0010c600 0270
.org 0x10c602
	mov r1, ip	@ 0010c602 6146
.org 0x10c604
	strb r5, [r1, #16]	@ 0010c604 0d74
.org 0x10c606
	strb r4, [r1, #17]	@ 0010c606 4c74
.org 0x10c608
	adds r0, #82	@ 0010c608 5230
.org 0x10c60a
	strb r2, [r0, #0]	@ 0010c60a 0270
.org 0x10c60c
	adds r1, #117	@ 0010c60c 7531
.org 0x10c60e
	movs r0, #22	@ 0010c60e 1620
.org 0x10c610
	strb r0, [r1, #0]	@ 0010c610 0870
.org 0x10c612
	mov r0, ip	@ 0010c612 6046
.org 0x10c614
	adds r0, #122	@ 0010c614 7a30
.org 0x10c616
	movs r1, #128	@ 0010c616 8021
.org 0x10c618
	lsls r1, r1, #1	@ 0010c618 4900
.org 0x10c61a
	strh r1, [r0, #0]	@ 0010c61a 0180
.org 0x10c61c
	subs r0, #2	@ 0010c61c 0238
.org 0x10c61e
	strh r1, [r0, #0]	@ 0010c61e 0180
.org 0x10c620
	subs r0, #2	@ 0010c620 0238
.org 0x10c622
	strb r2, [r0, #0]	@ 0010c622 0270
.org 0x10c624
	mov r0, ip	@ 0010c624 6046
.org 0x10c626
	pop {r4, r5}	@ 0010c626 30bc
.org 0x10c628
	pop {r1}	@ 0010c628 02bc
.org 0x10c62a
	bx r1	@ 0010c62a 0847
