@ FUN_0811ce58  entry 0x0811ce58  size 488
.thumb
.org 0x11ce58
FUN_0811ce58:
	push {r4, r5, r6, lr}	@ 0011ce58 70b5
.org 0x11ce5a
	sub sp, #4	@ 0011ce5a 81b0
.org 0x11ce5c
	adds r5, r0, #0	@ 0011ce5c 051c
.org 0x11ce5e
	ldrb r6, [r5, #3]	@ 0011ce5e ee78
.org 0x11ce60
	cmp r6, #0	@ 0011ce60 002e
.org 0x11ce62
	bne.n 0x11ce9e	@ 0011ce62 1cd1
.org 0x11ce64
	ldr r0, [pc, #96]	@ 0011ce64 1848
.org 0x11ce66
	adds r4, r5, r0	@ 0011ce66 2c18
.org 0x11ce68
	ldr r1, [pc, #96]	@ 0011ce68 1849
.org 0x11ce6a
	str r6, [sp, #0]	@ 0011ce6a 0096
.org 0x11ce6c
	adds r0, r4, #0	@ 0011ce6c 201c
.org 0x11ce6e
	movs r2, #132	@ 0011ce6e 8422
.org 0x11ce70
	movs r3, #0	@ 0011ce70 0023
.org 0x11ce72
	bl 0x27b8	@ 0011ce72 e5f6a1fc
.org 0x11ce76
	ldr r0, [pc, #88]	@ 0011ce76 1648
.org 0x11ce78
	ldrh r0, [r0, #0]	@ 0011ce78 0088
.org 0x11ce7a
	movs r1, #248	@ 0011ce7a f821
.org 0x11ce7c
	lsls r1, r1, #5	@ 0011ce7c 4901
.org 0x11ce7e
	ands r1, r0	@ 0011ce7e 0140
.org 0x11ce80
	lsls r1, r1, #3	@ 0011ce80 c900
.org 0x11ce82
	movs r2, #128	@ 0011ce82 8022
.org 0x11ce84
	lsls r2, r2, #5	@ 0011ce84 5201
.org 0x11ce86
	adds r0, r4, #0	@ 0011ce86 201c
.org 0x11ce88
	bl 0x1f1c	@ 0011ce88 e5f648f8
.org 0x11ce8c
	ldr r1, [pc, #68]	@ 0011ce8c 1149
.org 0x11ce8e
	adds r0, r5, r1	@ 0011ce8e 6818
.org 0x11ce90
	strb r6, [r0, #2]	@ 0011ce90 8670
.org 0x11ce92
	movs r1, #4	@ 0011ce92 0421
.org 0x11ce94
	strb r1, [r0, #4]	@ 0011ce94 0171
.org 0x11ce96
	strb r6, [r0, #22]	@ 0011ce96 8675
.org 0x11ce98
	ldrb r0, [r5, #3]	@ 0011ce98 e878
.org 0x11ce9a
	adds r0, #1	@ 0011ce9a 0130
.org 0x11ce9c
	strb r0, [r5, #3]	@ 0011ce9c e870
.org 0x11ce9e
	adds r0, r5, #0	@ 0011ce9e 281c
.org 0x11cea0
	bl 0x11d468	@ 0011cea0 00f0e2fa
.org 0x11cea4
	ldrb r2, [r5, #3]	@ 0011cea4 ea78
.org 0x11cea6
	cmp r2, #1	@ 0011cea6 012a
.org 0x11cea8
	bne.n 0x11cf18	@ 0011cea8 36d1
.org 0x11ceaa
	ldr r3, [pc, #44]	@ 0011ceaa 0b4b
.org 0x11ceac
	ldrh r1, [r3, #6]	@ 0011ceac d988
.org 0x11ceae
	movs r0, #16	@ 0011ceae 1020
.org 0x11ceb0
	ands r0, r1	@ 0011ceb0 0840
.org 0x11ceb2
	lsls r0, r0, #16	@ 0011ceb2 0004
.org 0x11ceb4
	lsrs r6, r0, #16	@ 0011ceb4 060c
.org 0x11ceb6
	cmp r6, #0	@ 0011ceb6 002e
.org 0x11ceb8
	beq.n 0x11cedc	@ 0011ceb8 10d0
.org 0x11ceba
	movs r0, #1	@ 0011ceba 0120
.org 0x11cebc
	bl 0x2b10	@ 0011cebc e5f628fe
.org 0x11cec0
	movs r0, #0	@ 0011cec0 0020
.org 0x11cec2
	strb r0, [r5, #2]	@ 0011cec2 a870
.org 0x11cec4
	strb r0, [r5, #3]	@ 0011cec4 e870
.org 0x11cec6
	b.n 0x11d082	@ 0011cec6 dce0
.org 0x11cec8
	.byte 0xd8,0x0e,0x00,0x00	@ 0011cec8 data
.org 0x11cecc
	.byte 0x00,0xc0,0xb2,0x08	@ 0011cecc data
.org 0x11ced0
	.byte 0x06,0x0a,0x00,0x02	@ 0011ced0 data
.org 0x11ced4
	.byte 0xcc,0x0d,0x00,0x00	@ 0011ced4 data
.org 0x11ced8
	.byte 0x60,0x07,0x00,0x02	@ 0011ced8 data
.org 0x11cedc
	ldrh r1, [r3, #4]	@ 0011cedc 9988
.org 0x11cede
	movs r0, #129	@ 0011cede 8120
.org 0x11cee0
	ands r0, r1	@ 0011cee0 0840
.org 0x11cee2
	cmp r0, #0	@ 0011cee2 0028
.org 0x11cee4
	beq.n 0x11cf00	@ 0011cee4 0cd0
.org 0x11cee6
	ldr r2, [pc, #20]	@ 0011cee6 054a
.org 0x11cee8
	adds r4, r5, r2	@ 0011cee8 ac18
.org 0x11ceea
	ldrb r0, [r4, #3]	@ 0011ceea e078
.org 0x11ceec
	cmp r0, #0	@ 0011ceec 0028
.org 0x11ceee
	beq.n 0x11cf94	@ 0011ceee 51d0
.org 0x11cef0
	movs r0, #2	@ 0011cef0 0220
.org 0x11cef2
	bl 0x2b10	@ 0011cef2 e5f60dfe
.org 0x11cef6
	strb r6, [r4, #2]	@ 0011cef6 a670
.org 0x11cef8
	b.n 0x11d07c	@ 0011cef8 c0e0
.org 0x11cefa
	.byte 0x00	@ 0011cefa data
.org 0x11cefb
	.byte 0x00	@ 0011cefb data
.org 0x11cefc
	.byte 0xcc,0x0d,0x00,0x00	@ 0011cefc data
.org 0x11cf00
	movs r0, #2	@ 0011cf00 0220
.org 0x11cf02
	ands r0, r1	@ 0011cf02 0840
.org 0x11cf04
	cmp r0, #0	@ 0011cf04 0028
.org 0x11cf06
	bne.n 0x11cf0a	@ 0011cf06 00d1
.org 0x11cf08
	b.n 0x11d080	@ 0011cf08 bae0
.org 0x11cf0a
	ldr r1, [pc, #8]	@ 0011cf0a 0249
.org 0x11cf0c
	adds r0, r5, r1	@ 0011cf0c 6818
.org 0x11cf0e
	strb r2, [r0, #27]	@ 0011cf0e c276
.org 0x11cf10
	b.n 0x11d080	@ 0011cf10 b6e0
.org 0x11cf12
	.byte 0x00	@ 0011cf12 data
.org 0x11cf13
	.byte 0x00	@ 0011cf13 data
.org 0x11cf14
	.byte 0xcc,0x0d,0x00,0x00	@ 0011cf14 data
.org 0x11cf18
	cmp r2, #2	@ 0011cf18 022a
.org 0x11cf1a
	beq.n 0x11cf1e	@ 0011cf1a 00d0
.org 0x11cf1c
	b.n 0x11d020	@ 0011cf1c 80e0
.org 0x11cf1e
	ldr r3, [pc, #20]	@ 0011cf1e 054b
.org 0x11cf20
	ldrh r1, [r3, #4]	@ 0011cf20 9988
.org 0x11cf22
	ands r2, r1	@ 0011cf22 0a40
.org 0x11cf24
	cmp r2, #0	@ 0011cf24 002a
.org 0x11cf26
	beq.n 0x11cf38	@ 0011cf26 07d0
.org 0x11cf28
	movs r0, #3	@ 0011cf28 0320
.org 0x11cf2a
	bl 0x2b10	@ 0011cf2a e5f6f1fd
.org 0x11cf2e
	movs r0, #1	@ 0011cf2e 0120
.org 0x11cf30
	b.n 0x11d07e	@ 0011cf30 a5e0
.org 0x11cf32
	.byte 0x00	@ 0011cf32 data
.org 0x11cf33
	.byte 0x00	@ 0011cf33 data
.org 0x11cf34
	.byte 0x60,0x07,0x00,0x02	@ 0011cf34 data
.org 0x11cf38
	movs r4, #1	@ 0011cf38 0124
.org 0x11cf3a
	adds r0, r4, #0	@ 0011cf3a 201c
.org 0x11cf3c
	ands r0, r1	@ 0011cf3c 0840
.org 0x11cf3e
	cmp r0, #0	@ 0011cf3e 0028
.org 0x11cf40
	beq.n 0x11cf9c	@ 0011cf40 2cd0
.org 0x11cf42
	ldr r2, [pc, #72]	@ 0011cf42 124a
.org 0x11cf44
	adds r1, r5, r2	@ 0011cf44 a918
.org 0x11cf46
	adds r2, #6	@ 0011cf46 0632
.org 0x11cf48
	adds r0, r5, r2	@ 0011cf48 a818
.org 0x11cf4a
	ldrb r1, [r1, #2]	@ 0011cf4a 8978
.org 0x11cf4c
	adds r0, r0, r1	@ 0011cf4c 4018
.org 0x11cf4e
	ldrb r2, [r0, #0]	@ 0011cf4e 0278
.org 0x11cf50
	movs r3, #0	@ 0011cf50 0023
.org 0x11cf52
	cmp r2, #255	@ 0011cf52 ff2a
.org 0x11cf54
	beq.n 0x11cf7e	@ 0011cf54 13d0
.org 0x11cf56
	ldr r0, [pc, #56]	@ 0011cf56 0e48
.org 0x11cf58
	ldr r0, [r0, #0]	@ 0011cf58 0068
.org 0x11cf5a
	lsrs r1, r2, #2	@ 0011cf5a 9108
.org 0x11cf5c
	adds r0, r0, r1	@ 0011cf5c 4018
.org 0x11cf5e
	ldrb r1, [r0, #0]	@ 0011cf5e 0178
.org 0x11cf60
	movs r0, #3	@ 0011cf60 0320
.org 0x11cf62
	ands r0, r2	@ 0011cf62 1040
.org 0x11cf64
	adds r0, #4	@ 0011cf64 0430
.org 0x11cf66
	asrs r1, r0	@ 0011cf66 0141
.org 0x11cf68
	ands r1, r4	@ 0011cf68 2140
.org 0x11cf6a
	cmp r1, #0	@ 0011cf6a 0029
.org 0x11cf6c
	bne.n 0x11cf7e	@ 0011cf6c 07d1
.org 0x11cf6e
	adds r0, r2, #0	@ 0011cf6e 101c
.org 0x11cf70
	bl 0x11d8f4	@ 0011cf70 00f0c0fc
.org 0x11cf74
	lsls r0, r0, #24	@ 0011cf74 0006
.org 0x11cf76
	lsrs r0, r0, #24	@ 0011cf76 000e
.org 0x11cf78
	negs r1, r0	@ 0011cf78 4142
.org 0x11cf7a
	orrs r1, r0	@ 0011cf7a 0143
.org 0x11cf7c
	lsrs r3, r1, #31	@ 0011cf7c cb0f
.org 0x11cf7e
	cmp r3, #0	@ 0011cf7e 002b
.org 0x11cf80
	beq.n 0x11cf94	@ 0011cf80 08d0
.org 0x11cf82
	movs r0, #2	@ 0011cf82 0220
.org 0x11cf84
	bl 0x2b10	@ 0011cf84 e5f6c4fd
.org 0x11cf88
	movs r0, #3	@ 0011cf88 0320
.org 0x11cf8a
	b.n 0x11d07e	@ 0011cf8a 78e0
.org 0x11cf8c
	.byte 0xcc,0x0d,0x00,0x00	@ 0011cf8c data
.org 0x11cf90
	.byte 0xac,0xed,0x02,0x02	@ 0011cf90 data
.org 0x11cf94
	movs r0, #4	@ 0011cf94 0420
.org 0x11cf96
	bl 0x2b10	@ 0011cf96 e5f6bbfd
.org 0x11cf9a
	b.n 0x11d080	@ 0011cf9a 71e0
.org 0x11cf9c
	ldrh r1, [r3, #6]	@ 0011cf9c d988
.org 0x11cf9e
	movs r0, #64	@ 0011cf9e 4020
.org 0x11cfa0
	ands r0, r1	@ 0011cfa0 0840
.org 0x11cfa2
	cmp r0, #0	@ 0011cfa2 0028
.org 0x11cfa4
	beq.n 0x11cfe2	@ 0011cfa4 1dd0
.org 0x11cfa6
	ldr r0, [pc, #24]	@ 0011cfa6 0648
.org 0x11cfa8
	adds r4, r5, r0	@ 0011cfa8 2c18
.org 0x11cfaa
	ldrb r0, [r4, #2]	@ 0011cfaa a078
.org 0x11cfac
	cmp r0, #0	@ 0011cfac 0028
.org 0x11cfae
	beq.n 0x11cfc4	@ 0011cfae 09d0
.org 0x11cfb0
	movs r0, #1	@ 0011cfb0 0120
.org 0x11cfb2
	bl 0x2b10	@ 0011cfb2 e5f6adfd
.org 0x11cfb6
	ldrb r0, [r4, #2]	@ 0011cfb6 a078
.org 0x11cfb8
	subs r0, #1	@ 0011cfb8 0138
.org 0x11cfba
	strb r0, [r4, #2]	@ 0011cfba a070
.org 0x11cfbc
	b.n 0x11d080	@ 0011cfbc 60e0
.org 0x11cfbe
	.byte 0x00	@ 0011cfbe data
.org 0x11cfbf
	.byte 0x00	@ 0011cfbf data
.org 0x11cfc0
	.byte 0xcc,0x0d,0x00,0x00	@ 0011cfc0 data
.org 0x11cfc4
	ldrb r0, [r4, #23]	@ 0011cfc4 e07d
.org 0x11cfc6
	cmp r0, #0	@ 0011cfc6 0028
.org 0x11cfc8
	beq.n 0x11cfd8	@ 0011cfc8 06d0
.org 0x11cfca
	movs r0, #1	@ 0011cfca 0120
.org 0x11cfcc
	bl 0x2b10	@ 0011cfcc e5f6a0fd
.org 0x11cfd0
	ldrb r0, [r4, #22]	@ 0011cfd0 a07d
.org 0x11cfd2
	subs r0, #1	@ 0011cfd2 0138
.org 0x11cfd4
	strb r0, [r4, #22]	@ 0011cfd4 a075
.org 0x11cfd6
	b.n 0x11d080	@ 0011cfd6 53e0
.org 0x11cfd8
	movs r0, #3	@ 0011cfd8 0320
.org 0x11cfda
	bl 0x2b10	@ 0011cfda e5f699fd
.org 0x11cfde
	movs r0, #1	@ 0011cfde 0120
.org 0x11cfe0
	b.n 0x11d07e	@ 0011cfe0 4de0
.org 0x11cfe2
	movs r0, #128	@ 0011cfe2 8020
.org 0x11cfe4
	ands r0, r1	@ 0011cfe4 0840
.org 0x11cfe6
	cmp r0, #0	@ 0011cfe6 0028
.org 0x11cfe8
	beq.n 0x11d080	@ 0011cfe8 4ad0
.org 0x11cfea
	ldr r1, [pc, #28]	@ 0011cfea 0749
.org 0x11cfec
	adds r4, r5, r1	@ 0011cfec 6c18
.org 0x11cfee
	ldrb r0, [r4, #2]	@ 0011cfee a078
.org 0x11cff0
	adds r0, #1	@ 0011cff0 0130
.org 0x11cff2
	ldrb r2, [r4, #3]	@ 0011cff2 e278
.org 0x11cff4
	cmp r0, r2	@ 0011cff4 9042
.org 0x11cff6
	bge.n 0x11d00c	@ 0011cff6 09da
.org 0x11cff8
	movs r0, #1	@ 0011cff8 0120
.org 0x11cffa
	bl 0x2b10	@ 0011cffa e5f689fd
.org 0x11cffe
	ldrb r0, [r4, #2]	@ 0011cffe a078
.org 0x11d000
	adds r0, #1	@ 0011d000 0130
.org 0x11d002
	strb r0, [r4, #2]	@ 0011d002 a070
.org 0x11d004
	b.n 0x11d080	@ 0011d004 3ce0
.org 0x11d006
	.byte 0x00	@ 0011d006 data
.org 0x11d007
	.byte 0x00	@ 0011d007 data
.org 0x11d008
	.byte 0xcc,0x0d,0x00,0x00	@ 0011d008 data
.org 0x11d00c
	ldrb r0, [r4, #24]	@ 0011d00c 207e
.org 0x11d00e
	cmp r0, #0	@ 0011d00e 0028
.org 0x11d010
	beq.n 0x11d080	@ 0011d010 36d0
.org 0x11d012
	movs r0, #1	@ 0011d012 0120
.org 0x11d014
	bl 0x2b10	@ 0011d014 e5f67cfd
.org 0x11d018
	ldrb r0, [r4, #22]	@ 0011d018 a07d
.org 0x11d01a
	adds r0, #1	@ 0011d01a 0130
.org 0x11d01c
	strb r0, [r4, #22]	@ 0011d01c a075
.org 0x11d01e
	b.n 0x11d080	@ 0011d01e 2fe0
.org 0x11d020
	cmp r2, #3	@ 0011d020 032a
.org 0x11d022
	bne.n 0x11d070	@ 0011d022 25d1
.org 0x11d024
	ldr r0, [pc, #20]	@ 0011d024 0548
.org 0x11d026
	ldrh r1, [r0, #4]	@ 0011d026 8188
.org 0x11d028
	movs r0, #2	@ 0011d028 0220
.org 0x11d02a
	ands r0, r1	@ 0011d02a 0840
.org 0x11d02c
	cmp r0, #0	@ 0011d02c 0028
.org 0x11d02e
	beq.n 0x11d040	@ 0011d02e 07d0
.org 0x11d030
	movs r0, #3	@ 0011d030 0320
.org 0x11d032
	bl 0x2b10	@ 0011d032 e5f66dfd
.org 0x11d036
	movs r0, #2	@ 0011d036 0220
.org 0x11d038
	b.n 0x11d07e	@ 0011d038 21e0
.org 0x11d03a
	.byte 0x00	@ 0011d03a data
.org 0x11d03b
	.byte 0x00	@ 0011d03b data
.org 0x11d03c
	.byte 0x60,0x07,0x00,0x02	@ 0011d03c data
