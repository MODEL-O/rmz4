@ FUN_0803a7dc  entry 0x0803a7dc  size 166
.thumb
.org 0x3a7dc
FUN_0803a7dc:
	push {r4, r5, r6, r7, lr}	@ 0003a7dc f0b5
.org 0x3a7de
	mov r7, sl	@ 0003a7de 5746
.org 0x3a7e0
	mov r6, r9	@ 0003a7e0 4e46
.org 0x3a7e2
	mov r5, r8	@ 0003a7e2 4546
.org 0x3a7e4
	push {r5, r6, r7}	@ 0003a7e4 e0b4
.org 0x3a7e6
	mov r8, r0	@ 0003a7e6 8046
.org 0x3a7e8
	movs r6, #0	@ 0003a7e8 0026
.org 0x3a7ea
	ldr r2, [pc, #60]	@ 0003a7ea 0f4a
.org 0x3a7ec
	ldr r0, [pc, #60]	@ 0003a7ec 0f48
.org 0x3a7ee
	mov sl, r0	@ 0003a7ee 8246
.org 0x3a7f0
	movs r3, #5	@ 0003a7f0 0523
.org 0x3a7f2
	mov r9, r3	@ 0003a7f2 9946
.org 0x3a7f4
	lsls r0, r6, #1	@ 0003a7f4 7000
.org 0x3a7f6
	adds r3, r0, r2	@ 0003a7f6 8318
.org 0x3a7f8
	ldrh r1, [r3, #0]	@ 0003a7f8 1988
.org 0x3a7fa
	adds r7, r0, #0	@ 0003a7fa 071c
.org 0x3a7fc
	cmp r1, sl	@ 0003a7fc 5145
.org 0x3a7fe
	beq.n 0x3a87a	@ 0003a7fe 3cd0
.org 0x3a800
	ldr r0, [pc, #44]	@ 0003a800 0b48
.org 0x3a802
	adds r0, r6, r0	@ 0003a802 3018
.org 0x3a804
	ldrb r0, [r0, #0]	@ 0003a804 0078
.org 0x3a806
	cmp r0, #0	@ 0003a806 0028
.org 0x3a808
	beq.n 0x3a840	@ 0003a808 1ad0
.org 0x3a80a
	adds r0, r1, #0	@ 0003a80a 081c
.org 0x3a80c
	lsls r0, r0, #5	@ 0003a80c 4001
.org 0x3a80e
	ldr r1, [pc, #36]	@ 0003a80e 0949
.org 0x3a810
	adds r0, r0, r1	@ 0003a810 4018
.org 0x3a812
	ldr r1, [pc, #36]	@ 0003a812 0949
.org 0x3a814
	adds r1, r6, r1	@ 0003a814 7118
.org 0x3a816
	ldrb r1, [r1, #0]	@ 0003a816 0978
.org 0x3a818
	lsls r1, r1, #5	@ 0003a818 4901
.org 0x3a81a
	ldr r2, [pc, #32]	@ 0003a81a 084a
.org 0x3a81c
	adds r1, r1, r2	@ 0003a81c 8918
.org 0x3a81e
	movs r2, #8	@ 0003a81e 0822
.org 0x3a820
	bl 0x128be0	@ 0003a820 eef0def9
.org 0x3a824
	b.n 0x3a86e	@ 0003a824 23e0
.org 0x3a826
	.byte 0x00	@ 0003a826 data
.org 0x3a827
	.byte 0x00	@ 0003a827 data
.org 0x3a828
	.byte 0x40,0x00,0x00,0x02	@ 0003a828 data
.org 0x3a82c
	.byte 0xff,0xff,0x00,0x00	@ 0003a82c data
.org 0x3a830
	.byte 0x48,0x00,0x00,0x02	@ 0003a830 data
.org 0x3a834
	.byte 0x08,0x37,0x85,0x08	@ 0003a834 data
.org 0x3a838
	.byte 0x04,0x37,0x85,0x08	@ 0003a838 data
.org 0x3a83c
	.byte 0xc0,0x2c,0x00,0x03	@ 0003a83c data
.org 0x3a840
	ldrh r5, [r3, #0]	@ 0003a840 1d88
.org 0x3a842
	lsls r5, r5, #5	@ 0003a842 6d01
.org 0x3a844
	ldr r0, [pc, #84]	@ 0003a844 1548
.org 0x3a846
	adds r5, r5, r0	@ 0003a846 2d18
.org 0x3a848
	ldr r0, [pc, #84]	@ 0003a848 1548
.org 0x3a84a
	adds r0, r6, r0	@ 0003a84a 3018
.org 0x3a84c
	ldrb r4, [r0, #0]	@ 0003a84c 0478
.org 0x3a84e
	lsls r4, r4, #5	@ 0003a84e 6401
.org 0x3a850
	ldr r0, [pc, #80]	@ 0003a850 1448
.org 0x3a852
	adds r4, r4, r0	@ 0003a852 2418
.org 0x3a854
	adds r0, r5, #0	@ 0003a854 281c
.org 0x3a856
	adds r1, r4, #0	@ 0003a856 211c
.org 0x3a858
	movs r2, #0	@ 0003a858 0022
.org 0x3a85a
	bl 0x128be0	@ 0003a85a eef0c1f9
.org 0x3a85e
	movs r2, #128	@ 0003a85e 8022
.org 0x3a860
	lsls r2, r2, #19	@ 0003a860 d204
.org 0x3a862
	adds r0, r5, #0	@ 0003a862 281c
.org 0x3a864
	adds r1, r4, #0	@ 0003a864 211c
.org 0x3a866
	mov r3, r9	@ 0003a866 4b46
.org 0x3a868
	orrs r2, r3	@ 0003a868 1a43
.org 0x3a86a
	bl 0x128be4	@ 0003a86a eef0bbf9
.org 0x3a86e
	ldr r2, [pc, #56]	@ 0003a86e 0e4a
.org 0x3a870
	adds r1, r7, r2	@ 0003a870 b918
.org 0x3a872
	ldrh r0, [r1, #0]	@ 0003a872 0888
.org 0x3a874
	ldr r3, [pc, #52]	@ 0003a874 0d4b
.org 0x3a876
	orrs r0, r3	@ 0003a876 1843
.org 0x3a878
	strh r0, [r1, #0]	@ 0003a878 0880
.org 0x3a87a
	adds r0, r6, #1	@ 0003a87a 701c
.org 0x3a87c
	lsls r0, r0, #16	@ 0003a87c 0004
.org 0x3a87e
	lsrs r6, r0, #16	@ 0003a87e 060c
.org 0x3a880
	cmp r6, #1	@ 0003a880 012e
