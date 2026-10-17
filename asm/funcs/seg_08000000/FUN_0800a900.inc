@ FUN_0800a900  entry 0x0800a900  size 96
.thumb
.org 0xa900
FUN_0800a900:
	push {r4, lr}	@ 0000a900 10b5
.org 0xa902
	adds r3, r0, #0	@ 0000a902 031c
.org 0xa904
	ldrb r4, [r3, #14]	@ 0000a904 9c7b
.org 0xa906
	cmp r4, #0	@ 0000a906 002c
.org 0xa908
	bne.n 0xa928	@ 0000a908 0ed1
.org 0xa90a
	ldr r1, [r3, #92]	@ 0000a90a d96d
.org 0xa90c
	lsrs r1, r1, #4	@ 0000a90c 0909
.org 0xa90e
	lsls r1, r1, #1	@ 0000a90e 4900
.org 0xa910
	ldr r0, [pc, #40]	@ 0000a910 0a48
.org 0xa912
	adds r1, r1, r0	@ 0000a912 0918
.org 0xa914
	ldrh r2, [r1, #0]	@ 0000a914 0a88
.org 0xa916
	ldr r0, [pc, #40]	@ 0000a916 0a48
.org 0xa918
	ands r0, r2	@ 0000a918 1040
.org 0xa91a
	movs r2, #2	@ 0000a91a 0222
.org 0xa91c
	orrs r0, r2	@ 0000a91c 1043
.org 0xa91e
	strh r0, [r1, #0]	@ 0000a91e 0880
.org 0xa920
	str r4, [r3, #76]	@ 0000a920 dc64
.org 0xa922
	ldrb r0, [r3, #14]	@ 0000a922 987b
.org 0xa924
	adds r0, #1	@ 0000a924 0130
.org 0xa926
	strb r0, [r3, #14]	@ 0000a926 9873
.org 0xa928
	ldr r1, [pc, #24]	@ 0000a928 0649
.org 0xa92a
	ldr r2, [pc, #28]	@ 0000a92a 074a
.org 0xa92c
	adds r0, r1, r2	@ 0000a92c 8818
.org 0xa92e
	ldrb r0, [r0, #0]	@ 0000a92e 0078
.org 0xa930
	cmp r0, #1	@ 0000a930 0128
.org 0xa932
	bne.n 0xa94c	@ 0000a932 0bd1
.org 0xa934
	ldr r0, [r3, #76]	@ 0000a934 d86c
.org 0xa936
	subs r0, #9	@ 0000a936 0938
.org 0xa938
	b.n 0xa96a	@ 0000a938 17e0
.org 0xa93a
	.byte 0x00	@ 0000a93a data
.org 0xa93b
	.byte 0x00	@ 0000a93b data
.org 0xa93c
	.byte 0x04,0x0a,0x00,0x02	@ 0000a93c data
.org 0xa940
	.byte 0xfc,0xff,0x00,0x00	@ 0000a940 data
.org 0xa944
	.byte 0xb0,0x0a,0x00,0x02	@ 0000a944 data
.org 0xa948
	.byte 0x24,0xd0,0x02,0x00	@ 0000a948 data
.org 0xa94c
	cmp r0, #2	@ 0000a94c 0228
.org 0xa94e
	bls.n 0xa96c	@ 0000a94e 0dd9
.org 0xa950
	ldr r0, [pc, #32]	@ 0000a950 0848
.org 0xa952
	adds r1, r1, r0	@ 0000a952 0918
.org 0xa954
	ldrh r2, [r1, #0]	@ 0000a954 0a88
.org 0xa956
	ldr r0, [pc, #32]	@ 0000a956 0848
.org 0xa958
	cmp r2, r0	@ 0000a958 8242
.org 0xa95a
	bhi.n 0xa962	@ 0000a95a 02d8
.org 0xa95c
	adds r0, r2, #0	@ 0000a95c 101c
.org 0xa95e
	adds r0, #8	@ 0000a95e 0830
