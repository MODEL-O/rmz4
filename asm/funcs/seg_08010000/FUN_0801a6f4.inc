@ FUN_0801a6f4  entry 0x0801a6f4  size 42
.thumb
.org 0x1a6f4
FUN_0801a6f4:
	push {lr}	@ 0001a6f4 00b5
.org 0x1a6f6
	adds r3, r0, #0	@ 0001a6f6 031c
.org 0x1a6f8
	ldrb r0, [r3, #14]	@ 0001a6f8 987b
.org 0x1a6fa
	cmp r0, #0	@ 0001a6fa 0028
.org 0x1a6fc
	bne.n 0x1a71a	@ 0001a6fc 0dd1
.org 0x1a6fe
	ldr r1, [r3, #92]	@ 0001a6fe d96d
.org 0x1a700
	lsrs r1, r1, #4	@ 0001a700 0909
.org 0x1a702
	lsls r1, r1, #1	@ 0001a702 4900
.org 0x1a704
	ldr r0, [pc, #24]	@ 0001a704 0648
.org 0x1a706
	adds r1, r1, r0	@ 0001a706 0918
.org 0x1a708
	ldrh r2, [r1, #0]	@ 0001a708 0a88
.org 0x1a70a
	ldr r0, [pc, #24]	@ 0001a70a 0648
.org 0x1a70c
	ands r0, r2	@ 0001a70c 1040
.org 0x1a70e
	movs r2, #3	@ 0001a70e 0322
.org 0x1a710
	orrs r0, r2	@ 0001a710 1043
.org 0x1a712
	strh r0, [r1, #0]	@ 0001a712 0880
.org 0x1a714
	ldrb r0, [r3, #14]	@ 0001a714 987b
.org 0x1a716
	adds r0, #1	@ 0001a716 0130
.org 0x1a718
	strb r0, [r3, #14]	@ 0001a718 9873
.org 0x1a71a
	pop {r0}	@ 0001a71a 01bc
.org 0x1a71c
	bx r0	@ 0001a71c 0047
