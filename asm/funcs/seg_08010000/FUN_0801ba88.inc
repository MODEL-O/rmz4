@ FUN_0801ba88  entry 0x0801ba88  size 120
.thumb
.org 0x1ba88
FUN_0801ba88:
	push {r4, r5, r6, r7, lr}	@ 0001ba88 f0b5
.org 0x1ba8a
	mov r7, r8	@ 0001ba8a 4746
.org 0x1ba8c
	push {r7}	@ 0001ba8c 80b4
.org 0x1ba8e
	sub sp, #12	@ 0001ba8e 83b0
.org 0x1ba90
	adds r6, r0, #0	@ 0001ba90 061c
.org 0x1ba92
	ldrb r7, [r6, #14]	@ 0001ba92 b77b
.org 0x1ba94
	cmp r7, #0	@ 0001ba94 002f
.org 0x1ba96
	bne.n 0x1baee	@ 0001ba96 2ad1
.org 0x1ba98
	ldr r0, [r6, #92]	@ 0001ba98 f06d
.org 0x1ba9a
	lsls r0, r0, #16	@ 0001ba9a 0004
.org 0x1ba9c
	lsrs r1, r0, #16	@ 0001ba9c 010c
.org 0x1ba9e
	mov r8, r1	@ 0001ba9e 8846
.org 0x1baa0
	lsrs r0, r0, #20	@ 0001baa0 000d
.org 0x1baa2
	lsls r3, r0, #1	@ 0001baa2 4300
.org 0x1baa4
	ldr r4, [pc, #88]	@ 0001baa4 164c
.org 0x1baa6
	adds r3, r3, r4	@ 0001baa6 1b19
.org 0x1baa8
	ldr r1, [r6, #100]	@ 0001baa8 716e
.org 0x1baaa
	ldr r5, [pc, #88]	@ 0001baaa 164d
.org 0x1baac
	adds r2, r5, #0	@ 0001baac 2a1c
.org 0x1baae
	orrs r1, r2	@ 0001baae 1143
.org 0x1bab0
	strh r1, [r3, #0]	@ 0001bab0 1980
.org 0x1bab2
	lsls r0, r0, #2	@ 0001bab2 8000
.org 0x1bab4
	adds r4, #8	@ 0001bab4 0834
.org 0x1bab6
	adds r0, r0, r4	@ 0001bab6 0019
.org 0x1bab8
	str r7, [r0, #0]	@ 0001bab8 0760
.org 0x1baba
	movs r0, #248	@ 0001baba f820
.org 0x1babc
	lsls r0, r0, #5	@ 0001babc 4001
.org 0x1babe
	ands r1, r0	@ 0001babe 0140
.org 0x1bac0
	lsls r1, r1, #3	@ 0001bac0 c900
.org 0x1bac2
	movs r0, #192	@ 0001bac2 c020
.org 0x1bac4
	lsls r0, r0, #19	@ 0001bac4 c004
.org 0x1bac6
	adds r1, r1, r0	@ 0001bac6 0918
.org 0x1bac8
	str r7, [sp, #4]	@ 0001bac8 0197
.org 0x1baca
	ldr r2, [pc, #60]	@ 0001baca 0f4a
.org 0x1bacc
	add r0, sp, #4	@ 0001bacc 01a8
.org 0x1bace
	bl 0x128be0	@ 0001bace 0df187f8
.org 0x1bad2
	mov r0, r8	@ 0001bad2 4046
.org 0x1bad4
	lsls r5, r0, #24	@ 0001bad4 0506
.org 0x1bad6
	lsrs r5, r5, #24	@ 0001bad6 2d0e
.org 0x1bad8
	ldr r1, [pc, #48]	@ 0001bad8 0c49
.org 0x1bada
	str r7, [sp, #0]	@ 0001bada 0097
.org 0x1badc
	adds r0, r5, #0	@ 0001badc 281c
.org 0x1bade
	movs r2, #99	@ 0001bade 6322
.org 0x1bae0
	movs r3, #0	@ 0001bae0 0023
.org 0x1bae2
	bl 0x2734	@ 0001bae2 e6f727fe
.org 0x1bae6
	strh r7, [r6, #18]	@ 0001bae6 7782
.org 0x1bae8
	ldrb r0, [r6, #14]	@ 0001bae8 b07b
.org 0x1baea
	adds r0, #1	@ 0001baea 0130
.org 0x1baec
	strb r0, [r6, #14]	@ 0001baec b073
.org 0x1baee
	ldrh r0, [r6, #18]	@ 0001baee 708a
.org 0x1baf0
	subs r0, #1	@ 0001baf0 0138
.org 0x1baf2
	strh r0, [r6, #18]	@ 0001baf2 7082
.org 0x1baf4
	add sp, #12	@ 0001baf4 03b0
.org 0x1baf6
	pop {r3}	@ 0001baf6 08bc
.org 0x1baf8
	mov r8, r3	@ 0001baf8 9846
.org 0x1bafa
	pop {r4, r5, r6, r7}	@ 0001bafa f0bc
.org 0x1bafc
	pop {r0}	@ 0001bafc 01bc
.org 0x1bafe
	bx r0	@ 0001bafe 0047
