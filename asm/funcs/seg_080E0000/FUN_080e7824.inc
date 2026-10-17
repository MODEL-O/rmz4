@ FUN_080e7824  entry 0x080e7824  size 82
.thumb
.org 0xe7824
FUN_080e7824:
	push {r4, r5, r6, lr}	@ 000e7824 70b5
.org 0xe7826
	adds r6, r0, #0	@ 000e7826 061c
.org 0xe7828
	lsls r1, r1, #24	@ 000e7828 0906
.org 0xe782a
	lsrs r5, r1, #24	@ 000e782a 0d0e
.org 0xe782c
	lsls r2, r2, #24	@ 000e782c 1206
.org 0xe782e
	lsrs r4, r2, #24	@ 000e782e 140e
.org 0xe7830
	ldr r0, [pc, #68]	@ 000e7830 1148
.org 0xe7832
	ldr r0, [r0, #0]	@ 000e7832 0068
.org 0xe7834
	bl 0x5500	@ 000e7834 1df764fe
.org 0xe7838
	adds r3, r0, #0	@ 000e7838 031c
.org 0xe783a
	cmp r3, #0	@ 000e783a 002b
.org 0xe783c
	beq.n 0xe786e	@ 000e783c 17d0
.org 0xe783e
	adds r1, r3, #0	@ 000e783e 191c
.org 0xe7840
	adds r1, #37	@ 000e7840 2531
.org 0xe7842
	movs r2, #0	@ 000e7842 0022
.org 0xe7844
	movs r0, #1	@ 000e7844 0120
.org 0xe7846
	strb r0, [r1, #0]	@ 000e7846 0870
.org 0xe7848
	ldr r0, [pc, #48]	@ 000e7848 0c48
.org 0xe784a
	movs r1, #84	@ 000e784a 5421
.org 0xe784c
	strb r1, [r3, #9]	@ 000e784c 5972
.org 0xe784e
	adds r1, #252	@ 000e784e fc31
.org 0xe7850
	adds r0, r0, r1	@ 000e7850 4018
.org 0xe7852
	ldr r0, [r0, #0]	@ 000e7852 0068
.org 0xe7854
	ldr r0, [r0, #0]	@ 000e7854 0068
.org 0xe7856
	str r0, [r3, #20]	@ 000e7856 5861
.org 0xe7858
	movs r0, #0	@ 000e7858 0020
.org 0xe785a
	strh r2, [r3, #32]	@ 000e785a 1a84
.org 0xe785c
	adds r1, r3, #0	@ 000e785c 191c
.org 0xe785e
	adds r1, #34	@ 000e785e 2231
.org 0xe7860
	strb r0, [r1, #0]	@ 000e7860 0870
.org 0xe7862
	ldr r0, [r6, #0]	@ 000e7862 3068
.org 0xe7864
	ldr r1, [r6, #4]	@ 000e7864 7168
.org 0xe7866
	str r0, [r3, #84]	@ 000e7866 5865
.org 0xe7868
	str r1, [r3, #88]	@ 000e7868 9965
.org 0xe786a
	strb r5, [r3, #16]	@ 000e786a 1d74
.org 0xe786c
	strb r4, [r3, #17]	@ 000e786c 5c74
.org 0xe786e
	adds r0, r3, #0	@ 000e786e 181c
.org 0xe7870
	pop {r4, r5, r6}	@ 000e7870 70bc
.org 0xe7872
	pop {r1}	@ 000e7872 02bc
.org 0xe7874
	bx r1	@ 000e7874 0847
