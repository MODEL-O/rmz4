@ FUN_0801273c  entry 0x0801273c  size 122
.thumb
.org 0x1273c
FUN_0801273c:
	push {r4, r5, r6, r7, lr}	@ 0001273c f0b5
.org 0x1273e
	adds r6, r0, #0	@ 0001273e 061c
.org 0x12740
	movs r4, #159	@ 00012740 9f24
.org 0x12742
	movs r0, #160	@ 00012742 a020
.org 0x12744
	lsls r0, r0, #2	@ 00012744 8000
.org 0x12746
	bl 0xa70	@ 00012746 eef793f9
.org 0x1274a
	adds r5, r0, #0	@ 0001274a 051c
.org 0x1274c
	cmp r5, #0	@ 0001274c 002d
.org 0x1274e
	beq.n 0x127b0	@ 0001274e 2fd0
.org 0x12750
	ldr r2, [pc, #100]	@ 00012750 194a
.org 0x12752
	movs r1, #186	@ 00012752 ba21
.org 0x12754
	lsls r1, r1, #1	@ 00012754 4900
.org 0x12756
	adds r0, r2, r1	@ 00012756 5018
.org 0x12758
	str r5, [r0, #0]	@ 00012758 0560
.org 0x1275a
	movs r0, #188	@ 0001275a bc20
.org 0x1275c
	lsls r0, r0, #1	@ 0001275c 4000
.org 0x1275e
	adds r1, r2, r0	@ 0001275e 1118
.org 0x12760
	ldr r0, [pc, #88]	@ 00012760 1648
.org 0x12762
	str r0, [r1, #0]	@ 00012762 0860
.org 0x12764
	movs r0, #190	@ 00012764 be20
.org 0x12766
	lsls r0, r0, #1	@ 00012766 4000
.org 0x12768
	adds r1, r2, r0	@ 00012768 1118
.org 0x1276a
	ldr r0, [pc, #84]	@ 0001276a 1548
.org 0x1276c
	str r0, [r1, #0]	@ 0001276c 0860
.org 0x1276e
	ldr r0, [r6, #56]	@ 0001276e b06b
.org 0x12770
	ldr r1, [pc, #80]	@ 00012770 1449
.org 0x12772
	adds r0, r0, r1	@ 00012772 4018
.org 0x12774
	lsls r0, r0, #16	@ 00012774 0004
.org 0x12776
	adds r7, r0, #0	@ 00012776 071c
.org 0x12778
	movs r2, #159	@ 00012778 9f22
.org 0x1277a
	lsls r2, r2, #2	@ 0001277a 9200
.org 0x1277c
	adds r1, r5, r2	@ 0001277c a918
.org 0x1277e
	str r0, [r1, #0]	@ 0001277e 0860
.org 0x12780
	subs r1, #4	@ 00012780 0439
.org 0x12782
	subs r4, #1	@ 00012782 013c
.org 0x12784
	cmp r4, #80	@ 00012784 502c
.org 0x12786
	bgt.n 0x1277e	@ 00012786 fadc
.org 0x12788
	ldrh r0, [r6, #16]	@ 00012788 308a
.org 0x1278a
	movs r1, #6	@ 0001278a 0621
.org 0x1278c
	bl 0x129120	@ 0001278c 16f1c8fc
.org 0x12790
	ldr r1, [r6, #52]	@ 00012790 716b
.org 0x12792
	asrs r1, r1, #6	@ 00012792 8911
.org 0x12794
	adds r0, r0, r1	@ 00012794 4018
.org 0x12796
	lsls r0, r0, #16	@ 00012796 0004
.org 0x12798
	lsrs r0, r0, #16	@ 00012798 000c
.org 0x1279a
	cmp r4, #0	@ 0001279a 002c
.org 0x1279c
	blt.n 0x127b0	@ 0001279c 08db
.org 0x1279e
	adds r1, r0, #0	@ 0001279e 011c
.org 0x127a0
	orrs r1, r7	@ 000127a0 3943
.org 0x127a2
	lsls r0, r4, #2	@ 000127a2 a000
.org 0x127a4
	adds r0, r0, r5	@ 000127a4 4019
.org 0x127a6
	str r1, [r0, #0]	@ 000127a6 0160
.org 0x127a8
	subs r0, #4	@ 000127a8 0438
.org 0x127aa
	subs r4, #1	@ 000127aa 013c
.org 0x127ac
	cmp r4, #0	@ 000127ac 002c
.org 0x127ae
	bge.n 0x127a6	@ 000127ae fada
.org 0x127b0
	pop {r4, r5, r6, r7}	@ 000127b0 f0bc
.org 0x127b2
	pop {r0}	@ 000127b2 01bc
.org 0x127b4
	bx r0	@ 000127b4 0047
