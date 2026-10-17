@ FUN_0801bfb8  entry 0x0801bfb8  size 94
.thumb
.org 0x1bfb8
FUN_0801bfb8:
	push {r4, r5, r6, lr}	@ 0001bfb8 70b5
.org 0x1bfba
	adds r5, r0, #0	@ 0001bfba 051c
.org 0x1bfbc
	ldr r3, [pc, #88]	@ 0001bfbc 164b
.org 0x1bfbe
	ldr r1, [pc, #92]	@ 0001bfbe 1749
.org 0x1bfc0
	ldr r0, [pc, #92]	@ 0001bfc0 1748
.org 0x1bfc2
	adds r1, r1, r0	@ 0001bfc2 0918
.org 0x1bfc4
	ldr r2, [r1, #0]	@ 0001bfc4 0a68
.org 0x1bfc6
	ldr r0, [pc, #92]	@ 0001bfc6 1748
.org 0x1bfc8
	muls r0, r2	@ 0001bfc8 5043
.org 0x1bfca
	ldr r2, [pc, #92]	@ 0001bfca 174a
.org 0x1bfcc
	adds r0, r0, r2	@ 0001bfcc 8018
.org 0x1bfce
	str r0, [r1, #0]	@ 0001bfce 0860
.org 0x1bfd0
	lsrs r0, r0, #16	@ 0001bfd0 000c
.org 0x1bfd2
	movs r1, #31	@ 0001bfd2 1f21
.org 0x1bfd4
	ands r0, r1	@ 0001bfd4 0840
.org 0x1bfd6
	lsls r0, r0, #1	@ 0001bfd6 4000
.org 0x1bfd8
	adds r0, r0, r3	@ 0001bfd8 c018
.org 0x1bfda
	ldrh r1, [r0, #0]	@ 0001bfda 0188
.org 0x1bfdc
	adds r0, r5, #0	@ 0001bfdc 281c
.org 0x1bfde
	adds r0, #104	@ 0001bfde 6830
.org 0x1bfe0
	movs r6, #0	@ 0001bfe0 0026
.org 0x1bfe2
	strh r1, [r0, #0]	@ 0001bfe2 0180
.org 0x1bfe4
	ldr r4, [pc, #68]	@ 0001bfe4 114c
.org 0x1bfe6
	ldr r0, [r4, #0]	@ 0001bfe6 2068
.org 0x1bfe8
	ldr r1, [pc, #68]	@ 0001bfe8 1149
.org 0x1bfea
	adds r0, r0, r1	@ 0001bfea 4018
.org 0x1bfec
	movs r1, #128	@ 0001bfec 8021
.org 0x1bfee
	lsls r1, r1, #7	@ 0001bfee c901
.org 0x1bff0
	bl 0x1ea4	@ 0001bff0 e5f758ff
.org 0x1bff4
	ldr r0, [r4, #0]	@ 0001bff4 2068
.org 0x1bff6
	ldr r2, [pc, #60]	@ 0001bff6 0f4a
.org 0x1bff8
	adds r0, r0, r2	@ 0001bff8 8018
.org 0x1bffa
	movs r1, #0	@ 0001bffa 0021
.org 0x1bffc
	bl 0x2208	@ 0001bffc e6f704f9
.org 0x1c000
	adds r5, #106	@ 0001c000 6a35
.org 0x1c002
	strh r6, [r5, #0]	@ 0001c002 2e80
.org 0x1c004
	ldr r1, [pc, #48]	@ 0001c004 0c49
.org 0x1c006
	ldr r0, [pc, #52]	@ 0001c006 0d48
.org 0x1c008
	adds r1, r1, r0	@ 0001c008 0918
.org 0x1c00a
	ldrb r0, [r1, #0]	@ 0001c00a 0878
.org 0x1c00c
	adds r0, #1	@ 0001c00c 0130
.org 0x1c00e
	strb r0, [r1, #0]	@ 0001c00e 0870
.org 0x1c010
	pop {r4, r5, r6}	@ 0001c010 70bc
.org 0x1c012
	pop {r0}	@ 0001c012 01bc
.org 0x1c014
	bx r0	@ 0001c014 0047
