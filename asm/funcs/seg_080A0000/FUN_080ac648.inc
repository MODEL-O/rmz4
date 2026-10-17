@ FUN_080ac648  entry 0x080ac648  size 100
.thumb
.org 0xac648
FUN_080ac648:
	push {r4, lr}	@ 000ac648 10b5
.org 0xac64a
	adds r4, r0, #0	@ 000ac64a 041c
.org 0xac64c
	ldr r0, [pc, #92]	@ 000ac64c 1748
.org 0xac64e
	ldr r0, [r0, #0]	@ 000ac64e 0068
.org 0xac650
	bl 0x5500	@ 000ac650 58f756ff
.org 0xac654
	mov ip, r0	@ 000ac654 8446
.org 0xac656
	cmp r0, #0	@ 000ac656 0028
.org 0xac658
	beq.n 0xac6a4	@ 000ac658 24d0
.org 0xac65a
	mov r1, ip	@ 000ac65a 6146
.org 0xac65c
	adds r1, #37	@ 000ac65c 2531
.org 0xac65e
	movs r3, #0	@ 000ac65e 0023
.org 0xac660
	movs r0, #24	@ 000ac660 1820
.org 0xac662
	strb r0, [r1, #0]	@ 000ac662 0870
.org 0xac664
	ldr r0, [pc, #72]	@ 000ac664 1248
.org 0xac666
	movs r1, #75	@ 000ac666 4b21
.org 0xac668
	mov r2, ip	@ 000ac668 6246
.org 0xac66a
	strb r1, [r2, #9]	@ 000ac66a 5172
.org 0xac66c
	adds r1, #225	@ 000ac66c e131
.org 0xac66e
	adds r0, r0, r1	@ 000ac66e 4018
.org 0xac670
	ldr r0, [r0, #0]	@ 000ac670 0068
.org 0xac672
	ldr r0, [r0, #0]	@ 000ac672 0068
.org 0xac674
	str r0, [r2, #20]	@ 000ac674 5061
.org 0xac676
	movs r2, #0	@ 000ac676 0022
.org 0xac678
	mov r0, ip	@ 000ac678 6046
.org 0xac67a
	strh r3, [r0, #32]	@ 000ac67a 0384
.org 0xac67c
	adds r0, #34	@ 000ac67c 2230
.org 0xac67e
	strb r2, [r0, #0]	@ 000ac67e 0270
.org 0xac680
	mov r0, ip	@ 000ac680 6046
.org 0xac682
	ldrb r1, [r0, #11]	@ 000ac682 c17a
.org 0xac684
	movs r0, #16	@ 000ac684 1020
.org 0xac686
	orrs r0, r1	@ 000ac686 0843
.org 0xac688
	mov r1, ip	@ 000ac688 6146
.org 0xac68a
	strb r0, [r1, #11]	@ 000ac68a c872
.org 0xac68c
	ldrb r0, [r1, #28]	@ 000ac68c 087f
.org 0xac68e
	strb r0, [r1, #29]	@ 000ac68e 4877
.org 0xac690
	str r4, [r1, #40]	@ 000ac690 8c62
.org 0xac692
	mov r0, ip	@ 000ac692 6046
.org 0xac694
	adds r0, #181	@ 000ac694 b530
.org 0xac696
	strb r2, [r0, #0]	@ 000ac696 0270
.org 0xac698
	adds r1, #180	@ 000ac698 b431
.org 0xac69a
	movs r0, #1	@ 000ac69a 0120
.org 0xac69c
	strb r0, [r1, #0]	@ 000ac69c 0870
.org 0xac69e
	mov r0, ip	@ 000ac69e 6046
.org 0xac6a0
	adds r0, #182	@ 000ac6a0 b630
.org 0xac6a2
	strb r2, [r0, #0]	@ 000ac6a2 0270
.org 0xac6a4
	mov r0, ip	@ 000ac6a4 6046
.org 0xac6a6
	pop {r4}	@ 000ac6a6 10bc
.org 0xac6a8
	pop {r1}	@ 000ac6a8 02bc
.org 0xac6aa
	bx r1	@ 000ac6aa 0847
