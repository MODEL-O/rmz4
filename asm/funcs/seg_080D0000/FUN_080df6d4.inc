@ FUN_080df6d4  entry 0x080df6d4  size 64
.thumb
.org 0xdf6d4
FUN_080df6d4:
	push {r4, lr}	@ 000df6d4 10b5
.org 0xdf6d6
	adds r4, r0, #0	@ 000df6d6 041c
.org 0xdf6d8
	ldrb r0, [r4, #13]	@ 000df6d8 607b
.org 0xdf6da
	cmp r0, #0	@ 000df6da 0028
.org 0xdf6dc
	bne.n 0xdf6f0	@ 000df6dc 08d1
.org 0xdf6de
	ldr r1, [pc, #52]	@ 000df6de 0d49
.org 0xdf6e0
	adds r0, r4, #0	@ 000df6e0 201c
.org 0xdf6e2
	bl 0x1cf00	@ 000df6e2 3df70dfc
.org 0xdf6e6
	movs r0, #20	@ 000df6e6 1420
.org 0xdf6e8
	strb r0, [r4, #18]	@ 000df6e8 a074
.org 0xdf6ea
	ldrb r0, [r4, #13]	@ 000df6ea 607b
.org 0xdf6ec
	adds r0, #1	@ 000df6ec 0130
.org 0xdf6ee
	strb r0, [r4, #13]	@ 000df6ee 6073
.org 0xdf6f0
	ldrb r0, [r4, #18]	@ 000df6f0 a07c
.org 0xdf6f2
	subs r0, #1	@ 000df6f2 0138
.org 0xdf6f4
	strb r0, [r4, #18]	@ 000df6f4 a074
.org 0xdf6f6
	lsls r0, r0, #24	@ 000df6f6 0006
.org 0xdf6f8
	cmp r0, #0	@ 000df6f8 0028
.org 0xdf6fa
	bne.n 0xdf70e	@ 000df6fa 08d1
.org 0xdf6fc
	ldr r1, [pc, #24]	@ 000df6fc 0649
.org 0xdf6fe
	ldrb r0, [r4, #9]	@ 000df6fe 607a
.org 0xdf700
	lsls r0, r0, #2	@ 000df700 8000
.org 0xdf702
	adds r0, r0, r1	@ 000df702 4018
.org 0xdf704
	movs r1, #2	@ 000df704 0221
.org 0xdf706
	str r1, [r4, #12]	@ 000df706 e160
.org 0xdf708
	ldr r0, [r0, #0]	@ 000df708 0068
.org 0xdf70a
	ldr r0, [r0, #8]	@ 000df70a 8068
.org 0xdf70c
	str r0, [r4, #20]	@ 000df70c 6061
.org 0xdf70e
	pop {r4}	@ 000df70e 10bc
.org 0xdf710
	pop {r0}	@ 000df710 01bc
.org 0xdf712
	bx r0	@ 000df712 0047
