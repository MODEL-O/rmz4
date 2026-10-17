@ FUN_081258dc  entry 0x081258dc  size 150
.thumb
.org 0x1258dc
FUN_081258dc:
	push {r4, r5, r6, r7, lr}	@ 001258dc f0b5
.org 0x1258de
	mov r7, r8	@ 001258de 4746
.org 0x1258e0
	push {r7}	@ 001258e0 80b4
.org 0x1258e2
	adds r7, r0, #0	@ 001258e2 071c
.org 0x1258e4
	ldr r0, [pc, #44]	@ 001258e4 0b48
.org 0x1258e6
	adds r2, r7, r0	@ 001258e6 3a18
.org 0x1258e8
	ldr r0, [r2, #36]	@ 001258e8 506a
.org 0x1258ea
	movs r1, #3	@ 001258ea 0321
.org 0x1258ec
	ands r0, r1	@ 001258ec 0840
.org 0x1258ee
	cmp r0, #1	@ 001258ee 0128
.org 0x1258f0
	bne.n 0x1258fc	@ 001258f0 04d1
.org 0x1258f2
	ldr r0, [r2, #20]	@ 001258f2 5069
.org 0x1258f4
	cmp r0, #0	@ 001258f4 0028
.org 0x1258f6
	beq.n 0x1258fc	@ 001258f6 01d0
.org 0x1258f8
	subs r0, #1	@ 001258f8 0138
.org 0x1258fa
	str r0, [r2, #20]	@ 001258fa 5061
.org 0x1258fc
	ldr r1, [pc, #24]	@ 001258fc 0649
.org 0x1258fe
	adds r2, r7, r1	@ 001258fe 7a18
.org 0x125900
	adds r1, #8	@ 00125900 0831
.org 0x125902
	adds r0, r7, r1	@ 00125902 7818
.org 0x125904
	ldr r0, [r0, #0]	@ 00125904 0068
.org 0x125906
	ldr r1, [r0, #84]	@ 00125906 416d
.org 0x125908
	str r1, [r2, #0]	@ 00125908 1160
.org 0x12590a
	ldr r0, [pc, #16]	@ 0012590a 0448
.org 0x12590c
	cmp r1, r0	@ 0012590c 8142
.org 0x12590e
	bgt.n 0x125920	@ 0012590e 07dc
.org 0x125910
	adds r0, #1	@ 00125910 0130
.org 0x125912
	b.n 0x125928	@ 00125912 09e0
.org 0x125914
	.byte 0xcc,0x0d,0x00,0x00	@ 00125914 data
.org 0x125918
	.byte 0xc4,0x0d,0x00,0x00	@ 00125918 data
.org 0x12591c
	.byte 0xff,0x67,0x01,0x00	@ 0012591c data
.org 0x125920
	movs r0, #255	@ 00125920 ff20
.org 0x125922
	lsls r0, r0, #11	@ 00125922 c002
.org 0x125924
	cmp r1, r0	@ 00125924 8142
.org 0x125926
	ble.n 0x12592a	@ 00125926 00dd
.org 0x125928
	str r0, [r2, #0]	@ 00125928 1060
.org 0x12592a
	ldr r0, [pc, #84]	@ 0012592a 1548
.org 0x12592c
	adds r5, r7, r0	@ 0012592c 3d18
.org 0x12592e
	ldr r6, [r5, #20]	@ 0012592e 6e69
.org 0x125930
	cmp r6, #0	@ 00125930 002e
.org 0x125932
	beq.n 0x12593e	@ 00125932 04d0
.org 0x125934
	ldr r0, [r5, #36]	@ 00125934 686a
.org 0x125936
	movs r1, #2	@ 00125936 0221
.org 0x125938
	ands r0, r1	@ 00125938 0840
.org 0x12593a
	cmp r0, #0	@ 0012593a 0028
.org 0x12593c
	beq.n 0x125972	@ 0012593c 19d0
.org 0x12593e
	ldrb r0, [r5, #24]	@ 0012593e 287e
.org 0x125940
	adds r0, #1	@ 00125940 0130
.org 0x125942
	movs r1, #0	@ 00125942 0021
.org 0x125944
	strb r0, [r5, #24]	@ 00125944 2876
.org 0x125946
	strb r1, [r5, #25]	@ 00125946 6976
.org 0x125948
	ldr r0, [r5, #8]	@ 00125948 a868
.org 0x12594a
	movs r1, #60	@ 0012594a 3c21
.org 0x12594c
	bl 0x128fb8	@ 0012594c 03f034fb
.org 0x125950
	lsls r4, r0, #4	@ 00125950 0401
.org 0x125952
	subs r4, r4, r0	@ 00125952 241a
.org 0x125954
	lsls r4, r4, #2	@ 00125954 a400
.org 0x125956
	movs r1, #225	@ 00125956 e121
.org 0x125958
	lsls r1, r1, #4	@ 00125958 0901
.org 0x12595a
	mov r8, r1	@ 0012595a 8846
.org 0x12595c
	subs r0, r1, r6	@ 0012595c 881b
.org 0x12595e
	movs r1, #60	@ 0012595e 3c21
.org 0x125960
	bl 0x129050	@ 00125960 03f076fb
.org 0x125964
	adds r4, r4, r0	@ 00125964 2418
.org 0x125966
	str r4, [r5, #8]	@ 00125966 ac60
.org 0x125968
	cmp r6, #0	@ 00125968 002e
.org 0x12596a
	bne.n 0x125972	@ 0012596a 02d1
.org 0x12596c
	strh r6, [r7, #6]	@ 0012596c fe80
.org 0x12596e
	mov r0, r8	@ 0012596e 4046
.org 0x125970
	str r0, [r5, #8]	@ 00125970 a860
