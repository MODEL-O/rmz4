@ FUN_080008c8  entry 0x080008c8  size 262
.thumb
.org 0x8c8
FUN_080008c8:
	push {r4, r5, r6, r7, lr}	@ 000008c8 f0b5
.org 0x8ca
	mov r7, sl	@ 000008ca 5746
.org 0x8cc
	mov r6, r9	@ 000008cc 4e46
.org 0x8ce
	mov r5, r8	@ 000008ce 4546
.org 0x8d0
	push {r5, r6, r7}	@ 000008d0 e0b4
.org 0x8d2
	mov r9, r0	@ 000008d2 8146
.org 0x8d4
	ldr r0, [pc, #248]	@ 000008d4 3e48
.org 0x8d6
	mov r8, r0	@ 000008d6 8046
.org 0x8d8
	movs r1, #144	@ 000008d8 9021
.org 0x8da
	lsls r1, r1, #5	@ 000008da 4901
.org 0x8dc
	add r1, r8	@ 000008dc 4144
.org 0x8de
	mov sl, r1	@ 000008de 8a46
.org 0x8e0
	ldr r7, [pc, #240]	@ 000008e0 3c4f
.org 0x8e2
	subs r6, r7, #1	@ 000008e2 7e1e
.org 0x8e4
	bl 0x10d5dc	@ 000008e4 0cf17afe
.org 0x8e8
	bl 0x2364	@ 000008e8 01f03cfd
.org 0x8ec
	movs r2, #0	@ 000008ec 0022
.org 0x8ee
	ldr r1, [pc, #232]	@ 000008ee 3a49
.org 0x8f0
	add r1, r8	@ 000008f0 4144
.org 0x8f2
	ldrh r0, [r1, #0]	@ 000008f2 0888
.org 0x8f4
	cmp r0, #0	@ 000008f4 0028
.org 0x8f6
	bne.n 0x8fa	@ 000008f6 00d1
.org 0x8f8
	movs r2, #1	@ 000008f8 0122
.org 0x8fa
	movs r0, #0	@ 000008fa 0020
.org 0x8fc
	strh r2, [r1, #0]	@ 000008fc 0a80
.org 0x8fe
	mov r3, sl	@ 000008fe 5346
.org 0x900
	strh r0, [r3, #0]	@ 00000900 1880
.org 0x902
	bl 0x1574	@ 00000902 00f037fe
.org 0x906
	ldrb r1, [r6, #0]	@ 00000906 3178
.org 0x908
	ldrb r0, [r7, #0]	@ 00000908 3878
.org 0x90a
	cmp r1, r0	@ 0000090a 8142
.org 0x90c
	bcc.n 0x906	@ 0000090c fbd3
.org 0x90e
	ldr r0, [pc, #204]	@ 0000090e 3348
.org 0x910
	ldrh r0, [r0, #0]	@ 00000910 0088
.org 0x912
	cmp r0, #161	@ 00000912 a128
.org 0x914
	bne.n 0x906	@ 00000914 f7d1
.org 0x916
	ldrb r0, [r6, #0]	@ 00000916 3078
.org 0x918
	movs r0, #0	@ 00000918 0020
.org 0x91a
	strb r0, [r6, #0]	@ 0000091a 3070
.org 0x91c
	bl 0x1490	@ 0000091c 00f0b8fd
.org 0x920
	movs r2, #128	@ 00000920 8022
.org 0x922
	lsls r2, r2, #19	@ 00000922 d204
.org 0x924
	ldrh r0, [r2, #0]	@ 00000924 1088
.org 0x926
	ldr r3, [pc, #184]	@ 00000926 2e4b
.org 0x928
	adds r1, r3, #0	@ 00000928 191c
.org 0x92a
	ands r0, r1	@ 0000092a 0840
.org 0x92c
	strh r0, [r2, #0]	@ 0000092c 1080
.org 0x92e
	bl 0x26d0	@ 0000092e 01f0cffe
.org 0x932
	bl 0x2868	@ 00000932 01f099ff
.org 0x936
	bl 0x28ec	@ 00000936 01f0d9ff
.org 0x93a
	bl 0x291c	@ 0000093a 01f0efff
.org 0x93e
	bl 0x297c	@ 0000093e 02f01df8
.org 0x942
	bl 0xc98	@ 00000942 00f0a9f9
.org 0x946
	bl 0x10d664	@ 00000946 0cf18dfe
.org 0x94a
	bl 0x2094	@ 0000094a 01f0a3fb
.org 0x94e
	bl 0x1c3c	@ 0000094e 01f075f9
.org 0x952
	ldr r0, [pc, #144]	@ 00000952 2448
.org 0x954
	ldrb r0, [r0, #0]	@ 00000954 0078
.org 0x956
	cmp r0, #0	@ 00000956 0028
.org 0x958
	bne.n 0x9c4	@ 00000958 34d1
.org 0x95a
	ldr r0, [pc, #140]	@ 0000095a 2348
.org 0x95c
	movs r1, #141	@ 0000095c 8d21
.org 0x95e
	lsls r1, r1, #2	@ 0000095e 8900
.org 0x960
	adds r0, r0, r1	@ 00000960 4018
.org 0x962
	ldr r0, [r0, #0]	@ 00000962 0068
.org 0x964
	cmp r0, #0	@ 00000964 0028
.org 0x966
	beq.n 0x9c4	@ 00000966 2dd0
.org 0x968
	ldr r0, [pc, #128]	@ 00000968 2048
.org 0x96a
	ldr r0, [r0, #12]	@ 0000096a c068
.org 0x96c
	cmp r0, #0	@ 0000096c 0028
.org 0x96e
	beq.n 0x9c4	@ 0000096e 29d0
.org 0x970
	ldr r5, [pc, #124]	@ 00000970 1f4d
.org 0x972
	ldrh r1, [r5, #0]	@ 00000972 2988
.org 0x974
	movs r2, #12	@ 00000974 0c22
.org 0x976
	ands r2, r1	@ 00000976 0a40
.org 0x978
	cmp r2, #12	@ 00000978 0c2a
.org 0x97a
	bne.n 0x9c4	@ 0000097a 23d1
.org 0x97c
	movs r4, #1	@ 0000097c 0124
.org 0x97e
	adds r0, r4, #0	@ 0000097e 201c
.org 0x980
	ands r0, r1	@ 00000980 0840
.org 0x982
	cmp r0, #0	@ 00000982 0028
.org 0x984
	beq.n 0x9c4	@ 00000984 1ed0
.org 0x986
	movs r3, #2	@ 00000986 0223
.org 0x988
	adds r0, r3, #0	@ 00000988 181c
.org 0x98a
	ands r0, r1	@ 0000098a 0840
.org 0x98c
	cmp r0, #0	@ 0000098c 0028
.org 0x98e
	beq.n 0x9c4	@ 0000098e 19d0
.org 0x990
	ldrh r1, [r5, #4]	@ 00000990 a988
.org 0x992
	ands r2, r1	@ 00000992 0a40
.org 0x994
	cmp r2, #0	@ 00000994 002a
.org 0x996
	bne.n 0x9a8	@ 00000996 07d1
.org 0x998
	adds r0, r4, #0	@ 00000998 201c
.org 0x99a
	ands r0, r1	@ 0000099a 0840
.org 0x99c
	cmp r0, #0	@ 0000099c 0028
.org 0x99e
	bne.n 0x9a8	@ 0000099e 03d1
.org 0x9a0
	adds r0, r3, #0	@ 000009a0 181c
.org 0x9a2
	ands r0, r1	@ 000009a2 0840
.org 0x9a4
	cmp r0, #0	@ 000009a4 0028
.org 0x9a6
	beq.n 0x9c4	@ 000009a6 0dd0
.org 0x9a8
	movs r0, #0	@ 000009a8 0020
.org 0x9aa
	bl 0x1390	@ 000009aa 00f0f1fc
.org 0x9ae
	movs r0, #1	@ 000009ae 0120
.org 0x9b0
	bl 0x1390	@ 000009b0 00f0eefc
.org 0x9b4
	ldr r0, [pc, #48]	@ 000009b4 0c48
.org 0x9b6
	movs r1, #1	@ 000009b6 0121
.org 0x9b8
	bl 0x10f6f8	@ 000009b8 0ef19efe
.org 0x9bc
	movs r0, #0	@ 000009bc 0020
.org 0x9be
	ldr r1, [pc, #52]	@ 000009be 0d49
.org 0x9c0
	bl 0x12b8	@ 000009c0 00f07afc
.org 0x9c4
	mov r0, r9	@ 000009c4 4846
.org 0x9c6
	movs r1, #1	@ 000009c6 0121
.org 0x9c8
	bl 0x1330	@ 000009c8 00f0b2fc
.org 0x9cc
	b.n 0x8e4	@ 000009cc 8ae7
