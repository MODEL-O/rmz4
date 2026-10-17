@ FUN_080157b8  entry 0x080157b8  size 60
.thumb
.org 0x157b8
FUN_080157b8:
	push {r4, lr}	@ 000157b8 10b5
.org 0x157ba
	adds r3, r0, #0	@ 000157ba 031c
.org 0x157bc
	ldrb r4, [r3, #14]	@ 000157bc 9c7b
.org 0x157be
	cmp r4, #0	@ 000157be 002c
.org 0x157c0
	bne.n 0x157ee	@ 000157c0 15d1
.org 0x157c2
	ldr r1, [r3, #92]	@ 000157c2 d96d
.org 0x157c4
	lsrs r1, r1, #4	@ 000157c4 0909
.org 0x157c6
	lsls r1, r1, #1	@ 000157c6 4900
.org 0x157c8
	ldr r0, [pc, #40]	@ 000157c8 0a48
.org 0x157ca
	adds r1, r1, r0	@ 000157ca 0918
.org 0x157cc
	ldrh r2, [r1, #0]	@ 000157cc 0a88
.org 0x157ce
	ldr r0, [pc, #40]	@ 000157ce 0a48
.org 0x157d0
	ands r0, r2	@ 000157d0 1040
.org 0x157d2
	movs r2, #3	@ 000157d2 0322
.org 0x157d4
	orrs r0, r2	@ 000157d4 1043
.org 0x157d6
	strh r0, [r1, #0]	@ 000157d6 0880
.org 0x157d8
	movs r0, #180	@ 000157d8 b420
.org 0x157da
	lsls r0, r0, #4	@ 000157da 0001
.org 0x157dc
	str r0, [r3, #76]	@ 000157dc d864
.org 0x157de
	str r4, [r3, #80]	@ 000157de 1c65
.org 0x157e0
	movs r0, #192	@ 000157e0 c020
.org 0x157e2
	str r0, [r3, #68]	@ 000157e2 5864
.org 0x157e4
	adds r0, #64	@ 000157e4 4030
.org 0x157e6
	str r0, [r3, #72]	@ 000157e6 9864
.org 0x157e8
	ldrb r0, [r3, #14]	@ 000157e8 987b
.org 0x157ea
	adds r0, #1	@ 000157ea 0130
.org 0x157ec
	strb r0, [r3, #14]	@ 000157ec 9873
.org 0x157ee
	pop {r4}	@ 000157ee 10bc
.org 0x157f0
	pop {r0}	@ 000157f0 01bc
.org 0x157f2
	bx r0	@ 000157f2 0047
