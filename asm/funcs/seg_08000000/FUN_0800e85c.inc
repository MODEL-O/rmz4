@ FUN_0800e85c  entry 0x0800e85c  size 80
.thumb
.org 0xe85c
FUN_0800e85c:
	push {r4, r5, r6, lr}	@ 0000e85c 70b5
.org 0xe85e
	adds r5, r0, #0	@ 0000e85e 051c
.org 0xe860
	ldrb r6, [r5, #14]	@ 0000e860 ae7b
.org 0xe862
	cmp r6, #0	@ 0000e862 002e
.org 0xe864
	bne.n 0xe8a6	@ 0000e864 1fd1
.org 0xe866
	ldr r0, [r5, #92]	@ 0000e866 e86d
.org 0xe868
	lsls r0, r0, #16	@ 0000e868 0004
.org 0xe86a
	lsrs r0, r0, #20	@ 0000e86a 000d
.org 0xe86c
	lsls r3, r0, #1	@ 0000e86c 4300
.org 0xe86e
	ldr r4, [pc, #60]	@ 0000e86e 0f4c
.org 0xe870
	adds r3, r3, r4	@ 0000e870 1b19
.org 0xe872
	ldr r1, [r5, #100]	@ 0000e872 696e
.org 0xe874
	movs r2, #71	@ 0000e874 4722
.org 0xe876
	orrs r1, r2	@ 0000e876 1143
.org 0xe878
	strh r1, [r3, #0]	@ 0000e878 1980
.org 0xe87a
	lsls r0, r0, #2	@ 0000e87a 8000
.org 0xe87c
	adds r4, #8	@ 0000e87c 0834
.org 0xe87e
	adds r0, r0, r4	@ 0000e87e 0019
.org 0xe880
	str r6, [r0, #0]	@ 0000e880 0660
.org 0xe882
	ldr r0, [pc, #44]	@ 0000e882 0b48
.org 0xe884
	ldr r0, [r0, #0]	@ 0000e884 0068
.org 0xe886
	ldr r2, [pc, #44]	@ 0000e886 0b4a
.org 0xe888
	adds r0, r0, r2	@ 0000e888 8018
.org 0xe88a
	movs r2, #248	@ 0000e88a f822
.org 0xe88c
	lsls r2, r2, #5	@ 0000e88c 5201
.org 0xe88e
	ands r1, r2	@ 0000e88e 1140
.org 0xe890
	lsls r1, r1, #3	@ 0000e890 c900
.org 0xe892
	movs r2, #192	@ 0000e892 c022
.org 0xe894
	lsls r2, r2, #19	@ 0000e894 d204
.org 0xe896
	adds r1, r1, r2	@ 0000e896 8918
.org 0xe898
	movs r2, #128	@ 0000e898 8022
.org 0xe89a
	lsls r2, r2, #2	@ 0000e89a 9200
.org 0xe89c
	bl 0x128be0	@ 0000e89c 1af1a0f9
.org 0xe8a0
	ldrb r0, [r5, #14]	@ 0000e8a0 a87b
.org 0xe8a2
	adds r0, #1	@ 0000e8a2 0130
.org 0xe8a4
	strb r0, [r5, #14]	@ 0000e8a4 a873
.org 0xe8a6
	pop {r4, r5, r6}	@ 0000e8a6 70bc
.org 0xe8a8
	pop {r0}	@ 0000e8a8 01bc
.org 0xe8aa
	bx r0	@ 0000e8aa 0047
