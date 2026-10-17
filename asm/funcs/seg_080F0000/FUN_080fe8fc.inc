@ FUN_080fe8fc  entry 0x080fe8fc  size 54
.thumb
.org 0xfe8fc
FUN_080fe8fc:
	push {lr}	@ 000fe8fc 00b5
.org 0xfe8fe
	adds r2, r0, #0	@ 000fe8fe 021c
.org 0xfe900
	adds r0, #140	@ 000fe900 8c30
.org 0xfe902
	ldr r0, [r0, #0]	@ 000fe902 0068
.org 0xfe904
	movs r1, #128	@ 000fe904 8021
.org 0xfe906
	lsls r1, r1, #2	@ 000fe906 8900
.org 0xfe908
	ands r0, r1	@ 000fe908 0840
.org 0xfe90a
	cmp r0, #0	@ 000fe90a 0028
.org 0xfe90c
	beq.n 0xfe92c	@ 000fe90c 0ed0
.org 0xfe90e
	ldr r1, [pc, #24]	@ 000fe90e 0649
.org 0xfe910
	ldrb r0, [r2, #9]	@ 000fe910 507a
.org 0xfe912
	lsls r0, r0, #2	@ 000fe912 8000
.org 0xfe914
	adds r0, r0, r1	@ 000fe914 4018
.org 0xfe916
	movs r1, #2	@ 000fe916 0221
.org 0xfe918
	str r1, [r2, #12]	@ 000fe918 d160
.org 0xfe91a
	ldr r0, [r0, #0]	@ 000fe91a 0068
.org 0xfe91c
	ldr r0, [r0, #8]	@ 000fe91c 8068
.org 0xfe91e
	str r0, [r2, #20]	@ 000fe91e 5061
.org 0xfe920
	adds r0, r2, #0	@ 000fe920 101c
.org 0xfe922
	bl 0xfe938	@ 000fe922 00f009f8
.org 0xfe926
	b.n 0xfe932	@ 000fe926 04e0
.org 0xfe928
	.byte 0xfc,0x92,0x86,0x08	@ 000fe928 data
.org 0xfe92c
	adds r0, r2, #0	@ 000fe92c 101c
.org 0xfe92e
	bl 0x1cff0	@ 000fe92e 1ef75ffb
