@ FUN_0804bfb4  entry 0x0804bfb4  size 94
.thumb
.org 0x4bfb4
FUN_0804bfb4:
	push {r4, r5, r6, lr}	@ 0004bfb4 70b5
.org 0x4bfb6
	adds r5, r0, #0	@ 0004bfb6 051c
.org 0x4bfb8
	lsls r1, r1, #24	@ 0004bfb8 0906
.org 0x4bfba
	lsrs r6, r1, #24	@ 0004bfba 0e0e
.org 0x4bfbc
	lsls r2, r2, #24	@ 0004bfbc 1206
.org 0x4bfbe
	lsrs r4, r2, #24	@ 0004bfbe 140e
.org 0x4bfc0
	ldr r0, [pc, #80]	@ 0004bfc0 1448
.org 0x4bfc2
	ldr r0, [r0, #0]	@ 0004bfc2 0068
.org 0x4bfc4
	bl 0x5500	@ 0004bfc4 b9f79cfa
.org 0x4bfc8
	adds r2, r0, #0	@ 0004bfc8 021c
.org 0x4bfca
	cmp r2, #0	@ 0004bfca 002a
.org 0x4bfcc
	beq.n 0x4c00a	@ 0004bfcc 1dd0
.org 0x4bfce
	ldr r0, [pc, #72]	@ 0004bfce 1248
.org 0x4bfd0
	movs r1, #44	@ 0004bfd0 2c21
.org 0x4bfd2
	strb r1, [r2, #9]	@ 0004bfd2 5172
.org 0x4bfd4
	adds r0, #176	@ 0004bfd4 b030
.org 0x4bfd6
	ldr r0, [r0, #0]	@ 0004bfd6 0068
.org 0x4bfd8
	ldr r0, [r0, #0]	@ 0004bfd8 0068
.org 0x4bfda
	str r0, [r2, #20]	@ 0004bfda 5061
.org 0x4bfdc
	ldrb r1, [r2, #11]	@ 0004bfdc d17a
.org 0x4bfde
	movs r0, #191	@ 0004bfde bf20
.org 0x4bfe0
	ands r0, r1	@ 0004bfe0 0840
.org 0x4bfe2
	strb r0, [r2, #11]	@ 0004bfe2 d072
.org 0x4bfe4
	adds r1, r2, #0	@ 0004bfe4 111c
.org 0x4bfe6
	adds r1, #37	@ 0004bfe6 2531
.org 0x4bfe8
	movs r0, #16	@ 0004bfe8 1020
.org 0x4bfea
	strb r0, [r1, #0]	@ 0004bfea 0870
.org 0x4bfec
	ldr r0, [pc, #44]	@ 0004bfec 0b48
.org 0x4bfee
	ldrh r0, [r0, #0]	@ 0004bfee 0088
.org 0x4bff0
	strh r0, [r2, #32]	@ 0004bff0 1084
.org 0x4bff2
	ldr r0, [pc, #44]	@ 0004bff2 0b48
.org 0x4bff4
	ldrb r0, [r0, #0]	@ 0004bff4 0078
.org 0x4bff6
	subs r1, #3	@ 0004bff6 0339
.org 0x4bff8
	strb r0, [r1, #0]	@ 0004bff8 0870
.org 0x4bffa
	ldr r0, [r5, #0]	@ 0004bffa 2868
.org 0x4bffc
	ldr r1, [r5, #4]	@ 0004bffc 6968
.org 0x4bffe
	str r0, [r2, #84]	@ 0004bffe 5065
.org 0x4c000
	str r1, [r2, #88]	@ 0004c000 9165
.org 0x4c002
	movs r0, #1	@ 0004c002 0120
.org 0x4c004
	strb r0, [r2, #16]	@ 0004c004 1074
.org 0x4c006
	strb r6, [r2, #17]	@ 0004c006 5674
.org 0x4c008
	strb r4, [r2, #18]	@ 0004c008 9474
.org 0x4c00a
	adds r0, r2, #0	@ 0004c00a 101c
.org 0x4c00c
	pop {r4, r5, r6}	@ 0004c00c 70bc
.org 0x4c00e
	pop {r1}	@ 0004c00e 02bc
.org 0x4c010
	bx r1	@ 0004c010 0847
