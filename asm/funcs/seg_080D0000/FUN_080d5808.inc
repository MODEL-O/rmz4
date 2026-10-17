@ FUN_080d5808  entry 0x080d5808  size 150
.thumb
.org 0xd5808
FUN_080d5808:
	push {r4, r5, lr}	@ 000d5808 30b5
.org 0xd580a
	adds r5, r0, #0	@ 000d580a 051c
.org 0xd580c
	adds r0, #52	@ 000d580c 3430
.org 0xd580e
	ldr r1, [pc, #40]	@ 000d580e 0a49
.org 0xd5810
	bl 0x2c94	@ 000d5810 2df740fa
.org 0xd5814
	str r5, [r5, #60]	@ 000d5814 ed63
.org 0xd5816
	ldrb r1, [r5, #10]	@ 000d5816 a97a
.org 0xd5818
	movs r0, #247	@ 000d5818 f720
.org 0xd581a
	ands r0, r1	@ 000d581a 0840
.org 0xd581c
	strb r0, [r5, #10]	@ 000d581c a872
.org 0xd581e
	ldrb r0, [r5, #17]	@ 000d581e 687c
.org 0xd5820
	cmp r0, #255	@ 000d5820 ff28
.org 0xd5822
	bne.n 0xd5840	@ 000d5822 0dd1
.org 0xd5824
	adds r4, r5, #0	@ 000d5824 2c1c
.org 0xd5826
	adds r4, #128	@ 000d5826 8034
.org 0xd5828
	ldr r0, [pc, #16]	@ 000d5828 0448
.org 0xd582a
	str r0, [r4, #0]	@ 000d582a 2060
.org 0xd582c
	movs r0, #6	@ 000d582c 0620
.org 0xd582e
	bl 0x2b10	@ 000d582e 2df76ff9
.org 0xd5832
	adds r0, r4, #0	@ 000d5832 201c
.org 0xd5834
	b.n 0xd584e	@ 000d5834 0be0
.org 0xd5836
	.byte 0x00	@ 000d5836 data
.org 0xd5837
	.byte 0x00	@ 000d5837 data
.org 0xd5838
	.byte 0x61,0x59,0x0d,0x08	@ 000d5838 data
.org 0xd583c
	.byte 0xbc,0x7e,0x86,0x08	@ 000d583c data
.org 0xd5840
	adds r0, r5, #0	@ 000d5840 281c
.org 0xd5842
	adds r0, #128	@ 000d5842 8030
.org 0xd5844
	ldrb r1, [r5, #17]	@ 000d5844 697c
.org 0xd5846
	lsls r1, r1, #4	@ 000d5846 0901
.org 0xd5848
	ldr r2, [pc, #92]	@ 000d5848 174a
.org 0xd584a
	adds r1, r1, r2	@ 000d584a 8918
.org 0xd584c
	str r1, [r0, #0]	@ 000d584c 0160
.org 0xd584e
	ldr r0, [r0, #0]	@ 000d584e 0068
.org 0xd5850
	bl 0xd5938	@ 000d5850 00f072f8
.org 0xd5854
	adds r1, r5, #0	@ 000d5854 291c
.org 0xd5856
	adds r1, #125	@ 000d5856 7d31
.org 0xd5858
	strb r0, [r1, #0]	@ 000d5858 0870
.org 0xd585a
	ldr r2, [pc, #80]	@ 000d585a 144a
.org 0xd585c
	adds r0, r2, #0	@ 000d585c 101c
.org 0xd585e
	ldrb r1, [r1, #0]	@ 000d585e 0978
.org 0xd5860
	adds r0, r0, r1	@ 000d5860 4018
.org 0xd5862
	adds r1, r5, #0	@ 000d5862 291c
.org 0xd5864
	adds r1, #126	@ 000d5864 7e31
.org 0xd5866
	strh r0, [r1, #0]	@ 000d5866 0880
.org 0xd5868
	movs r2, #0	@ 000d5868 0022
.org 0xd586a
	ldrb r1, [r5, #10]	@ 000d586a a97a
.org 0xd586c
	movs r0, #239	@ 000d586c ef20
.org 0xd586e
	ands r0, r1	@ 000d586e 0840
.org 0xd5870
	strb r0, [r5, #10]	@ 000d5870 a872
.org 0xd5872
	movs r3, #1	@ 000d5872 0123
.org 0xd5874
	adds r0, r5, #0	@ 000d5874 281c
.org 0xd5876
	adds r0, #76	@ 000d5876 4c30
.org 0xd5878
	strb r2, [r0, #0]	@ 000d5878 0270
.org 0xd587a
	adds r2, r5, #0	@ 000d587a 2a1c
.org 0xd587c
	adds r2, #74	@ 000d587c 4a32
.org 0xd587e
	ldrb r1, [r2, #0]	@ 000d587e 1178
.org 0xd5880
	movs r0, #17	@ 000d5880 1120
.org 0xd5882
	negs r0, r0	@ 000d5882 4042
.org 0xd5884
	ands r0, r1	@ 000d5884 0840
.org 0xd5886
	strb r0, [r2, #0]	@ 000d5886 1070
.org 0xd5888
	movs r0, #60	@ 000d5888 3c20
.org 0xd588a
	strb r0, [r5, #18]	@ 000d588a a874
.org 0xd588c
	ldr r1, [pc, #32]	@ 000d588c 0849
.org 0xd588e
	ldrb r0, [r5, #9]	@ 000d588e 687a
.org 0xd5890
	lsls r0, r0, #2	@ 000d5890 8000
.org 0xd5892
	adds r0, r0, r1	@ 000d5892 4018
.org 0xd5894
	str r3, [r5, #12]	@ 000d5894 eb60
.org 0xd5896
	ldr r0, [r0, #0]	@ 000d5896 0068
.org 0xd5898
	ldr r0, [r0, #4]	@ 000d5898 4068
.org 0xd589a
	str r0, [r5, #20]	@ 000d589a 6861
.org 0xd589c
	adds r0, r5, #0	@ 000d589c 281c
