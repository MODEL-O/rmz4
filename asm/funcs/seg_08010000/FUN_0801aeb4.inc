@ FUN_0801aeb4  entry 0x0801aeb4  size 58
.thumb
.org 0x1aeb4
FUN_0801aeb4:
	push {lr}	@ 0001aeb4 00b5
.org 0x1aeb6
	adds r3, r0, #0	@ 0001aeb6 031c
.org 0x1aeb8
	ldrb r0, [r3, #14]	@ 0001aeb8 987b
.org 0x1aeba
	cmp r0, #0	@ 0001aeba 0028
.org 0x1aebc
	bne.n 0x1aeea	@ 0001aebc 15d1
.org 0x1aebe
	ldr r1, [r3, #92]	@ 0001aebe d96d
.org 0x1aec0
	lsrs r1, r1, #4	@ 0001aec0 0909
.org 0x1aec2
	lsls r1, r1, #1	@ 0001aec2 4900
.org 0x1aec4
	ldr r0, [pc, #40]	@ 0001aec4 0a48
.org 0x1aec6
	adds r1, r1, r0	@ 0001aec6 0918
.org 0x1aec8
	ldrh r2, [r1, #0]	@ 0001aec8 0a88
.org 0x1aeca
	ldr r0, [pc, #40]	@ 0001aeca 0a48
.org 0x1aecc
	ands r0, r2	@ 0001aecc 1040
.org 0x1aece
	movs r2, #3	@ 0001aece 0322
.org 0x1aed0
	orrs r0, r2	@ 0001aed0 1043
.org 0x1aed2
	strh r0, [r1, #0]	@ 0001aed2 0880
.org 0x1aed4
	movs r0, #135	@ 0001aed4 8720
.org 0x1aed6
	lsls r0, r0, #4	@ 0001aed6 0001
.org 0x1aed8
	str r0, [r3, #76]	@ 0001aed8 d864
.org 0x1aeda
	movs r0, #160	@ 0001aeda a020
.org 0x1aedc
	str r0, [r3, #80]	@ 0001aedc 1865
.org 0x1aede
	movs r0, #128	@ 0001aede 8020
.org 0x1aee0
	str r0, [r3, #68]	@ 0001aee0 5864
.org 0x1aee2
	str r0, [r3, #72]	@ 0001aee2 9864
.org 0x1aee4
	ldrb r0, [r3, #14]	@ 0001aee4 987b
.org 0x1aee6
	adds r0, #1	@ 0001aee6 0130
.org 0x1aee8
	strb r0, [r3, #14]	@ 0001aee8 9873
.org 0x1aeea
	pop {r0}	@ 0001aeea 01bc
.org 0x1aeec
	bx r0	@ 0001aeec 0047
