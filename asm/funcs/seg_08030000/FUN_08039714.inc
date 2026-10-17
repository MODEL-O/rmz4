@ FUN_08039714  entry 0x08039714  size 94
.thumb
.org 0x39714
FUN_08039714:
	push {lr}	@ 00039714 00b5
.org 0x39716
	adds r2, r0, #0	@ 00039716 021c
.org 0x39718
	lsls r1, r1, #24	@ 00039718 0906
.org 0x3971a
	lsrs r1, r1, #24	@ 0003971a 090e
.org 0x3971c
	adds r0, #222	@ 0003971c de30
.org 0x3971e
	strb r1, [r0, #0]	@ 0003971e 0170
.org 0x39720
	cmp r1, #0	@ 00039720 0029
.org 0x39722
	bne.n 0x3974c	@ 00039722 13d1
.org 0x39724
	movs r0, #151	@ 00039724 9720
.org 0x39726
	lsls r0, r0, #2	@ 00039726 8000
.org 0x39728
	adds r1, r2, r0	@ 00039728 1118
.org 0x3972a
	movs r0, #1	@ 0003972a 0120
.org 0x3972c
	strh r0, [r1, #0]	@ 0003972c 0880
.org 0x3972e
	ldr r3, [pc, #24]	@ 0003972e 064b
.org 0x39730
	adds r1, r2, r3	@ 00039730 d118
.org 0x39732
	movs r0, #128	@ 00039732 8020
.org 0x39734
	lsls r0, r0, #2	@ 00039734 8000
.org 0x39736
	strh r0, [r1, #0]	@ 00039736 0880
.org 0x39738
	adds r0, #96	@ 00039738 6030
.org 0x3973a
	adds r1, r2, r0	@ 0003973a 1118
.org 0x3973c
	movs r0, #2	@ 0003973c 0220
.org 0x3973e
	strh r0, [r1, #0]	@ 0003973e 0880
.org 0x39740
	adds r3, #4	@ 00039740 0433
.org 0x39742
	adds r1, r2, r3	@ 00039742 d118
.org 0x39744
	adds r0, #254	@ 00039744 fe30
.org 0x39746
	b.n 0x39770	@ 00039746 13e0
.org 0x39748
	.byte 0x5e,0x02,0x00,0x00	@ 00039748 data
.org 0x3974c
	cmp r1, #1	@ 0003974c 0129
.org 0x3974e
	bne.n 0x39772	@ 0003974e 10d1
.org 0x39750
	movs r3, #151	@ 00039750 9723
.org 0x39752
	lsls r3, r3, #2	@ 00039752 9b00
.org 0x39754
	adds r0, r2, r3	@ 00039754 d018
.org 0x39756
	strh r1, [r0, #0]	@ 00039756 0180
.org 0x39758
	ldr r0, [pc, #28]	@ 00039758 0748
.org 0x3975a
	adds r1, r2, r0	@ 0003975a 1118
.org 0x3975c
	movs r0, #128	@ 0003975c 8020
.org 0x3975e
	lsls r0, r0, #1	@ 0003975e 4000
.org 0x39760
	strh r0, [r1, #0]	@ 00039760 0880
.org 0x39762
	adds r3, #4	@ 00039762 0433
.org 0x39764
	adds r1, r2, r3	@ 00039764 d118
.org 0x39766
	movs r0, #2	@ 00039766 0220
.org 0x39768
	strh r0, [r1, #0]	@ 00039768 0880
.org 0x3976a
	ldr r0, [pc, #16]	@ 0003976a 0448
.org 0x3976c
	adds r1, r2, r0	@ 0003976c 1118
.org 0x3976e
	subs r0, #98	@ 0003976e 6238
.org 0x39770
	strh r0, [r1, #0]	@ 00039770 0880
