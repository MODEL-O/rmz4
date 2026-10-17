@ FUN_080bfb7c  entry 0x080bfb7c  size 152
.thumb
.org 0xbfb7c
FUN_080bfb7c:
	push {r4, r5, r6, lr}	@ 000bfb7c 70b5
.org 0xbfb7e
	adds r5, r0, #0	@ 000bfb7e 051c
.org 0xbfb80
	ldr r2, [r5, #40]	@ 000bfb80 aa6a
.org 0xbfb82
	ldrb r4, [r5, #17]	@ 000bfb82 6c7c
.org 0xbfb84
	ldr r1, [pc, #92]	@ 000bfb84 1749
.org 0xbfb86
	ldrb r0, [r5, #9]	@ 000bfb86 687a
.org 0xbfb88
	lsls r0, r0, #2	@ 000bfb88 8000
.org 0xbfb8a
	adds r0, r0, r1	@ 000bfb8a 4018
.org 0xbfb8c
	movs r1, #1	@ 000bfb8c 0121
.org 0xbfb8e
	str r1, [r5, #12]	@ 000bfb8e e960
.org 0xbfb90
	ldr r0, [r0, #0]	@ 000bfb90 0068
.org 0xbfb92
	ldr r0, [r0, #4]	@ 000bfb92 4068
.org 0xbfb94
	str r0, [r5, #20]	@ 000bfb94 6861
.org 0xbfb96
	ldrb r1, [r5, #10]	@ 000bfb96 a97a
.org 0xbfb98
	movs r0, #1	@ 000bfb98 0120
.org 0xbfb9a
	movs r6, #0	@ 000bfb9a 0026
.org 0xbfb9c
	orrs r0, r1	@ 000bfb9c 0843
.org 0xbfb9e
	movs r1, #2	@ 000bfb9e 0221
.org 0xbfba0
	orrs r0, r1	@ 000bfba0 0843
.org 0xbfba2
	strb r0, [r5, #10]	@ 000bfba2 a872
.org 0xbfba4
	adds r1, r5, #0	@ 000bfba4 291c
.org 0xbfba6
	adds r1, #180	@ 000bfba6 b431
.org 0xbfba8
	adds r0, r2, #0	@ 000bfba8 101c
.org 0xbfbaa
	adds r0, #188	@ 000bfbaa bc30
.org 0xbfbac
	ldr r0, [r0, #0]	@ 000bfbac 0068
.org 0xbfbae
	str r0, [r1, #0]	@ 000bfbae 0860
.org 0xbfbb0
	adds r1, #4	@ 000bfbb0 0431
.org 0xbfbb2
	adds r2, #192	@ 000bfbb2 c032
.org 0xbfbb4
	ldr r0, [r2, #0]	@ 000bfbb4 1068
.org 0xbfbb6
	str r0, [r1, #0]	@ 000bfbb6 0860
.org 0xbfbb8
	adds r1, #4	@ 000bfbb8 0431
.org 0xbfbba
	movs r0, #128	@ 000bfbba 8020
.org 0xbfbbc
	str r0, [r1, #0]	@ 000bfbbc 0860
.org 0xbfbbe
	adds r0, r5, #0	@ 000bfbbe 281c
.org 0xbfbc0
	bl 0x1cc9c	@ 000bfbc0 5df76cf8
.org 0xbfbc4
	adds r2, r5, #0	@ 000bfbc4 2a1c
.org 0xbfbc6
	adds r2, #73	@ 000bfbc6 4932
.org 0xbfbc8
	ldrb r0, [r2, #0]	@ 000bfbc8 1078
.org 0xbfbca
	movs r1, #12	@ 000bfbca 0c21
.org 0xbfbcc
	orrs r0, r1	@ 000bfbcc 0843
.org 0xbfbce
	strb r0, [r2, #0]	@ 000bfbce 1070
.org 0xbfbd0
	adds r1, r5, #0	@ 000bfbd0 291c
.org 0xbfbd2
	adds r1, #37	@ 000bfbd2 2531
.org 0xbfbd4
	movs r0, #28	@ 000bfbd4 1c20
.org 0xbfbd6
	strb r0, [r1, #0]	@ 000bfbd6 0870
.org 0xbfbd8
	cmp r4, #0	@ 000bfbd8 002c
.org 0xbfbda
	beq.n 0xbfbe8	@ 000bfbda 05d0
.org 0xbfbdc
	ldrb r0, [r5, #10]	@ 000bfbdc a87a
.org 0xbfbde
	movs r1, #16	@ 000bfbde 1021
.org 0xbfbe0
	orrs r0, r1	@ 000bfbe0 0843
.org 0xbfbe2
	b.n 0xbfbee	@ 000bfbe2 04e0
.org 0xbfbe4
	.byte 0xf4,0x49,0x86,0x08	@ 000bfbe4 data
.org 0xbfbe8
	ldrb r1, [r5, #10]	@ 000bfbe8 a97a
.org 0xbfbea
	movs r0, #239	@ 000bfbea ef20
.org 0xbfbec
	ands r0, r1	@ 000bfbec 0840
.org 0xbfbee
	strb r0, [r5, #10]	@ 000bfbee a872
.org 0xbfbf0
	movs r1, #1	@ 000bfbf0 0121
.org 0xbfbf2
	ands r1, r4	@ 000bfbf2 2140
.org 0xbfbf4
	adds r0, r5, #0	@ 000bfbf4 281c
.org 0xbfbf6
	adds r0, #76	@ 000bfbf6 4c30
.org 0xbfbf8
	strb r1, [r0, #0]	@ 000bfbf8 0170
.org 0xbfbfa
	adds r3, r5, #0	@ 000bfbfa 2b1c
.org 0xbfbfc
	adds r3, #74	@ 000bfbfc 4a33
.org 0xbfbfe
	lsls r1, r1, #4	@ 000bfbfe 0901
.org 0xbfc00
	ldrb r2, [r3, #0]	@ 000bfc00 1a78
.org 0xbfc02
	movs r0, #17	@ 000bfc02 1120
.org 0xbfc04
	negs r0, r0	@ 000bfc04 4042
.org 0xbfc06
	ands r0, r2	@ 000bfc06 1040
.org 0xbfc08
	orrs r0, r1	@ 000bfc08 0843
.org 0xbfc0a
	strb r0, [r3, #0]	@ 000bfc0a 1870
.org 0xbfc0c
	adds r0, r5, #0	@ 000bfc0c 281c
.org 0xbfc0e
	bl 0xbfc18	@ 000bfc0e 00f003f8
.org 0xbfc12
	pop {r4, r5, r6}	@ 000bfc12 70bc
