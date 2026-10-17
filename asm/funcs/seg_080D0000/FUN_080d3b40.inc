@ FUN_080d3b40  entry 0x080d3b40  size 144
.thumb
.org 0xd3b40
FUN_080d3b40:
	push {r4, r5, lr}	@ 000d3b40 30b5
.org 0xd3b42
	adds r5, r0, #0	@ 000d3b42 051c
.org 0xd3b44
	lsls r1, r1, #24	@ 000d3b44 0906
.org 0xd3b46
	lsrs r4, r1, #24	@ 000d3b46 0c0e
.org 0xd3b48
	ldr r0, [pc, #64]	@ 000d3b48 1048
.org 0xd3b4a
	ldr r0, [r0, #0]	@ 000d3b4a 0068
.org 0xd3b4c
	bl 0x5500	@ 000d3b4c 31f7d8fc
.org 0xd3b50
	mov ip, r0	@ 000d3b50 8446
.org 0xd3b52
	cmp r0, #0	@ 000d3b52 0028
.org 0xd3b54
	beq.n 0xd3bd2	@ 000d3b54 3dd0
.org 0xd3b56
	mov r1, ip	@ 000d3b56 6146
.org 0xd3b58
	adds r1, #37	@ 000d3b58 2531
.org 0xd3b5a
	movs r2, #0	@ 000d3b5a 0022
.org 0xd3b5c
	movs r0, #1	@ 000d3b5c 0120
.org 0xd3b5e
	strb r0, [r1, #0]	@ 000d3b5e 0870
.org 0xd3b60
	ldr r1, [pc, #44]	@ 000d3b60 0b49
.org 0xd3b62
	movs r0, #12	@ 000d3b62 0c20
.org 0xd3b64
	mov r3, ip	@ 000d3b64 6346
.org 0xd3b66
	strb r0, [r3, #9]	@ 000d3b66 5872
.org 0xd3b68
	ldr r0, [r1, #48]	@ 000d3b68 086b
.org 0xd3b6a
	ldr r0, [r0, #0]	@ 000d3b6a 0068
.org 0xd3b6c
	str r0, [r3, #20]	@ 000d3b6c 5861
.org 0xd3b6e
	movs r0, #0	@ 000d3b6e 0020
.org 0xd3b70
	strh r2, [r3, #32]	@ 000d3b70 1a84
.org 0xd3b72
	mov r1, ip	@ 000d3b72 6146
.org 0xd3b74
	adds r1, #34	@ 000d3b74 2231
.org 0xd3b76
	strb r0, [r1, #0]	@ 000d3b76 0870
.org 0xd3b78
	str r5, [r3, #40]	@ 000d3b78 9d62
.org 0xd3b7a
	adds r2, r4, #0	@ 000d3b7a 221c
.org 0xd3b7c
	cmp r2, #0	@ 000d3b7c 002a
.org 0xd3b7e
	beq.n 0xd3b94	@ 000d3b7e 09d0
.org 0xd3b80
	ldrb r0, [r3, #10]	@ 000d3b80 987a
.org 0xd3b82
	movs r1, #32	@ 000d3b82 2021
.org 0xd3b84
	orrs r0, r1	@ 000d3b84 0843
.org 0xd3b86
	strb r0, [r3, #10]	@ 000d3b86 9872
.org 0xd3b88
	b.n 0xd3ba0	@ 000d3b88 0ae0
.org 0xd3b8a
	.byte 0x00	@ 000d3b8a data
.org 0xd3b8b
	.byte 0x00	@ 000d3b8b data
.org 0xd3b8c
	.byte 0x9c,0xed,0x02,0x02	@ 000d3b8c data
.org 0xd3b90
	.byte 0x64,0x6f,0x86,0x08	@ 000d3b90 data
.org 0xd3b94
	mov r0, ip	@ 000d3b94 6046
.org 0xd3b96
	ldrb r1, [r0, #10]	@ 000d3b96 817a
.org 0xd3b98
	movs r0, #223	@ 000d3b98 df20
.org 0xd3b9a
	ands r0, r1	@ 000d3b9a 0840
.org 0xd3b9c
	mov r1, ip	@ 000d3b9c 6146
.org 0xd3b9e
	strb r0, [r1, #10]	@ 000d3b9e 8872
.org 0xd3ba0
	movs r1, #1	@ 000d3ba0 0121
.org 0xd3ba2
	ands r1, r2	@ 000d3ba2 1140
.org 0xd3ba4
	mov r0, ip	@ 000d3ba4 6046
.org 0xd3ba6
	adds r0, #77	@ 000d3ba6 4d30
.org 0xd3ba8
	movs r3, #0	@ 000d3ba8 0023
.org 0xd3baa
	strb r1, [r0, #0]	@ 000d3baa 0170
.org 0xd3bac
	mov r4, ip	@ 000d3bac 6446
.org 0xd3bae
	adds r4, #74	@ 000d3bae 4a34
.org 0xd3bb0
	lsls r1, r1, #5	@ 000d3bb0 4901
.org 0xd3bb2
	ldrb r2, [r4, #0]	@ 000d3bb2 2278
.org 0xd3bb4
	movs r0, #33	@ 000d3bb4 2120
.org 0xd3bb6
	negs r0, r0	@ 000d3bb6 4042
.org 0xd3bb8
	ands r0, r2	@ 000d3bb8 1040
.org 0xd3bba
	orrs r0, r1	@ 000d3bba 0843
.org 0xd3bbc
	strb r0, [r4, #0]	@ 000d3bbc 2070
.org 0xd3bbe
	mov r0, ip	@ 000d3bbe 6046
.org 0xd3bc0
	strb r3, [r0, #16]	@ 000d3bc0 0374
.org 0xd3bc2
	strb r3, [r0, #17]	@ 000d3bc2 4374
.org 0xd3bc4
	movs r1, #161	@ 000d3bc4 a121
.org 0xd3bc6
	lsls r1, r1, #1	@ 000d3bc6 4900
.org 0xd3bc8
	adds r2, r5, r1	@ 000d3bc8 6a18
.org 0xd3bca
	ldrb r0, [r2, #0]	@ 000d3bca 1078
.org 0xd3bcc
	movs r1, #4	@ 000d3bcc 0421
.org 0xd3bce
	orrs r0, r1	@ 000d3bce 0843
