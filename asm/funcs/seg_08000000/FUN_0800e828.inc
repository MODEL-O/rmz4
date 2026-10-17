@ FUN_0800e828  entry 0x0800e828  size 42
.thumb
.org 0xe828
FUN_0800e828:
	push {lr}	@ 0000e828 00b5
.org 0xe82a
	adds r3, r0, #0	@ 0000e82a 031c
.org 0xe82c
	ldrb r0, [r3, #14]	@ 0000e82c 987b
.org 0xe82e
	cmp r0, #0	@ 0000e82e 0028
.org 0xe830
	bne.n 0xe84e	@ 0000e830 0dd1
.org 0xe832
	ldr r1, [r3, #92]	@ 0000e832 d96d
.org 0xe834
	lsrs r1, r1, #4	@ 0000e834 0909
.org 0xe836
	lsls r1, r1, #1	@ 0000e836 4900
.org 0xe838
	ldr r0, [pc, #24]	@ 0000e838 0648
.org 0xe83a
	adds r1, r1, r0	@ 0000e83a 0918
.org 0xe83c
	ldrh r2, [r1, #0]	@ 0000e83c 0a88
.org 0xe83e
	ldr r0, [pc, #24]	@ 0000e83e 0648
.org 0xe840
	ands r0, r2	@ 0000e840 1040
.org 0xe842
	movs r2, #1	@ 0000e842 0122
.org 0xe844
	orrs r0, r2	@ 0000e844 1043
.org 0xe846
	strh r0, [r1, #0]	@ 0000e846 0880
.org 0xe848
	ldrb r0, [r3, #14]	@ 0000e848 987b
.org 0xe84a
	adds r0, #1	@ 0000e84a 0130
.org 0xe84c
	strb r0, [r3, #14]	@ 0000e84c 9873
.org 0xe84e
	pop {r0}	@ 0000e84e 01bc
.org 0xe850
	bx r0	@ 0000e850 0047
