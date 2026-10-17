@ FUN_080a9ba4  entry 0x080a9ba4  size 98
.thumb
.org 0xa9ba4
FUN_080a9ba4:
	push {lr}	@ 000a9ba4 00b5
.org 0xa9ba6
	adds r3, r0, #0	@ 000a9ba6 031c
.org 0xa9ba8
	ldr r0, [pc, #44]	@ 000a9ba8 0b48
.org 0xa9baa
	ldr r0, [r0, #0]	@ 000a9baa 0068
.org 0xa9bac
	ldr r1, [r0, #84]	@ 000a9bac 416d
.org 0xa9bae
	ldr r0, [r3, #84]	@ 000a9bae 586d
.org 0xa9bb0
	cmp r1, r0	@ 000a9bb0 8142
.org 0xa9bb2
	bge.n 0xa9be0	@ 000a9bb2 15da
.org 0xa9bb4
	movs r2, #0	@ 000a9bb4 0022
.org 0xa9bb6
	ldrb r1, [r3, #10]	@ 000a9bb6 997a
.org 0xa9bb8
	movs r0, #239	@ 000a9bb8 ef20
.org 0xa9bba
	ands r0, r1	@ 000a9bba 0840
.org 0xa9bbc
	strb r0, [r3, #10]	@ 000a9bbc 9872
.org 0xa9bbe
	adds r0, r3, #0	@ 000a9bbe 181c
.org 0xa9bc0
	adds r0, #76	@ 000a9bc0 4c30
.org 0xa9bc2
	strb r2, [r0, #0]	@ 000a9bc2 0270
.org 0xa9bc4
	adds r2, r3, #0	@ 000a9bc4 1a1c
.org 0xa9bc6
	adds r2, #74	@ 000a9bc6 4a32
.org 0xa9bc8
	ldrb r1, [r2, #0]	@ 000a9bc8 1178
.org 0xa9bca
	movs r0, #17	@ 000a9bca 1120
.org 0xa9bcc
	negs r0, r0	@ 000a9bcc 4042
.org 0xa9bce
	ands r0, r1	@ 000a9bce 0840
.org 0xa9bd0
	strb r0, [r2, #0]	@ 000a9bd0 1070
.org 0xa9bd2
	ldr r0, [pc, #8]	@ 000a9bd2 0248
.org 0xa9bd4
	b.n 0xa9c0a	@ 000a9bd4 19e0
.org 0xa9bd6
	.byte 0x00	@ 000a9bd6 data
.org 0xa9bd7
	.byte 0x00	@ 000a9bd7 data
.org 0xa9bd8
	.byte 0xf0,0xdb,0x02,0x02	@ 000a9bd8 data
.org 0xa9bdc
	.byte 0x00,0xff,0xff,0xff	@ 000a9bdc data
.org 0xa9be0
	movs r2, #1	@ 000a9be0 0122
.org 0xa9be2
	ldrb r1, [r3, #10]	@ 000a9be2 997a
.org 0xa9be4
	movs r0, #16	@ 000a9be4 1020
.org 0xa9be6
	orrs r0, r1	@ 000a9be6 0843
.org 0xa9be8
	strb r0, [r3, #10]	@ 000a9be8 9872
.org 0xa9bea
	adds r0, r3, #0	@ 000a9bea 181c
.org 0xa9bec
	adds r0, #76	@ 000a9bec 4c30
.org 0xa9bee
	strb r2, [r0, #0]	@ 000a9bee 0270
.org 0xa9bf0
	movs r0, #74	@ 000a9bf0 4a20
.org 0xa9bf2
	adds r0, r0, r3	@ 000a9bf2 c018
.org 0xa9bf4
	mov ip, r0	@ 000a9bf4 8446
.org 0xa9bf6
	movs r2, #16	@ 000a9bf6 1022
.org 0xa9bf8
	ldrb r1, [r0, #0]	@ 000a9bf8 0178
.org 0xa9bfa
	movs r0, #17	@ 000a9bfa 1120
.org 0xa9bfc
	negs r0, r0	@ 000a9bfc 4042
.org 0xa9bfe
	ands r0, r1	@ 000a9bfe 0840
.org 0xa9c00
	orrs r0, r2	@ 000a9c00 1043
.org 0xa9c02
	mov r1, ip	@ 000a9c02 6146
.org 0xa9c04
	strb r0, [r1, #0]	@ 000a9c04 0870
