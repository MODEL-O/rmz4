@ FUN_080dff98  entry 0x080dff98  size 216
.thumb
.org 0xdff98
FUN_080dff98:
	push {r4, r5, r6, r7, lr}	@ 000dff98 f0b5
.org 0xdff9a
	adds r5, r0, #0	@ 000dff9a 051c
.org 0xdff9c
	bl 0x1cc9c	@ 000dff9c 3cf77efe
.org 0xdffa0
	ldrb r0, [r5, #10]	@ 000dffa0 a87a
.org 0xdffa2
	movs r4, #1	@ 000dffa2 0124
.org 0xdffa4
	movs r6, #0	@ 000dffa4 0026
.org 0xdffa6
	orrs r0, r4	@ 000dffa6 2043
.org 0xdffa8
	movs r1, #2	@ 000dffa8 0221
.org 0xdffaa
	orrs r0, r1	@ 000dffaa 0843
.org 0xdffac
	strb r0, [r5, #10]	@ 000dffac a872
.org 0xdffae
	movs r1, #133	@ 000dffae 8521
.org 0xdffb0
	lsls r1, r1, #8	@ 000dffb0 0902
.org 0xdffb2
	adds r0, r5, #0	@ 000dffb2 281c
.org 0xdffb4
	bl 0x1cf00	@ 000dffb4 3cf7a4ff
.org 0xdffb8
	adds r0, r5, #0	@ 000dffb8 281c
.org 0xdffba
	bl 0x1cff0	@ 000dffba 3df719f8
.org 0xdffbe
	ldr r2, [pc, #32]	@ 000dffbe 084a
.org 0xdffc0
	ldr r1, [r2, #0]	@ 000dffc0 1168
.org 0xdffc2
	ldr r0, [pc, #32]	@ 000dffc2 0848
.org 0xdffc4
	muls r0, r1	@ 000dffc4 4843
.org 0xdffc6
	ldr r1, [pc, #32]	@ 000dffc6 0849
.org 0xdffc8
	adds r0, r0, r1	@ 000dffc8 4018
.org 0xdffca
	lsls r0, r0, #1	@ 000dffca 4000
.org 0xdffcc
	lsrs r1, r0, #1	@ 000dffcc 4108
.org 0xdffce
	str r1, [r2, #0]	@ 000dffce 1160
.org 0xdffd0
	lsrs r2, r0, #17	@ 000dffd0 420c
.org 0xdffd2
	ands r2, r4	@ 000dffd2 2240
.org 0xdffd4
	cmp r2, #0	@ 000dffd4 002a
.org 0xdffd6
	beq.n 0xdffec	@ 000dffd6 09d0
.org 0xdffd8
	ldrb r0, [r5, #10]	@ 000dffd8 a87a
.org 0xdffda
	movs r1, #16	@ 000dffda 1021
.org 0xdffdc
	orrs r0, r1	@ 000dffdc 0843
.org 0xdffde
	b.n 0xdfff2	@ 000dffde 08e0
.org 0xdffe0
	.byte 0x38,0xdc,0x02,0x02	@ 000dffe0 data
.org 0xdffe4
	.byte 0xfd,0x43,0x03,0x00	@ 000dffe4 data
.org 0xdffe8
	.byte 0xc3,0x9e,0x26,0x00	@ 000dffe8 data
.org 0xdffec
	ldrb r1, [r5, #10]	@ 000dffec a97a
.org 0xdffee
	movs r0, #239	@ 000dffee ef20
.org 0xdfff0
	ands r0, r1	@ 000dfff0 0840
.org 0xdfff2
	strb r0, [r5, #10]	@ 000dfff2 a872
.org 0xdfff4
	movs r7, #1	@ 000dfff4 0127
.org 0xdfff6
	mov ip, r7	@ 000dfff6 bc46
.org 0xdfff8
	mov r1, ip	@ 000dfff8 6146
.org 0xdfffa
	ands r1, r2	@ 000dfffa 1140
.org 0xdfffc
	adds r0, r5, #0	@ 000dfffc 281c
.org 0xdfffe
	adds r0, #76	@ 000dfffe 4c30
.org 0xe0000
	strb r1, [r0, #0]	@ 000e0000 0170
.org 0xe0002
	adds r3, r5, #0	@ 000e0002 2b1c
.org 0xe0004
	adds r3, #74	@ 000e0004 4a33
.org 0xe0006
	lsls r1, r1, #4	@ 000e0006 0901
.org 0xe0008
	ldrb r2, [r3, #0]	@ 000e0008 1a78
.org 0xe000a
	movs r0, #17	@ 000e000a 1120
.org 0xe000c
	negs r0, r0	@ 000e000c 4042
.org 0xe000e
	ands r0, r2	@ 000e000e 1040
.org 0xe0010
	orrs r0, r1	@ 000e0010 0843
.org 0xe0012
	strb r0, [r3, #0]	@ 000e0012 1870
.org 0xe0014
	ldr r0, [r5, #84]	@ 000e0014 686d
.org 0xe0016
	str r0, [r5, #116]	@ 000e0016 6867
.org 0xe0018
	ldr r0, [r5, #88]	@ 000e0018 a86d
.org 0xe001a
	str r0, [r5, #120]	@ 000e001a a867
.org 0xe001c
	ldr r4, [pc, #92]	@ 000e001c 174c
.org 0xe001e
	ldr r0, [r4, #0]	@ 000e001e 2068
.org 0xe0020
	ldr r3, [pc, #92]	@ 000e0020 174b
.org 0xe0022
	muls r0, r3	@ 000e0022 5843
.org 0xe0024
	ldr r2, [pc, #92]	@ 000e0024 174a
.org 0xe0026
	adds r0, r0, r2	@ 000e0026 8018
.org 0xe0028
	lsls r0, r0, #1	@ 000e0028 4000
.org 0xe002a
	lsrs r1, r0, #1	@ 000e002a 4108
.org 0xe002c
	lsls r0, r0, #6	@ 000e002c 8001
.org 0xe002e
	lsrs r0, r0, #23	@ 000e002e c00d
.org 0xe0030
	adds r7, #255	@ 000e0030 ff37
.org 0xe0032
	adds r6, r0, r7	@ 000e0032 c619
.org 0xe0034
	str r6, [r5, #92]	@ 000e0034 ee65
.org 0xe0036
	adds r0, r1, #0	@ 000e0036 081c
.org 0xe0038
	muls r0, r3	@ 000e0038 5843
.org 0xe003a
	adds r0, r0, r2	@ 000e003a 8018
.org 0xe003c
	lsls r0, r0, #1	@ 000e003c 4000
.org 0xe003e
	lsrs r1, r0, #1	@ 000e003e 4108
.org 0xe0040
	str r1, [r4, #0]	@ 000e0040 2160
.org 0xe0042
	lsrs r0, r0, #17	@ 000e0042 400c
.org 0xe0044
	movs r1, #7	@ 000e0044 0721
.org 0xe0046
	ands r0, r1	@ 000e0046 0840
.org 0xe0048
	adds r0, #12	@ 000e0048 0c30
.org 0xe004a
	str r0, [r5, #104]	@ 000e004a a866
.org 0xe004c
	lsls r1, r0, #4	@ 000e004c 0101
.org 0xe004e
	subs r1, r1, r0	@ 000e004e 091a
.org 0xe0050
	lsls r1, r1, #1	@ 000e0050 4900
.org 0xe0052
	str r1, [r5, #96]	@ 000e0052 2966
.org 0xe0054
	ldrb r0, [r5, #17]	@ 000e0054 687c
.org 0xe0056
	cmp r0, #0	@ 000e0056 0028
.org 0xe0058
	bne.n 0xe005e	@ 000e0058 01d1
.org 0xe005a
	negs r0, r6	@ 000e005a 7042
.org 0xe005c
	str r0, [r5, #92]	@ 000e005c e865
.org 0xe005e
	ldr r1, [pc, #40]	@ 000e005e 0a49
.org 0xe0060
	ldrb r0, [r5, #9]	@ 000e0060 687a
.org 0xe0062
	lsls r0, r0, #2	@ 000e0062 8000
.org 0xe0064
	adds r0, r0, r1	@ 000e0064 4018
.org 0xe0066
	mov r1, ip	@ 000e0066 6146
.org 0xe0068
	str r1, [r5, #12]	@ 000e0068 e960
.org 0xe006a
	ldr r0, [r0, #0]	@ 000e006a 0068
.org 0xe006c
	ldr r0, [r0, #4]	@ 000e006c 4068
.org 0xe006e
	str r0, [r5, #20]	@ 000e006e 6861
