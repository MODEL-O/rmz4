@ FUN_080c8830  entry 0x080c8830  size 82
.thumb
.org 0xc8830
FUN_080c8830:
	push {r4, r5, r6, r7, lr}	@ 000c8830 f0b5
.org 0xc8832
	adds r7, r0, #0	@ 000c8832 071c
.org 0xc8834
	lsls r1, r1, #24	@ 000c8834 0906
.org 0xc8836
	lsrs r6, r1, #24	@ 000c8836 0e0e
.org 0xc8838
	lsls r2, r2, #24	@ 000c8838 1206
.org 0xc883a
	lsrs r4, r2, #24	@ 000c883a 140e
.org 0xc883c
	lsls r3, r3, #24	@ 000c883c 1b06
.org 0xc883e
	lsrs r5, r3, #24	@ 000c883e 1d0e
.org 0xc8840
	ldr r0, [pc, #64]	@ 000c8840 1048
.org 0xc8842
	ldr r0, [r0, #0]	@ 000c8842 0068
.org 0xc8844
	bl 0x5500	@ 000c8844 3cf75cfe
.org 0xc8848
	adds r3, r0, #0	@ 000c8848 031c
.org 0xc884a
	cmp r3, #0	@ 000c884a 002b
.org 0xc884c
	beq.n 0xc887a	@ 000c884c 15d0
.org 0xc884e
	adds r1, r3, #0	@ 000c884e 191c
.org 0xc8850
	adds r1, #37	@ 000c8850 2531
.org 0xc8852
	movs r2, #0	@ 000c8852 0022
.org 0xc8854
	movs r0, #8	@ 000c8854 0820
.org 0xc8856
	strb r0, [r1, #0]	@ 000c8856 0870
.org 0xc8858
	ldr r1, [pc, #44]	@ 000c8858 0b49
.org 0xc885a
	movs r0, #31	@ 000c885a 1f20
.org 0xc885c
	strb r0, [r3, #9]	@ 000c885c 5872
.org 0xc885e
	ldr r0, [r1, #124]	@ 000c885e c86f
.org 0xc8860
	ldr r0, [r0, #0]	@ 000c8860 0068
.org 0xc8862
	str r0, [r3, #20]	@ 000c8862 5861
.org 0xc8864
	movs r0, #0	@ 000c8864 0020
.org 0xc8866
	strh r2, [r3, #32]	@ 000c8866 1a84
.org 0xc8868
	adds r1, r3, #0	@ 000c8868 191c
.org 0xc886a
	adds r1, #34	@ 000c886a 2231
.org 0xc886c
	strb r0, [r1, #0]	@ 000c886c 0870
.org 0xc886e
	str r7, [r3, #40]	@ 000c886e 9f62
.org 0xc8870
	strb r6, [r3, #16]	@ 000c8870 1e74
.org 0xc8872
	strb r4, [r3, #17]	@ 000c8872 5c74
.org 0xc8874
	adds r0, r3, #0	@ 000c8874 181c
.org 0xc8876
	adds r0, #188	@ 000c8876 bc30
.org 0xc8878
	strb r5, [r0, #0]	@ 000c8878 0570
.org 0xc887a
	adds r0, r3, #0	@ 000c887a 181c
.org 0xc887c
	pop {r4, r5, r6, r7}	@ 000c887c f0bc
.org 0xc887e
	pop {r1}	@ 000c887e 02bc
.org 0xc8880
	bx r1	@ 000c8880 0847
