@ FUN_080b96f4  entry 0x080b96f4  size 114
.thumb
.org 0xb96f4
FUN_080b96f4:
	push {r4, r5, r6, lr}	@ 000b96f4 70b5
.org 0xb96f6
	adds r4, r0, #0	@ 000b96f6 041c
.org 0xb96f8
	ldr r6, [r4, #40]	@ 000b96f8 a66a
.org 0xb96fa
	ldrb r5, [r4, #15]	@ 000b96fa e57b
.org 0xb96fc
	cmp r5, #0	@ 000b96fc 002d
.org 0xb96fe
	bne.n 0xb9730	@ 000b96fe 17d1
.org 0xb9700
	movs r0, #63	@ 000b9700 3f20
.org 0xb9702
	bl 0x2b10	@ 000b9702 49f705fa
.org 0xb9706
	adds r0, r4, #0	@ 000b9706 201c
.org 0xb9708
	bl 0xb9790	@ 000b9708 00f042f8
.org 0xb970c
	adds r0, r4, #0	@ 000b970c 201c
.org 0xb970e
	adds r0, #140	@ 000b970e 8c30
.org 0xb9710
	str r5, [r0, #0]	@ 000b9710 0560
.org 0xb9712
	adds r0, #4	@ 000b9712 0430
.org 0xb9714
	str r5, [r0, #0]	@ 000b9714 0560
.org 0xb9716
	adds r0, #4	@ 000b9716 0430
.org 0xb9718
	strb r5, [r0, #0]	@ 000b9718 0570
.org 0xb971a
	ldrb r1, [r4, #10]	@ 000b971a a17a
.org 0xb971c
	movs r0, #251	@ 000b971c fb20
.org 0xb971e
	ands r0, r1	@ 000b971e 0840
.org 0xb9720
	movs r1, #254	@ 000b9720 fe21
.org 0xb9722
	ands r0, r1	@ 000b9722 0840
.org 0xb9724
	strb r0, [r4, #10]	@ 000b9724 a072
.org 0xb9726
	movs r0, #64	@ 000b9726 4020
.org 0xb9728
	strb r0, [r4, #18]	@ 000b9728 a074
.org 0xb972a
	ldrb r0, [r4, #15]	@ 000b972a e07b
.org 0xb972c
	adds r0, #1	@ 000b972c 0130
.org 0xb972e
	strb r0, [r4, #15]	@ 000b972e e073
.org 0xb9730
	ldrb r0, [r4, #18]	@ 000b9730 a07c
.org 0xb9732
	subs r0, #1	@ 000b9732 0138
.org 0xb9734
	strb r0, [r4, #18]	@ 000b9734 a074
.org 0xb9736
	lsls r0, r0, #24	@ 000b9736 0006
.org 0xb9738
	cmp r0, #0	@ 000b9738 0028
.org 0xb973a
	bne.n 0xb9760	@ 000b973a 11d1
.org 0xb973c
	adds r1, r6, #0	@ 000b973c 311c
.org 0xb973e
	adds r1, #204	@ 000b973e cc31
.org 0xb9740
	ldrh r2, [r1, #0]	@ 000b9740 0a88
.org 0xb9742
	movs r3, #0	@ 000b9742 0023
.org 0xb9744
	ldrsh r0, [r1, r3]	@ 000b9744 c85e
.org 0xb9746
	cmp r0, #0	@ 000b9746 0028
.org 0xb9748
	beq.n 0xb974e	@ 000b9748 01d0
.org 0xb974a
	subs r0, r2, #1	@ 000b974a 501e
.org 0xb974c
	strh r0, [r1, #0]	@ 000b974c 0880
.org 0xb974e
	ldr r1, [pc, #24]	@ 000b974e 0649
.org 0xb9750
	ldrb r0, [r4, #9]	@ 000b9750 607a
.org 0xb9752
	lsls r0, r0, #2	@ 000b9752 8000
.org 0xb9754
	adds r0, r0, r1	@ 000b9754 4018
.org 0xb9756
	movs r1, #4	@ 000b9756 0421
.org 0xb9758
	str r1, [r4, #12]	@ 000b9758 e160
.org 0xb975a
	ldr r0, [r0, #0]	@ 000b975a 0068
.org 0xb975c
	ldr r0, [r0, #16]	@ 000b975c 0069
.org 0xb975e
	str r0, [r4, #20]	@ 000b975e 6061
.org 0xb9760
	pop {r4, r5, r6}	@ 000b9760 70bc
.org 0xb9762
	pop {r0}	@ 000b9762 01bc
.org 0xb9764
	bx r0	@ 000b9764 0047
