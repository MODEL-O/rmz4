@ FUN_08039780  entry 0x08039780  size 270
.thumb
.org 0x39780
FUN_08039780:
	push {r4, r5, lr}	@ 00039780 30b5
.org 0x39782
	adds r1, r0, #0	@ 00039782 011c
.org 0x39784
	ldr r0, [pc, #16]	@ 00039784 0448
.org 0x39786
	adds r3, r1, r0	@ 00039786 0b18
.org 0x39788
	ldrb r0, [r3, #0]	@ 00039788 1878
.org 0x3978a
	cmp r0, #1	@ 0003978a 0128
.org 0x3978c
	beq.n 0x397d0	@ 0003978c 20d0
.org 0x3978e
	cmp r0, #1	@ 0003978e 0128
.org 0x39790
	bgt.n 0x3979c	@ 00039790 04dc
.org 0x39792
	cmp r0, #0	@ 00039792 0028
.org 0x39794
	beq.n 0x397a6	@ 00039794 07d0
.org 0x39796
	b.n 0x398a0	@ 00039796 83e0
.org 0x39798
	.byte 0x67,0x02,0x00,0x00	@ 00039798 data
.org 0x3979c
	cmp r0, #2	@ 0003979c 0228
.org 0x3979e
	beq.n 0x39820	@ 0003979e 3fd0
.org 0x397a0
	cmp r0, #3	@ 000397a0 0328
.org 0x397a2
	beq.n 0x39880	@ 000397a2 6dd0
.org 0x397a4
	b.n 0x398a0	@ 000397a4 7ce0
.org 0x397a6
	ldr r2, [pc, #32]	@ 000397a6 084a
.org 0x397a8
	adds r0, r1, r2	@ 000397a8 8818
.org 0x397aa
	ldrh r2, [r0, #0]	@ 000397aa 0288
.org 0x397ac
	movs r0, #48	@ 000397ac 3020
.org 0x397ae
	ands r0, r2	@ 000397ae 1040
.org 0x397b0
	cmp r0, #0	@ 000397b0 0028
.org 0x397b2
	beq.n 0x397b6	@ 000397b2 00d0
.org 0x397b4
	b.n 0x398a8	@ 000397b4 78e0
.org 0x397b6
	movs r0, #128	@ 000397b6 8020
.org 0x397b8
	ands r0, r2	@ 000397b8 1040
.org 0x397ba
	cmp r0, #0	@ 000397ba 0028
.org 0x397bc
	beq.n 0x398a8	@ 000397bc 74d0
.org 0x397be
	ldr r4, [pc, #12]	@ 000397be 034c
.org 0x397c0
	adds r1, r1, r4	@ 000397c0 0919
.org 0x397c2
	movs r0, #10	@ 000397c2 0a20
.org 0x397c4
	strb r0, [r1, #0]	@ 000397c4 0870
.org 0x397c6
	b.n 0x39878	@ 000397c6 57e0
.org 0x397c8
	.byte 0x52,0x02,0x00,0x00	@ 000397c8 data
.org 0x397cc
	.byte 0x66,0x02,0x00,0x00	@ 000397cc data
.org 0x397d0
	ldr r0, [pc, #40]	@ 000397d0 0a48
.org 0x397d2
	adds r2, r1, r0	@ 000397d2 0a18
.org 0x397d4
	ldrb r0, [r2, #0]	@ 000397d4 1078
.org 0x397d6
	subs r0, #1	@ 000397d6 0138
.org 0x397d8
	strb r0, [r2, #0]	@ 000397d8 1070
.org 0x397da
	lsls r0, r0, #24	@ 000397da 0006
.org 0x397dc
	lsrs r0, r0, #24	@ 000397dc 000e
.org 0x397de
	cmp r0, #255	@ 000397de ff28
.org 0x397e0
	bne.n 0x397e6	@ 000397e0 01d1
.org 0x397e2
	movs r0, #0	@ 000397e2 0020
.org 0x397e4
	strb r0, [r3, #0]	@ 000397e4 1870
.org 0x397e6
	ldr r4, [pc, #24]	@ 000397e6 064c
.org 0x397e8
	adds r0, r1, r4	@ 000397e8 0819
.org 0x397ea
	ldrh r1, [r0, #0]	@ 000397ea 0188
.org 0x397ec
	movs r0, #128	@ 000397ec 8020
.org 0x397ee
	ands r0, r1	@ 000397ee 0840
.org 0x397f0
	cmp r0, #0	@ 000397f0 0028
.org 0x397f2
	beq.n 0x39804	@ 000397f2 07d0
.org 0x397f4
	movs r0, #10	@ 000397f4 0a20
.org 0x397f6
	strb r0, [r2, #0]	@ 000397f6 1070
.org 0x397f8
	b.n 0x39878	@ 000397f8 3ee0
.org 0x397fa
	.byte 0x00	@ 000397fa data
.org 0x397fb
	.byte 0x00	@ 000397fb data
.org 0x397fc
	.byte 0x66,0x02,0x00,0x00	@ 000397fc data
.org 0x39800
	.byte 0x52,0x02,0x00,0x00	@ 00039800 data
.org 0x39804
	movs r0, #16	@ 00039804 1020
.org 0x39806
	ands r0, r1	@ 00039806 0840
.org 0x39808
	cmp r0, #0	@ 00039808 0028
.org 0x3980a
	beq.n 0x39812	@ 0003980a 02d0
.org 0x3980c
	movs r0, #10	@ 0003980c 0a20
.org 0x3980e
	strb r0, [r2, #0]	@ 0003980e 1070
.org 0x39810
	b.n 0x39878	@ 00039810 32e0
.org 0x39812
	movs r0, #32	@ 00039812 2020
.org 0x39814
	ands r0, r1	@ 00039814 0840
.org 0x39816
	cmp r0, #0	@ 00039816 0028
.org 0x39818
	beq.n 0x398a8	@ 00039818 46d0
.org 0x3981a
	movs r0, #10	@ 0003981a 0a20
.org 0x3981c
	strb r0, [r2, #0]	@ 0003981c 1070
.org 0x3981e
	b.n 0x39878	@ 0003981e 2be0
.org 0x39820
	ldr r0, [pc, #56]	@ 00039820 0e48
.org 0x39822
	adds r5, r1, r0	@ 00039822 0d18
.org 0x39824
	ldrb r0, [r5, #0]	@ 00039824 2878
.org 0x39826
	subs r0, #1	@ 00039826 0138
.org 0x39828
	strb r0, [r5, #0]	@ 00039828 2870
.org 0x3982a
	lsls r0, r0, #24	@ 0003982a 0006
.org 0x3982c
	lsrs r0, r0, #24	@ 0003982c 000e
.org 0x3982e
	cmp r0, #255	@ 0003982e ff28
.org 0x39830
	bne.n 0x39836	@ 00039830 01d1
.org 0x39832
	movs r0, #0	@ 00039832 0020
.org 0x39834
	strb r0, [r3, #0]	@ 00039834 1870
.org 0x39836
	ldr r2, [pc, #40]	@ 00039836 0a4a
.org 0x39838
	adds r0, r1, r2	@ 00039838 8818
.org 0x3983a
	ldrh r2, [r0, #0]	@ 0003983a 0288
.org 0x3983c
	movs r0, #128	@ 0003983c 8020
.org 0x3983e
	ands r0, r2	@ 0003983e 1040
.org 0x39840
	cmp r0, #0	@ 00039840 0028
.org 0x39842
	bne.n 0x398a8	@ 00039842 31d1
.org 0x39844
	movs r0, #16	@ 00039844 1020
.org 0x39846
	ands r0, r2	@ 00039846 1040
.org 0x39848
	lsls r0, r0, #16	@ 00039848 0004
.org 0x3984a
	lsrs r4, r0, #16	@ 0003984a 040c
.org 0x3984c
	cmp r4, #0	@ 0003984c 002c
.org 0x3984e
	beq.n 0x39864	@ 0003984e 09d0
.org 0x39850
	movs r4, #154	@ 00039850 9a24
.org 0x39852
	lsls r4, r4, #2	@ 00039852 a400
.org 0x39854
	adds r1, r1, r4	@ 00039854 0919
.org 0x39856
	movs r0, #1	@ 00039856 0120
.org 0x39858
	strb r0, [r1, #0]	@ 00039858 0870
.org 0x3985a
	b.n 0x39874	@ 0003985a 0be0
.org 0x3985c
	.byte 0x66,0x02,0x00,0x00	@ 0003985c data
.org 0x39860
	.byte 0x52,0x02,0x00,0x00	@ 00039860 data
.org 0x39864
	movs r0, #32	@ 00039864 2020
.org 0x39866
	ands r0, r2	@ 00039866 1040
.org 0x39868
	cmp r0, #0	@ 00039868 0028
.org 0x3986a
	beq.n 0x398a8	@ 0003986a 1dd0
.org 0x3986c
	movs r2, #154	@ 0003986c 9a22
.org 0x3986e
	lsls r2, r2, #2	@ 0003986e 9200
.org 0x39870
	adds r0, r1, r2	@ 00039870 8818
.org 0x39872
	strb r4, [r0, #0]	@ 00039872 0470
.org 0x39874
	movs r0, #10	@ 00039874 0a20
.org 0x39876
	strb r0, [r5, #0]	@ 00039876 2870
.org 0x39878
	ldrb r0, [r3, #0]	@ 00039878 1878
.org 0x3987a
	adds r0, #1	@ 0003987a 0130
.org 0x3987c
	strb r0, [r3, #0]	@ 0003987c 1870
.org 0x3987e
	b.n 0x398a8	@ 0003987e 13e0
.org 0x39880
	ldr r4, [pc, #20]	@ 00039880 054c
.org 0x39882
	adds r1, r1, r4	@ 00039882 0919
.org 0x39884
	ldrb r0, [r1, #0]	@ 00039884 0878
.org 0x39886
	subs r0, #1	@ 00039886 0138
.org 0x39888
	strb r0, [r1, #0]	@ 00039888 0870
.org 0x3988a
	lsls r0, r0, #24	@ 0003988a 0006
.org 0x3988c
	lsrs r0, r0, #24	@ 0003988c 000e
