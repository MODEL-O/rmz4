@ FUN_0808ff98  entry 0x0808ff98  size 142
.thumb
.org 0x8ff98
FUN_0808ff98:
	push {r4, r5, r6, r7, lr}	@ 0008ff98 f0b5
.org 0x8ff9a
	adds r6, r0, #0	@ 0008ff9a 061c
.org 0x8ff9c
	ldr r7, [r6, #40]	@ 0008ff9c b76a
.org 0x8ff9e
	movs r0, #185	@ 0008ff9e b920
.org 0x8ffa0
	lsls r0, r0, #1	@ 0008ffa0 4000
.org 0x8ffa2
	bl 0x2b10	@ 0008ffa2 72f7b5fd
.org 0x8ffa6
	ldr r1, [pc, #128]	@ 0008ffa6 2049
.org 0x8ffa8
	ldrb r0, [r6, #9]	@ 0008ffa8 707a
.org 0x8ffaa
	lsls r0, r0, #2	@ 0008ffaa 8000
.org 0x8ffac
	adds r0, r0, r1	@ 0008ffac 4018
.org 0x8ffae
	movs r1, #1	@ 0008ffae 0121
.org 0x8ffb0
	str r1, [r6, #12]	@ 0008ffb0 f160
.org 0x8ffb2
	ldr r0, [r0, #0]	@ 0008ffb2 0068
.org 0x8ffb4
	ldr r0, [r0, #4]	@ 0008ffb4 4068
.org 0x8ffb6
	str r0, [r6, #20]	@ 0008ffb6 7061
.org 0x8ffb8
	adds r0, r6, #0	@ 0008ffb8 301c
.org 0x8ffba
	adds r0, #180	@ 0008ffba b430
.org 0x8ffbc
	ldrb r0, [r0, #0]	@ 0008ffbc 0078
.org 0x8ffbe
	movs r5, #0	@ 0008ffbe 0025
.org 0x8ffc0
	strb r0, [r6, #13]	@ 0008ffc0 7073
.org 0x8ffc2
	strb r5, [r6, #14]	@ 0008ffc2 b573
.org 0x8ffc4
	strb r5, [r6, #15]	@ 0008ffc4 f573
.org 0x8ffc6
	ldrb r1, [r6, #10]	@ 0008ffc6 b17a
.org 0x8ffc8
	movs r0, #254	@ 0008ffc8 fe20
.org 0x8ffca
	ands r0, r1	@ 0008ffca 0840
.org 0x8ffcc
	movs r1, #2	@ 0008ffcc 0221
.org 0x8ffce
	orrs r0, r1	@ 0008ffce 0843
.org 0x8ffd0
	strb r0, [r6, #10]	@ 0008ffd0 b072
.org 0x8ffd2
	adds r0, r6, #0	@ 0008ffd2 301c
.org 0x8ffd4
	bl 0x1cc9c	@ 0008ffd4 8cf762fe
.org 0x8ffd8
	ldrb r1, [r6, #10]	@ 0008ffd8 b17a
.org 0x8ffda
	movs r0, #4	@ 0008ffda 0420
.org 0x8ffdc
	orrs r0, r1	@ 0008ffdc 0843
.org 0x8ffde
	strb r0, [r6, #10]	@ 0008ffde b072
.org 0x8ffe0
	adds r4, r6, #0	@ 0008ffe0 341c
.org 0x8ffe2
	adds r4, #116	@ 0008ffe2 7434
.org 0x8ffe4
	ldr r1, [pc, #68]	@ 0008ffe4 1149
.org 0x8ffe6
	adds r2, r6, #0	@ 0008ffe6 321c
.org 0x8ffe8
	adds r2, #84	@ 0008ffe8 5432
.org 0x8ffea
	adds r0, r4, #0	@ 0008ffea 201c
.org 0x8ffec
	movs r3, #64	@ 0008ffec 4023
.org 0x8ffee
	bl 0x5760	@ 0008ffee 75f7b7fb
.org 0x8fff2
	str r6, [r4, #44]	@ 0008fff2 e662
.org 0x8fff4
	str r5, [r4, #36]	@ 0008fff4 6562
.org 0x8fff6
	movs r4, #0	@ 0008fff6 0024
.org 0x8fff8
	lsls r3, r4, #24	@ 0008fff8 2306
.org 0x8fffa
	lsrs r3, r3, #24	@ 0008fffa 1b0e
.org 0x8fffc
	adds r0, r6, #0	@ 0008fffc 301c
.org 0x8fffe
	adds r1, r6, #0	@ 0008fffe 311c
.org 0x90000
	adds r1, #84	@ 00090000 5431
.org 0x90002
	movs r2, #1	@ 00090002 0122
.org 0x90004
	bl 0x8ff04	@ 00090004 fff77eff
.org 0x90008
	adds r4, #1	@ 00090008 0134
.org 0x9000a
	cmp r4, #2	@ 0009000a 022c
.org 0x9000c
	ble.n 0x8fff8	@ 0009000c f4dd
.org 0x9000e
	ldrb r0, [r6, #11]	@ 0009000e f07a
.org 0x90010
	movs r1, #16	@ 00090010 1021
.org 0x90012
	orrs r1, r0	@ 00090012 0143
.org 0x90014
	strb r1, [r6, #11]	@ 00090014 f172
.org 0x90016
	ldrb r0, [r7, #28]	@ 00090016 387f
.org 0x90018
	strb r0, [r6, #29]	@ 00090018 7077
.org 0x9001a
	adds r0, r6, #0	@ 0009001a 301c
.org 0x9001c
	bl 0x900b4	@ 0009001c 00f04af8
.org 0x90020
	pop {r4, r5, r6, r7}	@ 00090020 f0bc
.org 0x90022
	pop {r0}	@ 00090022 01bc
.org 0x90024
	bx r0	@ 00090024 0047
