@ FUN_08049738  entry 0x08049738  size 144
.thumb
.org 0x49738
FUN_08049738:
	push {r4, r5, r6, lr}	@ 00049738 70b5
.org 0x4973a
	adds r4, r0, #0	@ 0004973a 041c
.org 0x4973c
	adds r5, r1, #0	@ 0004973c 0d1c
.org 0x4973e
	lsls r2, r2, #24	@ 0004973e 1206
.org 0x49740
	lsrs r6, r2, #24	@ 00049740 160e
.org 0x49742
	ldr r0, [pc, #64]	@ 00049742 1048
.org 0x49744
	ldr r0, [r0, #0]	@ 00049744 0068
.org 0x49746
	bl 0x5500	@ 00049746 bbf7dbfe
.org 0x4974a
	adds r2, r0, #0	@ 0004974a 021c
.org 0x4974c
	cmp r2, #0	@ 0004974c 002a
.org 0x4974e
	beq.n 0x497d0	@ 0004974e 3fd0
.org 0x49750
	adds r0, r4, #0	@ 00049750 201c
.org 0x49752
	adds r0, #248	@ 00049752 f830
.org 0x49754
	ldrb r0, [r0, #0]	@ 00049754 0078
.org 0x49756
	cmp r0, #2	@ 00049756 0228
.org 0x49758
	bne.n 0x49794	@ 00049758 1cd1
.org 0x4975a
	ldr r0, [pc, #44]	@ 0004975a 0b48
.org 0x4975c
	movs r1, #35	@ 0004975c 2321
.org 0x4975e
	strb r1, [r2, #9]	@ 0004975e 5172
.org 0x49760
	adds r0, #140	@ 00049760 8c30
.org 0x49762
	ldr r0, [r0, #0]	@ 00049762 0068
.org 0x49764
	ldr r0, [r0, #0]	@ 00049764 0068
.org 0x49766
	str r0, [r2, #20]	@ 00049766 5061
.org 0x49768
	ldrb r1, [r2, #11]	@ 00049768 d17a
.org 0x4976a
	movs r0, #191	@ 0004976a bf20
.org 0x4976c
	ands r0, r1	@ 0004976c 0840
.org 0x4976e
	strb r0, [r2, #11]	@ 0004976e d072
.org 0x49770
	adds r1, r2, #0	@ 00049770 111c
.org 0x49772
	adds r1, #37	@ 00049772 2531
.org 0x49774
	movs r0, #16	@ 00049774 1020
.org 0x49776
	strb r0, [r1, #0]	@ 00049776 0870
.org 0x49778
	ldr r0, [pc, #16]	@ 00049778 0448
.org 0x4977a
	ldrh r0, [r0, #0]	@ 0004977a 0088
.org 0x4977c
	strh r0, [r2, #32]	@ 0004977c 1084
.org 0x4977e
	ldr r0, [pc, #16]	@ 0004977e 0448
.org 0x49780
	ldrb r0, [r0, #0]	@ 00049780 0078
.org 0x49782
	b.n 0x497bc	@ 00049782 1be0
.org 0x49784
	.byte 0x88,0xed,0x02,0x02	@ 00049784 data
.org 0x49788
	.byte 0xf8,0x39,0x85,0x08	@ 00049788 data
.org 0x4978c
	.byte 0xfc,0x36,0x85,0x08	@ 0004978c data
.org 0x49790
	.byte 0x04,0x37,0x85,0x08	@ 00049790 data
.org 0x49794
	ldr r0, [pc, #64]	@ 00049794 1048
.org 0x49796
	movs r1, #35	@ 00049796 2321
.org 0x49798
	strb r1, [r2, #9]	@ 00049798 5172
.org 0x4979a
	adds r0, #140	@ 0004979a 8c30
.org 0x4979c
	ldr r0, [r0, #0]	@ 0004979c 0068
.org 0x4979e
	ldr r0, [r0, #0]	@ 0004979e 0068
.org 0x497a0
	str r0, [r2, #20]	@ 000497a0 5061
.org 0x497a2
	ldrb r1, [r2, #11]	@ 000497a2 d17a
.org 0x497a4
	movs r0, #191	@ 000497a4 bf20
.org 0x497a6
	ands r0, r1	@ 000497a6 0840
.org 0x497a8
	strb r0, [r2, #11]	@ 000497a8 d072
.org 0x497aa
	adds r1, r2, #0	@ 000497aa 111c
.org 0x497ac
	adds r1, #37	@ 000497ac 2531
.org 0x497ae
	movs r0, #16	@ 000497ae 1020
.org 0x497b0
	strb r0, [r1, #0]	@ 000497b0 0870
.org 0x497b2
	ldr r0, [pc, #40]	@ 000497b2 0a48
.org 0x497b4
	ldrh r0, [r0, #2]	@ 000497b4 4088
.org 0x497b6
	strh r0, [r2, #32]	@ 000497b6 1084
.org 0x497b8
	ldr r0, [pc, #36]	@ 000497b8 0948
.org 0x497ba
	ldrb r0, [r0, #1]	@ 000497ba 4078
.org 0x497bc
	subs r1, #3	@ 000497bc 0339
.org 0x497be
	strb r0, [r1, #0]	@ 000497be 0870
.org 0x497c0
	str r4, [r2, #40]	@ 000497c0 9462
.org 0x497c2
	ldr r0, [r5, #0]	@ 000497c2 2868
.org 0x497c4
	ldr r1, [r5, #4]	@ 000497c4 6968
.org 0x497c6
	str r0, [r2, #84]	@ 000497c6 5065
