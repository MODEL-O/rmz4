@ FUN_08045864  entry 0x08045864  size 90
.thumb
.org 0x45864
FUN_08045864:
	push {lr}	@ 00045864 00b5
.org 0x45866
	adds r3, r0, #0	@ 00045866 031c
.org 0x45868
	ldr r0, [r3, #44]	@ 00045868 d86a
.org 0x4586a
	adds r0, #250	@ 0004586a fa30
.org 0x4586c
	ldrb r0, [r0, #0]	@ 0004586c 0078
.org 0x4586e
	cmp r0, #2	@ 0004586e 0228
.org 0x45870
	bne.n 0x458b0	@ 00045870 1ed1
.org 0x45872
	ldrb r1, [r3, #10]	@ 00045872 997a
.org 0x45874
	movs r0, #254	@ 00045874 fe20
.org 0x45876
	ands r0, r1	@ 00045876 0840
.org 0x45878
	movs r2, #0	@ 00045878 0022
.org 0x4587a
	movs r1, #253	@ 0004587a fd21
.org 0x4587c
	ands r0, r1	@ 0004587c 0840
.org 0x4587e
	strb r0, [r3, #10]	@ 0004587e 9872
.org 0x45880
	adds r0, r3, #0	@ 00045880 181c
.org 0x45882
	adds r0, #140	@ 00045882 8c30
.org 0x45884
	str r2, [r0, #0]	@ 00045884 0260
.org 0x45886
	adds r0, #4	@ 00045886 0430
.org 0x45888
	str r2, [r0, #0]	@ 00045888 0260
.org 0x4588a
	adds r0, #4	@ 0004588a 0430
.org 0x4588c
	strb r2, [r0, #0]	@ 0004588c 0270
.org 0x4588e
	ldrb r1, [r3, #10]	@ 0004588e 997a
.org 0x45890
	movs r0, #251	@ 00045890 fb20
.org 0x45892
	ands r0, r1	@ 00045892 0840
.org 0x45894
	strb r0, [r3, #10]	@ 00045894 9872
.org 0x45896
	ldr r1, [pc, #20]	@ 00045896 0549
.org 0x45898
	ldrb r0, [r3, #9]	@ 00045898 587a
.org 0x4589a
	lsls r0, r0, #2	@ 0004589a 8000
.org 0x4589c
	adds r0, r0, r1	@ 0004589c 4018
.org 0x4589e
	movs r1, #3	@ 0004589e 0321
.org 0x458a0
	str r1, [r3, #12]	@ 000458a0 d960
.org 0x458a2
	ldr r0, [r0, #0]	@ 000458a2 0068
.org 0x458a4
	ldr r0, [r0, #12]	@ 000458a4 c068
.org 0x458a6
	str r0, [r3, #20]	@ 000458a6 5861
.org 0x458a8
	b.n 0x458c0	@ 000458a8 0ae0
.org 0x458aa
	.byte 0x00	@ 000458aa data
.org 0x458ab
	.byte 0x00	@ 000458ab data
.org 0x458ac
	.byte 0xf8,0x39,0x85,0x08	@ 000458ac data
.org 0x458b0
	ldr r0, [pc, #16]	@ 000458b0 0448
.org 0x458b2
	ldrb r1, [r3, #16]	@ 000458b2 197c
.org 0x458b4
	lsls r1, r1, #2	@ 000458b4 8900
.org 0x458b6
	adds r1, r1, r0	@ 000458b6 0918
.org 0x458b8
	ldr r1, [r1, #0]	@ 000458b8 0968
.org 0x458ba
	adds r0, r3, #0	@ 000458ba 181c
.org 0x458bc
	bl 0x128f80	@ 000458bc e3f060fb
