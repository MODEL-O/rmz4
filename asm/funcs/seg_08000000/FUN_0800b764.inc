@ FUN_0800b764  entry 0x0800b764  size 176
.thumb
.org 0xb764
FUN_0800b764:
	push {r4, r5, r6, lr}	@ 0000b764 70b5
.org 0xb766
	sub sp, #8	@ 0000b766 82b0
.org 0xb768
	adds r4, r0, #0	@ 0000b768 041c
.org 0xb76a
	adds r6, r4, #0	@ 0000b76a 261c
.org 0xb76c
	adds r6, #20	@ 0000b76c 1436
.org 0xb76e
	ldr r2, [r4, #52]	@ 0000b76e 626b
.org 0xb770
	ldr r3, [r4, #56]	@ 0000b770 a36b
.org 0xb772
	ldr r1, [r4, #60]	@ 0000b772 e16b
.org 0xb774
	subs r1, r2, r1	@ 0000b774 511a
.org 0xb776
	adds r1, #15	@ 0000b776 0f31
.org 0xb778
	ldr r0, [r4, #64]	@ 0000b778 206c
.org 0xb77a
	subs r0, r3, r0	@ 0000b77a 181a
.org 0xb77c
	adds r5, r0, #0	@ 0000b77c 051c
.org 0xb77e
	adds r5, #15	@ 0000b77e 0f35
.org 0xb780
	ldr r0, [r4, #44]	@ 0000b780 e06a
.org 0xb782
	asrs r0, r0, #8	@ 0000b782 0012
.org 0xb784
	adds r0, r0, r2	@ 0000b784 8018
.org 0xb786
	str r0, [sp, #0]	@ 0000b786 0090
.org 0xb788
	ldr r0, [r4, #48]	@ 0000b788 206b
.org 0xb78a
	asrs r0, r0, #8	@ 0000b78a 0012
.org 0xb78c
	adds r0, r0, r3	@ 0000b78c c018
.org 0xb78e
	str r0, [sp, #4]	@ 0000b78e 0190
.org 0xb790
	cmp r1, #30	@ 0000b790 1e29
.org 0xb792
	bhi.n 0xb7a4	@ 0000b792 07d8
.org 0xb794
	cmp r5, #30	@ 0000b794 1e2d
.org 0xb796
	bhi.n 0xb7a4	@ 0000b796 05d8
.org 0xb798
	ldr r3, [pc, #48]	@ 0000b798 0c4b
.org 0xb79a
	ldr r1, [pc, #52]	@ 0000b79a 0d49
.org 0xb79c
	adds r0, r3, r1	@ 0000b79c 5818
.org 0xb79e
	ldrb r0, [r0, #0]	@ 0000b79e 0078
.org 0xb7a0
	cmp r0, #0	@ 0000b7a0 0028
.org 0xb7a2
	beq.n 0xb7dc	@ 0000b7a2 1bd0
.org 0xb7a4
	ldr r0, [r4, #92]	@ 0000b7a4 e06d
.org 0xb7a6
	lsrs r0, r0, #4	@ 0000b7a6 0009
.org 0xb7a8
	lsls r0, r0, #1	@ 0000b7a8 4000
.org 0xb7aa
	ldr r1, [pc, #40]	@ 0000b7aa 0a49
.org 0xb7ac
	adds r0, r0, r1	@ 0000b7ac 4018
.org 0xb7ae
	ldrh r0, [r0, #0]	@ 0000b7ae 0088
.org 0xb7b0
	movs r2, #248	@ 0000b7b0 f822
.org 0xb7b2
	lsls r2, r2, #5	@ 0000b7b2 5201
.org 0xb7b4
	ands r2, r0	@ 0000b7b4 0240
.org 0xb7b6
	lsls r2, r2, #3	@ 0000b7b6 d200
.org 0xb7b8
	movs r0, #192	@ 0000b7b8 c020
.org 0xb7ba
	lsls r0, r0, #19	@ 0000b7ba c004
.org 0xb7bc
	adds r2, r2, r0	@ 0000b7bc 1218
.org 0xb7be
	ldr r3, [pc, #24]	@ 0000b7be 064b
.org 0xb7c0
	adds r0, r6, #0	@ 0000b7c0 301c
.org 0xb7c2
	mov r1, sp	@ 0000b7c2 6946
.org 0xb7c4
	bl 0x5050	@ 0000b7c4 f9f744fc
.org 0xb7c8
	b.n 0xb804	@ 0000b7c8 1ce0
.org 0xb7ca
	.byte 0x00	@ 0000b7ca data
.org 0xb7cb
	.byte 0x00	@ 0000b7cb data
.org 0xb7cc
	.byte 0xb0,0x0a,0x00,0x02	@ 0000b7cc data
.org 0xb7d0
	.byte 0x2d,0xd0,0x02,0x00	@ 0000b7d0 data
.org 0xb7d4
	.byte 0x04,0x0a,0x00,0x02	@ 0000b7d4 data
.org 0xb7d8
	.byte 0x90,0x12,0x00,0x02	@ 0000b7d8 data
.org 0xb7dc
	ldr r0, [r4, #92]	@ 0000b7dc e06d
.org 0xb7de
	lsrs r0, r0, #4	@ 0000b7de 0009
.org 0xb7e0
	lsls r0, r0, #1	@ 0000b7e0 4000
.org 0xb7e2
	ldr r1, [pc, #68]	@ 0000b7e2 1149
.org 0xb7e4
	adds r0, r0, r1	@ 0000b7e4 4018
.org 0xb7e6
	ldrh r0, [r0, #0]	@ 0000b7e6 0088
.org 0xb7e8
	movs r2, #248	@ 0000b7e8 f822
.org 0xb7ea
	lsls r2, r2, #5	@ 0000b7ea 5201
.org 0xb7ec
	ands r2, r0	@ 0000b7ec 0240
.org 0xb7ee
	lsls r2, r2, #3	@ 0000b7ee d200
.org 0xb7f0
	movs r0, #192	@ 0000b7f0 c020
.org 0xb7f2
	lsls r0, r0, #19	@ 0000b7f2 c004
.org 0xb7f4
	adds r2, r2, r0	@ 0000b7f4 1218
.org 0xb7f6
	movs r0, #252	@ 0000b7f6 fc20
.org 0xb7f8
	lsls r0, r0, #3	@ 0000b7f8 c000
.org 0xb7fa
	adds r3, r3, r0	@ 0000b7fa 1b18
.org 0xb7fc
	adds r0, r6, #0	@ 0000b7fc 301c
.org 0xb7fe
	mov r1, sp	@ 0000b7fe 6946
.org 0xb800
	bl 0x5124	@ 0000b800 f9f790fc
.org 0xb804
	ldr r0, [pc, #36]	@ 0000b804 0948
.org 0xb806
	ldr r1, [pc, #40]	@ 0000b806 0a49
.org 0xb808
	adds r0, r0, r1	@ 0000b808 4018
.org 0xb80a
	movs r1, #0	@ 0000b80a 0021
.org 0xb80c
	strb r1, [r0, #0]	@ 0000b80c 0170
.org 0xb80e
	ldr r1, [r4, #92]	@ 0000b80e e16d
.org 0xb810
	lsrs r1, r1, #4	@ 0000b810 0909
.org 0xb812
	lsls r1, r1, #2	@ 0000b812 8900
