@ FUN_0801281c  entry 0x0801281c  size 70
.thumb
.org 0x1281c
FUN_0801281c:
	push {r4, r5, lr}	@ 0001281c 30b5
.org 0x1281e
	adds r5, r0, #0	@ 0001281e 051c
.org 0x12820
	adds r4, r1, #0	@ 00012820 0c1c
.org 0x12822
	lsls r5, r5, #4	@ 00012822 2d01
.org 0x12824
	lsls r1, r4, #4	@ 00012824 2101
.org 0x12826
	asrs r1, r1, #16	@ 00012826 0914
.org 0x12828
	subs r1, #4	@ 00012828 0439
.org 0x1282a
	asrs r5, r5, #16	@ 0001282a 2d14
.org 0x1282c
	lsls r1, r1, #16	@ 0001282c 0904
.org 0x1282e
	asrs r1, r1, #16	@ 0001282e 0914
.org 0x12830
	ldr r2, [pc, #48]	@ 00012830 0c4a
.org 0x12832
	adds r0, r5, #0	@ 00012832 281c
.org 0x12834
	bl 0x7410	@ 00012834 f4f7ecfd
.org 0x12838
	movs r0, #200	@ 00012838 c820
.org 0x1283a
	lsls r0, r0, #10	@ 0001283a 8002
.org 0x1283c
	adds r4, r4, r0	@ 0001283c 2418
.org 0x1283e
	lsls r4, r4, #4	@ 0001283e 2401
.org 0x12840
	asrs r4, r4, #16	@ 00012840 2414
.org 0x12842
	subs r4, #4	@ 00012842 043c
.org 0x12844
	lsls r4, r4, #16	@ 00012844 2404
.org 0x12846
	asrs r4, r4, #16	@ 00012846 2414
.org 0x12848
	ldr r2, [pc, #28]	@ 00012848 074a
.org 0x1284a
	adds r0, r5, #0	@ 0001284a 281c
.org 0x1284c
	adds r1, r4, #0	@ 0001284c 211c
.org 0x1284e
	bl 0x7410	@ 0001284e f4f7dffd
.org 0x12852
	ldr r0, [pc, #24]	@ 00012852 0648
.org 0x12854
	ldr r1, [pc, #24]	@ 00012854 0649
.org 0x12856
	adds r0, r0, r1	@ 00012856 4018
.org 0x12858
	movs r1, #1	@ 00012858 0121
.org 0x1285a
	strb r1, [r0, #0]	@ 0001285a 0170
.org 0x1285c
	pop {r4, r5}	@ 0001285c 30bc
.org 0x1285e
	pop {r0}	@ 0001285e 01bc
.org 0x12860
	bx r0	@ 00012860 0047
