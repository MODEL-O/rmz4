@ FUN_08017f98  entry 0x08017f98  size 110
.thumb
.org 0x17f98
FUN_08017f98:
	push {r4, r5, r6, r7, lr}	@ 00017f98 f0b5
.org 0x17f9a
	adds r7, r0, #0	@ 00017f9a 071c
.org 0x17f9c
	ldrb r4, [r7, #14]	@ 00017f9c bc7b
.org 0x17f9e
	cmp r4, #0	@ 00017f9e 002c
.org 0x17fa0
	bne.n 0x18000	@ 00017fa0 2ed1
.org 0x17fa2
	ldr r0, [r7, #92]	@ 00017fa2 f86d
.org 0x17fa4
	lsls r0, r0, #16	@ 00017fa4 0004
.org 0x17fa6
	lsrs r0, r0, #20	@ 00017fa6 000d
.org 0x17fa8
	lsls r5, r0, #1	@ 00017fa8 4500
.org 0x17faa
	ldr r3, [pc, #92]	@ 00017faa 174b
.org 0x17fac
	adds r5, r5, r3	@ 00017fac ed18
.org 0x17fae
	ldr r1, [r7, #100]	@ 00017fae 796e
.org 0x17fb0
	ldr r6, [pc, #88]	@ 00017fb0 164e
.org 0x17fb2
	adds r2, r6, #0	@ 00017fb2 321c
.org 0x17fb4
	orrs r1, r2	@ 00017fb4 1143
.org 0x17fb6
	strh r1, [r5, #0]	@ 00017fb6 2980
.org 0x17fb8
	lsls r0, r0, #2	@ 00017fb8 8000
.org 0x17fba
	adds r3, #8	@ 00017fba 0833
.org 0x17fbc
	adds r0, r0, r3	@ 00017fbc c018
.org 0x17fbe
	str r4, [r0, #0]	@ 00017fbe 0460
.org 0x17fc0
	ldr r0, [pc, #76]	@ 00017fc0 1348
.org 0x17fc2
	ldr r0, [r0, #0]	@ 00017fc2 0068
.org 0x17fc4
	ldr r2, [pc, #76]	@ 00017fc4 134a
.org 0x17fc6
	adds r0, r0, r2	@ 00017fc6 8018
.org 0x17fc8
	movs r4, #248	@ 00017fc8 f824
.org 0x17fca
	lsls r4, r4, #5	@ 00017fca 6401
.org 0x17fcc
	ands r1, r4	@ 00017fcc 2140
.org 0x17fce
	lsls r1, r1, #3	@ 00017fce c900
.org 0x17fd0
	movs r2, #192	@ 00017fd0 c022
.org 0x17fd2
	lsls r2, r2, #19	@ 00017fd2 d204
.org 0x17fd4
	adds r1, r1, r2	@ 00017fd4 8918
.org 0x17fd6
	movs r6, #128	@ 00017fd6 8026
.org 0x17fd8
	lsls r6, r6, #2	@ 00017fd8 b600
.org 0x17fda
	adds r2, r6, #0	@ 00017fda 321c
.org 0x17fdc
	bl 0x128be0	@ 00017fdc 10f100fe
.org 0x17fe0
	ldr r0, [pc, #52]	@ 00017fe0 0d48
.org 0x17fe2
	ldr r0, [r0, #0]	@ 00017fe2 0068
.org 0x17fe4
	ldr r1, [pc, #52]	@ 00017fe4 0d49
.org 0x17fe6
	adds r0, r0, r1	@ 00017fe6 4018
.org 0x17fe8
	ldrh r1, [r5, #0]	@ 00017fe8 2988
.org 0x17fea
	ands r4, r1	@ 00017fea 0c40
.org 0x17fec
	lsls r4, r4, #3	@ 00017fec e400
.org 0x17fee
	ldr r2, [pc, #48]	@ 00017fee 0c4a
.org 0x17ff0
	adds r4, r4, r2	@ 00017ff0 a418
.org 0x17ff2
	adds r1, r4, #0	@ 00017ff2 211c
.org 0x17ff4
	adds r2, r6, #0	@ 00017ff4 321c
.org 0x17ff6
	bl 0x128be0	@ 00017ff6 10f1f3fd
.org 0x17ffa
	ldrb r0, [r7, #14]	@ 00017ffa b87b
.org 0x17ffc
	adds r0, #1	@ 00017ffc 0130
.org 0x17ffe
	strb r0, [r7, #14]	@ 00017ffe b873
.org 0x18000
	pop {r4, r5, r6, r7}	@ 00018000 f0bc
.org 0x18002
	pop {r0}	@ 00018002 01bc
.org 0x18004
	bx r0	@ 00018004 0047
