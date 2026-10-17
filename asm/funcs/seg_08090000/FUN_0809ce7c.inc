@ FUN_0809ce7c  entry 0x0809ce7c  size 190
.thumb
.org 0x9ce7c
FUN_0809ce7c:
	push {r4, r5, r6, r7, lr}	@ 0009ce7c f0b5
.org 0x9ce7e
	adds r6, r0, #0	@ 0009ce7e 061c
.org 0x9ce80
	ldr r7, [r6, #40]	@ 0009ce80 b76a
.org 0x9ce82
	bl 0x1cc9c	@ 0009ce82 7ff70bff
.org 0x9ce86
	ldrb r1, [r6, #10]	@ 0009ce86 b17a
.org 0x9ce88
	movs r0, #1	@ 0009ce88 0120
.org 0x9ce8a
	movs r5, #0	@ 0009ce8a 0025
.org 0x9ce8c
	orrs r0, r1	@ 0009ce8c 0843
.org 0x9ce8e
	movs r1, #2	@ 0009ce8e 0221
.org 0x9ce90
	orrs r0, r1	@ 0009ce90 0843
.org 0x9ce92
	strb r0, [r6, #10]	@ 0009ce92 b072
.org 0x9ce94
	adds r0, r6, #0	@ 0009ce94 301c
.org 0x9ce96
	bl 0x1ceec	@ 0009ce96 80f729f8
.org 0x9ce9a
	ldr r0, [pc, #68]	@ 0009ce9a 1148
.org 0x9ce9c
	adds r1, r0, #0	@ 0009ce9c 011c
.org 0x9ce9e
	ldrb r0, [r6, #17]	@ 0009ce9e 707c
.org 0x9cea0
	adds r1, r1, r0	@ 0009cea0 0918
.org 0x9cea2
	lsls r1, r1, #16	@ 0009cea2 0904
.org 0x9cea4
	lsrs r1, r1, #16	@ 0009cea4 090c
.org 0x9cea6
	adds r0, r6, #0	@ 0009cea6 301c
.org 0x9cea8
	bl 0x1cf00	@ 0009cea8 80f72af8
.org 0x9ceac
	adds r0, r6, #0	@ 0009ceac 301c
.org 0x9ceae
	bl 0x1cff0	@ 0009ceae 80f79ff8
.org 0x9ceb2
	ldrb r1, [r6, #10]	@ 0009ceb2 b17a
.org 0x9ceb4
	movs r0, #4	@ 0009ceb4 0420
.org 0x9ceb6
	orrs r0, r1	@ 0009ceb6 0843
.org 0x9ceb8
	strb r0, [r6, #10]	@ 0009ceb8 b072
.org 0x9ceba
	adds r4, r6, #0	@ 0009ceba 341c
.org 0x9cebc
	adds r4, #116	@ 0009cebc 7434
.org 0x9cebe
	ldr r1, [pc, #36]	@ 0009cebe 0949
.org 0x9cec0
	adds r2, r6, #0	@ 0009cec0 321c
.org 0x9cec2
	adds r2, #84	@ 0009cec2 5432
.org 0x9cec4
	adds r0, r4, #0	@ 0009cec4 201c
.org 0x9cec6
	movs r3, #8	@ 0009cec6 0823
.org 0x9cec8
	bl 0x5760	@ 0009cec8 68f74afc
.org 0x9cecc
	str r6, [r4, #44]	@ 0009cecc e662
.org 0x9cece
	str r5, [r4, #36]	@ 0009cece 6562
.org 0x9ced0
	ldrb r0, [r6, #17]	@ 0009ced0 707c
.org 0x9ced2
	cmp r0, #0	@ 0009ced2 0028
.org 0x9ced4
	beq.n 0x9cef0	@ 0009ced4 0cd0
.org 0x9ced6
	ldr r0, [pc, #16]	@ 0009ced6 0448
.org 0x9ced8
	str r0, [r6, #92]	@ 0009ced8 f065
.org 0x9ceda
	ldr r0, [pc, #16]	@ 0009ceda 0448
.org 0x9cedc
	b.n 0x9cefa	@ 0009cedc 0de0
.org 0x9cede
	.byte 0x00	@ 0009cede data
.org 0x9cedf
	.byte 0x00	@ 0009cedf data
.org 0x9cee0
	.byte 0x26,0xa9,0x00,0x00	@ 0009cee0 data
.org 0x9cee4
	.byte 0x90,0x14,0x86,0x08	@ 0009cee4 data
.org 0x9cee8
	.byte 0x00,0xfd,0xff,0xff	@ 0009cee8 data
.org 0x9ceec
	.byte 0x00,0xe4,0xff,0xff	@ 0009ceec data
.org 0x9cef0
	movs r0, #192	@ 0009cef0 c020
.org 0x9cef2
	lsls r0, r0, #2	@ 0009cef2 8000
.org 0x9cef4
	str r0, [r6, #92]	@ 0009cef4 f065
.org 0x9cef6
	movs r0, #224	@ 0009cef6 e020
.org 0x9cef8
	lsls r0, r0, #5	@ 0009cef8 4001
.org 0x9cefa
	str r0, [r6, #100]	@ 0009cefa 7066
.org 0x9cefc
	movs r0, #192	@ 0009cefc c020
.org 0x9cefe
	lsls r0, r0, #2	@ 0009cefe 8000
.org 0x9cf00
	str r0, [r6, #96]	@ 0009cf00 3066
.org 0x9cf02
	movs r0, #0	@ 0009cf02 0020
.org 0x9cf04
	str r0, [r6, #104]	@ 0009cf04 b066
.org 0x9cf06
	adds r1, r6, #0	@ 0009cf06 311c
.org 0x9cf08
	adds r1, #180	@ 0009cf08 b431
.org 0x9cf0a
	ldr r0, [r6, #84]	@ 0009cf0a 706d
.org 0x9cf0c
	str r0, [r1, #0]	@ 0009cf0c 0860
.org 0x9cf0e
	adds r1, #4	@ 0009cf0e 0431
.org 0x9cf10
	ldr r0, [r6, #88]	@ 0009cf10 b06d
.org 0x9cf12
	str r0, [r1, #0]	@ 0009cf12 0860
.org 0x9cf14
	adds r2, r6, #0	@ 0009cf14 321c
.org 0x9cf16
	adds r2, #188	@ 0009cf16 bc32
.org 0x9cf18
	ldr r0, [r6, #84]	@ 0009cf18 706d
.org 0x9cf1a
	ldr r1, [r7, #84]	@ 0009cf1a 796d
.org 0x9cf1c
	subs r0, r0, r1	@ 0009cf1c 401a
.org 0x9cf1e
	str r0, [r2, #0]	@ 0009cf1e 1060
.org 0x9cf20
	adds r2, #4	@ 0009cf20 0432
.org 0x9cf22
	ldr r0, [r6, #88]	@ 0009cf22 b06d
.org 0x9cf24
	ldr r1, [r7, #88]	@ 0009cf24 b96d
.org 0x9cf26
	subs r0, r0, r1	@ 0009cf26 401a
.org 0x9cf28
	str r0, [r2, #0]	@ 0009cf28 1060
.org 0x9cf2a
	movs r0, #80	@ 0009cf2a 5020
.org 0x9cf2c
	strb r0, [r6, #18]	@ 0009cf2c b074
.org 0x9cf2e
	ldr r1, [pc, #28]	@ 0009cf2e 0749
.org 0x9cf30
	ldrb r0, [r6, #9]	@ 0009cf30 707a
.org 0x9cf32
	lsls r0, r0, #2	@ 0009cf32 8000
.org 0x9cf34
	adds r0, r0, r1	@ 0009cf34 4018
.org 0x9cf36
	movs r1, #1	@ 0009cf36 0121
.org 0x9cf38
	str r1, [r6, #12]	@ 0009cf38 f160
