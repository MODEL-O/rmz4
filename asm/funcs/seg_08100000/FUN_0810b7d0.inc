@ FUN_0810b7d0  entry 0x0810b7d0  size 114
.thumb
.org 0x10b7d0
FUN_0810b7d0:
	push {r4, r5, lr}	@ 0010b7d0 30b5
.org 0x10b7d2
	adds r4, r0, #0	@ 0010b7d2 041c
.org 0x10b7d4
	bl 0x1cc9c	@ 0010b7d4 11f762fa
.org 0x10b7d8
	ldrb r1, [r4, #10]	@ 0010b7d8 a17a
.org 0x10b7da
	movs r0, #1	@ 0010b7da 0120
.org 0x10b7dc
	movs r5, #0	@ 0010b7dc 0025
.org 0x10b7de
	orrs r0, r1	@ 0010b7de 0843
.org 0x10b7e0
	movs r1, #2	@ 0010b7e0 0221
.org 0x10b7e2
	orrs r0, r1	@ 0010b7e2 0843
.org 0x10b7e4
	strb r0, [r4, #10]	@ 0010b7e4 a072
.org 0x10b7e6
	adds r0, r4, #0	@ 0010b7e6 201c
.org 0x10b7e8
	bl 0x1ceec	@ 0010b7e8 11f780fb
.org 0x10b7ec
	adds r2, r4, #0	@ 0010b7ec 221c
.org 0x10b7ee
	adds r2, #73	@ 0010b7ee 4932
.org 0x10b7f0
	ldrb r0, [r2, #0]	@ 0010b7f0 1078
.org 0x10b7f2
	movs r1, #12	@ 0010b7f2 0c21
.org 0x10b7f4
	orrs r0, r1	@ 0010b7f4 0843
.org 0x10b7f6
	strb r0, [r2, #0]	@ 0010b7f6 1070
.org 0x10b7f8
	adds r0, r4, #0	@ 0010b7f8 201c
.org 0x10b7fa
	adds r0, #76	@ 0010b7fa 4c30
.org 0x10b7fc
	strb r5, [r0, #0]	@ 0010b7fc 0570
.org 0x10b7fe
	adds r2, #1	@ 0010b7fe 0132
.org 0x10b800
	ldrb r1, [r2, #0]	@ 0010b800 1178
.org 0x10b802
	movs r0, #17	@ 0010b802 1120
.org 0x10b804
	negs r0, r0	@ 0010b804 4042
.org 0x10b806
	ands r0, r1	@ 0010b806 0840
.org 0x10b808
	strb r0, [r2, #0]	@ 0010b808 1070
.org 0x10b80a
	ldrb r1, [r4, #10]	@ 0010b80a a17a
.org 0x10b80c
	movs r0, #239	@ 0010b80c ef20
.org 0x10b80e
	ands r0, r1	@ 0010b80e 0840
.org 0x10b810
	strb r0, [r4, #10]	@ 0010b810 a072
.org 0x10b812
	movs r0, #180	@ 0010b812 b420
.org 0x10b814
	lsls r0, r0, #9	@ 0010b814 4002
.org 0x10b816
	str r0, [r4, #84]	@ 0010b816 6065
.org 0x10b818
	ldrb r0, [r4, #17]	@ 0010b818 607c
.org 0x10b81a
	lsls r0, r0, #13	@ 0010b81a 4003
.org 0x10b81c
	movs r1, #160	@ 0010b81c a021
.org 0x10b81e
	lsls r1, r1, #6	@ 0010b81e 8901
.org 0x10b820
	adds r0, r0, r1	@ 0010b820 4018
.org 0x10b822
	str r0, [r4, #88]	@ 0010b822 a065
.org 0x10b824
	ldr r1, [pc, #28]	@ 0010b824 0749
.org 0x10b826
	ldrb r0, [r4, #9]	@ 0010b826 607a
.org 0x10b828
	lsls r0, r0, #2	@ 0010b828 8000
.org 0x10b82a
	adds r0, r0, r1	@ 0010b82a 4018
.org 0x10b82c
	movs r1, #1	@ 0010b82c 0121
.org 0x10b82e
	str r1, [r4, #12]	@ 0010b82e e160
.org 0x10b830
	ldr r0, [r0, #0]	@ 0010b830 0068
.org 0x10b832
	ldr r0, [r0, #4]	@ 0010b832 4068
.org 0x10b834
	str r0, [r4, #20]	@ 0010b834 6061
.org 0x10b836
	adds r0, r4, #0	@ 0010b836 201c
.org 0x10b838
	bl 0x10b774	@ 0010b838 fff79cff
.org 0x10b83c
	pop {r4, r5}	@ 0010b83c 30bc
.org 0x10b83e
	pop {r0}	@ 0010b83e 01bc
.org 0x10b840
	bx r0	@ 0010b840 0047
