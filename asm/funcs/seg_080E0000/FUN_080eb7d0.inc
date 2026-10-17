@ FUN_080eb7d0  entry 0x080eb7d0  size 142
.thumb
.org 0xeb7d0
FUN_080eb7d0:
	push {r4, lr}	@ 000eb7d0 10b5
.org 0xeb7d2
	adds r4, r0, #0	@ 000eb7d2 041c
.org 0xeb7d4
	ldrb r0, [r4, #14]	@ 000eb7d4 a07b
.org 0xeb7d6
	cmp r0, #1	@ 000eb7d6 0128
.org 0xeb7d8
	beq.n 0xeb806	@ 000eb7d8 15d0
.org 0xeb7da
	cmp r0, #1	@ 000eb7da 0128
.org 0xeb7dc
	bgt.n 0xeb7e4	@ 000eb7dc 02dc
.org 0xeb7de
	cmp r0, #0	@ 000eb7de 0028
.org 0xeb7e0
	beq.n 0xeb7ea	@ 000eb7e0 03d0
.org 0xeb7e2
	b.n 0xeb860	@ 000eb7e2 3de0
.org 0xeb7e4
	cmp r0, #2	@ 000eb7e4 0228
.org 0xeb7e6
	beq.n 0xeb848	@ 000eb7e6 2fd0
.org 0xeb7e8
	b.n 0xeb860	@ 000eb7e8 3ae0
.org 0xeb7ea
	ldr r1, [pc, #84]	@ 000eb7ea 1549
.org 0xeb7ec
	ldrb r0, [r4, #16]	@ 000eb7ec 207c
.org 0xeb7ee
	lsls r0, r0, #3	@ 000eb7ee c000
.org 0xeb7f0
	adds r1, #4	@ 000eb7f0 0431
.org 0xeb7f2
	adds r0, r0, r1	@ 000eb7f2 4018
.org 0xeb7f4
	ldrh r1, [r0, #0]	@ 000eb7f4 0188
.org 0xeb7f6
	adds r0, r4, #0	@ 000eb7f6 201c
.org 0xeb7f8
	bl 0x1cf00	@ 000eb7f8 31f782fb
.org 0xeb7fc
	movs r0, #30	@ 000eb7fc 1e20
.org 0xeb7fe
	strb r0, [r4, #18]	@ 000eb7fe a074
.org 0xeb800
	ldrb r0, [r4, #14]	@ 000eb800 a07b
.org 0xeb802
	adds r0, #1	@ 000eb802 0130
.org 0xeb804
	strb r0, [r4, #14]	@ 000eb804 a073
.org 0xeb806
	adds r0, r4, #0	@ 000eb806 201c
.org 0xeb808
	bl 0x1cff0	@ 000eb808 31f7f2fb
.org 0xeb80c
	ldrb r0, [r4, #18]	@ 000eb80c a07c
.org 0xeb80e
	subs r0, #1	@ 000eb80e 0138
.org 0xeb810
	strb r0, [r4, #18]	@ 000eb810 a074
.org 0xeb812
	lsls r0, r0, #24	@ 000eb812 0006
.org 0xeb814
	cmp r0, #0	@ 000eb814 0028
.org 0xeb816
	bne.n 0xeb860	@ 000eb816 23d1
.org 0xeb818
	ldr r1, [pc, #40]	@ 000eb818 0a49
.org 0xeb81a
	ldrb r0, [r4, #16]	@ 000eb81a 207c
.org 0xeb81c
	lsls r0, r0, #2	@ 000eb81c 8000
.org 0xeb81e
	adds r1, #2	@ 000eb81e 0231
.org 0xeb820
	adds r0, r0, r1	@ 000eb820 4018
.org 0xeb822
	ldrh r0, [r0, #0]	@ 000eb822 0088
.org 0xeb824
	bl 0x2b10	@ 000eb824 17f774f9
.org 0xeb828
	ldr r1, [pc, #20]	@ 000eb828 0549
.org 0xeb82a
	ldrb r0, [r4, #16]	@ 000eb82a 207c
.org 0xeb82c
	lsls r0, r0, #3	@ 000eb82c c000
.org 0xeb82e
	adds r1, #6	@ 000eb82e 0631
.org 0xeb830
	adds r0, r0, r1	@ 000eb830 4018
.org 0xeb832
	ldrh r1, [r0, #0]	@ 000eb832 0188
.org 0xeb834
	adds r0, r4, #0	@ 000eb834 201c
.org 0xeb836
	bl 0x1cf00	@ 000eb836 31f763fb
.org 0xeb83a
	ldrb r0, [r4, #14]	@ 000eb83a a07b
.org 0xeb83c
	adds r0, #1	@ 000eb83c 0130
.org 0xeb83e
	b.n 0xeb85e	@ 000eb83e 0ee0
.org 0xeb840
	.byte 0xd4,0x96,0x86,0x08	@ 000eb840 data
.org 0xeb844
	.byte 0x14,0x97,0x86,0x08	@ 000eb844 data
.org 0xeb848
	adds r0, r4, #0	@ 000eb848 201c
.org 0xeb84a
	bl 0x1cff0	@ 000eb84a 31f7d1fb
.org 0xeb84e
	adds r0, r4, #0	@ 000eb84e 201c
.org 0xeb850
	adds r0, #115	@ 000eb850 7330
.org 0xeb852
	ldrb r0, [r0, #0]	@ 000eb852 0078
.org 0xeb854
	cmp r0, #3	@ 000eb854 0328
.org 0xeb856
	bne.n 0xeb860	@ 000eb856 03d1
.org 0xeb858
	movs r0, #0	@ 000eb858 0020
.org 0xeb85a
	strb r0, [r4, #13]	@ 000eb85a 6073
.org 0xeb85c
	strb r0, [r4, #15]	@ 000eb85c e073
