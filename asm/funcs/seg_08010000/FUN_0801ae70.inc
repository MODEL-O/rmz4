@ FUN_0801ae70  entry 0x0801ae70  size 58
.thumb
.org 0x1ae70
FUN_0801ae70:
	push {lr}	@ 0001ae70 00b5
.org 0x1ae72
	adds r3, r0, #0	@ 0001ae72 031c
.org 0x1ae74
	ldrb r0, [r3, #14]	@ 0001ae74 987b
.org 0x1ae76
	cmp r0, #0	@ 0001ae76 0028
.org 0x1ae78
	bne.n 0x1aea6	@ 0001ae78 15d1
.org 0x1ae7a
	ldr r1, [r3, #92]	@ 0001ae7a d96d
.org 0x1ae7c
	lsrs r1, r1, #4	@ 0001ae7c 0909
.org 0x1ae7e
	lsls r1, r1, #1	@ 0001ae7e 4900
.org 0x1ae80
	ldr r0, [pc, #40]	@ 0001ae80 0a48
.org 0x1ae82
	adds r1, r1, r0	@ 0001ae82 0918
.org 0x1ae84
	ldrh r2, [r1, #0]	@ 0001ae84 0a88
.org 0x1ae86
	ldr r0, [pc, #40]	@ 0001ae86 0a48
.org 0x1ae88
	ands r0, r2	@ 0001ae88 1040
.org 0x1ae8a
	movs r2, #3	@ 0001ae8a 0322
.org 0x1ae8c
	orrs r0, r2	@ 0001ae8c 1043
.org 0x1ae8e
	strh r0, [r1, #0]	@ 0001ae8e 0880
.org 0x1ae90
	movs r0, #135	@ 0001ae90 8720
.org 0x1ae92
	lsls r0, r0, #3	@ 0001ae92 c000
.org 0x1ae94
	str r0, [r3, #76]	@ 0001ae94 d864
.org 0x1ae96
	movs r0, #80	@ 0001ae96 5020
.org 0x1ae98
	str r0, [r3, #80]	@ 0001ae98 1865
.org 0x1ae9a
	movs r0, #192	@ 0001ae9a c020
.org 0x1ae9c
	str r0, [r3, #68]	@ 0001ae9c 5864
.org 0x1ae9e
	str r0, [r3, #72]	@ 0001ae9e 9864
.org 0x1aea0
	ldrb r0, [r3, #14]	@ 0001aea0 987b
.org 0x1aea2
	adds r0, #1	@ 0001aea2 0130
.org 0x1aea4
	strb r0, [r3, #14]	@ 0001aea4 9873
.org 0x1aea6
	pop {r0}	@ 0001aea6 01bc
.org 0x1aea8
	bx r0	@ 0001aea8 0047
