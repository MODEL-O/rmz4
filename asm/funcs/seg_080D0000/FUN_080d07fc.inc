@ FUN_080d07fc  entry 0x080d07fc  size 138
.thumb
.org 0xd07fc
FUN_080d07fc:
	push {r4, r5, lr}	@ 000d07fc 30b5
.org 0xd07fe
	adds r5, r0, #0	@ 000d07fe 051c
.org 0xd0800
	bl 0x1cc9c	@ 000d0800 4cf74cfa
.org 0xd0804
	ldrb r1, [r5, #10]	@ 000d0804 a97a
.org 0xd0806
	movs r0, #1	@ 000d0806 0120
.org 0xd0808
	movs r4, #0	@ 000d0808 0024
.org 0xd080a
	orrs r0, r1	@ 000d080a 0843
.org 0xd080c
	movs r1, #2	@ 000d080c 0221
.org 0xd080e
	orrs r0, r1	@ 000d080e 0843
.org 0xd0810
	strb r0, [r5, #10]	@ 000d0810 a872
.org 0xd0812
	ldr r1, [pc, #64]	@ 000d0812 1049
.org 0xd0814
	ldrb r0, [r5, #9]	@ 000d0814 687a
.org 0xd0816
	lsls r0, r0, #2	@ 000d0816 8000
.org 0xd0818
	adds r0, r0, r1	@ 000d0818 4018
.org 0xd081a
	movs r1, #1	@ 000d081a 0121
.org 0xd081c
	str r1, [r5, #12]	@ 000d081c e960
.org 0xd081e
	ldr r0, [r0, #0]	@ 000d081e 0068
.org 0xd0820
	ldr r0, [r0, #4]	@ 000d0820 4068
.org 0xd0822
	str r0, [r5, #20]	@ 000d0822 6861
.org 0xd0824
	ldr r1, [pc, #48]	@ 000d0824 0c49
.org 0xd0826
	adds r0, r5, #0	@ 000d0826 281c
.org 0xd0828
	bl 0x1cf00	@ 000d0828 4cf76afb
.org 0xd082c
	adds r0, r5, #0	@ 000d082c 281c
.org 0xd082e
	adds r0, #140	@ 000d082e 8c30
.org 0xd0830
	str r4, [r0, #0]	@ 000d0830 0460
.org 0xd0832
	adds r0, #4	@ 000d0832 0430
.org 0xd0834
	str r4, [r0, #0]	@ 000d0834 0460
.org 0xd0836
	adds r0, #4	@ 000d0836 0430
.org 0xd0838
	strb r4, [r0, #0]	@ 000d0838 0470
.org 0xd083a
	ldrb r1, [r5, #10]	@ 000d083a a97a
.org 0xd083c
	movs r0, #251	@ 000d083c fb20
.org 0xd083e
	ands r0, r1	@ 000d083e 0840
.org 0xd0840
	strb r0, [r5, #10]	@ 000d0840 a872
.org 0xd0842
	ldrb r0, [r5, #16]	@ 000d0842 287c
.org 0xd0844
	cmp r0, #1	@ 000d0844 0128
.org 0xd0846
	bne.n 0xd0864	@ 000d0846 0dd1
.org 0xd0848
	ldr r0, [pc, #16]	@ 000d0848 0448
.org 0xd084a
	str r0, [r5, #92]	@ 000d084a e865
.org 0xd084c
	ldr r0, [r5, #84]	@ 000d084c 686d
.org 0xd084e
	ldr r1, [pc, #16]	@ 000d084e 0449
.org 0xd0850
	b.n 0xd0870	@ 000d0850 0ee0
.org 0xd0852
	.byte 0x00	@ 000d0852 data
.org 0xd0853
	.byte 0x00	@ 000d0853 data
.org 0xd0854
	.byte 0xf4,0x49,0x86,0x08	@ 000d0854 data
.org 0xd0858
	.byte 0x0d,0x68,0x00,0x00	@ 000d0858 data
.org 0xd085c
	.byte 0xc0,0xfe,0xff,0xff	@ 000d085c data
.org 0xd0860
	.byte 0x00,0xf8,0xff,0xff	@ 000d0860 data
.org 0xd0864
	movs r0, #160	@ 000d0864 a020
.org 0xd0866
	lsls r0, r0, #1	@ 000d0866 4000
.org 0xd0868
	str r0, [r5, #92]	@ 000d0868 e865
.org 0xd086a
	ldr r0, [r5, #84]	@ 000d086a 686d
.org 0xd086c
	movs r1, #128	@ 000d086c 8021
.org 0xd086e
	lsls r1, r1, #4	@ 000d086e 0901
.org 0xd0870
	adds r0, r0, r1	@ 000d0870 4018
.org 0xd0872
	str r0, [r5, #84]	@ 000d0872 6865
.org 0xd0874
	adds r1, r5, #0	@ 000d0874 291c
.org 0xd0876
	adds r1, #180	@ 000d0876 b431
.org 0xd0878
	movs r2, #0	@ 000d0878 0022
.org 0xd087a
	movs r0, #1	@ 000d087a 0120
.org 0xd087c
	strb r0, [r1, #0]	@ 000d087c 0870
.org 0xd087e
	adds r1, #1	@ 000d087e 0131
.org 0xd0880
	strb r0, [r1, #0]	@ 000d0880 0870
.org 0xd0882
	movs r0, #20	@ 000d0882 1420
.org 0xd0884
	strb r0, [r5, #18]	@ 000d0884 a874
