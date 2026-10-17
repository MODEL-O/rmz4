@ FUN_0810e808  entry 0x0810e808  size 126
.thumb
.org 0x10e808
FUN_0810e808:
	push {r4, r5, lr}	@ 0010e808 30b5
.org 0x10e80a
	adds r1, r0, #0	@ 0010e80a 011c
.org 0x10e80c
	ldr r0, [pc, #68]	@ 0010e80c 1148
.org 0x10e80e
	ldr r5, [r0, #4]	@ 0010e80e 4568
.org 0x10e810
	ldrb r0, [r0, #20]	@ 0010e810 007d
.org 0x10e812
	cmp r0, #1	@ 0010e812 0128
.org 0x10e814
	bne.n 0x10e88a	@ 0010e814 39d1
.org 0x10e816
	ldrb r0, [r1, #4]	@ 0010e816 0879
.org 0x10e818
	cmp r0, #1	@ 0010e818 0128
.org 0x10e81a
	beq.n 0x10e88a	@ 0010e81a 36d0
.org 0x10e81c
	ldrb r0, [r1, #6]	@ 0010e81c 8879
.org 0x10e81e
	cmp r0, #0	@ 0010e81e 0028
.org 0x10e820
	bne.n 0x10e85c	@ 0010e820 1cd1
.org 0x10e822
	ldrb r0, [r1, #5]	@ 0010e822 4879
.org 0x10e824
	lsls r0, r0, #6	@ 0010e824 8001
.org 0x10e826
	adds r0, #2	@ 0010e826 0230
.org 0x10e828
	adds r5, r5, r0	@ 0010e828 2d18
.org 0x10e82a
	movs r0, #0	@ 0010e82a 0020
.org 0x10e82c
	lsls r4, r0, #16	@ 0010e82c 0404
.org 0x10e82e
	asrs r4, r4, #16	@ 0010e82e 2414
.org 0x10e830
	lsls r0, r4, #1	@ 0010e830 6000
.org 0x10e832
	adds r0, r0, r4	@ 0010e832 0019
.org 0x10e834
	lsls r0, r0, #2	@ 0010e834 8000
.org 0x10e836
	ldr r1, [pc, #32]	@ 0010e836 0849
.org 0x10e838
	adds r0, r0, r1	@ 0010e838 4018
.org 0x10e83a
	adds r1, r5, #0	@ 0010e83a 291c
.org 0x10e83c
	movs r2, #12	@ 0010e83c 0c22
.org 0x10e83e
	bl 0xb30	@ 0010e83e f2f677f9
.org 0x10e842
	adds r4, #1	@ 0010e842 0134
.org 0x10e844
	lsls r4, r4, #16	@ 0010e844 2404
.org 0x10e846
	adds r5, #64	@ 0010e846 4035
.org 0x10e848
	lsrs r0, r4, #16	@ 0010e848 200c
.org 0x10e84a
	asrs r4, r4, #16	@ 0010e84a 2414
.org 0x10e84c
	cmp r4, #5	@ 0010e84c 052c
.org 0x10e84e
	ble.n 0x10e82c	@ 0010e84e eddd
.org 0x10e850
	b.n 0x10e88a	@ 0010e850 1be0
.org 0x10e852
	.byte 0x00	@ 0010e852 data
.org 0x10e853
	.byte 0x00	@ 0010e853 data
.org 0x10e854
	.byte 0x80,0xf3,0x02,0x02	@ 0010e854 data
.org 0x10e858
	.byte 0x2c,0x0d,0x87,0x08	@ 0010e858 data
.org 0x10e85c
	ldrb r0, [r1, #5]	@ 0010e85c 4879
.org 0x10e85e
	lsls r0, r0, #6	@ 0010e85e 8001
.org 0x10e860
	adds r0, #46	@ 0010e860 2e30
.org 0x10e862
	adds r5, r5, r0	@ 0010e862 2d18
.org 0x10e864
	movs r0, #0	@ 0010e864 0020
.org 0x10e866
	lsls r4, r0, #16	@ 0010e866 0404
.org 0x10e868
	asrs r4, r4, #16	@ 0010e868 2414
.org 0x10e86a
	lsls r0, r4, #1	@ 0010e86a 6000
.org 0x10e86c
	adds r0, r0, r4	@ 0010e86c 0019
.org 0x10e86e
	lsls r0, r0, #2	@ 0010e86e 8000
.org 0x10e870
	ldr r1, [pc, #28]	@ 0010e870 0749
.org 0x10e872
	adds r0, r0, r1	@ 0010e872 4018
.org 0x10e874
	adds r1, r5, #0	@ 0010e874 291c
.org 0x10e876
	movs r2, #12	@ 0010e876 0c22
.org 0x10e878
	bl 0xb30	@ 0010e878 f2f65af9
.org 0x10e87c
	adds r4, #1	@ 0010e87c 0134
.org 0x10e87e
	lsls r4, r4, #16	@ 0010e87e 2404
.org 0x10e880
	adds r5, #64	@ 0010e880 4035
.org 0x10e882
	lsrs r0, r4, #16	@ 0010e882 200c
.org 0x10e884
	asrs r4, r4, #16	@ 0010e884 2414
