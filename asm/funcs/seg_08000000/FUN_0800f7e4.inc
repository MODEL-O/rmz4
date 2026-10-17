@ FUN_0800f7e4  entry 0x0800f7e4  size 72
.thumb
.org 0xf7e4
FUN_0800f7e4:
	push {r4, lr}	@ 0000f7e4 10b5
.org 0xf7e6
	adds r3, r0, #0	@ 0000f7e6 031c
.org 0xf7e8
	ldrb r1, [r3, #14]	@ 0000f7e8 997b
.org 0xf7ea
	cmp r1, #0	@ 0000f7ea 0029
.org 0xf7ec
	bne.n 0xf7fc	@ 0000f7ec 06d1
.org 0xf7ee
	strh r1, [r3, #16]	@ 0000f7ee 1982
.org 0xf7f0
	str r1, [r3, #104]	@ 0000f7f0 9966
.org 0xf7f2
	adds r0, #108	@ 0000f7f2 6c30
.org 0xf7f4
	strh r1, [r0, #0]	@ 0000f7f4 0180
.org 0xf7f6
	ldrb r0, [r3, #14]	@ 0000f7f6 987b
.org 0xf7f8
	adds r0, #1	@ 0000f7f8 0130
.org 0xf7fa
	strb r0, [r3, #14]	@ 0000f7fa 9873
.org 0xf7fc
	adds r4, r3, #0	@ 0000f7fc 1c1c
.org 0xf7fe
	adds r4, #108	@ 0000f7fe 6c34
.org 0xf800
	ldrh r0, [r4, #0]	@ 0000f800 2088
.org 0xf802
	ldr r1, [r3, #104]	@ 0000f802 996e
.org 0xf804
	ldr r2, [r3, #52]	@ 0000f804 5a6b
.org 0xf806
	subs r1, r1, r2	@ 0000f806 891a
.org 0xf808
	lsls r1, r1, #4	@ 0000f808 0901
.org 0xf80a
	movs r2, #240	@ 0000f80a f022
.org 0xf80c
	lsls r2, r2, #4	@ 0000f80c 1201
.org 0xf80e
	adds r1, r1, r2	@ 0000f80e 8918
.org 0xf810
	cmp r0, r1	@ 0000f810 8842
.org 0xf812
	ble.n 0xf820	@ 0000f812 05dd
.org 0xf814
	movs r0, #0	@ 0000f814 0020
.org 0xf816
	strh r0, [r4, #0]	@ 0000f816 2080
.org 0xf818
	ldr r0, [r3, #52]	@ 0000f818 586b
.org 0xf81a
	ldr r1, [pc, #16]	@ 0000f81a 0449
.org 0xf81c
	ands r0, r1	@ 0000f81c 0840
.org 0xf81e
	str r0, [r3, #104]	@ 0000f81e 9866
.org 0xf820
	ldrh r0, [r4, #0]	@ 0000f820 2088
.org 0xf822
	adds r0, #2	@ 0000f822 0230
.org 0xf824
	strh r0, [r4, #0]	@ 0000f824 2080
.org 0xf826
	pop {r4}	@ 0000f826 10bc
.org 0xf828
	pop {r0}	@ 0000f828 01bc
.org 0xf82a
	bx r0	@ 0000f82a 0047
