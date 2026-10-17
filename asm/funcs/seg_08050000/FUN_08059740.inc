@ FUN_08059740  entry 0x08059740  size 56
.thumb
.org 0x59740
FUN_08059740:
	push {lr}	@ 00059740 00b5
.org 0x59742
	mov ip, r0	@ 00059742 8446
.org 0x59744
	adds r0, #180	@ 00059744 b430
.org 0x59746
	ldrb r1, [r0, #0]	@ 00059746 0178
.org 0x59748
	movs r0, #1	@ 00059748 0120
.org 0x5974a
	ands r0, r1	@ 0005974a 0840
.org 0x5974c
	cmp r0, #0	@ 0005974c 0028
.org 0x5974e
	beq.n 0x59774	@ 0005974e 11d0
.org 0x59750
	mov r3, ip	@ 00059750 6346
.org 0x59752
	adds r3, #181	@ 00059752 b533
.org 0x59754
	ldrb r0, [r3, #0]	@ 00059754 1878
.org 0x59756
	adds r0, #2	@ 00059756 0230
.org 0x59758
	strb r0, [r3, #0]	@ 00059758 1870
.org 0x5975a
	mov r2, ip	@ 0005975a 6246
.org 0x5975c
	adds r2, #188	@ 0005975c bc32
.org 0x5975e
	ldr r1, [pc, #24]	@ 0005975e 0649
.org 0x59760
	ldrb r0, [r3, #0]	@ 00059760 1878
.org 0x59762
	lsls r0, r0, #1	@ 00059762 4000
.org 0x59764
	adds r0, r0, r1	@ 00059764 4018
.org 0x59766
	movs r3, #0	@ 00059766 0023
.org 0x59768
	ldrsh r1, [r0, r3]	@ 00059768 c15e
.org 0x5976a
	lsls r1, r1, #1	@ 0005976a 4900
.org 0x5976c
	ldr r0, [r2, #0]	@ 0005976c 1068
.org 0x5976e
	adds r0, r0, r1	@ 0005976e 4018
.org 0x59770
	mov r1, ip	@ 00059770 6146
.org 0x59772
	str r0, [r1, #88]	@ 00059772 8865
.org 0x59774
	pop {r0}	@ 00059774 01bc
.org 0x59776
	bx r0	@ 00059776 0047
