@ FUN_08042820  entry 0x08042820  size 130
.thumb
.org 0x42820
FUN_08042820:
	push {r4, r5, lr}	@ 00042820 30b5
.org 0x42822
	adds r4, r0, #0	@ 00042822 041c
.org 0x42824
	lsls r1, r1, #24	@ 00042824 0906
.org 0x42826
	lsrs r5, r1, #24	@ 00042826 0d0e
.org 0x42828
	ldr r0, [pc, #60]	@ 00042828 0f48
.org 0x4282a
	ldr r0, [r0, #0]	@ 0004282a 0068
.org 0x4282c
	bl 0x5500	@ 0004282c c2f768fe
.org 0x42830
	adds r2, r0, #0	@ 00042830 021c
.org 0x42832
	cmp r2, #0	@ 00042832 002a
.org 0x42834
	beq.n 0x428aa	@ 00042834 39d0
.org 0x42836
	adds r0, r4, #0	@ 00042836 201c
.org 0x42838
	adds r0, #248	@ 00042838 f830
.org 0x4283a
	ldrb r0, [r0, #0]	@ 0004283a 0078
.org 0x4283c
	cmp r0, #2	@ 0004283c 0228
.org 0x4283e
	bne.n 0x42878	@ 0004283e 1bd1
.org 0x42840
	ldr r1, [pc, #40]	@ 00042840 0a49
.org 0x42842
	movs r0, #14	@ 00042842 0e20
.org 0x42844
	strb r0, [r2, #9]	@ 00042844 5072
.org 0x42846
	ldr r0, [r1, #56]	@ 00042846 886b
.org 0x42848
	ldr r0, [r0, #0]	@ 00042848 0068
.org 0x4284a
	str r0, [r2, #20]	@ 0004284a 5061
.org 0x4284c
	ldrb r1, [r2, #11]	@ 0004284c d17a
.org 0x4284e
	movs r0, #191	@ 0004284e bf20
.org 0x42850
	ands r0, r1	@ 00042850 0840
.org 0x42852
	strb r0, [r2, #11]	@ 00042852 d072
.org 0x42854
	adds r1, r2, #0	@ 00042854 111c
.org 0x42856
	adds r1, #37	@ 00042856 2531
.org 0x42858
	movs r0, #16	@ 00042858 1020
.org 0x4285a
	strb r0, [r1, #0]	@ 0004285a 0870
.org 0x4285c
	ldr r0, [pc, #16]	@ 0004285c 0448
.org 0x4285e
	ldrh r0, [r0, #0]	@ 0004285e 0088
.org 0x42860
	strh r0, [r2, #32]	@ 00042860 1084
.org 0x42862
	ldr r0, [pc, #16]	@ 00042862 0448
.org 0x42864
	ldrb r0, [r0, #0]	@ 00042864 0078
.org 0x42866
	b.n 0x4289e	@ 00042866 1ae0
.org 0x42868
	.byte 0x88,0xed,0x02,0x02	@ 00042868 data
.org 0x4286c
	.byte 0xf8,0x39,0x85,0x08	@ 0004286c data
.org 0x42870
	.byte 0xfc,0x36,0x85,0x08	@ 00042870 data
.org 0x42874
	.byte 0x04,0x37,0x85,0x08	@ 00042874 data
.org 0x42878
	ldr r1, [pc, #56]	@ 00042878 0e49
.org 0x4287a
	movs r0, #14	@ 0004287a 0e20
.org 0x4287c
	strb r0, [r2, #9]	@ 0004287c 5072
.org 0x4287e
	ldr r0, [r1, #56]	@ 0004287e 886b
.org 0x42880
	ldr r0, [r0, #0]	@ 00042880 0068
.org 0x42882
	str r0, [r2, #20]	@ 00042882 5061
.org 0x42884
	ldrb r1, [r2, #11]	@ 00042884 d17a
.org 0x42886
	movs r0, #191	@ 00042886 bf20
.org 0x42888
	ands r0, r1	@ 00042888 0840
.org 0x4288a
	strb r0, [r2, #11]	@ 0004288a d072
.org 0x4288c
	adds r1, r2, #0	@ 0004288c 111c
.org 0x4288e
	adds r1, #37	@ 0004288e 2531
.org 0x42890
	movs r0, #16	@ 00042890 1020
.org 0x42892
	strb r0, [r1, #0]	@ 00042892 0870
.org 0x42894
	ldr r0, [pc, #32]	@ 00042894 0848
.org 0x42896
	ldrh r0, [r0, #2]	@ 00042896 4088
.org 0x42898
	strh r0, [r2, #32]	@ 00042898 1084
.org 0x4289a
	ldr r0, [pc, #32]	@ 0004289a 0848
.org 0x4289c
	ldrb r0, [r0, #1]	@ 0004289c 4078
.org 0x4289e
	subs r1, #3	@ 0004289e 0339
.org 0x428a0
	strb r0, [r1, #0]	@ 000428a0 0870
