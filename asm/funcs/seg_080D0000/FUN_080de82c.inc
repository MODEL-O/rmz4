@ FUN_080de82c  entry 0x080de82c  size 80
.thumb
.org 0xde82c
FUN_080de82c:
	push {r4, r5, r6, lr}	@ 000de82c 70b5
.org 0xde82e
	adds r6, r0, #0	@ 000de82e 061c
.org 0xde830
	lsls r1, r1, #24	@ 000de830 0906
.org 0xde832
	lsrs r5, r1, #24	@ 000de832 0d0e
.org 0xde834
	lsls r2, r2, #24	@ 000de834 1206
.org 0xde836
	lsrs r4, r2, #24	@ 000de836 140e
.org 0xde838
	ldr r0, [pc, #64]	@ 000de838 1048
.org 0xde83a
	ldr r0, [r0, #0]	@ 000de83a 0068
.org 0xde83c
	bl 0x5500	@ 000de83c 26f760fe
.org 0xde840
	adds r3, r0, #0	@ 000de840 031c
.org 0xde842
	cmp r3, #0	@ 000de842 002b
.org 0xde844
	beq.n 0xde874	@ 000de844 16d0
.org 0xde846
	adds r1, r3, #0	@ 000de846 191c
.org 0xde848
	adds r1, #37	@ 000de848 2531
.org 0xde84a
	movs r2, #0	@ 000de84a 0022
.org 0xde84c
	movs r0, #1	@ 000de84c 0120
.org 0xde84e
	strb r0, [r1, #0]	@ 000de84e 0870
.org 0xde850
	ldr r0, [pc, #44]	@ 000de850 0b48
.org 0xde852
	movs r1, #49	@ 000de852 3121
.org 0xde854
	strb r1, [r3, #9]	@ 000de854 5972
.org 0xde856
	adds r0, #196	@ 000de856 c430
.org 0xde858
	ldr r0, [r0, #0]	@ 000de858 0068
.org 0xde85a
	ldr r0, [r0, #0]	@ 000de85a 0068
.org 0xde85c
	str r0, [r3, #20]	@ 000de85c 5861
.org 0xde85e
	movs r0, #0	@ 000de85e 0020
.org 0xde860
	strh r2, [r3, #32]	@ 000de860 1a84
.org 0xde862
	adds r1, r3, #0	@ 000de862 191c
.org 0xde864
	adds r1, #34	@ 000de864 2231
.org 0xde866
	strb r0, [r1, #0]	@ 000de866 0870
.org 0xde868
	ldr r0, [r6, #0]	@ 000de868 3068
.org 0xde86a
	ldr r1, [r6, #4]	@ 000de86a 7168
.org 0xde86c
	str r0, [r3, #84]	@ 000de86c 5865
.org 0xde86e
	str r1, [r3, #88]	@ 000de86e 9965
.org 0xde870
	strb r5, [r3, #16]	@ 000de870 1d74
.org 0xde872
	strb r4, [r3, #17]	@ 000de872 5c74
.org 0xde874
	adds r0, r3, #0	@ 000de874 181c
.org 0xde876
	pop {r4, r5, r6}	@ 000de876 70bc
.org 0xde878
	pop {r1}	@ 000de878 02bc
.org 0xde87a
	bx r1	@ 000de87a 0847
