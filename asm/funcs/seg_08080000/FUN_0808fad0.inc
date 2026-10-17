@ FUN_0808fad0  entry 0x0808fad0  size 34
.thumb
.org 0x8fad0
FUN_0808fad0:
	push {r4, lr}	@ 0008fad0 10b5
.org 0x8fad2
	lsls r3, r3, #25	@ 0008fad2 5b06
.org 0x8fad4
	movs r4, #255	@ 0008fad4 ff24
.org 0x8fad6
	lsls r4, r4, #24	@ 0008fad6 2406
.org 0x8fad8
	adds r3, r3, r4	@ 0008fad8 1b19
.org 0x8fada
	asrs r3, r3, #24	@ 0008fada 1b16
.org 0x8fadc
	muls r1, r3	@ 0008fadc 5943
.org 0x8fade
	str r1, [r0, #92]	@ 0008fade c165
.org 0x8fae0
	adds r1, r2, #0	@ 0008fae0 111c
.org 0x8fae2
	muls r1, r3	@ 0008fae2 5943
.org 0x8fae4
	str r1, [r0, #100]	@ 0008fae4 4166
.org 0x8fae6
	adds r0, #184	@ 0008fae6 b830
.org 0x8fae8
	movs r1, #0	@ 0008fae8 0021
.org 0x8faea
	strb r1, [r0, #0]	@ 0008faea 0170
.org 0x8faec
	pop {r4}	@ 0008faec 10bc
.org 0x8faee
	pop {r0}	@ 0008faee 01bc
.org 0x8faf0
	bx r0	@ 0008faf0 0047
