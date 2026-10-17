@ FUN_0801702c  entry 0x0801702c  size 198
.thumb
.org 0x1702c
FUN_0801702c:
	push {r4, r5, r6, r7, lr}	@ 0001702c f0b5
.org 0x1702e
	mov r7, r8	@ 0001702e 4746
.org 0x17030
	push {r7}	@ 00017030 80b4
.org 0x17032
	ldr r2, [pc, #40]	@ 00017032 0a4a
.org 0x17034
	ldr r1, [pc, #40]	@ 00017034 0a49
.org 0x17036
	adds r0, r2, r1	@ 00017036 5018
.org 0x17038
	ldrh r1, [r0, #0]	@ 00017038 0188
.org 0x1703a
	lsrs r0, r1, #8	@ 0001703a 080a
.org 0x1703c
	cmp r0, #11	@ 0001703c 0b28
.org 0x1703e
	bne.n 0x1710c	@ 0001703e 65d1
.org 0x17040
	movs r0, #255	@ 00017040 ff20
.org 0x17042
	ands r0, r1	@ 00017042 0840
.org 0x17044
	cmp r0, #13	@ 00017044 0d28
.org 0x17046
	bne.n 0x1710c	@ 00017046 61d1
.org 0x17048
	ldr r1, [pc, #24]	@ 00017048 0649
.org 0x1704a
	adds r0, r2, r1	@ 0001704a 5018
.org 0x1704c
	ldrb r0, [r0, #0]	@ 0001704c 0078
.org 0x1704e
	cmp r0, #18	@ 0001704e 1228
.org 0x17050
	bhi.n 0x17068	@ 00017050 0ad8
.org 0x17052
	movs r1, #1	@ 00017052 0121
.org 0x17054
	cmp r0, #7	@ 00017054 0728
.org 0x17056
	bhi.n 0x17070	@ 00017056 0bd8
.org 0x17058
	movs r1, #0	@ 00017058 0021
.org 0x1705a
	b.n 0x17070	@ 0001705a 09e0
.org 0x1705c
	.byte 0xb0,0x0a,0x00,0x02	@ 0001705c data
.org 0x17060
	.byte 0xd4,0x07,0x00,0x00	@ 00017060 data
.org 0x17064
	.byte 0x29,0xd0,0x02,0x00	@ 00017064 data
.org 0x17068
	movs r1, #3	@ 00017068 0321
.org 0x1706a
	cmp r0, #26	@ 0001706a 1a28
.org 0x1706c
	bhi.n 0x17070	@ 0001706c 00d8
.org 0x1706e
	movs r1, #2	@ 0001706e 0221
.org 0x17070
	ldr r7, [pc, #104]	@ 00017070 1a4f
.org 0x17072
	lsls r4, r1, #2	@ 00017072 8c00
.org 0x17074
	adds r4, r4, r1	@ 00017074 6418
.org 0x17076
	lsls r4, r4, #2	@ 00017076 a400
.org 0x17078
	ldr r0, [pc, #100]	@ 00017078 1948
.org 0x1707a
	adds r4, r4, r0	@ 0001707a 2418
.org 0x1707c
	ldr r0, [r7, #0]	@ 0001707c 3868
.org 0x1707e
	adds r0, r0, r4	@ 0001707e 0019
.org 0x17080
	movs r1, #128	@ 00017080 8021
.org 0x17082
	lsls r1, r1, #7	@ 00017082 c901
.org 0x17084
	mov r8, r1	@ 00017084 8846
.org 0x17086
	bl 0x1ea4	@ 00017086 eaf70dff
.org 0x1708a
	ldr r0, [r7, #0]	@ 0001708a 3868
.org 0x1708c
	adds r0, r0, r4	@ 0001708c 0019
.org 0x1708e
	adds r0, #12	@ 0001708e 0c30
.org 0x17090
	movs r1, #0	@ 00017090 0021
.org 0x17092
	bl 0x2208	@ 00017092 ebf7b9f8
.org 0x17096
	ldr r0, [pc, #76]	@ 00017096 1348
.org 0x17098
	ldr r1, [pc, #76]	@ 00017098 1349
.org 0x1709a
	adds r6, r0, r1	@ 0001709a 4618
.org 0x1709c
	ldrh r0, [r6, #0]	@ 0001709c 3088
.org 0x1709e
	cmp r0, #61	@ 0001709e 3d28
.org 0x170a0
	bhi.n 0x170f4	@ 000170a0 28d8
.org 0x170a2
	ldr r5, [pc, #72]	@ 000170a2 124d
.org 0x170a4
	lsrs r0, r0, #1	@ 000170a4 4008
.org 0x170a6
	adds r0, r0, r5	@ 000170a6 4019
.org 0x170a8
	ldrb r0, [r0, #0]	@ 000170a8 0078
.org 0x170aa
	lsls r1, r0, #2	@ 000170aa 8100
.org 0x170ac
	adds r1, r1, r0	@ 000170ac 0918
.org 0x170ae
	lsls r1, r1, #2	@ 000170ae 8900
.org 0x170b0
	ldr r4, [pc, #60]	@ 000170b0 0f4c
.org 0x170b2
	adds r1, r1, r4	@ 000170b2 0919
.org 0x170b4
	ldr r0, [r7, #0]	@ 000170b4 3868
.org 0x170b6
	adds r0, r0, r1	@ 000170b6 4018
.org 0x170b8
	mov r1, r8	@ 000170b8 4146
.org 0x170ba
	bl 0x1ea4	@ 000170ba eaf7f3fe
.org 0x170be
	ldrh r0, [r6, #0]	@ 000170be 3088
.org 0x170c0
	lsrs r0, r0, #1	@ 000170c0 4008
.org 0x170c2
	adds r0, r0, r5	@ 000170c2 4019
.org 0x170c4
	ldrb r0, [r0, #0]	@ 000170c4 0078
.org 0x170c6
	lsls r1, r0, #2	@ 000170c6 8100
.org 0x170c8
	adds r1, r1, r0	@ 000170c8 0918
.org 0x170ca
	lsls r1, r1, #2	@ 000170ca 8900
.org 0x170cc
	adds r1, r1, r4	@ 000170cc 0919
.org 0x170ce
	ldr r0, [r7, #0]	@ 000170ce 3868
.org 0x170d0
	adds r0, r0, r1	@ 000170d0 4018
.org 0x170d2
	adds r0, #12	@ 000170d2 0c30
.org 0x170d4
	movs r1, #0	@ 000170d4 0021
.org 0x170d6
	bl 0x2208	@ 000170d6 ebf797f8
.org 0x170da
	b.n 0x1710c	@ 000170da 17e0
.org 0x170dc
	.byte 0x48,0x20,0xdf,0x08	@ 000170dc data
.org 0x170e0
	.byte 0x14,0x31,0xdf,0x08	@ 000170e0 data
.org 0x170e4
	.byte 0xb0,0x0a,0x00,0x02	@ 000170e4 data
.org 0x170e8
	.byte 0x2a,0xd0,0x02,0x00	@ 000170e8 data
.org 0x170ec
	.byte 0x14,0x7c,0x83,0x08	@ 000170ec data
.org 0x170f0
	.byte 0x64,0x31,0xdf,0x08	@ 000170f0 data
