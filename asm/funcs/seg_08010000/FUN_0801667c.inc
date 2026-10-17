@ FUN_0801667c  entry 0x0801667c  size 60
.thumb
.org 0x1667c
FUN_0801667c:
	push {r4, lr}	@ 0001667c 10b5
.org 0x1667e
	adds r3, r0, #0	@ 0001667e 031c
.org 0x16680
	ldrb r4, [r3, #14]	@ 00016680 9c7b
.org 0x16682
	cmp r4, #0	@ 00016682 002c
.org 0x16684
	bne.n 0x166b2	@ 00016684 15d1
.org 0x16686
	ldr r0, [r3, #92]	@ 00016686 d86d
.org 0x16688
	lsls r0, r0, #16	@ 00016688 0004
.org 0x1668a
	lsrs r0, r0, #20	@ 0001668a 000d
.org 0x1668c
	lsls r0, r0, #1	@ 0001668c 4000
.org 0x1668e
	ldr r1, [pc, #40]	@ 0001668e 0a49
.org 0x16690
	adds r0, r0, r1	@ 00016690 4018
.org 0x16692
	ldrh r2, [r0, #0]	@ 00016692 0288
.org 0x16694
	ldr r1, [pc, #36]	@ 00016694 0949
.org 0x16696
	ands r1, r2	@ 00016696 1140
.org 0x16698
	movs r2, #3	@ 00016698 0322
.org 0x1669a
	orrs r1, r2	@ 0001669a 1143
.org 0x1669c
	strh r1, [r0, #0]	@ 0001669c 0180
.org 0x1669e
	str r4, [r3, #68]	@ 0001669e 5c64
.org 0x166a0
	str r4, [r3, #72]	@ 000166a0 9c64
.org 0x166a2
	ldr r0, [pc, #28]	@ 000166a2 0748
.org 0x166a4
	str r0, [r3, #76]	@ 000166a4 d864
.org 0x166a6
	movs r0, #160	@ 000166a6 a020
.org 0x166a8
	lsls r0, r0, #3	@ 000166a8 c000
.org 0x166aa
	str r0, [r3, #80]	@ 000166aa 1865
.org 0x166ac
	ldrb r0, [r3, #14]	@ 000166ac 987b
.org 0x166ae
	adds r0, #1	@ 000166ae 0130
.org 0x166b0
	strb r0, [r3, #14]	@ 000166b0 9873
.org 0x166b2
	pop {r4}	@ 000166b2 10bc
.org 0x166b4
	pop {r0}	@ 000166b4 01bc
.org 0x166b6
	bx r0	@ 000166b6 0047
