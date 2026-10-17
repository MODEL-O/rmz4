@ FUN_080156b4  entry 0x080156b4  size 60
.thumb
.org 0x156b4
FUN_080156b4:
	push {r4, lr}	@ 000156b4 10b5
.org 0x156b6
	adds r3, r0, #0	@ 000156b6 031c
.org 0x156b8
	ldrb r4, [r3, #14]	@ 000156b8 9c7b
.org 0x156ba
	cmp r4, #0	@ 000156ba 002c
.org 0x156bc
	bne.n 0x156ea	@ 000156bc 15d1
.org 0x156be
	ldr r1, [r3, #92]	@ 000156be d96d
.org 0x156c0
	lsrs r1, r1, #4	@ 000156c0 0909
.org 0x156c2
	lsls r1, r1, #1	@ 000156c2 4900
.org 0x156c4
	ldr r0, [pc, #40]	@ 000156c4 0a48
.org 0x156c6
	adds r1, r1, r0	@ 000156c6 0918
.org 0x156c8
	ldrh r2, [r1, #0]	@ 000156c8 0a88
.org 0x156ca
	ldr r0, [pc, #40]	@ 000156ca 0a48
.org 0x156cc
	ands r0, r2	@ 000156cc 1040
.org 0x156ce
	movs r2, #3	@ 000156ce 0322
.org 0x156d0
	orrs r0, r2	@ 000156d0 1043
.org 0x156d2
	strh r0, [r1, #0]	@ 000156d2 0880
.org 0x156d4
	movs r0, #195	@ 000156d4 c320
.org 0x156d6
	lsls r0, r0, #4	@ 000156d6 0001
.org 0x156d8
	str r0, [r3, #76]	@ 000156d8 d864
.org 0x156da
	str r4, [r3, #80]	@ 000156da 1c65
.org 0x156dc
	movs r0, #128	@ 000156dc 8020
.org 0x156de
	str r0, [r3, #68]	@ 000156de 5864
.org 0x156e0
	adds r0, #128	@ 000156e0 8030
.org 0x156e2
	str r0, [r3, #72]	@ 000156e2 9864
.org 0x156e4
	ldrb r0, [r3, #14]	@ 000156e4 987b
.org 0x156e6
	adds r0, #1	@ 000156e6 0130
.org 0x156e8
	strb r0, [r3, #14]	@ 000156e8 9873
.org 0x156ea
	pop {r4}	@ 000156ea 10bc
.org 0x156ec
	pop {r0}	@ 000156ec 01bc
.org 0x156ee
	bx r0	@ 000156ee 0047
