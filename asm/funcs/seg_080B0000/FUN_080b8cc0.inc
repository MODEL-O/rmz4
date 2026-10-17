@ FUN_080b8cc0  entry 0x080b8cc0  size 100
.thumb
.org 0xb8cc0
FUN_080b8cc0:
	push {r4, r5, lr}	@ 000b8cc0 30b5
.org 0xb8cc2
	adds r3, r0, #0	@ 000b8cc2 031c
.org 0xb8cc4
	ldr r2, [r3, #40]	@ 000b8cc4 9a6a
.org 0xb8cc6
	ldr r0, [pc, #92]	@ 000b8cc6 1748
.org 0xb8cc8
	movs r4, #0	@ 000b8cc8 0024
.org 0xb8cca
	strh r4, [r0, #0]	@ 000b8cca 0480
.org 0xb8ccc
	movs r0, #69	@ 000b8ccc 4520
.org 0xb8cce
	adds r0, r0, r3	@ 000b8cce c018
.org 0xb8cd0
	mov ip, r0	@ 000b8cd0 8446
.org 0xb8cd2
	ldrb r1, [r0, #0]	@ 000b8cd2 0178
.org 0xb8cd4
	movs r0, #13	@ 000b8cd4 0d20
.org 0xb8cd6
	negs r0, r0	@ 000b8cd6 4042
.org 0xb8cd8
	ands r0, r1	@ 000b8cd8 0840
.org 0xb8cda
	mov r1, ip	@ 000b8cda 6146
.org 0xb8cdc
	strb r0, [r1, #0]	@ 000b8cdc 0870
.org 0xb8cde
	adds r2, #204	@ 000b8cde cc32
.org 0xb8ce0
	ldrh r1, [r2, #0]	@ 000b8ce0 1188
.org 0xb8ce2
	movs r5, #0	@ 000b8ce2 0025
.org 0xb8ce4
	ldrsh r0, [r2, r5]	@ 000b8ce4 505f
.org 0xb8ce6
	cmp r0, #0	@ 000b8ce6 0028
.org 0xb8ce8
	beq.n 0xb8cee	@ 000b8ce8 01d0
.org 0xb8cea
	subs r0, r1, #1	@ 000b8cea 481e
.org 0xb8cec
	strh r0, [r2, #0]	@ 000b8cec 1080
.org 0xb8cee
	adds r0, r3, #0	@ 000b8cee 181c
.org 0xb8cf0
	adds r0, #140	@ 000b8cf0 8c30
.org 0xb8cf2
	str r4, [r0, #0]	@ 000b8cf2 0460
.org 0xb8cf4
	adds r0, #4	@ 000b8cf4 0430
.org 0xb8cf6
	str r4, [r0, #0]	@ 000b8cf6 0460
.org 0xb8cf8
	adds r1, r3, #0	@ 000b8cf8 191c
.org 0xb8cfa
	adds r1, #148	@ 000b8cfa 9431
.org 0xb8cfc
	movs r0, #0	@ 000b8cfc 0020
.org 0xb8cfe
	strb r0, [r1, #0]	@ 000b8cfe 0870
.org 0xb8d00
	ldrb r1, [r3, #10]	@ 000b8d00 997a
.org 0xb8d02
	movs r0, #251	@ 000b8d02 fb20
.org 0xb8d04
	ands r0, r1	@ 000b8d04 0840
.org 0xb8d06
	movs r1, #254	@ 000b8d06 fe21
.org 0xb8d08
	ands r0, r1	@ 000b8d08 0840
.org 0xb8d0a
	strb r0, [r3, #10]	@ 000b8d0a 9872
.org 0xb8d0c
	ldr r1, [pc, #24]	@ 000b8d0c 0649
.org 0xb8d0e
	ldrb r0, [r3, #9]	@ 000b8d0e 587a
.org 0xb8d10
	lsls r0, r0, #2	@ 000b8d10 8000
.org 0xb8d12
	adds r0, r0, r1	@ 000b8d12 4018
.org 0xb8d14
	movs r1, #4	@ 000b8d14 0421
.org 0xb8d16
	str r1, [r3, #12]	@ 000b8d16 d960
.org 0xb8d18
	ldr r0, [r0, #0]	@ 000b8d18 0068
.org 0xb8d1a
	ldr r0, [r0, #16]	@ 000b8d1a 0069
.org 0xb8d1c
	str r0, [r3, #20]	@ 000b8d1c 5861
.org 0xb8d1e
	pop {r4, r5}	@ 000b8d1e 30bc
.org 0xb8d20
	pop {r0}	@ 000b8d20 01bc
.org 0xb8d22
	bx r0	@ 000b8d22 0047
