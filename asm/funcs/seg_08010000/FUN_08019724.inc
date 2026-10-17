@ FUN_08019724  entry 0x08019724  size 40
.thumb
.org 0x19724
FUN_08019724:
	push {r4, lr}	@ 00019724 10b5
.org 0x19726
	adds r3, r0, #0	@ 00019726 031c
.org 0x19728
	ldrb r4, [r3, #14]	@ 00019728 9c7b
.org 0x1972a
	cmp r4, #0	@ 0001972a 002c
.org 0x1972c
	bne.n 0x19746	@ 0001972c 0bd1
.org 0x1972e
	ldr r2, [pc, #28]	@ 0001972e 074a
.org 0x19730
	ldr r1, [r3, #92]	@ 00019730 d96d
.org 0x19732
	lsls r1, r1, #8	@ 00019732 0902
.org 0x19734
	ldrh r0, [r2, #0]	@ 00019734 1088
.org 0x19736
	bics r0, r1	@ 00019736 8843
.org 0x19738
	strh r0, [r2, #0]	@ 00019738 1080
.org 0x1973a
	ldr r1, [pc, #20]	@ 0001973a 0549
.org 0x1973c
	movs r0, #210	@ 0001973c d220
.org 0x1973e
	lsls r0, r0, #12	@ 0001973e 0003
.org 0x19740
	str r0, [r1, #0]	@ 00019740 0860
.org 0x19742
	adds r0, r4, #1	@ 00019742 601c
.org 0x19744
	strb r0, [r3, #14]	@ 00019744 9873
.org 0x19746
	pop {r4}	@ 00019746 10bc
.org 0x19748
	pop {r0}	@ 00019748 01bc
.org 0x1974a
	bx r0	@ 0001974a 0047
