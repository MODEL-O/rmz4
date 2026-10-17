@ FUN_080566c8  entry 0x080566c8  size 114
.thumb
.org 0x566c8
FUN_080566c8:
	push {r4, lr}	@ 000566c8 10b5
.org 0x566ca
	adds r4, r0, #0	@ 000566ca 041c
.org 0x566cc
	ldrb r0, [r4, #15]	@ 000566cc e07b
.org 0x566ce
	cmp r0, #0	@ 000566ce 0028
.org 0x566d0
	bne.n 0x566e0	@ 000566d0 06d1
.org 0x566d2
	ldr r1, [pc, #104]	@ 000566d2 1a49
.org 0x566d4
	adds r0, r4, #0	@ 000566d4 201c
.org 0x566d6
	bl 0x1cf00	@ 000566d6 c6f713fc
.org 0x566da
	ldrb r0, [r4, #15]	@ 000566da e07b
.org 0x566dc
	adds r0, #1	@ 000566dc 0130
.org 0x566de
	strb r0, [r4, #15]	@ 000566de e073
.org 0x566e0
	adds r0, r4, #0	@ 000566e0 201c
.org 0x566e2
	bl 0x1cff0	@ 000566e2 c6f785fc
.org 0x566e6
	adds r0, r4, #0	@ 000566e6 201c
.org 0x566e8
	adds r0, #116	@ 000566e8 7430
.org 0x566ea
	ldr r3, [pc, #84]	@ 000566ea 154b
.org 0x566ec
	ldrb r1, [r4, #30]	@ 000566ec a17f
.org 0x566ee
	lsls r1, r1, #8	@ 000566ee 0902
.org 0x566f0
	adds r2, r4, #0	@ 000566f0 221c
.org 0x566f2
	adds r2, #112	@ 000566f2 7032
.org 0x566f4
	ldrb r2, [r2, #0]	@ 000566f4 1278
.org 0x566f6
	orrs r1, r2	@ 000566f6 1143
.org 0x566f8
	ldr r2, [pc, #72]	@ 000566f8 124a
.org 0x566fa
	adds r1, r1, r2	@ 000566fa 8918
.org 0x566fc
	lsls r1, r1, #2	@ 000566fc 8900
.org 0x566fe
	adds r1, r1, r3	@ 000566fe c918
.org 0x56700
	adds r2, r4, #0	@ 00056700 221c
.org 0x56702
	adds r2, #113	@ 00056702 7132
.org 0x56704
	ldrb r2, [r2, #0]	@ 00056704 1278
.org 0x56706
	lsls r2, r2, #24	@ 00056706 1206
.org 0x56708
	asrs r2, r2, #24	@ 00056708 1216
.org 0x5670a
	ldr r1, [r1, #0]	@ 0005670a 0968
.org 0x5670c
	lsls r2, r2, #2	@ 0005670c 9200
.org 0x5670e
	adds r2, r2, r1	@ 0005670e 5218
.org 0x56710
	ldr r1, [r2, #0]	@ 00056710 1168
.org 0x56712
	ldrb r2, [r1, #0]	@ 00056712 0a78
.org 0x56714
	lsls r1, r2, #1	@ 00056714 5100
.org 0x56716
	adds r1, r1, r2	@ 00056716 8918
.org 0x56718
	lsls r1, r1, #3	@ 00056718 c900
.org 0x5671a
	ldr r2, [pc, #44]	@ 0005671a 0b4a
.org 0x5671c
	adds r1, r1, r2	@ 0005671c 8918
.org 0x5671e
	bl 0x5784	@ 0005671e aff731f8
.org 0x56722
	adds r0, r4, #0	@ 00056722 201c
.org 0x56724
	adds r0, #115	@ 00056724 7330
.org 0x56726
	ldrb r0, [r0, #0]	@ 00056726 0078
.org 0x56728
	cmp r0, #3	@ 00056728 0328
.org 0x5672a
	bne.n 0x56734	@ 0005672a 03d1
.org 0x5672c
	movs r1, #0	@ 0005672c 0021
.org 0x5672e
	movs r0, #1	@ 0005672e 0120
.org 0x56730
	strb r0, [r4, #14]	@ 00056730 a073
.org 0x56732
	strb r1, [r4, #15]	@ 00056732 e173
.org 0x56734
	pop {r4}	@ 00056734 10bc
.org 0x56736
	pop {r0}	@ 00056736 01bc
.org 0x56738
	bx r0	@ 00056738 0047
