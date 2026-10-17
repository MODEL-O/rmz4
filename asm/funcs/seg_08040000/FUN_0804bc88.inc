@ FUN_0804bc88  entry 0x0804bc88  size 144
.thumb
.org 0x4bc88
FUN_0804bc88:
	push {r4, r5, r6, r7, lr}	@ 0004bc88 f0b5
.org 0x4bc8a
	adds r4, r0, #0	@ 0004bc8a 041c
.org 0x4bc8c
	adds r7, r1, #0	@ 0004bc8c 0f1c
.org 0x4bc8e
	lsls r2, r2, #24	@ 0004bc8e 1206
.org 0x4bc90
	lsrs r6, r2, #24	@ 0004bc90 160e
.org 0x4bc92
	lsls r3, r3, #24	@ 0004bc92 1b06
.org 0x4bc94
	lsrs r5, r3, #24	@ 0004bc94 1d0e
.org 0x4bc96
	ldr r0, [pc, #64]	@ 0004bc96 1048
.org 0x4bc98
	ldr r0, [r0, #0]	@ 0004bc98 0068
.org 0x4bc9a
	bl 0x5500	@ 0004bc9a b9f731fc
.org 0x4bc9e
	adds r2, r0, #0	@ 0004bc9e 021c
.org 0x4bca0
	cmp r2, #0	@ 0004bca0 002a
.org 0x4bca2
	beq.n 0x4bd22	@ 0004bca2 3ed0
.org 0x4bca4
	adds r0, r4, #0	@ 0004bca4 201c
.org 0x4bca6
	adds r0, #248	@ 0004bca6 f830
.org 0x4bca8
	ldrb r0, [r0, #0]	@ 0004bca8 0078
.org 0x4bcaa
	cmp r0, #0	@ 0004bcaa 0028
.org 0x4bcac
	bne.n 0x4bce8	@ 0004bcac 1cd1
.org 0x4bcae
	ldr r0, [pc, #44]	@ 0004bcae 0b48
.org 0x4bcb0
	movs r1, #43	@ 0004bcb0 2b21
.org 0x4bcb2
	strb r1, [r2, #9]	@ 0004bcb2 5172
.org 0x4bcb4
	adds r0, #172	@ 0004bcb4 ac30
.org 0x4bcb6
	ldr r0, [r0, #0]	@ 0004bcb6 0068
.org 0x4bcb8
	ldr r0, [r0, #0]	@ 0004bcb8 0068
.org 0x4bcba
	str r0, [r2, #20]	@ 0004bcba 5061
.org 0x4bcbc
	ldrb r1, [r2, #11]	@ 0004bcbc d17a
.org 0x4bcbe
	movs r0, #191	@ 0004bcbe bf20
.org 0x4bcc0
	ands r0, r1	@ 0004bcc0 0840
.org 0x4bcc2
	strb r0, [r2, #11]	@ 0004bcc2 d072
.org 0x4bcc4
	adds r1, r2, #0	@ 0004bcc4 111c
.org 0x4bcc6
	adds r1, #37	@ 0004bcc6 2531
.org 0x4bcc8
	movs r0, #16	@ 0004bcc8 1020
.org 0x4bcca
	strb r0, [r1, #0]	@ 0004bcca 0870
.org 0x4bccc
	ldr r0, [pc, #16]	@ 0004bccc 0448
.org 0x4bcce
	ldrh r0, [r0, #0]	@ 0004bcce 0088
.org 0x4bcd0
	strh r0, [r2, #32]	@ 0004bcd0 1084
.org 0x4bcd2
	ldr r0, [pc, #16]	@ 0004bcd2 0448
.org 0x4bcd4
	ldrb r0, [r0, #0]	@ 0004bcd4 0078
.org 0x4bcd6
	b.n 0x4bd10	@ 0004bcd6 1be0
.org 0x4bcd8
	.byte 0x88,0xed,0x02,0x02	@ 0004bcd8 data
.org 0x4bcdc
	.byte 0xf8,0x39,0x85,0x08	@ 0004bcdc data
.org 0x4bce0
	.byte 0xfc,0x36,0x85,0x08	@ 0004bce0 data
.org 0x4bce4
	.byte 0x04,0x37,0x85,0x08	@ 0004bce4 data
.org 0x4bce8
	ldr r0, [pc, #60]	@ 0004bce8 0f48
.org 0x4bcea
	movs r1, #43	@ 0004bcea 2b21
.org 0x4bcec
	strb r1, [r2, #9]	@ 0004bcec 5172
.org 0x4bcee
	adds r0, #172	@ 0004bcee ac30
.org 0x4bcf0
	ldr r0, [r0, #0]	@ 0004bcf0 0068
.org 0x4bcf2
	ldr r0, [r0, #0]	@ 0004bcf2 0068
.org 0x4bcf4
	str r0, [r2, #20]	@ 0004bcf4 5061
.org 0x4bcf6
	ldrb r1, [r2, #11]	@ 0004bcf6 d17a
.org 0x4bcf8
	movs r0, #191	@ 0004bcf8 bf20
.org 0x4bcfa
	ands r0, r1	@ 0004bcfa 0840
.org 0x4bcfc
	strb r0, [r2, #11]	@ 0004bcfc d072
.org 0x4bcfe
	adds r1, r2, #0	@ 0004bcfe 111c
.org 0x4bd00
	adds r1, #37	@ 0004bd00 2531
.org 0x4bd02
	movs r0, #16	@ 0004bd02 1020
.org 0x4bd04
	strb r0, [r1, #0]	@ 0004bd04 0870
.org 0x4bd06
	ldr r0, [pc, #36]	@ 0004bd06 0948
.org 0x4bd08
	ldrh r0, [r0, #2]	@ 0004bd08 4088
.org 0x4bd0a
	strh r0, [r2, #32]	@ 0004bd0a 1084
.org 0x4bd0c
	ldr r0, [pc, #32]	@ 0004bd0c 0848
.org 0x4bd0e
	ldrb r0, [r0, #1]	@ 0004bd0e 4078
.org 0x4bd10
	subs r1, #3	@ 0004bd10 0339
.org 0x4bd12
	strb r0, [r1, #0]	@ 0004bd12 0870
.org 0x4bd14
	str r4, [r2, #40]	@ 0004bd14 9462
.org 0x4bd16
	ldr r0, [r7, #84]	@ 0004bd16 786d
