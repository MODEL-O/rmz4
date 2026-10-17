@ FUN_08006808  entry 0x08006808  size 168
.thumb
.org 0x6808
FUN_08006808:
	push {r4, r5, lr}	@ 00006808 30b5
.org 0x680a
	sub sp, #8	@ 0000680a 82b0
.org 0x680c
	movs r4, #255	@ 0000680c ff24
.org 0x680e
	movs r0, #5	@ 0000680e 0520
.org 0x6810
	movs r1, #60	@ 00006810 3c21
.org 0x6812
	bl 0x1594	@ 00006812 faf7bffe
.org 0x6816
	cmp r0, #0	@ 00006816 0028
.org 0x6818
	beq.n 0x684a	@ 00006818 17d0
.org 0x681a
	ldr r1, [pc, #28]	@ 0000681a 0749
.org 0x681c
	movs r0, #5	@ 0000681c 0520
.org 0x681e
	movs r2, #60	@ 0000681e 3c22
.org 0x6820
	bl 0x16f0	@ 00006820 faf766ff
.org 0x6824
	ldr r5, [pc, #20]	@ 00006824 054d
.org 0x6826
	movs r0, #1	@ 00006826 0120
.org 0x6828
	bl 0x12ec	@ 00006828 faf760fd
.org 0x682c
	ldrb r0, [r5, #0]	@ 0000682c 2878
.org 0x682e
	cmp r0, #1	@ 0000682e 0128
.org 0x6830
	beq.n 0x6840	@ 00006830 06d0
.org 0x6832
	ldrb r0, [r5, #30]	@ 00006832 a87f
.org 0x6834
	b.n 0x6842	@ 00006834 05e0
.org 0x6836
	.byte 0x00	@ 00006836 data
.org 0x6837
	.byte 0x00	@ 00006837 data
.org 0x6838
	.byte 0x70,0x0a,0x00,0x02	@ 00006838 data
.org 0x683c
	.byte 0x90,0x07,0x00,0x02	@ 0000683c data
.org 0x6840
	movs r0, #0	@ 00006840 0020
.org 0x6842
	lsls r0, r0, #24	@ 00006842 0006
.org 0x6844
	lsrs r4, r0, #24	@ 00006844 040e
.org 0x6846
	cmp r0, #0	@ 00006846 0028
.org 0x6848
	beq.n 0x6826	@ 00006848 edd0
.org 0x684a
	lsls r0, r4, #24	@ 0000684a 2006
.org 0x684c
	cmp r0, #0	@ 0000684c 0028
.org 0x684e
	bge.n 0x68aa	@ 0000684e 2cda
.org 0x6850
	movs r5, #0	@ 00006850 0025
.org 0x6852
	ldr r4, [pc, #104]	@ 00006852 1a4c
.org 0x6854
	str r5, [sp, #0]	@ 00006854 0095
.org 0x6856
	ldr r2, [pc, #104]	@ 00006856 1a4a
.org 0x6858
	mov r0, sp	@ 00006858 6846
.org 0x685a
	adds r1, r4, #0	@ 0000685a 211c
.org 0x685c
	bl 0x128be0	@ 0000685c 22f1c0f9
.org 0x6860
	str r5, [sp, #4]	@ 00006860 0195
.org 0x6862
	add r0, sp, #4	@ 00006862 01a8
.org 0x6864
	adds r4, #32	@ 00006864 2034
.org 0x6866
	ldr r2, [pc, #92]	@ 00006866 174a
.org 0x6868
	adds r1, r4, #0	@ 00006868 211c
.org 0x686a
	bl 0x128be4	@ 0000686a 22f1bbf9
.org 0x686e
	movs r0, #0	@ 0000686e 0020
.org 0x6870
	movs r1, #150	@ 00006870 9621
.org 0x6872
	bl 0x6a6c	@ 00006872 00f0fbf8
.org 0x6876
	movs r0, #1	@ 00006876 0120
.org 0x6878
	movs r1, #150	@ 00006878 9621
.org 0x687a
	bl 0x6a6c	@ 0000687a 00f0f7f8
.org 0x687e
	movs r0, #2	@ 0000687e 0220
.org 0x6880
	movs r1, #200	@ 00006880 c821
.org 0x6882
	bl 0x6a6c	@ 00006882 00f0f3f8
.org 0x6886
	ldr r1, [pc, #64]	@ 00006886 1049
.org 0x6888
	movs r0, #3	@ 00006888 0320
.org 0x688a
	bl 0x6a6c	@ 0000688a 00f0eff8
.org 0x688e
	movs r1, #150	@ 0000688e 9621
.org 0x6890
	lsls r1, r1, #4	@ 00006890 0901
.org 0x6892
	movs r0, #4	@ 00006892 0420
.org 0x6894
	bl 0x6a6c	@ 00006894 00f0eaf8
.org 0x6898
	movs r1, #175	@ 00006898 af21
.org 0x689a
	lsls r1, r1, #1	@ 0000689a 4900
.org 0x689c
	movs r0, #5	@ 0000689c 0520
.org 0x689e
	bl 0x6a6c	@ 0000689e 00f0e5f8
.org 0x68a2
	movs r0, #6	@ 000068a2 0620
.org 0x68a4
	movs r1, #200	@ 000068a4 c821
.org 0x68a6
	bl 0x6a6c	@ 000068a6 00f0e1f8
.org 0x68aa
	ldr r0, [pc, #16]	@ 000068aa 0448
.org 0x68ac
	adds r0, #56	@ 000068ac 3830
.org 0x68ae
	movs r1, #0	@ 000068ae 0021
