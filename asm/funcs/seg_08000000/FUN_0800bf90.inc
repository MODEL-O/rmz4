@ FUN_0800bf90  entry 0x0800bf90  size 110
.thumb
.org 0xbf90
FUN_0800bf90:
	push {r4, r5, lr}	@ 0000bf90 30b5
.org 0xbf92
	adds r4, r0, #0	@ 0000bf92 041c
.org 0xbf94
	ldr r0, [r4, #92]	@ 0000bf94 e06d
.org 0xbf96
	lsls r2, r0, #16	@ 0000bf96 0204
.org 0xbf98
	ldrb r3, [r4, #14]	@ 0000bf98 a37b
.org 0xbf9a
	adds r1, r3, #0	@ 0000bf9a 191c
.org 0xbf9c
	cmp r1, #0	@ 0000bf9c 0029
.org 0xbf9e
	bne.n 0xbfac	@ 0000bf9e 05d1
.org 0xbfa0
	ldr r0, [pc, #40]	@ 0000bfa0 0a48
.org 0xbfa2
	ldr r5, [pc, #44]	@ 0000bfa2 0b4d
.org 0xbfa4
	adds r0, r0, r5	@ 0000bfa4 4019
.org 0xbfa6
	strb r1, [r0, #0]	@ 0000bfa6 0170
.org 0xbfa8
	adds r0, r3, #1	@ 0000bfa8 581c
.org 0xbfaa
	strb r0, [r4, #14]	@ 0000bfaa a073
.org 0xbfac
	ldr r0, [r4, #52]	@ 0000bfac 606b
.org 0xbfae
	ldr r3, [pc, #36]	@ 0000bfae 094b
.org 0xbfb0
	adds r1, r0, r3	@ 0000bfb0 c118
.org 0xbfb2
	adds r3, r0, #0	@ 0000bfb2 031c
.org 0xbfb4
	cmp r1, #238	@ 0000bfb4 ee29
.org 0xbfb6
	bhi.n 0xbfe0	@ 0000bfb6 13d8
.org 0xbfb8
	lsrs r2, r2, #20	@ 0000bfb8 120d
.org 0xbfba
	lsls r2, r2, #1	@ 0000bfba 5200
.org 0xbfbc
	ldr r0, [pc, #24]	@ 0000bfbc 0648
.org 0xbfbe
	adds r2, r2, r0	@ 0000bfbe 1218
.org 0xbfc0
	ldrh r1, [r2, #0]	@ 0000bfc0 1188
.org 0xbfc2
	ldr r0, [pc, #24]	@ 0000bfc2 0648
.org 0xbfc4
	ands r0, r1	@ 0000bfc4 0840
.org 0xbfc6
	movs r1, #1	@ 0000bfc6 0121
.org 0xbfc8
	b.n 0xbff0	@ 0000bfc8 12e0
.org 0xbfca
	.byte 0x00	@ 0000bfca data
.org 0xbfcb
	.byte 0x00	@ 0000bfcb data
.org 0xbfcc
	.byte 0xb0,0x0a,0x00,0x02	@ 0000bfcc data
.org 0xbfd0
	.byte 0x2e,0xd0,0x02,0x00	@ 0000bfd0 data
.org 0xbfd4
	.byte 0x8f,0xf7,0xff,0xff	@ 0000bfd4 data
.org 0xbfd8
	.byte 0x04,0x0a,0x00,0x02	@ 0000bfd8 data
.org 0xbfdc
	.byte 0xfc,0xff,0x00,0x00	@ 0000bfdc data
.org 0xbfe0
	lsrs r2, r2, #20	@ 0000bfe0 120d
.org 0xbfe2
	lsls r2, r2, #1	@ 0000bfe2 5200
.org 0xbfe4
	ldr r0, [pc, #44]	@ 0000bfe4 0b48
.org 0xbfe6
	adds r2, r2, r0	@ 0000bfe6 1218
.org 0xbfe8
	ldrh r1, [r2, #0]	@ 0000bfe8 1188
.org 0xbfea
	ldr r0, [pc, #44]	@ 0000bfea 0b48
.org 0xbfec
	ands r0, r1	@ 0000bfec 0840
.org 0xbfee
	movs r1, #2	@ 0000bfee 0221
.org 0xbff0
	orrs r0, r1	@ 0000bff0 0843
.org 0xbff2
	strh r0, [r2, #0]	@ 0000bff2 1080
.org 0xbff4
	ldr r5, [pc, #36]	@ 0000bff4 094d
.org 0xbff6
	adds r0, r3, r5	@ 0000bff6 5819
.org 0xbff8
	cmp r0, #62	@ 0000bff8 3e28
.org 0xbffa
	bhi.n 0xc00e	@ 0000bffa 08d8
.org 0xbffc
	ldr r1, [r4, #56]	@ 0000bffc a16b
