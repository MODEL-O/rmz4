@ FUN_08032724  entry 0x08032724  size 90
.thumb
.org 0x32724
FUN_08032724:
	push {r4, lr}	@ 00032724 10b5
.org 0x32726
	adds r4, r0, #0	@ 00032726 041c
.org 0x32728
	adds r0, #113	@ 00032728 7130
.org 0x3272a
	ldrb r0, [r0, #0]	@ 0003272a 0078
.org 0x3272c
	lsls r0, r0, #24	@ 0003272c 0006
.org 0x3272e
	asrs r0, r0, #24	@ 0003272e 0016
.org 0x32730
	cmp r0, #0	@ 00032730 0028
.org 0x32732
	beq.n 0x32778	@ 00032732 21d0
.org 0x32734
	ldrb r1, [r4, #10]	@ 00032734 a17a
.org 0x32736
	movs r0, #254	@ 00032736 fe20
.org 0x32738
	ands r0, r1	@ 00032738 0840
.org 0x3273a
	strb r0, [r4, #10]	@ 0003273a a072
.org 0x3273c
	movs r0, #184	@ 0003273c b820
.org 0x3273e
	lsls r0, r0, #1	@ 0003273e 4000
.org 0x32740
	adds r1, r4, r0	@ 00032740 2118
.org 0x32742
	movs r0, #1	@ 00032742 0120
.org 0x32744
	strb r0, [r1, #0]	@ 00032744 0870
.org 0x32746
	ldr r0, [pc, #56]	@ 00032746 0e48
.org 0x32748
	ldr r1, [pc, #56]	@ 00032748 0e49
.org 0x3274a
	ldrh r1, [r1, #30]	@ 0003274a c98b
.org 0x3274c
	ldrh r2, [r0, #6]	@ 0003274c c288
.org 0x3274e
	lsrs r2, r2, #6	@ 0003274e 9209
.org 0x32750
	subs r1, r1, r2	@ 00032750 891a
.org 0x32752
	lsls r1, r1, #5	@ 00032752 4901
.org 0x32754
	movs r2, #128	@ 00032754 8022
.org 0x32756
	lsls r2, r2, #9	@ 00032756 5202
.org 0x32758
	adds r1, r1, r2	@ 00032758 8918
.org 0x3275a
	bl 0x1ea4	@ 0003275a cff7a3fb
.org 0x3275e
	ldr r0, [pc, #40]	@ 0003275e 0a48
.org 0x32760
	ldr r1, [pc, #40]	@ 00032760 0a49
.org 0x32762
	ldrh r1, [r1, #30]	@ 00032762 c98b
.org 0x32764
	ldrb r2, [r0, #7]	@ 00032764 c279
.org 0x32766
	subs r1, r1, r2	@ 00032766 891a
.org 0x32768
	lsls r1, r1, #5	@ 00032768 4901
.org 0x3276a
	movs r2, #128	@ 0003276a 8022
.org 0x3276c
	lsls r2, r2, #2	@ 0003276c 9200
.org 0x3276e
	adds r1, r1, r2	@ 0003276e 8918
.org 0x32770
	bl 0x2208	@ 00032770 cff74afd
.org 0x32774
	movs r0, #2	@ 00032774 0220
.org 0x32776
	strb r0, [r4, #15]	@ 00032776 e073
.org 0x32778
	pop {r4}	@ 00032778 10bc
.org 0x3277a
	pop {r0}	@ 0003277a 01bc
.org 0x3277c
	bx r0	@ 0003277c 0047
