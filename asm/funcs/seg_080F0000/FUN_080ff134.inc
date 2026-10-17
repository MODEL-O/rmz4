@ FUN_080ff134  entry 0x080ff134  size 40
.thumb
.org 0xff134
FUN_080ff134:
	push {lr}	@ 000ff134 00b5
.org 0xff136
	adds r2, r0, #0	@ 000ff136 021c
.org 0xff138
	ldr r0, [pc, #32]	@ 000ff138 0848
.org 0xff13a
	ldr r3, [pc, #36]	@ 000ff13a 094b
.org 0xff13c
	adds r1, r0, r3	@ 000ff13c c118
.org 0xff13e
	ldrh r0, [r1, #0]	@ 000ff13e 0888
.org 0xff140
	cmp r0, #71	@ 000ff140 4728
.org 0xff142
	bls.n 0xff148	@ 000ff142 01d9
.org 0xff144
	movs r0, #72	@ 000ff144 4820
.org 0xff146
	strh r0, [r1, #0]	@ 000ff146 0880
.org 0xff148
	ldr r0, [pc, #24]	@ 000ff148 0648
.org 0xff14a
	ldrb r1, [r2, #16]	@ 000ff14a 117c
.org 0xff14c
	lsls r1, r1, #2	@ 000ff14c 8900
.org 0xff14e
	adds r1, r1, r0	@ 000ff14e 0918
.org 0xff150
	ldr r1, [r1, #0]	@ 000ff150 0968
.org 0xff152
	adds r0, r2, #0	@ 000ff152 101c
.org 0xff154
	bl 0x128f80	@ 000ff154 29f014ff
.org 0xff158
	pop {r0}	@ 000ff158 01bc
.org 0xff15a
	bx r0	@ 000ff15a 0047
